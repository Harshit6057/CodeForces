#include <iostream>
#include <vector>
using namespace std;

long long gcd(long long a, long long b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

int main()
{
  int t;
  cin >> t;

  // small primes are enough
  vector<long long> primes = {
      2, 3, 5, 7, 11, 13, 17, 19, 23, 29,
      31, 37, 41, 43, 47};

  while (t--)
  {
    int n;
    cin >> n;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    long long ans = -1;

    // EXACT same logic style as yours
    for (int i = 0; i < primes.size(); i++)
    {
      long long x = primes[i];

      for (int j = 0; j < n; j++)
      {
        if (gcd(x, arr[j]) == 1)
        {
          ans = x;
          break; // exists i
        }
      }

      if (ans != -1)
        break; // smallest x found
    }

    cout << ans << endl;
  }

  return 0;
}
