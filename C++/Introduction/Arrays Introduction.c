#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size,arr[1000];
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=size-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
