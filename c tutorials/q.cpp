// 2-D Array
# include<iostream>
using namespace std;
void spiralMatrix(int mat[][4],int n,int m){
    int srow=0,scol=0;
    int erow=n-1,ecol=m-1;
    while(srow<=erow&&scol<=ecol){
    // top
    for(int j=scol;j<=ecol;j++){
        cout<<mat[srow][j]<<" ";
    }
    //right
    for(int i=srow+1;i<=erow;i++){
        cout<<mat[i][ecol]<<" ";
    }
    //bottom
    for(int j=ecol-1;j>=scol;j--){
        if(srow==erow){
            break;
        }
        cout<<mat[erow][j]<<" ";
    }
    //left
    for(int i=erow-1;i>=srow+1;i--){
        if(scol==ecol){
            break;
        }
        cout<<mat[i][scol]<<" ";
    }
    srow++,scol++;
    erow--,ecol--;
}
}
int digonalSum(int mat[][3],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum +=mat[i][j];
            }else if(j==n-i-1){
                sum +=mat[i][j];
            }
        }

    }
    cout<<"sum="<<sum;
    return sum;
}
 bool search(int mat[][4],int n,int m,int key){
    int i=0,j=m-1;
    while(i<n&&j>=0){
        if(mat[i][j]==key){
            cout<<"found at cell ("<<i<<","<<j<<")";
            return true;
        }else if(mat[i][j]>key){
            j--;}
            else{
                i++;
            }
        }
            cout<<"key not found";
            return false;
    }
 
int main(){
    int mat[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    
    cout<<mat<<"="<<&mat[0][0]<<endl;
    cout<<mat+1<<"!="<<&mat[0][1]<<endl;
    
    return 0;
}