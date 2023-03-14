#include<iostream>
using namespace std;

class ABC{
protected:
  int x;
  int func(){
    cout<<"Im a CYS student"<<endl;
  }
public:
  int y;
  int hello(){

  cin>>y;
  return y;
}
};
class EFG:public ABC{

    int x;
    int PPP(){
    cin>>x;
    return x;
  }

};
int main(){
  ABC D;
cout<<D.PPP()<<endl;
  cout<<D.hello()<<endl;

}
