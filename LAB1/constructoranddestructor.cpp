#include<iostream>
using namespace std;
class Constructor{
private:
  int real;
  int imag;
public:
  Constructor(){
    cout<<"empty constructor called"<<endl;
  }
  //paremetrized Constructor
  Constructor(int real1, int imag1){
    real=real1;
    imag=imag1;
  cout<<real<<endl;
  cout<<imag<<endl;
  }
  //copy Constructor
  Constructor(Constructor &c) {
    cout<<c.real<<endl;
    cout<<c.imag<<endl;

  }
  // ~ Constructor(){
  //   //destroys all
  // }
};
int main(){
  Constructor cons();
  Constructor cons1(3,4);
  Constructor cons2(cons1);
  return 0;
}
