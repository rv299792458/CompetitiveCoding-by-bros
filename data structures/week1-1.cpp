#include <bits/stdc++.h>

using namespace std;

void inorder(int arr[][3],int pos){
    if(arr[pos][1]!=-1){
        inorder(arr,arr[pos][1]);
    }
    cout << arr[pos][0]<<" ";
    if(arr[pos][2]!=-1){
        inorder(arr, arr[pos][2]);
    }
}
void preorder(int arr[][3],int pos){
    if(arr[pos][1]!=-1){
        preorder(arr,arr[pos][1]);
    }
    if(arr[pos][2]!=-1){
        preorder(arr, arr[pos][2]);
    }
    cout << arr[pos][0]<<" ";
    
}
void postorder(int arr[][3], int pos)
{
    cout << arr[pos][0]<<" ";
    if (arr[pos][1] != -1)
    {
        postorder(arr, arr[pos][1]);
    }
    if (arr[pos][2] != -1)
    {
        postorder(arr, arr[pos][2]);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    int arr[n][3];
    for (int i = 0; i < n; i++){
        cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
    }
    inorder(arr,0);
    cout<<"\n";
    postorder(arr, 0);
    cout<<"\n";
    preorder(arr, 0);
}
