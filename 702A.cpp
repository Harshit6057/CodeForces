#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){

  
    int n;
    cin >> n;

    vector<long long> temp(n);
    for(int i = 0; i < n; i++){
      cin >> temp[i];
    }
    int ans = 1;
    int t = 1;
    for(int i = 0;i < n-1; i++){
        if(temp[i] < temp[i+1]){
          t++;
        }
        else{
          t = 1;
        }
        
      
      ans = max(ans , t);
    }
    cout << ans << endl;
      return 0; 
}
