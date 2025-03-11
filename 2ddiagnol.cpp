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
    
    int sum=0;
    for(int i=0;i<3;i++){
        sum=sum+arr[i][i];

    }
    cout<<"Diagnal sum l->r:"<<sum<<endl;
    
    int sum1=0;
    int x=0;
    for(int j=2;j>=0;j--){
        sum1=sum1+arr[x][j];
        x++;
    }
    cout<<"Diagnal sum r->l:"<<sum1<<endl;
    return 0;
}