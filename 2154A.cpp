// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;


// int main(){
//   int t;
//   cin >> t;
//   while(t--){
//     int n , k;
//     cin >> n >> k;

//     string s = "";
//     for(int i = 0; i < n; i++){
//       cin >> s[i];
//     }

    
//     int b = 0;
//     int ans = 0;
//     bool t = false;
//     vector<bool> p(n , false);
//     while(b < n){
//       if(s[b] == '1' && !p[b]){
//         for(int j = b-1; j >= 0 && j >= b-k+1 ;j--){
//           if(s[j] == '1'){
//             p[b] = false;
//             t = false;
//             break;
//           }
          
//         }
//         if(t == false){
//           ans++;
//         }
        
//       }

//       else if(s[b] == '1' && p[b] == true ){

//       }
//       b++;
//     }

    

//     cout << ans << endl;
    
//   }
//   return 0; 
    
// }


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main(){
  int t;
  cin >> t;
  while(t--){
    int n , k;
    cin >> n >> k;
 
    string s;
    cin >> s;   // ✅ FIX 1
 
    int b = 0;
    int ans = 0;
 
    while(b < n){
      if(s[b] == '1'){
        
        bool ok = true;  // ✅ FIX 2
 
        for(int j = b-1; j >= 0 && j >= b-k+1 ; j--){
          if(s[j] == '1'){
            ok = false;
            break;
          }
        }
 
        if(ok){
          ans++;
        }
      }
      b++;
    }
 
    cout << ans << endl;
  }
  return 0; 
}
