#include <bits/stdc++.h>
#include<stdlib.h>

using namespace std;

// Complete the diagonalDifference function below.
int diagonalDifference(int n,vector<vector<int>> arr) 
{
    int d1=0,d2=0,res;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j) d1+=arr[i][j];
            if((i+j)==n-1) d2+=arr[i][j];
            
        }
    }
    res=abs(d1-d2);
    return res;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<int>> arr(n);
    for (int i = 0; i < n; i++) {
        arr[i].resize(n);

        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = diagonalDifference(n,arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
