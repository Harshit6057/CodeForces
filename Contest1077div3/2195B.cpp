#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int t;
  cin >> t;
  

  while(t--){
    int n;
    cin >> n;
    vector<int> ans;
    // int c = 1;
    // int temp = 1;


    for(int i = 0; i < n; i++ ){
      int x ;
      cin >> x;
      ans.push_back(x);
    }

    vector<int> ans1 = ans;

    

    string f = "YES";
    for(int i = 0;i < n; i++){
      vector<int> idx;
      vector<int> val;
      int j = i;
      while(j < n){
        idx.push_back(j);
        val.push_back(ans1[j]);
        j = 2*j+1;
      }

      sort(val.begin(), val.end());

      for(int k = 0; k < idx.size(); k++){
        ans1[idx[k]] = val[k];
      }
      

      
    }

    vector<int> sorted = ans;
    sort(sorted.begin(), sorted.end());




    for(int i = 0;i < n; i++){
      if(ans1[i] != sorted[i]){
        f = "NO";
        break;
      }
    }


    
    
      cout << f << endl;
    



  


  }
  
}

