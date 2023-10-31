#include <iostream>
using namespace std;
class complex {
private:
  int a;
  int b;

public:
  complex();
  complex(int);
  complex(int, int);
  complex(const complex &);
  ~complex();
};
complex::complex() {
  a = 0;
  b = 0;
}
complex::complex(int x) {
  a = x;
  b = 0;
}
/* Ways of using copy 
constructor:
Board tempBoard = board;
Board tempBoard(board);
Board* tempBoard
= new Board(board);
*/
complex::complex(int x, int y) {
  a = x;
  b = y;
}
complex::complex(const complex &c) {
  a = c.a;
  b = c.b;
}
complex::~complex(){
    cout<<"Destructor is being called";
}
int main() {
  complex c1;
  complex c2(1);
  complex c3(1, 1);
  complex c4 = c1;
}
