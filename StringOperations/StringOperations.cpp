#include <iostream>
#include <string>
using namespace std;
int main(){
   string s;
   cin >> s;
   int rang1=0;
   int rang2=0;
   if(s[0] == '0') rang1++;
   if(s[0] == '1') rang2++;
   for(unsigned int i=1; s[i] !='\0';i++){
      if(s[i] == '0' and s[i] != s[i-1])  rang1++;
      if(s[i] == '1' and s[i] != s[i-1])  rang2++;
   }
   rang1 = rang1 < rang2 ? rang1 : rang2 ;
   cout << rang1;
   return 0;
}

