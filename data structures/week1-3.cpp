#include <bits/stdc++.h>

using namespace std;
bool flag = true;
int n;

bool find(int arr[][3], int pos, int min, int max)
{
    if (arr[pos][1] == -1 || arr[pos][1] == -1)
    {
        return true;
    }
    if (arr[pos][1] != -1)
    {
        if (arr[arr[pos][1]][0] < arr[pos][0] && arr[arr[pos][1]][0] > min)
        {
            // cout<<min<<" "<<max<<"\n";
            find(arr, arr[pos][1], min, arr[pos][0]);
        }
        else
        {
            // cout << arr[arr[pos][2]][0] << " " << max << " " << 1<<"  ";
            return false;
        }
    }
    if (arr[pos][2] != -1)
    {
        if (arr[arr[pos][2]][0] < max && arr[arr[pos][2]][0] >= arr[pos][0])
        {
            // cout<<min<<" "<<max<<"\n";
            find(arr, arr[pos][2], arr[pos][0], max);
        }
        else
        {
            // cout << pos<< " "<< arr[arr[pos][2]][0]<<" " << min << " "<< max<< " " << 2<<"  ";
            return false;
        }
    }
    // if(pos==-1){return true;}
    // if(arr[pos][0]>=max||arr[pos][0]<min){
    //     return false;
    // }
    // return find(arr,arr[pos][1],min,arr[pos][0]) && find(arr,arr[pos][2],arr[pos][0],max);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    int arr[n][3];
    if (n == 0 || n == 1)
    {
        cout << "CORRECT";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
        }
        int min = INT_MIN, max = INT_MAX;
        flag = find(arr, 0, min, max);
        if (flag == false)
        {
            cout << "INCORRECT";
        }
        else
        {
            cout << "CORRECT";
        }
    }
}

// Kill Me Plz