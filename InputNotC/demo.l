%option noyywrap
%{
	
%}

%%
"adds"                            {  printf("header File\n");}
"begin"                           {  printf("main Function\n");}

[ ]                           {  printf("Space\n");}
[+]                               {  printf("Addition\n");}
[-]                    {  printf("Substraction\n");}
[*]                  {  printf("Multiplication\n");}
[/]                        {  printf("Division\n");}
"=="                          {  printf("Equal Opetator\n");} 
[=]                         {  printf("Assignment Opetator\n");}
[>]                         {  printf("Greater Than Opetator\n");}
">="                 {  printf("Less Than or Equal Opetator\n");}
[<]                         {  printf("Less Than  Opetator\n");}
"<="                   {  printf("Less Than or Equal Opetator\n");}
"pow"                     {  printf("exponential Opetator\n");}
"++"                       {  printf("Increment Opetator\n");}
"--"                       {  printf("Decrement Opetator\n");}
"+="                      {  printf("Summation and Assignment Opetator\n");}
"-="                      {  printf("Substraction and Assignment Opetator\n");}
"*="                      {  printf("Multiplication and Assignment Opetator\n");}
"/="                      {  printf("Division and Assignment Opetator\n");}

"&&"                      {  printf("Logical  And  Opetator\n");}
"||"                       {  printf("Logical Or Opetator\n");}
[!]                      {  printf("Logical Not Opetator\n");}

"intg"                     {  printf("Integer\n");}
"dbl"                      {  printf("Double\n");}
"charctr"                  {  printf("Character\n");}
"str"                      {  printf("String\n");}
"flt"                      {  printf("float\n");}
"true"                       {  printf("boolean true\n");}
"false"                       {  printf("boolean false\n");}


"halt"                     {  printf("break Statement\n");}
"carryOn"                  {  printf("continue Statement\n");}
"ret"                      {  printf("Return a Value\n");}
"end"                      {  printf("End of Program\n");}
"new"                      {  printf("It's a newline\n");}
"def"                      {  printf("definition\n");}

[0-9]+                     {  printf("Positive digit\n");}
["].*["]                   {  printf("Sentence\n");}

[&][a-zA-Z][a-zA-Z0-9]*          {  printf("input Specifier\n");}
[%]                        {  printf("Modulation Opetator\n");}
"!="                       {  printf("NotEqual Opetator\n");}



"intg_sign"                {  printf("Integer Identifier\n");}
"dbl_sign"                 {  printf("Floating Identifier\n");}


[a-zA-Z]+("[")[0-9]+("]")      {  printf("an array\n");}

"for_loop"                 {  printf("For Loop\n");}
"while_loop"               {  printf("While Loop\n");} 
"repeat_loop"              {  printf("Do while Loop\n");} 

 
"if_con"                  {  printf("if Condition\n");} 
"else_con"                {  printf("else Condition\n");} 
"elseif_con"              {  printf("else if Condition\n");} 
"switching"               {  printf("Switch Case\n");} 
"set"                     {  printf("default case of switch Case\n");} 
"switch_case"             {  printf("refers differnt case of switch condition\n");} 


("{")                    {  printf("open braces\n");}
("}")                    {  printf("close braces\n");}

("(")                    {  printf("open parentheses\n");}
(")")                    {  printf("close parentheses\n");}

("[")                    {  printf("open braket\n");}
("]")                    {  printf("close braket\n");}


"scanf"                  {  printf("Scanf Function\n");}
"printf"                 {  printf("Print Function\n");}
[a-zA-Z]+[0-9]*          {  printf("Variable\n");}

[-][0-9]+                {  printf("Negative digit\n");}
[-][-].*[-][-]           {  printf("Comment\n");}
[a-zA-Z][a-zA-Z0-9]*     {  printf("Variable\n");}

%%

int main()
{
	yyin = freopen("input.txt","r",stdin);
	yyout = freopen("output.txt","w",stdout);
	yylex();
	return 0;
}