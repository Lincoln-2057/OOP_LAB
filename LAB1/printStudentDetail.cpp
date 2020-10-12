#include<iostream>
using namespace std;
class Details{
    char name[50];
    int roll;
    double marks;
    char address[60];
    public:
        void getDetails(){
            cout<<"enter name,roll,marks(computer),address of student"<<endl;
            cin>>name>>endl>>marks>>endl>>roll>>endl>>marks>>endl>>address;
        }
        void showDetails(){
            cout<<"Name:" <<name<<endl<<"Roll:"<<roll<<endl<<"Marks:"<<marks<<endl<<"Address:"<<address<<endl;

        }
};
int main(){
    Details details;
    details.getDetails();
    details.showDetails();
    return 0;
}
