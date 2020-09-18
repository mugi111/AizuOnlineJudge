#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, t;
  int max = -1000001;
  int min = 1000001;
  long long sum = 0;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> t;
    max = std::max(t, max);
    min = std::min(t, min);
    sum += t;
  }
  cout << min << " " << max << " " << sum << endl;
}
