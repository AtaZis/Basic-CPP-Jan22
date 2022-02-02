#include <iostream>
using namespace std;

int main()
{
    int chikencount, fishcount, vegancount;   

        cin >> chikencount >> fishcount >> vegancount; 

        double chikenPrice = 10.35;
        double fishPrice = 12.40;
        double veganPrice = 8.15;
        double delivery = 2.50;


        double chikentotal = chikenPrice * chikencount;

        double fishtotal = fishPrice * fishcount;

        double vegantotal = vegancount * veganPrice;

        double meat = chikentotal + fishtotal + vegantotal;

        double desert = meat * 20 / 100.0;

        double total= meat + desert+delivery;
                
        cout << total << endl;
         

    return 0;
}
