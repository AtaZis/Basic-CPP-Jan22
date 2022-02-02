#include <iostream>
using namespace std;


int main()

{
    int nylon;
    int paint;
    int thinner;
    int hourstotal;


    cin >> nylon >> paint >> thinner >> hourstotal;

    double nylonPrice = (nylon + 2) * 1.50;
    double paintPrice = (paint + paint*(10 / 100.0)) * 14.50;
    double thinnerlPrice = thinner * 5.00;    
    double bags = 0.40;

    double materiali = (nylonPrice + paintPrice + thinnerlPrice + bags);
    double hourPrice = (materiali * (30/100.0)) * hourstotal;

    cout.setf(ios::fixed);
    cout.precision(2); 
             

    double totalPrice = materiali + hourPrice;   

    cout << totalPrice << endl;

    return 0;
}
