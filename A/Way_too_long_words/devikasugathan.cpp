# include<bits/stdc++.h>
using namespace std;
int main()
{	  int  n;
    string s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        int r= s.length();
        if(r>10)
        {
            int l=r-2;
        cout<<s[0]<<l<<s[r-1]<<endl;
        }
        else
        {
            cout<<s<<endl;
        }


    }

}
