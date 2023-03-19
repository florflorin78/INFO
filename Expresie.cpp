#include<iostream>
using namespace std;

int n;
float expresie(int i);

int main() {
    cout<<"n="; cin>>n;
    cout<<"Expresia este "<< expresie(n);
}

float expresie(int i) {
    if(i==0) return 0;
    else return (float)i/((i+1)*(i+2)) + expresie(i-1);
}