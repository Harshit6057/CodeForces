#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int t;
  cin >> t;
  

  while(t--){
    int n , h , l;
    cin >> n >> h >> l ;
    

    
    vector<int> ans(n);
    int c = 0;
    
    for(int i = 0; i < n; i++ ){
      cin >> ans[i];
    }
    // int rem = min(h,l);
    int i = 0;
    int j = n-1;
    int a = 0;

    sort(ans.begin(), ans.end());

    while(i < j){
      if((ans[i] <= h && ans[j] <= l) || (ans[i] <= l && ans[j] <= h)){
        a++;
        i++;
        j--;
    }
    else{
      if(ans[j] > h) j--;
      else{
        i++;
      }
    }
   

    
  }
   cout << a << endl;
  
}
}

