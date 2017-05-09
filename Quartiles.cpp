#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,median, lowerMedian, upperMedian;
    int upper[100], lower[100];
    cin>>n;
    int list[n];
    for(int i=0;i<=n;i++){
        cin>>list[i];            
    }
    sort(list, list+n);
    
    if(n % 2 == 1){
        median = list[n/2];
        for(int i=0;i<(n/2);i++){
            upper[i] = list[i];
            lower[i] = list[i + (n/2) + 1]; //+1 if odd

        }
    }
    else{
        median = (list[n/2] + list[(n/2) - 1]) / 2;
            for(int i=0;i<(n/2);i++){
            upper[i] = list[i];
            lower[i] = list[i + (n/2)];

        }
    }
    
            
    if((n/2) % 2 == 1){
        upperMedian = upper[(n/2) / 2];
        lowerMedian = lower[(n/2) / 2];
    }
    else{
        upperMedian = (upper[(n/2)/2] + upper[(n/2)/2 - 1]) / 2;
        lowerMedian = (lower[(n/2)/2] + lower[(n/2)/2 - 1]) / 2;

    }

    cout<<upperMedian<<endl;
    cout<<median<<endl;       
    cout<<lowerMedian<<endl;    
    
    
    return 0;
}
