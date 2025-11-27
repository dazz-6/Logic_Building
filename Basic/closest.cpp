#include <iostream>
#include <climits>
using namespace std;

// int main(){
//   int n,m;
//   cin >> n;
//   cin>> m;
//   int closest = 0;
//   int minDifference = INT_MAX;

//   // checking number around n;
//   for (int i = n - abs(m);i <= n + abs(m); i++){
//     if ( i % m == 0 ){
//       int diff = abs(n-i); // find distance from n

//       if( diff < minDifference  || (diff == minDifference && abs(i) > abs(closest))){
//         closest = i;
//         minDifference = diff;
//       }    
//     }
//   }
//   cout << closest << endl;
// }

//ANOTHER APPROACH FOR THIS QUES - FINDING QUOTIENT
int Closest(int n, int m){
  int q = n /m;

    // 1st closest num
    int n1 = m * q;

    // 2nd closest (condition ? value_if_true : value_if_false;)
    int n2 = (n * m) > 0 ? ( m *(q +1)) : (m * (q-1));
    
    if(abs(n- n1) < abs (n-n2))
      return n1;
    return n2;
}
int main(){
  int n ;
  int m;
  cin >> n;
  cin >> m;
cout << Closest(n,m) << endl;

  
  
  
}
