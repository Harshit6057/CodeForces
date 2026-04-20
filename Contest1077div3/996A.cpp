#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
        int ans = 0;
        vector<int> temp = {100, 20, 10, 5, 1};
        int t = 0;
        int i = 0;
        while( n > 0){
          if(n >= temp[i]){
            n = n - temp[i];
    
            ans++;
          }
          else{
            i++;
          }
        }
        cout << ans << endl;
  
}