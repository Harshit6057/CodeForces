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
    
    map<char, int> mp1 , mp2;
    
    string v;
    
    string s;
    int c = 0;
    
    cin >> v >> s;
    // for(int i = 0; i < n; i++ ){
    //   cin >> v[i];
    //   cin >> s[i];
    // }
    
    for(char h : s){
      mp1[h]++;
    }
    bool f = false;
    for(char y : v){
      mp2[y]++;
    }

    for(auto& m: mp1){
      if( mp2[m.first] != m.second){
        f = true;
        break;
      }
     
      
    }

    if(!f){
      cout << "YES" << endl;
    }

    else {
      cout << "NO" << endl;
    }

    
}
}

