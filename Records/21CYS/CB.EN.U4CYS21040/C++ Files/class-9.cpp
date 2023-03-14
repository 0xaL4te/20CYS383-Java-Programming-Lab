#include<iostream>
using namespace std;

class array_details{
public:
  int A[10],b;
  void ReadArray(){
    for(int i=0;i<10;i++){
      cin>>A[i];
  }
  void sort();

  }


};

void array_details :: sort(int A[10]){
  int i, j;
  cin>>n;
    for (i = 0; i < 10; i++)
        for (j = 0; j < 10 - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

int main(){
  array_details X;
  X.ReadArray();

  return 0;
}
