#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> x(3);
  cin >> x.at(0) >> x.at(1) >> x.at(2);
  sort(x.begin(), x.end());
  cout << x[0] << " " << x[1] << " " << x[2] << endl;
}
