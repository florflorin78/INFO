#include<iostream>
using namespace std;

int n, i, a[20];
int sumcif(int i);

int main() {
cout<<"n="; cin>>n;
for(i=1;i<=n;i++) {
    cout<<"a["<<i<<"]="; cin>>a[i];
}
cout<<"Suma este "<<sumcif(n);

}

int sumcif(int i) {
    if(i==0) return 0;
    else return a[i]+sumcif(i-1);
}