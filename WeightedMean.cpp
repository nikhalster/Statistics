#include <cmath>
#include <cstdio>
#include <vector>
#include <iomanip>
#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    float totalw=0.0, m=0.0, result=0.0;
    float x[n], w[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    for(int i=0;i<n;i++){
        cin>>w[i];
        totalw = w[i] + totalw;
    }
    
    for(int i=0;i<n;i++){
        m = (x[i] * w[i]) + m;
    }
    result = (m/ totalw);

    printf("%.1f", result);    
    
    return 0;
}
