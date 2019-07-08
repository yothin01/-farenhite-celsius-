/* Change Temperature farenhite to celsius  */
#include <iostream>
using namespace std;
int main ()
{
	int A;
	float B;
	cout<< (" fahrenheit temperature  : ");
	cin >> A;

	B = (A - 32) / 1.80;
    
		cout << "celsius = " << B << endl; 
        cout << "Now weather in Thailand is " << ((B > 21.1111111111) == 1? "HOT!!!!!":"COOL!!!!!") << endl;

	return 0;
}
