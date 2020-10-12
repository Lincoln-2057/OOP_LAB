#include<iostream>
using namespace std;
class ComplexAddition{
private:
  float real;
  float imag;
public:
  ComplexAddition(float num1,float num2){
    this->real=num1;
    this->imag=num2;
  }
  void showComplexNumber(){
    if(imag<0){
     cout<<"Number->"<<"  "<<real<<"-i"<<imag<<endl;
   }
     else{
      cout<<"Number->"<<" "<<real<<"+i"<<imag<<endl;
     }
  }
  void complexAddition(ComplexAddition c){
    float realAddition=0.0;
    float compAddition=0.0;
    realAddition=c.real+this->real;
    compAddition=c.imag+this->imag;
    if(compAddition<0){
      cout<<"The addition product is:"<<realAddition<<"-"<<compAddition<<"i"<<endl;

    }
    else{
      cout<<"The addition product is:"<<" "<<realAddition<<"+"<<compAddition<<"i"<<endl;

    }


  }

};
int main(){
  ComplexAddition c1(1.2,2.2);
  ComplexAddition c2(2.3,2.2);
  c1.showComplexNumber();
  cout<<endl;
  c2.showComplexNumber();
  c2.complexAddition(c1);
  return 0;
}
