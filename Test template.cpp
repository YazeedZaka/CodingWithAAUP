#include <bits/stdc++.h>
using namespace std;
#define GO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;
#define endl "\n";

/*
                ███████  █████  ██   ██  █████  ██████  ███    ██ ███████ ██   ██
                   ███  ██   ██ ██  ██  ██   ██ ██   ██ ████   ██ ██      ██   ██
                  ███   ███████ █████   ███████ ██████  ██ ██  ██ █████   ███████
                 ███    ██   ██ ██  ██  ██   ██ ██   ██ ██  ██ ██ ██      ██   ██
                ███████ ██   ██ ██   ██ ██   ██ ██   ██ ██   ████ ███████ ██   ██
*/


main()
{
    GO
    int t=2,tt,n,k,x;

    cin>>t;

    while(t--)
    {
        bool flag= false;
        int count=0;

        cin>>n>>k;

        vector <vector<int>> v(n);

        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
            {
                cin>>x;
                v[i].push_back(x);
            }
        for(int i=0;i<n/2;i++)
        {
            for(int j=0;j<n;j++)
            {
                int a = n-i-1;
                int b = n-j-1;

                if(a!=i&&b!=j)
                if(v[i][j]!=v[a][b])
                    count++;
            }
        }

        if(n%2)
        {
            for(int i=n/2,j=0;j<(n/2);j++)
            {
                int a = n-i-1;
                int b = n-j-1;

                if(a!=i&&b!=j)
                if(v[i][j]!=v[a][b])
                    count++;
            }
        }


        count*=2;

        if(k==count)
            flag = true;
        else
        if(k>count)
        {
            count = k-count;


            if((count&(count-1))==0)
                flag = true;
        }

        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO"<<endl;
    }




}
