#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool search(int arr[],int n,int key){
    for(int i=0;i<n;i++){
    if(arr[i]==key){
        return 1;
        
    }
    }

   return 0;
   
    
}
int main(){
    int arr[6]={2,7,9,5,1,4};
    cout<<"enter the element"<<endl;
    int key;
    cin>>key;
    bool found=search(arr,6,key);
    if(found){
        cout<<"key is present";
    }
        else{
        cout<<"key is absent";
    }
}
