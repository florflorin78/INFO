#include<iostream>
using namespace std;

char c[15];
int palindrom(char c[]);

int main() {
    cin>>c;
    if(palindrom(c)) 
        cout<<"Este palindrom";
    else cout<<"Nu este palindrom";
}

int palindrom(char c[]) {
    if(strlen(c)<=1) return 1;
    else if(c[0]!=c[strlen(c)-1]) return 0;
    else {
        strcpy(c, c+1);
        c[strlen(c)-1]=0;
        return palindrom(c);
    }
}