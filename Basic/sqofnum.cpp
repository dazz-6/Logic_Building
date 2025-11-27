#include <iostream>
using namespace std;

// int main(){
// int n;
// cin >> n;
// int sum = 0;
// for ( int i = 1 ;i <= n; i++){
//     sum += (i * i);
// }
//   cout << sum;

//   return 0;
// }
// there's another approach to this - mathemathical one
// 12 + 22 + 32 +....+n2 = n(n+1)(2n+1) /6


int main(){
  int n;
  cin >> n;
  int sum =0;
  sum = (n * (n+1) *  (2*n+1)) / 6;

  cout << sum;
}