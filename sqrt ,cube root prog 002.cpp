#include <iostream>
#include<math.h>
using namespace std;

int main()
{
float sq,cb,n;
cout<<"enter any number:";
cin>>n;
sq = sqrt (n);
cb = cbrt (n);
cout<< "square root of "<<n<<" is "<<sq;
cout<< "cube root of "<<n<<" is "<<cb;
return 0;
}
