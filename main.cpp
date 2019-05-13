//读入数组并输出txt文件确认。
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    cout<<"please input the path:"<<endl;
    int a[11];
    char* Path;
    cin>>Path;
    ifstream in(Path);
    for(int i=0;i<11;i++)
        in>>a[i];
    for(int j=0;j<=10;j++)
        cout<<a[j]<<" ";
    ofstream out("D:\\qlp\\testcout.txt",ios::app);
    out<<"输出成功!"<<endl;
    cout<<"The file is modified at 21:23."<<endl;
    cout<<endl;
    cout<<"success!";
    in.close();
    out.close();
    return 0;
}
