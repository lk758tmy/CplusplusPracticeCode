#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double gl,f;
    cin>>gl;
    if(gl<=3)
         f=14;
    else{
         f=14+(gl-3)*2.3;
    }
    cout<<f;
    system("pause");
    return 0;
}
