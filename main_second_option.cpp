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
  return 0;
}