#include <cmath>
#include <cstdio>
#include <vector>
#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, median;
    double upperMedian, lowerMedian;
    std::vector< int > arr;
    
    cin>>n;
    int element[n], freq[n];
    for(int i=0;i<n;i++){
        cin>>element[i];    
    }
    for(int i=0;i<n;i++){
        cin>>freq[i];    
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<freq[i];j++)
            arr.push_back(element[i]);
    }
    n = arr.size();
    sort (arr.begin(), arr.end());
    int upper[n/2];
    int lower[n/2];
    if(n % 2 == 1){
        median = arr[n/2];
        for(int i=0;i<(n/2);i++){
            upper[i] = arr[i];
            lower[i] = arr[i + (n/2) + 1]; //+1 if odd

        }
    }
    else{
        median = (arr[n/2] + arr[(n/2) - 1]) / 2;
            for(int i=0;i<(n/2);i++){
            upper[i] = arr[i];
            lower[i] = arr[i + (n/2)];

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
    printf("%.1f",lowerMedian - upperMedian);

    return 0;
}

