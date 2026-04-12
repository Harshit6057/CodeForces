#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    long long x , y;
    cin >> x  >> y;
    
  

    if(y == 1)
{
  cout << 0 << endl;
  continue;
}
       long long ans = (x / y) * (y-1) + min(x % y , y-1);
  
      cout << ans << endl;
    }
      return 0;

    
    }

  
  










