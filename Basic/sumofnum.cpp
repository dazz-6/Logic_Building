// #include <iostream>
// using namespace std;
// int main(){
//   int n;
//   cin >> n;
//   int sum = 0;
//   for(int i=1;i<=n;i++){
//     sum = sum + i;
//   }
//   cout << sum;
// }


#include <bits/stdc++.h>
using namespace std;
int findSum(int n){
  if (n==0)
  return 0;

 int result = n*(n+1);
  return  result/2;
    

  }
int main(){
  int num = 3;
  cout << findSum(num);
}
