//������ѧ����
#include <iostream>
using namespace std;
int main()
{
    int a,b,he,cha,ji,zc,yu;
    double shang;                                                                                                                                                                                                                                   
    //�������
    cin>>a;
    cin>>b;
    //���롢��ֵ
    he=a+b;
    cha=a-b;
    ji=a*b;
    zc=a/b;//����
    shang=double(a)/b;//��ʱ����ת�� 
    /*
    shang=a+0.0/b
    shang=a*1.0/b
    Ч����ͬ
    */ 
    yu=a%b;//����
    //����
    cout<<he<<" "<<cha<<" "<<ji<<" "<<zc<<" "<<shang<<" "<<yu<<"\n";
    //��� 
    system("pause");
    return 0;
}
