%{
    #include<stdio.h>
	#include<string.h>
	#include<stdlib.h>
	#include<math.h>

	#define PI 3.14159265

	extern FILE *yyin;
	extern FILE *yyout;

	int checked[26],flag=0,m_flag=0;
	float arr[1000];
%}

%union { 
	char *ch;
	char c;
  int itype;
  double dtype;   
}

%token <dtype> NUM
%token <itype> VAR
%token <itype> FUN_NAME
%token <dtype> FLT_NUM

%type <dtype> TERM
%type <dtype> FACTOR
%type <dtype> OPTN
%type <dtype> EXPRESSION
%type <dtype> STATEMENT
%type <dtype> LOOP
%type <dtype> SWITCH_CASE
%type <dtype> multiple_case
%type <dtype> IF_ELSE
%type <dtype> stmt

%token MAIN_FUNC INT FLOAT STRING SCANF PRINTF 
%token ADD SUB MUL DIV EXP MOD INC DEC SQR ROOT CUBE SINE COSINE TANGENT LN LOG10
%token ASSIGN LESS_THAN  GREATER_THAN LESS_OR_EQUAL  GREATER_OR_EQUAL NOT_EQUAL EQUAL
%token BIT_AND BIT_OR BIT_XOR BIT_NOT
%token ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN
%token COMMA SEMICOLON COLON L_round_bracket R_round_bracket L_curly_brackets R_curly_brackets   L_square_brackets  R_square_brackets
%token FACTORIAL LEAP_YEAR PRIME DIVISORS EVEN_ODD SUMMATION GCD LCM MAX MIN FUNC SWAP
%token  IF ELSE FOR IN LIMIT CONTINUE WHILE SWITCH CASE DEFAULT BREAK DO DO_WHILE

%nonassoc IFX
%nonassoc ELSE
%nonassoc SWITCH
%nonassoc CASE
%nonassoc DEFAULT

%left LESS_THAN  GREATER_THAN  LESS_OR_EQUAL  GREATER_OR_EQUAL
%left ADD SUB
%left MUL DIV
%left ROOT SQR CUBE
%left SINE COSINE TANGENT

%%
program:
    | MAIN_FUNC L_curly_brackets STATEMENTS R_curly_brackets { fprintf(yyout,"Execution Done!\n"); }
    ; 
STATEMENTS:
    | STATEMENTS STATEMENT 

	| STATEMENTS BUILT_IN_FUNCTIONS
	
	| STATEMENTS LOOP
	
	| STATEMENTS SWITCH_CASE
    
	| STATEMENTS IF_ELSE    { 
	                            if($2) 
								{  
								    fprintf(yyout,"Value of Expression for IF_ELSE in Valid Condition: %.2f\n",$2); 
								}
								else
								{
								   fprintf(yyout,"Condition false in IF_ELSE\n");
								}
						    }

    | STATEMENTS DECLARATION
    ;

STATEMENT:
     EXPRESSION SEMICOLON       { 
                                $$ = $1;	
                                fprintf(yyout,"Value of expression : %.2f\n",$1);
                            }
    | VAR ASSIGN EXPRESSION SEMICOLON
                  	        {															
                                if(checked[$1] == 1)
                                {
                                    arr[$1] = $3;
									$$ = arr[$1];
                                    fprintf(yyout,"%c = %.2f\n",$1+97,$3);
                                }
								else
                                  fprintf(yyout,"%c not declared\n",$1+97);
						    }

    | SCANF VAR SEMICOLON         {
                                printf("User Input for %c\n",$2+97);
                                if(checked[$2] == 1) 
                                { 
                                    fprintf(yyout,"Value taken from user for %c\n",$2+97);
                                    float a;
                                    scanf("%f",&a);
                                    arr[$2] = a;
								}
								else
                                    fprintf(yyout,"%c not declared\n",$2+97);
                            }

    | PRINTF L_round_bracket VAR R_round_bracket SEMICOLON 
	                        { 
                                if(checked[$3] == 1) 
                                    fprintf(yyout,"Value of %c is %.2f\n",$3+97,arr[$3]);
								else
                                    fprintf(yyout,"%c not declared\n",$3+97);

                            }
	
	| BREAK 		{ break; }
	;

