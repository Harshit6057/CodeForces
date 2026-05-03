#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
  int t;
  cin >> t;
  while(t--){
    int n , a , b;
    cin >> n >> a >> b;
    int ans = 0;
    for(int i = 0; i <= 5; i++){
      for(int j = 0; j <= 5; j++){
        int z = 5-i-j;

        ans = max(ans , (n+i)*(a+j)*(b+z));
      }
    }

    cout << ans << endl;
    
  }
  return 0; 
    
}
