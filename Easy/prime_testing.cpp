//simple method
#include <bits/stdc++.h>
using namespace std;
bool is_prime(int n){
  // making a loop for 2 to n-1 as prime num are the numbers that are only divisible by themselves and 1
  for (int i =2;i<n;i++){
      if(n % i == 0){
        return false;
      } 
    }
  return true;
}
int main(){
  is_prime(10) ? cout<< "true\n" : cout << "false\n";
  is_prime(13) ? cout<< "true\n" : cout<<"false\n" ;
}

// this has time complexity: O(n)
//and space complexity: O(1)