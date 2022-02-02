#include <iostream>
using namespace std;


int main()
{
    int lenght;
    int width;
    int height;
   double percent;       
     
    cin >> lenght >> width >> height >> percent;

    double volumeInSM = (lenght * width * height);
    double liters = volumeInSM / 1000.0;
    double unusedLiters = liters * percent / 100.0;
    double usedLiter = liters - unusedLiters;

    cout << usedLiter<< endl;     


    return 0;

    
}