#include<iostream>
using namespace std;
int noOfFactors(int n){
    int cnt;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cnt++;
        }

    }
    return cnt;
}
int main(){
    int a;
    cin>>a;
    vector<int> arr;
    int j=0;
    for(int i=1;i<=a;i++){
        if(noOfFactors(i)==3){
            arr.push_back(i);
        }

    }cout<<"the ans="<<endl;
    int n=arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}