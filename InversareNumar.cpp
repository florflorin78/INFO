#include<iostream>
using namespace std;

int n, m=0;
int inv(int n, int &m);

int main() {
    cout<<"n="; cin>>n;
    cout<<"Inversul lui n este "<<inv(n,m);
}
int inv(int n, int &m) {
    if(n!=0) {
        m=m*10+n%10;
        inv(n/10,m);
    }
}
