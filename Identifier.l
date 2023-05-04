%{
#include<stdio.h>
%}
%%
[a-zA-Z][a-zA-Z0-9]+ {printf("\n%s is identifer",yytext);}
.+ {printf("\n%s is not an identifer",yytext);}
%%
int yywrap(){}
int main()
{
while(yylex());
}
