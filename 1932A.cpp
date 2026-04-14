#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solve(int i , int n , vector<char> &temp , int ans){
  if(i >= n){
    return ans;
  }
  if(temp[i] == '@' ){
    return solve(i +1 , n , temp , ans + 1);

  }
  if(temp[i] == '.'){
    return solve(i+1 , n , temp , ans);
  }

  
  if(temp[i] == '*' && i+1 < n && temp[i+1] == '*'){
    return ans;
  }
   
  if(i-1 > 0 && temp[i-1] == '@' && temp[i] == '*' && i+1 < n && temp[i+1] == '@'){
    return solve(i + 1, n , temp , ans);

  }

  else {
    return solve(i + 1, n , temp , ans);
  }

  return ans;

}

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;

    vector<char> temp(n);
    for(int i = 0; i <n ;i++){
      cin >> temp[i];
    }  
    int ans =  solve(0 , n , temp ,0);
    
    cout << ans << endl; 
  }
      return 0;

    
    }
