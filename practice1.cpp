#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
   cout << "Hello World" << endl; 
   string str="aa22b4c3d";
   int count = 0;
   int k=1;

   for( int i=0; i<str.length(); ++i){
       //cout << str[i] << endl;
       if( str[i]>= 'a' && str[i]<= 'z' ){
           for(int j=0; j<=count; ++j){
               cout << str[i];
           }
           count = 0;
           k=1;
       }

       else{
		cout << "::" << (int)str[i] << endl;
           count = (str[i]-48)*k+count-1;
           k=k*10;
       }
   }
   return 0;
}
