#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// bool solve(int i , int j ,  int k , int h, int n , int m, vector<vector<int>>& dp){
//   if(h == k){
//     return true;
//   }
//   if( i > n || j > m || h > k ){
//     return false;
//   }

//   if(i == n && j == m) return false;

//   if(dp[i][j] != -1){
//     return dp[i][j];

//   }

//   bool down = false;
//   bool right = false;
//   if(i < n){
//     down = solve(i+1, j , k , h+j , n , m, dp);
//   }

//   if(j < m){
//     right = solve(i , j+1 , k , h+i , n , m, dp);
//   }
  

//   return dp[i][j] = (down || right);
// }

int main(){
  int t;
  cin >> t;
  while(t--){
    int n , m , k;
    cin >> n >> m >> k;
    // vector<vector<int>> dp(n+1 , vector<int> (m+1 ,-1));
    // bool ans =  solve(1 , 1, k , 0 , n , m, dp);
    
    if(n*m-1 == k){
    cout << "YES" << endl; 
    }
    else {
      cout << "NO" << endl;
    }
  }
      return 0; 
}
