#include <iostream>
using namespace std;

void insertionSort(int A[], int n) {
//Insertion Sort: Best-case: theta(n), Worst Case:theta(pow(n,2));
 for(int j=1; j <n; j++) {
    int schluessel = A[j];
    int i = j-1;
    while(i>=0 && A[i]>schluessel) {
       A[i+1] = A[i];
       i--;
    }
   A[i+1] = schluessel;
  }
}
int main() {
int n=10;
int A[10] = {5,2352,23,13,562,323,652,32,52352,521};
cout << "ORIGINALER ARRAY" << endl;
for(int i=0; i<n; i++) {
 cout << A[i] << " ";
}
insertionSort(A,n);

cout << "AUFSTEIGEND SORTIERTER ARRAY" << endl;
for(int i=0; i<n; i++) {
 cout << A[i] << " ";
}

}
