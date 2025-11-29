#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin >> n;
// int ans;
// if (n ==1){
//   ans = 6;
// }
// else if( n == 2){
//   ans =5;

// }else if (n==3){
//   ans = 4;

// }
// else if(n==4){
//   ans =3;

// }else if (n==5){
//   ans = 2;
// }else{
//   ans = 1;
// }
// cout << ans;

//Another approach for it
int ans = 7 - n; // as sum of the 2 opp faces is 7 always
cout << ans;
}