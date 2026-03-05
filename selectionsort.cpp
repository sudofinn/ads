#include <iostream>
using namespace std;

void selectionSort(int A[], int n) {
  for(int i=0; i<n-1; i++) {
   int minIndex = i;
   int min = A[i];
   for(int j=i+1; j<n; j++) {
     if(A[j] < A[minIndex]) {
     minIndex = j;
   }
  }    
  int temp = A [i];
  A[i] = A[minIndex];
  A[minIndex] = temp;
 }
}
int main() {
 int n=10;
 int A[] = {5,2352,23,13,562,323,652,32,52352,521};
 cout << "ORIGINALER ARRAY" << endl;
 for(int i=0; i<n; i++) {
 cout << A[i] << " ";
 }
selectionSort(A,n);

cout << "AUFSTEIGEND SORTIERTER ARRAY" << endl;
for(int i=0; i<n; i++) {
 cout << A[i] << " ";
}
}
