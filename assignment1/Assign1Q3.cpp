#include <iostream>
using namespace std;

class student{

private:
    int rollno;
    string name;
    float marks;

    public:
    void initStudent()
    {
        int rollno = 1;
        string name = "Akash";
        float marks = 100;
    }

    void acceptStudentFromConsole()
    {
        cout<<("Enter the rol no");
        cin>>rollno;
        cout<<("Enter the name");
        cin>>name;
        cout<<("Enter the marks");
        cin>>marks;
    }
    void printStudentOnConsole()
    {
        cout << "Student info is: \n"<<"Roll No: "<<rollno<<"\n"<<"Name: "<<name<<"\n"<<"Marks: "<<marks<<endl;
    }
};
int main()
{
    struct student S1;
        int choice;
    while ((choice) !=0)
    {        
            cout<<"Enter 1 for itialisation student:\n";
            
            cout<<"Enter 2 for inserting info of student\n";
            
            cout<<"Enter 3 for displaying the info if :\n ***************************\n Enter value choice here:";
            cout<<"Enter 4 to exit";
        cin>>choice;
        switch (choice)
        {
        case 1:
            S1.initStudent();
            break;
            
        case 2:
            S1.acceptStudentFromConsole();
            break;
            
        case 3:
            S1.printStudentOnConsole();
            break;
            
        default:
            
            printf(" ");
        break;
        
        }
    }
    return 0;
}
