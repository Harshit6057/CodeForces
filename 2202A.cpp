#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int t;
  cin >> t;
  

  while(t--){
    int x , y;
    cin >> x  >> y;
    string ans = "NO";

    
    
   

    if ((x - 2*y) % 3 == 0 && x >= abs(y) && (x - y) % 2 == 0){
      ans =  "YES";
    }

    cout << ans << endl;
    }

    


  }
  


