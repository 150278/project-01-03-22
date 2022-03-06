/***********************************************************
Create a class called 'Matrix' containing a constructor that initialises the number of rows and the number of columns of a new Matrix object. The Matrix class has the following information:
1 - number of rows of matrix
2 - number of columns of matrix
3 - elements of matrix (You can use 2D vector)
    The Matrix class has functions for each of the following:
    1 - get the number of rows
    2 - get the number of columns
    3 - set the elements of the matrix at a given position (i,j)
    4 - adding two matrices.
    5 - multiplying the two matrices
    You can assume that the dimensions are correct for the multiplication and addition.
Date : 02-Mar-2022
Abhishek sahu
************************************************************/
#include<iostream>
using namespace std; 

class Matrix
{
        int  m1[100][100], m2[100][100], m3[100][100],m4[100][100];
        int  i, j, r, c ,k;
        public :
        void get_r()
        {
             cout<<"Enter the no.of rows :";
            cin>>r; 
        }
        void get_c()
        {
            cout<<"Enter the no.of columns :";
            cin>>c;
        }
        
        void setij()
        {
            cout<<"\n1st Matrix Input:\n";
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    cout<<"\nmatrix1["<<i<<"]["<<j<<"]=  ";
                    cin>>m1[i][j];
                }
            }
            
            cout<<"\n2nd Matrix Input:\n";
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    cout<<"\nmatrix2["<<i<<"]["<<j<<"]=  ";
                    cin>>m2[i][j];
                }
            } 
            
        }
        
        void addm()
        {
            //Adding Matrices
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    m3[i][j]=m1[i][j]+m2[i][j];
                }
            } 
       
            cout<<"\nAddition of the Matrix is:\n";
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    cout<<"\t"<<m3[i][j];
                }
            cout<<endl;
            } 
            
        }
        void mulm()
        {
            cout<<"\nmultiply of the Matrix is:\n";
            for(i=0;i<r;i++)    
            {    
                for(j=0;j<c;j++)    
                {    
                    m4[i][j]=0;    
                    for(k=0;k<c;k++)    
                    {    
                        m4[i][j]+=m1[i][k]*m2[k][j];    
                    }    
                }    
            }    
            //for printing result    
            for(i=0;i<r;i++)    
            {    
                for(j=0;j<c;j++)    
                {    
                    cout<<"\t"<<m4[i][j];
                }    
                cout<<endl;    
            }
        }
    
};




int main() 
{  
    Matrix ob1;
    ob1.get_r();
    ob1.get_c();
    ob1.setij();
    ob1.addm();
    ob1.mulm();
    
}