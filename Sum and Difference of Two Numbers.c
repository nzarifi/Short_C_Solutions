#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int q, w;
    float e, r;
    scanf("%d %d:", &q, &w);
    scanf("%f %f:", &e, &r);
    printf("%d %d \n", q+w , q-w);
    printf("%.1f %.1f \n", e+r, e-r);
    
    return 0;
}
