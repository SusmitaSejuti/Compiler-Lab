%{
    #include<stdio.h>
	#include<string.h>
	#include<stdlib.h>
	#include<math.h>
	#include "OneZeroOne.tab.h" 
	extern FILE *yyin;
	extern FILE *yyout;
%}

header  "#include<compiler.h>"
digit  [0-9]
id     [a-z]
let    [A-Z]
main   "main()"


%%


{header}     { fprintf(yyout,"This is a header file\n"); }
{main}       { return MAIN_FUNC; }

"+"          { return ADD; }
"-"          { return SUB; }
"*"          { return MUL; }
"/"          { return DIV; }
"^"          { return EXP; }
"="          { return ASSIGN; }
"%"          { return MOD; }

"++"		 { return INC; }
"--"		 { return DEC; }

"int"        { return INT; }
"float"      { return FLOAT; }

{id}         { yylval.itype = *yytext - 'a'; return VAR; }
{let}        { yylval.itype = *yytext - 'A'; return FUN_NAME; }

"scan"       { return SCANF; }
"print"      { return PRINTF; }

"+="		 { return ADD_ASSIGN; }
"-="		 { return SUB_ASSIGN; }
"*="		 { return MUL_ASSIGN; }
"/="		 { return DIV_ASSIGN; }


"&"          { return BIT_AND; }
"|"          { return BIT_OR; }
"xor"        { return BIT_XOR; }
"~"          { return BIT_NOT; } 

"max"	   	{ return MAX; }
"min"		{ return MIN; }

"<"         { return LESS_THAN; }
">"         { return GREATER_THAN; }
"<="         { return LESS_OR_EQUAL; }
">="         { return GREATER_OR_EQUAL; }
"!="         { return NOT_EQUAL; }
"=="		 { return EQUAL; }

","          { return COMMA; }
";"          { return SEMICOLON; }
":"          { return COLON; }
"("          { return L_round_bracket; }
")"          { return R_round_bracket; }
"{"          { return L_curly_brackets; }
"}"          { return R_curly_brackets; }
"["			 { return L_square_brackets; }
"]"			 { return R_square_brackets; }


"sqr"        { return SQR; }
"cube"       { return CUBE; }
"root"       { return ROOT; }
"sin"        { return SINE; }
"cos"        { return COSINE; }
"tan"        { return TANGENT; }
"ln"         { return LN; }
"log10"		 { return LOG10; }

"fact"       { return FACTORIAL; }
"prime"      { return PRIME; }
"divisors"   { return DIVISORS; }
"leap_year"  { return LEAP_YEAR; }
"summation"  { return SUMMATION; }
"even_odd"   { return EVEN_ODD; }
"gcd"		 { return GCD; }
"lcm"		 { return LCM; }
"func"       { return FUNC; }
"swap"		 { return SWAP; }

"if"         { return IF; }
"else"       { return ELSE; }
"for"        { return FOR; }
"in"         { return IN; }
"limit"      { return LIMIT; }
"while"      { return WHILE; }
"do_while"	 { return DO_WHILE;}
"do"         { return DO;}
"continue"	 { return CONTINUE; }
"switch"     { return SWITCH; }
"case"       { return CASE; }
"default"    { return DEFAULT; }
"break"      { return BREAK; }


"-"?{digit}+ { yylval.dtype = atof(yytext); return NUM ; }

"-"?{digit}*[.][0-9]+ { yylval.dtype = atof(yytext); return NUM ; }

\"(\\.|[^"\\])*\" {yylval.ch = strdup(yytext);return STRING;}

"//".*       { fprintf(yyout,"Single Line Comment\n"); }

"/*"[^@]+"*/"  { fprintf(yyout,"Multiline Comment\n"); }

[\n]		 { fprintf(yyout,"\n"); }

[ \t]		


%%

int main(void)
{
	yyin = fopen("input.txt","r");
	yyout = fopen("OUTPUT.txt","w");
	yyparse();
}
