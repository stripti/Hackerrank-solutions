#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
 for(int i=0;i<n;i++)
 {
     for(int j=0;j<n;j++)
     {
         if((i+j)>=n-1)
         {
            printf("#");
         }
         else printf(" ");
     }
     printf("\n");
 }

}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
