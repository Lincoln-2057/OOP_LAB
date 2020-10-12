#include<iostream>
using namespace std;
class StudentDetails{
private:
  char name[40];
  int roll;
  char address[30];
  int marks;
public:
  void getDetails(){
    cout<<"enter the name of student"<<endl;
    cin>>name;
    cout<<"enter your roll "<<name<<endl;
    cin>>roll;
    cout<<"enter your address "<<name<<endl;
    cin>>address;
    cout<<"enter your marks in computer "<<name << endl;
    cin>>marks;
  }
  void showDetails(){
    cout<<"Name:"<<name<<endl<<"Roll:"<<roll<<endl<<"Address:"<<address<<endl<<"Marks:"<<marks<<endl;
  }


};
int main(){
  int n;
  cout<<"enter the total number of student"<<endl;
  cin>>n;
  StudentDetails details[n];
  for(int i =0;i<n;i++){
     details[i].getDetails();
  }
  for (int i=0;i<n;i++){
    details[i].showDetails();
    cout<<endl;
  }
  return 0;
}
