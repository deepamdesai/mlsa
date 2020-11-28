#include<iostream>
using namespace std;
int main()
{   int n;
    cin>>n;

    int a[n], b[n];

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    int diff = 0;
    int prv_diff = -1  ;
    int again_zero = 0;
    int no_done = 0;

    for (int l = 0; l < n; l++) 
     {
        diff = b[l] - a[l];        
        if (diff == 0)
        {
            if (prv_diff == -1)
            {}
            else
            {
                again_zero = 1 ;
            }
        }
        else if(diff < 0)
        {
                cout<<"NO"<<endl;
                no_done = 1;
                break;
        }
        else
        {
            if (prv_diff == -1)
            {
                prv_diff = diff;
            }
            else if(again_zero == 1)
            {
                cout<<"NO"<<endl;
                no_done = 1;
                break;
            }
            else
            {
                if (prv_diff != diff)
                { 
                  cout<<"NO"<<endl;
                  no_done = 1;
                  break;
                }
            }               
        }       
     }
    if (no_done == 0)
    {
        cout<<"YES"<<endl; 
    }
return 0;
}
