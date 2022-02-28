#include <iostream>
using namespace std;
template <typename T>
class Genericsquare{
private:
T side;
public:
  T area;
void printarea(){
cout<<"enter sides="<<endl;
cin>>side;
area =side*side;
cout<<"area ="<<area<<endl;
}

};
int main() {
Genericsquare<int> A;
A.printarea();
Genericsquare<float> B;
B.printarea();

}