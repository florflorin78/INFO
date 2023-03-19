#include<iostream>
using namespace std;

int n;
int cifmax(int n);

int main() {
cout<<"n="; cin>>n;
cout<<"Cea mai mare cifra este "<<cifmax(n);
}

int cifmax(int n) {
    int a,b;
    if(n==0) return 0;
    else {
        a=n%10;91
        b=cifmax(n/10);
    if(a<b) return b;
    else return a;
    }
}
