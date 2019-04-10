#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,q,k,val,i,j,r,s;
    scanf("%d%d",&n,&q);
    vector<int> a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&k);
        for(j=0;j<k;j++)
        {
            scanf("%d",&val);
            a[i].push_back(val);
        }
    }
    for (i = 0; i < q; i++)
    {
         cin >> r >> s;
        cout << a[r][s] << endl;
    }       
        
    return 0;
}

