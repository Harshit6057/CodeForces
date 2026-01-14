#include <iostream>
using namespace std;
#include <vector>

int main()
{
  int n;
  cin >> n;

  vector<int> arr(n);

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  double maxi = arr[0];

  for (int l = 0; l < n; l++)

  {
    int sum = 0;
    for (int r = l; r < n; r++)
    {
      sum += arr[r];
      double avg = (double)sum / (r - l + 1);
      maxi = max(maxi, avg);
    }
  }

  cout << maxi << endl;
  return 0;
}