#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
   int N;
   scanf("%d",&N);
   getchar();
   char**s=(char**)malloc(sizeof(char*)*N);
   char**p=(char**)malloc(sizeof(char*)*N);
   for(int i=0;i<N;i++){
      s[i]=(char*)malloc(80);
      scanf("%[^\n]s",s[i]);
      p[i]=(char*)malloc(80);
      p[i]=strtok(s[i]," ");
      int k=atoi(p[i]);   
      p[i]=strtok(NULL," ");
      for(int j=k-1;j<strlen(p[i]);j++){
         p[i][j]=p[i][j+1];
      }
   }
   for(int i=0;i<N;i++)
      printf("%d %s\n",i+1,p[i]);
   return 0;
}