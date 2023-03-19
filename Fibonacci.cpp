#include<iostream>
using namespace std;

int n;
int fibo(int n);

int main() {
    cout<<"n="; cin>>n;
    cout<<fibo(n);
}

int fibo(int n) {
    if(n==0) return 0;
    else if (n==1 || n==2) return 1;
    else return fibo(n-1)+fibo(n-2);
}