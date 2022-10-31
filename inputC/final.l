adds     "#include<stdio.h>"|"#include<bits/stdc++.h>"
begin    "main()"

addition        [+]
subtraction     [-]
multiplication  [*]
division        [/]
equal           "==" 
assign          [=] 
greater         [>]
greaterOrEqual   ">="
lesser          [<]
lesserOrEqual    "<="
exponential     "pow"

increment       "++" 
decrement       "--" 
sum_assign      "+=" 
sub_assign      "-=" 
mul_assign      "*=" 
div_assign      "/=" 

paren1  [()]
paren2  [{}]
paren3  [[]]


and   "&&" 
or    "||" 
not   "!"    

intg      "int"
dbl       "double"
charctr   "char"
str       "string"
flt       "float"
tf        "bool"
cnst      "constant"

halt     "break"
carryOn  "continue"
ret  "return"
end  "return 0"
new  "\n"
def  "define"

dig   [0-9]
let   [a-zA-Z]


intg_sign     "%d"
flt_sign       "%f"

input       "&"{let}+{dig}*
for_loop       ("for")("(")
while_loop      ("while")("(")
repeat_loop      ("do while")("(")

if_con      "if"
else_con    "else"
elseif_con  "else if"
switching   "switch"
set         "default"
switch_case "case"

zero   "void"
limit  "size"

mod    "%" 
NotEqual  "!="  
arr       {let}+("["){dig}+("]")
%{
	

%}
%%
{adds}                              printf("%s is a header File\n",yytext);
{begin}                             printf("%s is a main Function\n",yytext);

{addition}                          printf("%s is Addition\n",yytext);
{subtraction}                       printf("%s is Substraction\n",yytext);
{multiplication}                    printf("%s is Multiplication\n",yytext);
{division}                          printf("%s is Division\n",yytext);
{equal}                             printf("%s is Equal Opetator\n",yytext); 
{assign}                            printf("%s is Assignment Opetator\n",yytext);
{greater}                           printf("%s is Greater Than Opetator\n",yytext);
{greaterOrEqual}                    printf("%s is Less Than or Equal Opetator\n",yytext);
{lesser}                            printf("%s is Less Than  Opetator\n",yytext);
{lesserOrEqual}                     printf("%s is Less Than or Equal Opetator\n",yytext);
{exponential}                       printf("%s is exponential Opetator\n",yytext);
{increment}                         printf("%s is Increment Opetator\n",yytext);
{decrement}                         printf("%s is Decrement Opetator\n",yytext);
{sum_assign}                        printf("%s is Summation and Assignment Opetator\n",yytext);
{sub_assign}                        printf("%s is Substraction and Assignment Opetator\n",yytext);
{mul_assign}                        printf("%s is Multiplication and Assignment Opetator\n",yytext);
{div_assign}                        printf("%s is Division and Assignment Opetator\n",yytext);

{and}                        printf("%s is Logical  And  Opetator\n",yytext);
{or}                         printf("%s is Logical Or Opetator\n",yytext);
{not}                        printf("%s is Logical Not Opetator\n",yytext);

{intg}                       printf("%s is a Integer\n",yytext);
{dbl}                        printf("%s is a Double\n",yytext);
{charctr}                    printf("%s is a Character\n",yytext);
{str}                        printf("%s is a String\n",yytext);
{flt}                        printf("%s is a float\n",yytext);
{tf}                         printf("%s is boolean\n",yytext);
{cnst}                       printf("%s is constant\n",yytext);


{halt}                       printf("%s is a break Statement\n",yytext);
{carryOn}                    printf("%s is a continue Statement\n",yytext);
{ret}                        printf("%s is Return a Value\n",yytext);
{end}                        printf("%s Returns From The Program\n",yytext);
{new}                        printf("It's a newline\n");
{def}                        printf("%s is a definition\n");

{dig}+                       printf("%s is a Positive digit\n",yytext);

{input}                      printf("%s is an input Specifier\n",yytext);
{mod}                        printf("%s is a Modulation Opetator\n",yytext);
{NotEqual}                   printf("%s is a NotEqual Opetator\n",yytext);



{intg_sign}                  printf("%s is a Integer Identifier\n",yytext);
{flt_sign}                   printf("%s is a Floating Identifier\n",yytext);


{arr}                        printf("%s Is an array\n",yytext);

{for_loop}                   printf("%s is a For Loop\n",yytext);
{while_loop}                 printf("%s is a While Loop\n",yytext); 
{repeat_loop}                printf("%s is a Do while Loop\n",yytext); 

 
{if_con}                    printf("%s is if Condition\n",yytext); 
{else_con}                  printf("%s is else Condition\n",yytext); 
{elseif_con}                printf("%s is a else if Condition\n",yytext); 
{switching}                 printf("%s is Switch Case\n",yytext); 
{set}                       printf("%s is default case of switch Case\n",yytext); 
{switch_case}               printf("%s refers differnt case of switch condition\n",yytext); 


("{")                      printf("%s is open braces\n",yytext);
("}")                      printf("%s is close braces\n",yytext);

("(")                      printf("%s is open parentheses\n",yytext);
(")")                      printf("%s is close parentheses\n",yytext);

("[")                      printf("%s is open braket\n",yytext);
("]")                      printf("%s is close braket\n",yytext);

"scanf"{paren1}            printf("%s is Scanf Function\n",yytext);
"printf"{paren1}           printf("%s is a Print Function\n",yytext);
{let}+{dig}*               printf("%s is a Variable\n",yytext);

[-]{dig}+                  printf("%s is a Negative digit\n",yytext);


%%
int yywrap()
{
	return 1;
}
int main()
{
    yyin = freopen( "input.txt", "r",stdin);
	yyout = freopen("output.txt", "w",stdout);
	yylex();
	fclose(yyin);
	fclose(yyout);
	
}