#include <iostream>
using namespace std;

int fakultaet(int n) {
  int i=2;
  int f=1;
  while(i<=n) {
   f=f*i;
   i++;
 }
return f;
   

}
int main() {
 cout << fakultaet(5) <<endl;
}
