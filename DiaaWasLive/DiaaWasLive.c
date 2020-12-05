#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

int main()
{
   int T,n;
   scanf("%d",&T);
   int i,j;
   int* tab = (int*)malloc(sizeof(int)*T);
   for(i = 0 ;i < T; i++){
      long long a;
      double count = 0;
      scanf("%d",&n);
      for(j = 0; j < n ; j++){
         scanf("%lld", &a);
         count += log10(a);
      }
      tab[i] = ceil(count);
   }
   for(i = 0; i < T; i++){
      printf("%d\n",tab[i]);
   }
   return 0;
}