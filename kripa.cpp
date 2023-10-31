#include<iostream>
using namespace std;
class complex{
private:
int a;
int b;
const int k;
public:
complex();
complex(int);
complex(int,int);
complex(const complex&);
~complex();
};
complex::complex():a(0),b(0),k(0){}

complex::complex(int x):a(x),b(0),k(0){}
    

complex::complex(int x,int y):a(x),b(y),k(0){}
    
complex::complex(const complex &c1):a(c1.a),b(c1.b),k(0){}
    
complex::~complex(){
cout<<"Destructor is being called ";
}
int main(){
complex c1;//defualt constructor
complex c2(1);//single parameterized constructor 
complex c3(1,1);//double paramterized constructor
complex c4(c1);//or complex c4=c1;
}