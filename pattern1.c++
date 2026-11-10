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

//Pattern 5

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

//Pattern 6

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

void pattern13(int n){
    for(int i = 1;i <= n; i++){
        int x = 65;
        for(int j = 1; j <= i ; j++)
        {
            /* code */
            char str = char(x);

            cout << str;

            x = x + 1;
            
        }
        cout<< endl;
    }
        
}

void pattern14(int n){
    for(int i = 1;i <= n; i++){
        int x = 65;
        for(int j = 1; j <= n - (i - 1) ; j++)
        {
            /* code */
            char str = char(x);

            cout << str << "";

            x = x + 1;
            
        }
        cout<< endl;
    }
        
}

void pattern15(int n){

    int x = 65;
    for(int i = 1;i <= n; i++){
       
        for(int j = 1; j <= i ; j++)
        {
            /* code */
            char str = char(x);

            cout << str << " ";

        
            
        }
        x = x + 1;
        cout<< endl;
    }
    
        
}

//Pattern 16

void pattern16(int n){
    for(int i = 1; i <= n; i++){
        
        //spaces
        for (int j = 1; j <= (n - i); j++)
        {
            /* code */
            cout<< " ";
        }
        char X = 'A';
        int BreakPoint = ((2*i) / 2);
        //Character
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            /* code */
            
            cout<< X ;
            if( j < BreakPoint) X++;
            else X--;
            
        }
        //spaces
        for (int j = 1; j <= (n - i); j++)
        {
            /* code */
            cout<< " ";
        }
        cout<< endl;
        
    }
}

//Pattern 17

void pattern17(int n){
    for(int i = 1 ; i <= n ; i++){
        int num = 65 + (n - (i));
        for (int j = 1; j <= i; j++)
        {
            char x = char(num);
            /* code */
            cout<< x;
            num = num + 1;
        }
        cout<< endl;
    }
}

void pattern18(int count){
    for (int i = 1; i <= count; i++)
    {
        //stars
        //Upper Stars
        for (int j = 1; j <= count-(i-1); j++)
        {
            /* code */
            cout<< "*";
        }
        //Spaces
        for (int j = 1; j <= 2*(i-1); j++)
        {
            /* code */
            cout<< " ";
        }
        //stars
        for (int j = 1; j <= count-(i-1); j++)
        {
            /* code */
            cout<< "*";
        }

        cout<<endl;
        
    }
     for (int i = 1; i <= count; i++)
    {
        //stars
        //Lower Stars
        for (int j = 1; j <= i; j++)
        {
            /* code */
            cout<< "*";
        }
        //Spaces
        for (int j = 1; j <= 2*(count-i); j++)
        {
            /* code */
            cout<< " ";
        }
        //stars
        for (int j = 1; j <= i; j++)
        {
            /* code */
            cout<< "*";
        }

        cout<<endl;
        
    }
    
}

void pattern19(int count){
    int num = 
    for (int i = 1; i <= 2 * count - 1; i++)
    {
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
        pattern19(n);

    }
    

}

