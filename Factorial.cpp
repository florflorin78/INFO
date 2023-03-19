#include<iostream>
using namespace std;
 
long n;
int fact(long x);

int main() {
cout<<"n="; cin>>n;
cout<<"Factorial de "<<n<<" este "<<fact(n);
}

int fact(long x) {
    if(x<=1) return 1;
    else return x*fact(x-1);
}