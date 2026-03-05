#include <iostream>
using namespace std;

int* vereinigung(int A[], int B[], int an, int bn, int &cn) {
  int *C = new int[an+bn];
  int i=0;
  int j=0;
  int k=0;
  while(i<an && j<bn) {
  int value;
  if(A[i]< B[j]) {
   value=A[i];
   i++;
  }
  else if(B[j] < A[i]) {
   value=B[j];
   j++;
  }
  else{
   value=A[i];
   i++;
   j++;
  }
  if(k==0 || C[k-1] != value) {
    C[k] = value;
    k++;
  }
 }
 while(i<an) {
  if(k==0 || C[k-1] != A[i]) {
    C[k] = A[i];
    k++;
  }
  i++;
 }
 while(j<bn) {
 if(k==0 || C[k-1]!= B[j]) {
     C[k] = B[j];  
     k++;
  }
 j++;
 }
 cn=k;
 return C;
}

int main() {
  int A[5] = {2,23,424,425,2342};
  int B[5] = {1,2,4,65,425};
  int an=5;
  int bn=5;
  int cn;
  int *C = vereinigung(A,B,an,bn,cn);
  for(int i=0; i<cn; i++) {
    cout << C[i] << " ";
  }
 delete[] C;
}
