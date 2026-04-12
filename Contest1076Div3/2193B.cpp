#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  

  while(t--){
    
    
    int n;
    cin >> n;
    vector<int> temp(n);

  

    for(int i= 0; i < n; i++){
      cin >> temp[i];
    
    }

    int l = -1;
    int r = -1;
    vector<int> hit = temp;

    for(int i = 0; i < n ;i++){
      int m = temp[i];
      int pos = i;

      for(int j = i; j < n; j++){
        if(temp[j] > m){
          m = temp[j];
          pos = j;
        }
      }

      if(pos != i){
        l = i;
        r = pos;
        break;
      }
    }

    if( l != -1){
      reverse(temp.begin() + l , temp.begin() + r + 1 );
    }
    for(int x : temp){
      cout << x << " ";
    }

    cout << "\n";
    


    

    
}
}

