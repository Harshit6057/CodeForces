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
    
    
    int n , s , x;
    cin >> n >> s >> x;
    vector<int> temp(n);
     int sum = 0;
    for(int i= 0; i < n; i++){
      cin >> temp[i];
      sum += temp[i];
    }

   

    // for(int i =0; i <n; i++){
    //   sum += temp[i];
    // }

    while(sum < s){
      sum += x;
    }

    
    if(sum == s){
      cout << "YES" << endl;
    }

    else {
      cout << "NO" << endl;
    }

    
}
}

