#include<iostream>
using namespace std;

class Date
{
    private:
        int day;
        int month;
        int year;

    public:
        void initDate()
        {
            day = 28;
            month = 04;
            year = 2000;
        }

        void printDateOnConsole()
        {
            cout <<"Date: " <<day <<"/" <<month <<"/" <<year <<endl;
        }

        void acceptDateFromConsole()
        {
            cout <<"Enter Day: ";
            cin >> day;
            cout <<"Enter Month: ";
            cin >> month;
            cout <<"Enter Day: ";
            cin >>year;
            cout <<endl;
        }

        bool isLeapYear()
        {
            if((year%4 ==0 && year%100!=0) || year%400 ==0)
                return true;
            return false;
        }
};

int main()
{
    Date birthDate;
    int choice;
    birthDate.initDate();

    while (1)
    {
        cout <<"Enter your Choice: " <<endl;
        cout <<"\t1. Initial Date" <<endl;
        cout <<"\t2. Show Date" <<endl;
        cout <<"\t3. Add Date" <<endl;
        cout <<"\t4. Check if Leap Year?" <<endl;
        cout <<"\t5. Exit" <<endl<<endl;
        cin >>choice;

        switch(choice)
        {
            case 1:
                birthDate.initDate();
                break;
            case 2:
                birthDate.printDateOnConsole();
                break;
            case 3:
                birthDate.acceptDateFromConsole();
                break;
            case 4:
                if (birthDate.isLeapYear())
                    printf("Year is LEAP year.\n\n");
                else
                    printf("Year is NOT LEAP year.\n\n");
                break;
            case 5:
                exit(1);
        }
    }

    return 0;
}
