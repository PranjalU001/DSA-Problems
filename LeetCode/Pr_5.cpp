#include<iostream>
using namespace std;
int main(){
    int arr[6] ={2,4,5,6,7,8};
    int str = 0;
    int end = 5;
    for (int i = 0; i < 6; i++)
    {   
        if (arr[str]+arr[end]>8)
        {
            end--;
        }
        else if (arr[str]+arr[end]<8)
        {
            str --;
        }
        else if (arr[str]+arr[end]==8)
        {
            cout<<str<<" "<<end;
            break;
        }
        
    }
    
}