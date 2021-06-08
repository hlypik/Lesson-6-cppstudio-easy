#include <iostream>

using namespace std;

int main () 
{
  cout << "1.Monday\n2.Tuesday\n3.Wednesday\n4.Thursday\n5.Friday\n6.Saturday\n7.Sunday" << endl;
  int dayNumber;
  cout << "Enter number: "; cin >> dayNumber;
  switch (dayNumber) 
  {
    case 1:
    {
      cout << "Monday" << endl;
      break;
    }
    case 2:
    {
      cout << "Tuesday" << endl;
      break;
    }
    case 3:
    {
      cout << "Wednesday" << endl;
      break;
    }
    case 4:
    {
      cout << "Thursday" << endl;
      break;
    }
    case 5:
    {
      cout << "Friday" << endl;
      break;
    }
    case 6:
    {
      cout << "Saturday" << endl;
      break;
    }
    case 7:
    {
      cout << "Sunday" << endl;
      break;
    }
  } 
}