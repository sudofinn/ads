#include <iostream>
#include <algorithm>
using namespace std;

void bubbleSort(int A[], int n) {
 for(int i=0; i<n-1; i++) {
  bool swapped=false;
  for(int j=0;j<n-1-i; j++) {
     if(A[j] > A[j+1]) {
      swap(A[j], A[j+1]);
      swapped=true;
     }
   }
  if(!swapped) break;
  }  
}


int main() {
 int n=10;
 int A[] = {5,2352,23,13,562,323,652,32,52352,521};
 cout << "ORIGINALER ARRAY" << endl;
 for(int i=0; i<n-1; i++) {
 cout << A[i] << " ";
 }
 bubbleSort(A,n);

cout << "AUFSTEIGEND SORTIERTER ARRAY" << endl;
for(int i=0; i<n-1; i++) {
 cout << A[i] << " ";
}
}
