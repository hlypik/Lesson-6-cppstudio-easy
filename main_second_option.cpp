#include <iostream>
#include <string>

using namespace std;

int main () 
{
  string days[7] = { "Monday", "Tuesday", "Wednesday", "Thirsday", "Friday", "Saturday", "Sunday" };
  for (int i = 0; i < 7; i++) 
  {
    cout << i + 1 << "." << days[i] << endl;
  }
  int numbDay = 0;
  cout << "Enter number of day: "; cin >> numbDay;
  switch (numbDay)
  {
    case 1:
    {
    cout << days[0] << endl;
    break;
    }
    case 2:
    {
    cout << days[1] << endl;
    break;
    }
    case 3:
    {
    cout << days[2] << endl;
    break;
    }
    case 4:
    {
    cout << days[3] << endl;
    break;
    }
    case 5:
    {
    cout << days[4] << endl;
    break;
    }
    case 6:
    {
    cout << days[5] << endl;
    break;
    }
    case 7:
    {
    cout << days[6] << endl;
    break;
    }
  }
  return 0;
}