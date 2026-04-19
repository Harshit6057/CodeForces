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

        pair<int,int> maxi = {-1e9,0};
        pair<int,int> mini = {1e9,0};

        vector<int> arr(n);   // renamed from t

        for(int i = 0; i < n; i++){
            cin >> arr[i];

            if(mini.first > arr[i]){
                mini.first = arr[i];
                mini.second = i;
            }

            if(maxi.first < arr[i]){
                maxi.first = arr[i];
                maxi.second = i;
            }
        }

        int left = max(mini.second , maxi.second) + 1;
        int right = n - min(mini.second , maxi.second);
        int split = (mini.second + 1) + (n - maxi.second);
        int sp = (maxi.second + 1) + (n - mini.second);

        int ans = min({left , right , split , sp});
        
        cout << ans << endl;
    }

    return 0;
}