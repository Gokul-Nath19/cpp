/*Write a program to find row-wise and column-wise sum of a matrix.
Expected Output (Sample):
Enter rows and columns: 2 3
Enter matrix elements:
1 2 3
4 5 6
Row 1 sum = 6
Row 2 sum = 15
Column 1 sum = 5
Column 2 sum = 7
Column 3 sum = 9*/

#include<iostream>
using namespace std;

int main(){
    int r,c,a[10][10];
    cout<<"Enter Rows And Columns:";
    cin>>r;
    cin>>c;
    cout<<"Enter Matrix Elemets:";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
        
    }
    for(int i=0;i<r;i++){
        cout<<endl;
        for(int j=0;j<c;j++){
            cout<<a[i][j];
            cout<<" ";
        }
        
    }
    int row_count_1=0,row_count_2=0;
    int col_count_1=0,col_count_2=0;
    
    for(int i=0;i<c;i++){
        row_count_1=row_count_1+a[0][i];
    }
    for(int i=0;i<c;i++){
        row_count_2=row_count_2+a[1][i];
    }
    for(int i=0;i<r;i++){
        col_count_1=col_count_1+a[i][0];
    }
    for(int i=0;i<r;i++){
        col_count_2=col_count_2+a[i][1];
    }
    cout<<"Row 1 Sum:"<<row_count_1;
    cout<<"Row 2 Sum:"<<row_count_2;
    cout<<"Column 1 Sum:"<<col_count_1;
    cout<<"Column 2 Sum:"<<col_count_2;

    


}