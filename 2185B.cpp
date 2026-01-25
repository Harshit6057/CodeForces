#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
  int t;
  cin >> t;
  

  while(t--){
    int n;
    cin >> n;
    vector<int> ans;
    for(int i = 1; i <= n ; i++){
      int x;
      cin >> x;
      ans.push_back(x);

    }

    sort(ans.begin(), ans.end(), greater<int>());
    
    cout << ans[0]*n << "\n";

  }
  return 0;
  
}