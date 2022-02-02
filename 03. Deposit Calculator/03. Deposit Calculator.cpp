#include <iostream>
#include "03. Deposit Calculator.h"
using namespace std;

int main()
{
    //сума = депозирана сума + срок на депозита * ((депозирана сума * годишен лихвен процент ) / 12)

    double depositSum;
    int periodInMonths;
    double percentage;

    cin >> depositSum >> periodInMonths >> percentage;

    double allDepositMoney = depositSum * (percentage / 100.0);
    double moneyForMonth = allDepositMoney / 12;
    double result = depositSum +(periodInMonths *(moneyForMonth);

    cout << result << endl;

       

    return 0;


      
    
}

