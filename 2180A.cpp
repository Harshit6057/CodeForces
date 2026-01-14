// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include <numeric>
using namespace std;

// int solve(int l , int a , int b){
//     int ans = 0;
//     for(int i = 0; i < l; i++){
//         if((a + i*b)% l < l){
//             int t = (a + i*b)%l;
//             ans = std::max(ans , t );
//         }
        
//     }
//     return ans;
// }
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}


int solve(int l , int a , int b){
    int ans = 0;
    int g = gcd(b,l);

    return l - g + (a%g);

}

int main() {
    
    
    // std::cout << solve(5,3,2)<< endl;
    // std::cout << solve(2,0,6)<< endl;
    // std::cout << solve(8,2,4)<< endl;
    // std::cout << solve(100,0,1)<< endl;
    int t;
    cin >> t;              // number of test cases

    while(t--) {
        int l, a, b;
        cin >> l >> a >> b;
        cout << solve(l, a, b) << '\n';
    }
    
    return 0;

    
    
    
}