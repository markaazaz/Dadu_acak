//Author by Marka
#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    awal:
     char a;
     while (true) {
     cout<<"Lempar Dadu? (y/n) :";
     cin>> a;
     if ((a == 'y')||(a == 'Y')) {
       cout<< 1+ (rand() % 6)<<endl;
     }else if ((a == 'n' ) || (a == 'N')){
       break;
     }else {
       cout<< "Not Found\n";
       cout<<endl;
       goto awal;
     }

   }


  return 0;
}
