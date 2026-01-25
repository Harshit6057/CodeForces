#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int t;
  cin >> t;
  

  while(t--){
    int n;
    long long x;
    cin >> n >> x ;
    

    long long maxfree = 0;
    long long maxnet = 0;

   
    for(int i = 0; i < n; i++ ){
      long long a , b ,c;
      cin >> a >> b >> c;

      maxfree = max(maxfree , (b-1) * a);

      long long net = b* a - c;
      if(net > 0){
        maxnet = max(maxnet  , net);
      }

      if(maxfree >= x){
        cout << 0 << endl;

      }

      if(maxnet == 0){
        cout << -1 << endl;
        continue;
      }

      long long rem = x - maxfree;
      long long roll = (rem + maxnet - 1) / maxnet;
      cout << roll << endl;

    }
    
  
}
}

