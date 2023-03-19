#include<iostream>
using namespace std;

int a,b;
int cmmdc(int a, int b);

int main() {
    int a,b;
    cout<<"a="; cin>>a;
    cout<<"b="; cin>>b;
    cout<<"Cmmdc("<<a")("<<b")="<<cmmdc(a,b);
}
int cmmdc(int a, int b) {
    if(b) return cmmdc(b, a%b);
    else return a;
}