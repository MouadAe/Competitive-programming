#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
   string s;
   cin >> s;
   int compt=0;
   for(unsigned int i=0; i < s.size(); i++)
      compt = ( s[i] == '0' ) ? compt+1 : compt-1;
   cout << abs(compt);
   return 0;
}