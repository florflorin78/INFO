//Scrieti o functie recursiva pentru calculul produsului elementelor unui tablou unidimensional cu n nr reale
#include<iostream>
using namespace std;

int n, v[100], i;
int produsv(int v[], int n);

int main() {
    cout<<"n="; cin>>n;
    for(i=1;i<=n;i++) cin>>v[i];
    cout<<"Produsul elem. vectorului este "<<produsv(v,n);
}

int produsv(int v[], int n) {
    if(n==0) return 1;
    else return v[n]*produsv(v,n-1);
}