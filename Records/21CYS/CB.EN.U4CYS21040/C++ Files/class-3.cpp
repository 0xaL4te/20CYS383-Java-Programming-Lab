#include<iostream>
using namespace std;
class Triangle{
  int l;
  int b;
public:
  void read(int a,int c){
    l=a;
    b=c;
  }
private:
  void area(){
    cout<<0.5*l*b<<endl;
  }
public:
void janda();
};
void Triangle::janda(){
  area();
}
int main(){
  int a,c;
  Triangle T;
  for(int i=0;i<5;i++){
    cin>>a;
    cin>>c;
    T.read(a,c);
  T.janda();
}}
/*
/// To print the real and imaginary part of a complex number
#include<iostream>
using namespace std;
class compli{
  int a,c,d;
  int b;
public:
  void abc(){
    cout<<"Enter the real and imaginary part of the complex numbers"<<endl;
    cin>>a>>b;
    cin>>c>>d;
  }
  void def(){
    cout<<"The complex number is "<<a<<" + "<<b<<"i"<<" and "<<c<<" + "<<d<<"i"<<endl;
    cout<<"The sum of the two complex numbers is "<<a+c<<" + "<<b+d<<"i"<<endl;
  }

};
int main(){
  compli T;
  T.abc();
  T.def();
}
*/
