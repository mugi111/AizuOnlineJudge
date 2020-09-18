#include <bits/stdc++.h>
using namespace std;

int main()
{
  int tx, ty;

  while (1)
  {
    cin >> tx >> ty;
    if (tx == 0 && ty == 0)
    {
      break;
    }
    if (tx < ty)
    {
      cout << tx << " " << ty << endl;
    }
    else
    {
      cout << ty << " " << tx << endl;
    }
  }
}
