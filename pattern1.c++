#include <bits/stdc++.h>

using namespace std;

//Pattern 1 
void pattern1(int n){
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < 4; j++)
        {
            /* code */
            cout<<"* ";
        }
        cout<<endl;
        
    }
    
}

//Pattern 2
void pattern2(int n){
     for (int i = 0; i <= n; i++)
    {
        /* code */
        for (int j = 0; j <= i; j++)
        {
            /* code */
            cout<<"* ";
        }
        cout<<endl;
        
    }
}

//Pattern 3

void pattern3(int n){
    for (int i = 1; i <= n; i++)
    {
        /* code */
        for (int j = 1; j <= i; j++)
        {
            /* code */
            cout<<j<<" ";
        }
        cout<<endl;
        
    }
    
}

//Pattern 4
void pattern4(int n){
    for (int i = 1; i <= n; i++)
    {
        /* code */
        for (int j = 1; j <= i; j++)
        {
            /* code */
            cout<<i<<" ";
        }
        cout<<endl;
        
    }
    
}

void pattern5(int n){
    for (int i = 1; i <= n; i++)
    {
        /* code */
        for (int j = 1; j <= n-(i-1); j++)
        {
            /* code */
            cout<<"*"<<" ";
        }
        cout<<endl;
        
    }
    
}

void pattern6(int n){
    for (int i = 1; i <= n; i++)
    {
        /* code */
        for (int j = 1; j <= n-(i-1); j++)
        {
            /* code */
            cout<<j<<" ";
        }
        cout<<endl;
        
    }
    
}

void pattern7(int n){
    //space
    for(int i = 1; i <= n; i++){
        for (int j = 1; j <= i-1; j++)
        {
            /* code */
            cout<<" ";
        }
        //star
        for (int k = 1; k <= 2*n - (2*i-1); k++)
        {
            /* code */
            cout<<"*";
        }
          for (int l = 1; l <= i-1; l++)
        {
            /* code */
            cout<<" ";
        }
        cout<<endl;
        
        
    }

   

    
}

void pattern8(int n){
    //space
    for(int i = 1; i <= n; i++){
        for (int j = 1; j <= (n-i); j++)
        {
            /* code */
            cout<<" ";
        }
        //star
        for (int k = 1; k <=  (2*i-1); k++)
        {
            /* code */
            cout<<"*";
        }
          for (int l = 1; l <= (n-i); l++)
        {
            /* code */
            cout<<" ";
        }
        cout<<endl;
        
        
    }
    for(int i = 1; i <= n; i++){
        for (int j = 1; j <= i-1; j++)
        {
            /* code */
            cout<<" ";
        }
        //star
        for (int k = 1; k <= 2*n - (2*i-1); k++)
        {
            /* code */
            cout<<"*";
        }
          for (int l = 1; l <= i-1; l++)
        {
            /* code */
            cout<<" ";
        }
        cout<<endl;
        
        
    }

   

    
}

void pattern9(int n){
    //Upper Triangle
    for(int i = 1;i <= n; i++){
        for (int j = 1; j <= i; j++)
        {
            /* code */
            cout<<"*";
        }
        
        cout<<endl;
    }

    // Triangle

    for(int i = 1;i <= n; i++){
        for (int j = 1; j <= n-i; j++)
        {
            /* code */
            cout<<"*";
        }
        
        cout<<endl;
    }
}

void pattern10(int n){

    int start = 1;
    
    for (int i = 0; i <= n; i++)
    {
        /* code */
        if (i % 2 == 0)
        {
            /* code */
            start = 0;
        }
        else
        {
            start = 1;
        }
        for (int j = 0; j <= i; j++)
        {
            /* code */
            cout<<start;

            start = (!start);
        }
        cout<<endl;
        
        
    }
    
}

void pattern11(int n){

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            /* code */
            cout<<j;
        }
        for (int j = 1; j <= (2*n - 2*i); j++)
        {
            /* code */
            cout<<" ";
        }

        /* code */
        for (int j = i; j >= 1; j--)
        {
            /* code */
            cout<<j;
        }
        cout<<endl;
    }
    
}

void pattern12(int n){

    int Number = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            /* code */
            cout<<Number<<" ";
            Number++;
        }
        cout<<endl;
        
        /* code */
    }
    
}

int main(){
    /* pattern1(); */
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {

        /* code */
        int n;
        cin>>n;
        pattern12(n);

    }
    

}

