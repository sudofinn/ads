#include <iostream>
using namespace std;

void easySort(int A[], int n) {
  for(int i=0; i<n-1; i++) {
   int min=A[i];
   int indexMin = i;
   for(int j=i+1; j<n; j++) {
     if (A[j]< min) {
      min=A[j];
      indexMin = j;
      
    }
   }
   A[indexMin] = A[i];
   A[i] = min;
 }
}
int main() {
 int n=10;
 int A[] = {5,2352,23,13,562,323,652,32,52352,521};
 cout << "ORIGINALER ARRAY" << endl;
 for(int i=0; i<n; i++) {
 cout << A[i] << " ";
 }

easySort(A,n);

cout << "AUFSTEIGEND SORTIERTER ARRAY" << endl;
for(int i=0; i<n; i++) {
 cout << A[i] << " ";
}

}
