#include<iostream>
using namespace std;

int n, v[100], i, j;
int ord(int i);
int ordonare(int j, int i);

int main() {
    cout<<"n="; cin>>n;
    for(i=1;i<=n;i++) cin>>v[i];
    for(i=1;i<=n;i++) cout<<v[i];
    ord(n-1);
    }

int ordonare(int j, int i) {
    int aux;
    if(j>=0) {
        if(v[i]<=v[j]) {
            aux=v[i];
            v[i]=v[j];
            v[j]=aux;
        }
        ordonare(j-1, i);
    }
}
int ord(int i) {
    int b;
    if(i>0) {
        ordonare(i-1,i);
        ord(i-1);
    }
}