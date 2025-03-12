#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Enter for row : "<<i+1<<" column : "<<j+1<<endl;
            cin>>arr[i][j];
        }
    }
    cout<<"Array :"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Sum of rows :"<<endl;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum=sum+arr[i][j];
        }
        cout<<i+1<<" row : "<<sum<<endl;
    }
    cout<<"Sum of columns :"<<endl;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum=sum+arr[j][i];
        }
        cout<<i+1<<" column : "<<sum<<endl;
    }
}
