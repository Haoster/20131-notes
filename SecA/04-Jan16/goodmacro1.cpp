#include <iostream>
using namespace std;
#define sum(x,y) ((x)+(y))
int main(){
  int a = 2;
  int b = 3;
  double f = 2.0001;
  double g = 3.0001;
  cout<<(sum(a,b)*4)<<endl;  
  cout<<(sum(f,g)*4)<<endl;  
  return 0;
}

