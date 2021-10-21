#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.



void calculate_the_maximum(int n, int k) {
  int maxand=0, maxor=0, maxxor=0, tmp;
  for (int i =1; i < n; ++i)
  {
      for (int j=i+1; j <=n; ++j)
      {
          
        tmp = ((i&j)< k)? i&j:0;
        maxand = (tmp >=maxand) ? tmp:maxand;
        
        tmp = ((i|j)< k)? i|j:0;
        maxor = (tmp >=maxor) ? tmp:maxor;
        
        tmp = ((i^j)< k)? i^j:0;
        maxxor = (tmp >=maxxor) ? tmp:maxxor;
      }
  }
  printf("%d\n%d\n%d\n",maxand,maxor,maxxor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
