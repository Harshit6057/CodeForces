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

    string f = "";
    for(int i = 0;i < n; i++){
      if(ans[i] == 67){
        f = "YES";
        break;
      }
      
    }

    if(f == "YES"){
      cout << "YES" << endl;
    }
    else{
      cout << "NO" << endl;
    }



  


  }
  
}

// int main(){
//   int t;
//   cin >> t;
  

//   while(t--){
//     int n;
//     cin >> n;
//     vector<int> ans;
//     for(int i = 1; i <= n ; i++){
//       int x;
//       cin >> x;
//       ans.push_back(x);

//     }

//     sort(ans.begin(), ans.end());
//     if(ans[0] > 0 ){
//       for(int j = 0; j < ans.size(); j++){

//       ans[j] = ans[j] - ans[0]; 
//     }
//     }
    
//     else if(ans[0] < 0){
//       for(int j = 0; j < ans.size(); j++){

//       ans[j] = ans[j] + abs(ans[0]); 
//     }

//     }
//     bool f = false;
//     for(int k = 0; k < ans.size(); k++){
//       if(ans[k] != ans[k] + 1 ){
//         cout << ans[k]+1 << "\n";
//         f = true;
//         break;
//       }
//     }
//     int a = ans.size();

//     if(!f){
//       cout << ans[a-1] + 1<< "\n";
//     }


    

//   }
//   return 0;
  
// }