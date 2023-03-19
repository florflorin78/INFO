#include<iostream>
#include<math.h>
using namespace std;

int n;
int an(int n);
int bn(int n);
double a, b;

int main() {
cout<<"n= , a=, b="; cin>>n>>a>>b;
cout<<an(n)<<" "<<bn(n);
}

int an(int n) {
    if(n<=0) return a;
    else return (an(n-1)+bn(n-1))/2;
}
int bn(int n) {
    if(n<=0) return b;
    else return sqrt(an(n-1)*bn(n-1));
}