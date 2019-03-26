#include <iostream>

using namespace std;
// you may type whatever you want
int main()
{
   cout << "Enter A and B: ";
int a, b,max,min;
cin>>a>>b;
max=a;
min=b;
if(a<b)
 {
        max=b;
        min=a;
}
cout << "A + B = " << a + b << '\n'
     << "A - B = " << a - b << '\n'
     << "A * B = " << a * b << '\n'
     << "A / B = " << a / b << '\n'
     << "Max = " << max << '\n'
    << "Min = " << min << '\n';
}
