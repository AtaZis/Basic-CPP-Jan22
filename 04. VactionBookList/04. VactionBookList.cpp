#include <iostream>
using namespace std;


int main()
{

    //1. Брой страници в текущата книга – цяло число в интервала [1…1000]
   //. Страници, които прочита за 1 час – цяло число в интервала[1…1000]
   // 3. Броят на дните, за които трябва да прочете книгата – цяло число в интервала[1…1000]

    int bookPages;
    int readedPagesForHours;
    int daysNeeded;


    cin >> bookPages >> readedPagesForHours >> daysNeeded;

    int hoursNeededForBook = bookPages / readedPagesForHours;
    int hoursEveryDay = hoursNeededForBook / daysNeeded;

    cout << hoursEveryDay << endl;


    return 0;
}