BUILT_IN_FUNCTIONS:
	PRIME stmt SEMICOLON    {
	                            int p = (int)$2;
                                int i, cnt=0;
                                for(i=2;i<p;i++)
                                {
                                    if(p%i == 0)
                                    {
                                        cnt=cnt+1;
                                        break;
                                    }
                                }
                                if(cnt==0 && $2 != 1)
                                    fprintf(yyout,"Yes! %d prime\n",p);
                                else
                                    fprintf(yyout,"No! %d not prime\n",p);
                            } 
							
    | DIVISORS stmt SEMICOLON    {
                                int j;
								int num = (int)$2;
                                fprintf(yyout,"All the divisors of %d are -> ",num);
                                for(j=1;j<=num;j++)
                                {
                                    if(num%j==0)
                                       fprintf(yyout,"%d ",j);
							    }
                                fprintf(yyout,"\n");
                            }

    | SUMMATION stmt SEMICOLON   {
	                            int n = (int)$2;
								int sum = n*(n+1)/2;
								fprintf(yyout,"Summation of 1st %d numbers is %d\n",n,sum);
	                        }

 	| LEAP_YEAR stmt SEMICOLON   {
	                            int lp = (int)$2;
                                if((lp%400 == 0) || ((lp%4 == 0) && (lp%100 != 0)) )
                                    fprintf(yyout,"%d leap year\n",lp);
                                else
                                    fprintf(yyout,"%d not leap year\n",lp);
                            } 

    | EVEN_ODD stmt SEMICOLON    {
	                            int num = (int)$2;
	                            if(num %2 == 0)
								    fprintf(yyout,"%d Even Number\n",num);
								else
								    fprintf(yyout,"%d Odd Number\n",num);
	                        }

	| GCD L_round_bracket stmt COMMA stmt R_round_bracket SEMICOLON    { int n1=(int)$3;
									      int n2=(int)$5;
									 	  int gcd;
	                                            for(int i=1; i<=n1 && i<=n2; i++)
												{
												  if(n1%i==0 && n2%i==0)
												  {
												     gcd=i;												
												 }
												}
											fprintf(yyout,"Gcd of %d and %d = %d\n", (int)$3, (int)$5, gcd);
										}
	
	 | LCM L_round_bracket stmt COMMA stmt R_round_bracket SEMICOLON   { int n1=(int)$3;
										  int n2=(int)$5;
										  int gcd;
    									 	for(int i=1; i<=n1 && i<=n2; i++)
												{
												  if(n1%i==0 && n2%i==0)
												  {
												     gcd=i;												
												 }
												}
										    int lcm =(n1 * n2) / gcd;
        						   		 fprintf(yyout,"LCM of %d and %d is %d \n", (int)$3, (int)$5, lcm);    										
								        }   

	| MAX L_round_bracket stmt COMMA stmt R_round_bracket SEMICOLON {
										int a=(int)$3;
										int b=(int)$5;

    									if(a > b)
										{
       									    fprintf(yyout,"%d is Largest\n", a);          
										} 
										else if (b > a)
										{ 
											fprintf(yyout,"%d is Largest\n", b);  
   									    } 
										else 
										{
 											fprintf(yyout,"%d and %d Both are Equal\n", a, b);
  										}
									  }

	| MIN L_round_bracket stmt COMMA stmt R_round_bracket SEMICOLON {
										int a=(int)$3;
										int b=(int)$5;

    									if(a < b)
										{
       									    fprintf(yyout,"%d is Smallest\n", a);          
										} 
										else if (b < a)
										{ 
											fprintf(yyout,"%d is Smallest\n", b);  
   									    } 
										else 
										{
 											fprintf(yyout,"%d and %d Both are Equal\n", a, b);
  										}
									  }	

	| SWAP L_round_bracket stmt COMMA stmt R_round_bracket SEMICOLON {
												int x=(int)$3;
												int y=(int)$5;
												fprintf(yyout,"\nBefore Swapping: x = %d, y = %d", x, y);
    
    											int temp = x;
   												 x = y;
   												 y = temp;
 
    											fprintf(yyout,"\nAfter Swapping: x = %d, y = %d", x, y);

	}

	| FUNC FUN_NAME stmt L_curly_brackets STATEMENTS R_curly_brackets 
	{ 
		fprintf(yyout,"User Define Function Found!");
	}
	
    ;

