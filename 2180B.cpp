// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

string solve(int a , vector<string>& b){
    string ans = b[0];
    //sort(b.begin(),b.end());
    for(int i = 1; i < a; i++){
        if(ans + b[i] < b[i] + ans){
          ans = ans + b[i];
        }
        else{
          ans = b[i] + ans;
        }
        

    }
    return ans;
}

int main() {
    int t;
    cin >> t;              // number of test cases
    while(t--) {
        int a;
        cin >> a;
        vector<string> b(a);
        for(int i = 0; i < a; i++){
          cin >> b[i];
        }
        cout <<solve(a,b)<<endl;
    }
    return 0;
}