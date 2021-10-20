#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


static const char *strings[] = {"one","two","three","four","five",
                                "six","seven","eight","nine"};
int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    for (int i = a; i <=b; i++){
        if (i <=9)
        {
            printf("%s\n", strings[i-1]);
        }
        else if (i%2==0){
            printf("%s\n","even");
            
        }
        else {printf("%s\n","odd");}
    }

    return 0;
}