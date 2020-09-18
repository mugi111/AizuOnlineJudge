#include <bits/stdc++.h>
using namespace std;

int main()
{
  int x;
  int i = 0;
  while (cin >> x)
  {
    if (x == 0)
    {
      return 0;
    }
    cout << "Case " << ++i << ": " << x << endl;
  }
}
