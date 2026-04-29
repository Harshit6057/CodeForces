#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
  int t = 0;
  cin >> t;
  while(t--){
    
    int n , k;
    cin >> n >> k;

    vector<long long> temp(n);
    
    int ans = n;
    int need = n-1;
    while(k >= need){
      k -= need;
      ans--;
      need--;
    }
    cout << ans << endl;
  }
      return 0; 
  
}
