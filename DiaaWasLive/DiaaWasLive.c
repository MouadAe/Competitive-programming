#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
int main(){
   int T,n;
   scanf("%d",&T);
   while(T--){
      long long a;
      double count = 0;
      scanf("%d",&n);
      while(n--){
         scanf("%lld", &a);
         count += log10(a);
      }
      printf("%0.f\n",ceil(count));
   }
   return 0;
}