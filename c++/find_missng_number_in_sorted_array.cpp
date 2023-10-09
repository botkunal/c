#include<iostream>
using namespace std;

int findmissing(int array[],int n){

    int left =0,right =n-1;
    while(left<=right){
        int mid=(left + right)/2;

        if(array[mid] !=mid +1 && array[mid-1]==mid){
            return mid+1;
        }
        if (array[mid]==mid +1)
        left=mid+1;
        else
        right=mid+1;

    }
    return -1;
}
int main(){
    int array[]={1,2,4,5,6,7,9};
    cout<<findmissing(array,8)<<endl;
}

