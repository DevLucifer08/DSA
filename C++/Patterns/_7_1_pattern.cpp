// enter value of n : 5
//     *    
//    ***   
//   *****  
//  ******* 
// *********
// *********
//  ******* 
//   *****  
//    ***   
//     * 

#include<bits/stdc++.h>
using namespace std;
void pattern(int n)
{
    // upper triangle
    for(int i = 0 ; i < n ; i++)
    {
        // space
        for (int j=0 ; j < n-i-1 ; j++)
        {
            
            cout<<" ";
        }

        // star
        for (int j=0 ; j < 2*i + 1 ; j++)
        {
            
            cout<<"*";
        }

        cout<<endl;
    }

    int star = 2*n-1;

    for(int i = 0 ; i < n ; i++)
    {

        
        // space
        for (int j=0 ; j < i ; j++)
        {
            
            cout<<" ";
        }

        // // star
        // for (int j=0 ; j < 2*n - 2*i - 1 ; j++)
        // {
            
        //     cout<<"*";
        // }


        // star
        for (int j=0 ; j < star ; j++)
        {
            
            cout<<"*";
        }
        star -= 2;

        // space
        for (int j=0 ; j < i ; j++)
        {
            
            cout<<" ";
        }

        

        cout<<endl;
    } 

}


int main()
{
    int n;
    cout<<"enter value of n : ";
    cin>>n;
    pattern(n);
}