#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
        
        vector<int> temp;
        for(int i = 1; i <= 10; i++){
          cin >> temp[i];
        }
        int ans = 1e9;
        for(int i = 0; i < n-1;i++){
          int t = 0;
          for(int j = i; j < n-1;j++){

          if(temp[j] < temp[j+1]){
            t++;
          }
        }

        }
        
        cout << ans << endl;
  
}