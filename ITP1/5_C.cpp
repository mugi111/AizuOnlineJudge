#include <bits/stdc++.h>
using namespace std;

int main()
{
  int H, W;
  while (1)
  {
    cin >> H >> W;
    if (H == 0 && W == 0)
    {
      break;
    }
    for (int i = 0; i < H; i++)
    {
      for (int j = 0; j < W; j++)
      {
        (i + j) % 2 == 1 ? cout << "#" : cout << ".";
      }
      cout << endl;
    }
    cout << endl;
  }
}