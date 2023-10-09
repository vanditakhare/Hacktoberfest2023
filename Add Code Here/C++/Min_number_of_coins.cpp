#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
 vector<int> minPartition(int N)
      {
       vector<int>ans;
        int arr[10]={1,2,5,10,20,50,100,200,500,2000};
        for(int i=9;i>=0;i--){
            if(arr[i]<=N){
                N=N-arr[i];
                ans.push_back(arr[i]);
                i++;
                
            }
        }
        return ans;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
         vector<int> numbers = minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
