#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int even = 0, odd = 0;
  int num[100];
  for (int i = 0; i < n; i++)
  {
    cin >> num[i];
    if (num[i] % 2 == 0)
      even++;
    else
      odd++;
  }
  if (odd < even)
  {
    for (int i = 0; i < n; i++)
    {
      if (num[i] % 2 != 0)
      {
        int a = i + 1;
        cout << a;
        break;
      }
    }
  }
  else
  {
    for (int i = 0; i < n; i++)
    {
      if (num[i] % 2 == 0)
      {
        int a = i + 1;
        cout << a;
        break;
      }
    }
  }
  return 0;
}