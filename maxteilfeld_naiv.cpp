#include <iostream>
using namespace std;

int main() {
int preise[17] = {100,113, 110, 85,105,102,86, 63, 81,101, 94, 106,101,79,94,90,97};
//todo: größte differenz zwischen allen paaren finden
//beide Ideen sind sehr naiv und laufen in theta(pow(n,2))

// Sehr naiv
int diff = 0; 
for(int i=0; i<17; i++) {
 for(int j=i+1; j<17; j++) {
   int temp = preise[j] - preise[i];
   if(temp > diff) {
      diff = temp;  
  }
 }
}

//cout << "Max Profit:" << diff << endl;

//Etwas weniger naiv
int differenzen[16];
for(int i=0; i <16;i++) {
 differenzen[i] = preise[1+i] - preise[i];
 cout << differenzen[i] << " ";
}

int maxSum =0;
for(int i=0; i< 16; i++) {
 int sum=0;
 for(int j=i; j<16; j++) {
  sum+= differenzen[j];
  if(sum > maxSum) {
     maxSum = sum;
  }
 }
}
cout << "Max Profit:" <<  maxSum << endl;



}
