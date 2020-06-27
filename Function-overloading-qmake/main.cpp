#include <iostream>

using namespace std;

void foo(int n){
    cout << n << "is a nice int" << endl;
}

void foo(double d){
    cout << d << "is a nice double" << endl;
}

void foo(bool b){
    cout << b << "is a nice boolian" << endl;
}

int main()
{
foo(6.5);
foo(7);
foo(true);

 return 0;
}
