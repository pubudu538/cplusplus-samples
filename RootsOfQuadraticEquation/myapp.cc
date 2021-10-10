#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout<<"Enter a,b and c:"<<endl;
    float a,b,c,r1,r2;
    cin>>a>>b>>c;

    r1 = (-b+sqrt(b*b-4*a*c))/(2*a);
    r2 = (-b-sqrt(b*b-4*a*c))/(2*a);

    cout<<"Roots are "<<r1<<" and "<<r2<<endl;
    return 0;
}
