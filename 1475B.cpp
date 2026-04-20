#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// string solve(int n , vector<string>&dp){
//   if(n < 0){
//     return "NO";
//   }
//   if(n == 0){
//     return  "YES";
    
//   }

//   if(dp[n] != "-1"){
//     return dp[n];
//   }


  

//   string s1 = solve(n - 2020, dp);
//   string s2 = solve(n - 2021 , dp);
  
//   if( s1 == "YES" || s2 == "YES") return dp[n] = "YES";

//   return dp[n] = "NO";
// }

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string ans = "NO" ;
        
        if(n % 2020 <= n / 2020){
          ans = "YES";
        }
        else {
          ans = "NO";
        }
        

        cout << ans << endl;
        
    }

    return 0;
}