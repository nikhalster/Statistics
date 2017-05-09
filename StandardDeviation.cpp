#include <cmath>
#include <cstdio>
#include <vector>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n;
    double mean, sum=0, std=0;
    
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++ ){
        cin>>a[i];
        sum = sum + a[i];
    }
    mean = sum / n;

    for(int i=0;i<n;i++){
        std = std + pow(a[i] - mean, 2);
        
    }
    std = pow(std/n, 0.5);
    printf("%.1f",std);

    return 0;
}