LOOP:
      FOR VAR IN LIMIT L_round_bracket NUM COMMA NUM COMMA NUM R_round_bracket COLON stmt SEMICOLON
	                        {
							    if(checked[$2] == 1)
                                {
								    fprintf(yyout,"For loop Found\n");
								    if($6 <= $8)
                                    {
									    for(arr[$2] = $6; arr[$2] <= $8; arr[$2] += $10)
                                   fprintf(yyout,"Value in for loop %.2f\n",$13);
									}
									else
									{
									    for(arr[$2] = $6; arr[$2] > $8; arr[$2] -= $10)
                                            fprintf(yyout,"Value in for loop: %.2f\n",$13);
									}
                                }
								else
                                  fprintf(yyout,"%c not declared\n",$2+97);	
							}


	| WHILE VAR LESS_OR_EQUAL NUM COMMA NUM COLON stmt SEMICOLON
                            {
							    float a = arr[$2];
								float b = $4;
								int inc = (int)$6;
								$$ = $8;
								if((checked[$2] == 1) && (a <= b))
								{
								    fprintf(yyout,"While loop found & it works properly!\n");
                                    while(a <= b)
                                    {
                                        fprintf(yyout,"Value in while loop: %.2f\n",$$);
                                        a = a+inc;
									    if(a > b) break;
                                    }
								    arr[$2] = a;
								}
								else
								    fprintf(yyout,"While loop found but either condition false or variable undeclared!\n");
                            }

	| WHILE VAR GREATER_OR_EQUAL NUM COMMA NUM COLON stmt SEMICOLON
                            {
							    float a = arr[$2];
								float b = $4;
								int dec = (int)$6;
								$$ = $8;
								if((checked[$2] == 1) && (a >= b))
								{
								    fprintf(yyout,"While loop found & it works properly!\n");
                                    while(a >= b)
                                    {
                                        fprintf(yyout,"Value in while loop: %.2f\n",$$);
                                        a = a-dec;
									    if(a < b) 
										break;
                                    }
								    arr[$2] = a;
								}
								else
								    fprintf(yyout,"While loop found but either condition false or variable undeclared!\n");
                            } 

	| DO L_curly_brackets stmt SEMICOLON R_curly_brackets DO_WHILE NUM GREATER_OR_EQUAL NUM SEMICOLON 
	{
		fprintf(yyout,"Do while loop Found!.\n");
		int p= (int)$9;
		//int dec= (int)$10;
		do
		{
			$$ = $3;
			p = p-1;
			fprintf(yyout,"Value in do while loop: %.2f \n", $$);
		}
		
		while (p >= (int)$9);
		
	}
    ;

SWITCH_CASE:
     SWITCH L_round_bracket VAR R_round_bracket L_curly_brackets multiple_case DEFAULT COLON stmt SEMICOLON R_curly_brackets
	                        {
							    if(checked[$3] == 1)
								{    
									if(m_flag == 1)
									   fprintf(yyout,"Multiple case switch statement found!\n");
									else if(m_flag == 0)
									   fprintf(yyout,"Single case switch statement found!\n");
								}
						    }
	;

multiple_case:
    multiple_case CASE NUM COLON stmt SEMICOLON { m_flag = 1; }

    | CASE NUM COLON stmt SEMICOLON             { m_flag = 0; }
    ;

IF_ELSE:
    IF EXPRESSION L_curly_brackets stmt SEMICOLON R_curly_brackets
	                        {
								if($2) 
								{
								    $$ = $4;
								}
								else
								{
								    $$ = 0;
								}
							}

    | IF EXPRESSION L_curly_brackets stmt SEMICOLON R_curly_brackets ELSE L_curly_brackets stmt SEMICOLON R_curly_brackets 
	                        {
								if($2)
								{
									$$ = $4;
							    }
							    else
							    {
									$$ = $9;
								}
							}

    | IF EXPRESSION L_curly_brackets IF_ELSE R_curly_brackets ELSE L_curly_brackets IF_ELSE R_curly_brackets 
                            {
                                if($2) { $$ = $4; }
                                else   { $$ = $8; }
                            }   
    ;
