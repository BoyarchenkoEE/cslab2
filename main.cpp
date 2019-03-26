#include <iostream>

using namespace std;
// you may type whatever you want
int main()
{
   cout << "Enter A and B: ";
int a, b,max;
cin>>a>>b;
max=a;
if(a<b)
 {
        max=b;
}
cout << "A + B = " << a + b << '\n'
     << "A - B = " << a - b << '\n'
     << "A * B = " << a * b << '\n'
     << "A / B = " << a / b << '\n'
     << "Max = " <<max<< '\n';
}
