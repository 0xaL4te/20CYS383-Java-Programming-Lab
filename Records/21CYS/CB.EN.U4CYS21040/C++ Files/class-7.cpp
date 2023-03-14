/*#include<iostream>
using namespace std;
class base {
public:
int x;
void getdata()
{
cin >> x;
}
};
class derive1: public base
{
public:
int y;
void readdata()
{
cin >> y;
}
};
class derive2 : public derive1
{
private:
int z;
public:
void indata()
{
cin >> z;
}
void product()
{
cout<<"Product= " << x*y*z;
}
};

int main()
{
derive2 a;
a.getdata();
a.readdata();
a.indata();
a.product();
return 0;
}
*/
/*
#include<iostream>
using namespace std;
class colourRectangle{

public:
  colourRectangle::colourRectangle(char a,int x,int y);
  int getColor(){
    return
  }

  int getArea(){
    return x*y;
  }
  ///void getColor(){

  ///}

};

int main(){
colourRectangle r1("green",2,3.5);
cout<<"Area: "<<r1.getArea();
cout<<"Colour: "<<r1.getColour();
colourRectangle r2("blue",2,3.5);
cout<<"Area: "<<r2.getArea();
cout<<"Colour: "<<r2.getColour();
return 0;
}

class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
int count = 0;
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] <= nums[i - 1]) {
                if (count == 1)
                    return false;
                count++;
                if (i > 1 && nums[i] <= nums[i - 2] )
                    nums[i] = nums[i - 1];
            }
        }
        return true;
    }
};
*/
