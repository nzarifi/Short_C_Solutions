#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>




/*The statement: scanf("%[^\n]%*c", s); will not work because the last statement will read a newline character, \n, from the previous line. This can be handled in a variety of ways. One way is to use scanf("\n"); before the last statement.*/
int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char ch, s[100],sen[100]; //sen declare array as a char
    scanf("%c", &ch);
    scanf("%s\n", s);
    scanf("%[^\n]%*s",sen);
    printf("%c\n%s\n%s\n", ch, s, sen);
    return 0;
}