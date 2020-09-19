#include <iostream>
#include <cmath>
using namespace std;

int main(){
   unsigned int N,a,Xor;
   cin >> N;
   cin >> a;
   Xor = a;
   for(unsigned int i=1;i<N;i++){
      cin >> a;
      Xor ^= a;
   }
   cout << Xor;
   return 0;
}
