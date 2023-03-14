/*#include<iostream>
using namespace std;
class Triangle{

  int h,l;
public:
   int k(int a,int b){
     this->h=a;
     this->l=b;
   }
   int areal(){
     return 0.5*l*h;

 }
void compare(Triangle L);
void add(Triangle L,int j);
};



void Triangle::compare(Triangle L){
  if(this->areal()>L.areal()){
    cout<<"First triangle is greater than second triangle"<<endl;


  }
  else {
    cout<<"Second triangle is greater than first triangle"<<endl;
  }

}
void Triangle::add(Triangle L){

}
int main(){
  Triangle A[50],L;
  int a,b;

  for(int i=0;i<2;i++){
    cin>>a>>b;
    A[i].k(a,b);
    A[i].areal();
  }
  A[0].compare(A[1]);
}


#include<iostream>
using namespace std;
class comp{
public:
  void read(){
    int a,b,c,d;
    cout<<"Enter the real part of the two numbers "<<endl;
    cin>>a>>c;
    cout<<"Enter imaginary part of two numbers"<<endl;
    cin>>b>>d;
        }

  void add(){


  }

};
*/
#include <iostream>
using namespace std;
class sample {
public:
sample() { cout<<"Hi "; }
~sample() { cout<<"Bye "; }
};
int main()
{
sample *obj = new sample();
delete(obj);
return 0;
}
