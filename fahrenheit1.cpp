/* Change Temperature celsius to farenhite */
#include <iostream>
using namespace std;
int main()
{

   int C ;
   float A;

   cout << "Enter Celsius temperature : ";
   cin >> C;
   A = (1.80 * C) + 32;
   cout << "Fahrenheit = " << A << endl; 
   cout << "Now weather in Thailand is " << ((A  > 70 ) == 1? "HOT!!!!!":"COOL!!!!!") << endl;

   return 0;
}