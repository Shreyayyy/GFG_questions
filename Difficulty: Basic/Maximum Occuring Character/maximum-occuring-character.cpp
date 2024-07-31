//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends




class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    { int s=0;
    char k=str[0];
    int count=0;
        for( int i=0 ; i < str.size() ; i++)
        {
          count=0;
            for(int j=i+1 ; j<str.size() ; j++)
            {
                if(str[j]==str[i])
                {
                    count++;
                }
            }
             
            if(count>s)
            {
                s=count;
               k=str[i];
            }
            else if(count==s)
            {
               if(k>str[i])
               {
                   k=str[i];
               }
            }
            
        }
        return k;
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends