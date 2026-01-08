#include <bits/stdc++.h>
using namespace std;
int main(){
  int sum =0;
  int even = 0;

  //ques: sum of 10 numbers
  for (int i=0; i<=10 ; i++){
    sum = sum + i; 
  }
   cout << sum << endl;

  //sum of first 10 numbers
  // for (int i=1;i <= 10; i++){
  //     even += 2 * i; 
  // }
 
  // 2nd APPROACH
  int n =10; 
   even = n * (n+1);
  cout << even << endl;


  // sum of even numbers between 20 and 40 (both included)
  // for even numbers in a range, we can use AP formula [ n(a+l)/2]
  int a= 20, l= 40;
  int m= ((l - a )/2) +1 ;
  int even_numm = (m * (a+ l)) /2;
    cout << even_num;
  
}