#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n , x;
    cin >> n >> x;

    vector<int> temp(n);
    for(int i = 0; i <n ;i++){
      cin >> temp[i];
    }  
    int mini = 1e9+7;
    int ans = 0;
    sort(temp.begin(), temp.end(), greater<int>());
    int c = 1;

    for(int i = 0; i < n;i++){
      mini = min(mini , temp[i]);
      if(c * mini >= x){
        ans++;
        c = 1;
      }
      else {
        c++;
      }
    }
    cout << ans << endl; 
  }
      return 0;

    
    }
