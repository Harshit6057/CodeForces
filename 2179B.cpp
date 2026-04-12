#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int x ;
    cin >> x;
    vector<int> a(x);
    
    for(int i =0; i < x;i++){
      cin >> a[i];
    }
    
    int temp = 0;
    
    
    for(int i =0; i < x-1; i++){
      temp += abs(a[i] - a[i+1]);
      
    }

    int maxgain = 0;


    for(int i = 0; i < x; i++){
      int gain = 0;
      if(i == 0){
        gain = abs(a[0] - a[1]);
      }

      else if(i == x-1){gain = abs(a[x-2] - a[x-1]);}
      else {
        int remove = abs(a[i] - a[i-1]) + abs(a[i+1] - a[i]);
        int add = abs(a[i+1] - a[i-1]);
        gain = remove - add;

      }
      
      maxgain = max(maxgain, gain);
    

    }
    cout << temp - maxgain << endl;
    }
  }
  


