#include <iostream>
#include <vector>
using namespace std;

int main(){
   int N1,N2;
   scanf("%d",&N1);
   scanf("%d",&N2);

   float* t1=new float[N1];
   float* t2=new float[N2];

   for(int i=0;i<N1;i++)
      scanf("%f",&t1[i]);
   for(int i=0;i<N2;i++)
      scanf("%f",&t2[i]);

   int i1=0,i2=0;
   bool trouve = false;
   vector<float> t;

   while(i1 < N1 and i2 < N2){
      if(t1[i1] == t2[i2]){
         t.push_back(t1[i1]);
         i1++;
         i2++;
         trouve = true;
         continue;
      }
      if(t1[i1] < t2[i2]){
         i1++;
         continue;
      }
      i2++;
   }
   if(trouve == false){
      cout <<"Empty";
      return 0;
   }
   for(unsigned int i=0;i < t.size();i++)
      printf("%.0f ",t[i]);   
   return 0;
}

