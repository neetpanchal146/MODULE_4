#include<iostream>
using namespace std;

class Test {
private:
   int num1, num2;
public:

   void input() {
       cout << "Enter two numbers:";
       cin >> num1>>num2;
   }

   friend void find(Test t);
};

void find(Test t) {
   if (t.num1 > t.num2) {
       cout << "Largest is:" << t.num1;
   } else {
       cout << "Largest is:" << t.num2;
   }
}

int main() {

   Test t;
   t.input();
   find(t);

  
}