
#include <iostream>
using namespace std;

int main()
{
    int godishnataksa;
    cin >> godishnataksa;

    double kec = godishnataksa - (godishnataksa*40/100.0);
    double ekip = kec - (kec*20/100.0);

    double ball = ekip * 0.25; 
    double accsesories = ball * 0.2;
    double total = kec + ekip + ball + accsesories + godishnataksa;;
    
    cout << total << endl;









    return 0;

}
