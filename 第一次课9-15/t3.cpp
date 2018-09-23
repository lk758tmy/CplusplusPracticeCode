//求两个正整数的和、差、积、商、整除、余数 
#include <iostream>
using namespace std;
int main()
{
    unsigned int a,b,he,ji,zc,yu;
    int ch;
    double sh;
    cin>>a;
    cin>>b;
     
    he=a+b;
    ch=a-b;
    ji=a*b;
    sh=double(a)/b;
    zc=a/b;
    yu=a%b;
    
    cout<<he<<" "<<ch<<" "<<ji<<" "<<sh<<" "<<zc<<" "<<yu<<endl;
    system("pause");
    return 0;
}