stmt:

    EXPRESSION  { $$ = $1; }
	;

DECLARATION:
    TYPE VARIABLE SEMICOLON  { if(flag!=0) 
	                        fprintf(yyout,"Variable declared\n");
						}
	;

TYPE:
    FLOAT
	| INT
	| STRING
	;

VARIABLE:
    VARIABLE COMMA VAR   {
	                        if(checked[$3] == 1)
                            {
							    fprintf(yyout,"%c already declared\n",$3+97);
								flag =0;
								return 0;
							}
                            else
							{   checked[$3] = 1;
							    flag=1;
							}
                        }

    | VAR	            {
                            if(checked[$1] == 1)
                            {
							    fprintf(yyout,"%c already declared\n",$1+97);
								flag = 0;
								return 0;
							}
                            else
							{
							    checked[$1] = 1;
								flag = 1;
							}
                        }								
	;

EXPRESSION:
      EXPRESSION ADD TERM { $$ = $1 + $3; }

    | EXPRESSION SUB TERM { $$ = $1 - $3; }
	
	| TERM                { $$ = $1; }
	;

TERM:
     TERM MUL FACTOR      { $$ = $1 * $3; }

    | TERM DIV FACTOR     {
                             if($3) 
                                $$ = $1 / $3;
                             else 
                             { 
                                $$ = 0; 
                                fprintf(yyout,"Division by zero\n"); 
                             }
                          }

    | FACTOR              { $$ = $1; }

	;

FACTOR:	
      OPTN EXP FACTOR    { $$ = powl($1,$3); }

	| OPTN LESS_THAN FACTOR         { $$ = $1 < $3; }

    | OPTN GREATER_THAN FACTOR         { $$ = $1 > $3; }

    | OPTN LESS_OR_EQUAL FACTOR         { $$ = $1 <= $3; }

    | OPTN GREATER_OR_EQUAL FACTOR         { $$ = $1 >= $3; }

	| OPTN NOT_EQUAL FACTOR         { $$ = $1 != $3; }								  

	| OPTN EQUAL FACTOR         { $$ = $1 == $3; }

	| OPTN MOD FACTOR        { $$ = (int)$1 % (int)$3; }



	| OPTN INC 			  {  $$ = $1+1; }

	| OPTN DEC 			  { $$ = $1-1; }

	
	| OPTN BIT_AND FACTOR { $$ = (int)$1 & (int)$3; }

	| OPTN BIT_OR FACTOR { $$ = (int)$1 | (int)$3; }

	| OPTN BIT_XOR FACTOR { $$ = (int)$1 ^ (int)$3; }

	| BIT_NOT FACTOR { $$ =  ~ (int)$2; }


	
	| SQR OPTN               { $$ = $2*$2; }

	| CUBE OPTN              { $$ = $2*$2*$2; }

    | ROOT OPTN               { $$ = sqrt($2); }



	| SINE OPTN              { 
	                         double x = $2;
	                         double val = PI / 180;
                             double res = sin(x*val);
							 $$ = res;
						  }

	| COSINE OPTN             { 
	                         double x = $2;
							 double val = PI / 180;
                             double res = cos(x*val);
							 $$ = res;
						  }

	| TANGENT OPTN           { 
	                         double x = $2;
	                         double val = PI / 180;
                             double res = tan(x*val);
							 $$ = res;
						  }

	| LN OPTN                { $$ =log($2); }

	| LOG10 OPTN             { $$=(log($2*1.0)/log(10.0));}

	| FACTORIAL OPTN         {
                               int i,res = 1;
                               for(i=1;i<=$2;i++)
                                  {
									res *= i;
								  }
                               $$ = res;
                          }

    | OPTN                   { $$ = $1; }
	;

OPTN:  
    NUM                   { $$ = $1; }

    | VAR                 { 
                               if(checked[$1] == 1) 
                                  $$ = arr[$1];
						  }

	 | FUN_NAME               { 
                               if(checked[$1] == 1) 
                                  $$ = arr[$1];
						  }


    | L_round_bracket EXPRESSION R_round_bracket { $$ = $2; }
    ;	
%%

int yywrap()
{
    return 1;
}
int yyerror(char *s) 
{
	fprintf(yyout,"%s\n",s);
	return(0);
}