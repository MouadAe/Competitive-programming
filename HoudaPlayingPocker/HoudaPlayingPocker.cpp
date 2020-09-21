#include <iostream>
#include <vector>
using namespace std;

int main(){
   unsigned short N;
   cin >> N;
   vector<float> t;
   for(int i=0;i<N;i++){
      float a,accum,b,max;
      cin >> a; // nombre de cases du tableau
      cin >> b; // premiere valeur du tableau
      max = accum = b;
      for(int j=1;j<a;j++){
         cin >> b;
         if(accum > 0){
            if( accum + b > 0 ){
               accum += b;
               max = accum > max ? accum : max;
            } 
            else accum = b;
         }
         else accum = b;
      }
      max = accum > max ? accum : max;
      t.push_back(max); 
   }

   for (unsigned int i = 0; i < t.size(); i++){
      if(t[i] > 0) 
         printf("%.0f\n",t[i]);
      else 
         cout << "better luck next year" << endl;
   }
   return 0;
}