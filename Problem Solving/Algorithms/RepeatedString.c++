#include <bits/stdc++.h>
#include<string.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) 
{
    long ans=0;
    int i,no=0,l;
    l=s.size();
    for(i=0;i<l;i++)
    {
        if(s[i]=='a')
        {
            no+=1;
        }
    }
    ans=n/l*no;
    for(i=0;i<n%l;i++)
    {
        if(s[i]=='a')
        {
            ans+=1;
        }
    }
    return ans;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
