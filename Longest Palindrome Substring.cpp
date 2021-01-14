#include <bits/stdc++.h>
using namespace std;
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    if(s=="")
	    {cout<<0<<endl;
	    continue;}
	    int low,high;
	    int n=s.length();
	    int maxlen=1;
	    int start=0;
	    for(int i=1;i<n;i++)
	    {
	        low=i-1;
	        high=i;
	        while(low>=0 && high<n &&s[low]==s[high])
	        {
	            if(maxlen< (high-low+1))
	            {
	                maxlen=high-low+1;
	                start=low;
	            }
	            low--;
	            high++;
	        }
	        
	        
	         low=i-1;
	        high=i+1;
	        while(low>=0 && high<n &&s[low]==s[high])
	        {
	            if(maxlen< (high-low+1))
	            {
	                maxlen=high-low+1;
	                start=low;
	            }
	            low--;
	            high++;
	        }
	        
	    }
	    string p="";
	    for(int j=start;j<start+maxlen;j++)
	    p=p+s[j];
	    cout<<p<<endl;
	}
	return 0;
}