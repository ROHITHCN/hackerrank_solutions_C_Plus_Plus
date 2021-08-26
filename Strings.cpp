#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b;
    int q,w;
    cin>>a;
    cin>>b;
    q=a.size();
    w=b.size();
    cout<<q<<" "<<w<<endl;
    cout<<a+b<<endl;
    char t;
    t=b[0];
    b[0]=a[0];
    a[0]=t;
    cout<<a<<" "<<b;
    return 0;
}
