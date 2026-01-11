// #include <bits/stdc++.h>
// using namespace std;
// bool Power(long x, long y){
//   //special case= power of 1 is 1 itself
//   if(x == 1)
//     return (y==1);

//   //for other numbers
//   long pow = 1;
//   while(pow < y)
//   pow *= x;

//   //check if power of x becomes y
//   return (pow == y);
// }


// int main(){
// cout << boolalpha;
// cout << Power(2,8) <<endl;
// cout << Power(4,64) << endl;
// }


//better approach - logarithmic approach
#include <bits/stdc++.h>
using namespace std;
bool isPower(int x, int y){
  float res = log(y) /log(x);
  return res == floor(res);
  // floor removes the digits after decimal 

}

int main(){
  cout<< boolalpha;
  cout << isPower(2,32);gi
}