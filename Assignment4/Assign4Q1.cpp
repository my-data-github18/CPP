#include <iostream>
using namespace std;

class Time
{
private:
    // data members
    int hour;
    int min;
    int sec;

public:

    Time()
    {
        
        this->hour = 0;
        this->min = 0;
        this->sec = 0;
    }

    // parameterized constructor
    Time(int hour, int min, int sec)
    {
        cout << "Inside parameterized ctor" << endl;
        this->hour = hour;
        this->min = min;
        this->sec = sec;
    }
    

    int gethour(){
        return this->hour;
    } 
    
    int getmin(){
        return this->min;
    } 
    int getsec(){
        return this->sec;
    }

    void sethour(int hour) {
        this->hour = hour;
    }

    void setmin(int min) {
        this->min = min;
    }
    void setsec(int sec) {
        this->sec = sec;
    }
    
    void displayTime()
    {
        cout << "Time is : = " << this->hour << " : " << this->min << " : " << this->sec << endl;
       
    }
};   

int main() {
    
    Time t1;

    Time *ptr = new Time(6,30,10);
    ptr->displayTime();

    delete ptr;
    ptr = NULL;
    // t1.sethour(5);
    // t1.setmin(55);
    // t1.setsec(11);

    // cout<< "Time is : " << t1.gethour() << " : "<< t1.getmin() << " : " << t1.getsec()  << endl;
    
    // return 0;
}