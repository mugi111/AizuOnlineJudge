#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    if (i % 3 == 0)
    {
      cout << " " << i;
    }
    else if (i % 10 == 3)
    {
      cout << " " << i;
    }
    else
    {
      int x = i / 10;
      while (x)
      {
        if (x % 10 == 3)
        {
          cout << " " << i;
          break;
        }
        x /= 10;
      }
    }
  }
  cout << endl;
}