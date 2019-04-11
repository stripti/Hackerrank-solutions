#include <map>
#include <stdio.h>

using namespace std;


int main(){
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    int s1=0,s2=0;
    if(a0>b0) s1++;
    else if(b0>a0) s2++;
    if(a1>b1) s1++;
    else if(b1>a1) s2++;
    if(a2>b2) s1++;
    else if(b2>a2) s2++;
    cout<<s1<<" "<<s2;
    return 0;
}


