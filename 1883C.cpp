#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main(){
  int t;
  cin >> t;
  while(t--){
    int n , k;
    cin >> n >> k;

    vector<int> temp(n);
    for(int i = 0; i <n ;i++){
      cin >> temp[i];
    }  
    int ans =  1e9;
    vector<int> fre(n , 0);

    for(int i = 0; i < n; i++){
      if( k == 2 || k == 3 || k == 5){
        if(temp[i] % k == 0){
          ans = 0;
          break;
        }
        fre[i] =  (k - temp[i] % k) % k;
        
        ans = min(ans , fre[i]);
    }

      else if(k == 4){
        if(temp[i] % 4 == 0){
          ans = 0;
          break;

        }

        fre[i] = (4 - temp[i] % 4) % 4;
        ans = min(ans , fre[i]);


      }

      
    }

    if(k == 4 && ans != 0){

            int even = 0;

            for(int i = 0; i < n; i++){
                if(temp[i] % 2 == 0) even++;
            }

            if(even >= 2) ans = 0;
            else if(even == 1) ans = min(ans, 1);
            else ans = min(ans, 2);
        }
    
    cout << ans << endl; 
  }
      return 0;

    
    }
