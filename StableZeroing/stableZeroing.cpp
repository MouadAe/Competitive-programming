#include <stdio.h>
#include <stdlib.h>

int main(){
   int N;
   scanf("%d",&N);
   long long* t=(long long*)calloc(sizeof(long long),N);
   long long a;
   int i=0,size=N;
   while(i < size){
      scanf("%lld",&a);
      t[i]+=a;
      if(t[i] == 0){
         size--;
         continue;
      }
      i++;
   }
   for(int i=0;i<N-1;i++)    printf("%lld  ",t[i]);
   printf("%lld",t[N-1]);
}