#include <iostream>
#include <limits>
using namespace std;

struct Result{
 int start;
 int ende;
 int summe;

};
Result maxMittTeilfeld(int A[], int anfang, int mitte, int ende) {
  int L_summe = numeric_limits<int>::min();
  int L_max = mitte;
 int summe = 0;
 for(int i= mitte; i>=anfang; i--) {
   summe+= A[i];
   if(summe> L_summe) {
    L_summe = summe;
    L_max = i;
   }
 }

 int R_summe = numeric_limits<int>::min();
 summe=0;
 int R_max = mitte+1;
 for(int i=mitte+1; i<=ende; i++) {
  summe+= A[i];
  if(summe > R_summe) {
    R_summe = summe; 
    R_max = i;
  }
 }
 return {L_max, R_max, L_summe + R_summe};
}


Result maxTeilfeld(int A[], int anfang, int ende) {
 if(anfang==ende) {
   return {anfang,ende,A[anfang]};
 }
 
 int mitte = (anfang+ende)/2;
 Result L =maxTeilfeld(A,anfang, mitte);
 Result R = maxTeilfeld(A,mitte+1, ende);
 Result M = maxMittTeilfeld(A,anfang,mitte,ende);

 if(L.summe >= R.summe && L.summe >= M.summe) {
   return L;
 }
 else if(R.summe >= L.summe && R.summe>= M.summe) {
  return R;
 }
 else {
  return M;
 }
 

}
int main() {
 int n=10;
 int A[10] = {5,2352,-23,13,562,-323,652,32,-52352,521};
 cout << "ORIGINALER ARRAY" << endl;
 for(int i=0; i<n; i++) {
 cout << A[i] << " ";
 }
 cout << "MAX TEILFELD" << endl;


 Result res= maxTeilfeld(A, 0, n-1);
 cout << "Start" << res.start <<endl;
 cout << "Ende" << res.ende << endl;
 cout << "Summe" << res.summe <<endl;

}
