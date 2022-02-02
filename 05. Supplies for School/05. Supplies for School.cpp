#include <iostream>
using namespace std;

int main()
{
 
	int pens, markers, detergent, discount;

	cin >> pens >> markers >> detergent >> discount;
	double penPrice = pens * 5.80;
	double markersPrice = markers * 7.20;
	double detergentPrice = detergent * 1.20;

	double price = (penPrice + markersPrice + detergentPrice);

	double totalPrice = price - (price * (discount / 100.0));

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << totalPrice << endl;

		return 0;
}

