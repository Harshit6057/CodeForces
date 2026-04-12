#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n , k;
    cin >> n  >> k;

    vector<int> temp(n);
    for(int i = 0; i <n ;i++){
      cin >> temp[i];
    }  
    
    int ans =0 ;
    int j = 0;
    int c = 0;
    while(j < n ){  

      if(temp[j] == 0){
        c++;
      }
      else if(temp[j] == 1){ 
        c = 0;
      }
      if(c == k){
        ans++;
        j = j+2;
        c = 0;

      } 
      else {
        j++;
      }
    }
    cout << ans << endl; 
  }
      return 0;

    
    }
