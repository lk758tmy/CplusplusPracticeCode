//基本数学运算
#include <iostream>
using namespace std;
int main()
{
    int a,b,he,cha,ji,zc,yu;
    double shang;                                                                                                                                                                                                                                   
    //定义变量
    cin>>a;
    cin>>b;
    //输入、赋值
    he=a+b;
    cha=a-b;
    ji=a*b;
    zc=a/b;//整除
    shang=double(a)/b;//临时类型转换 
    /*
    shang=a+0.0/b
    shang=a*1.0/b
    效果相同
    */ 
    yu=a%b;//求余
    //计算
    cout<<he<<" "<<cha<<" "<<ji<<" "<<zc<<" "<<shang<<" "<<yu<<"\n";
    //输出 
    system("pause");
    return 0;
}
