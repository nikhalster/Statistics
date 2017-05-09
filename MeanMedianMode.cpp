#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    int count = 1;
    int max = 1;
    double mean=0.0, median=0.0, mode=0.0;
    cin>>n;
    double list[n];
    for(int i=0;i<n;i++){
        cin>>list[i];
    }
    sort(list, list+n);

    for(int i=0;i<n;i++){
        mean = list[i] + mean;
    }
   
    if(n%2==0){
        median = (list[n/2] + list[n/2 - 1]) / 2;
    }else{
        median = list[n/2];
    }
    
    mode = list[0];

    for(int i=0;i<n;i++){
        if(list[i] == list[i+1]){
            count++;
        }
        else{
            if(count>max){
                max = count;
                mode = list[i];
            }
            count = 1;
        }
    }
    
    cout<<mean/n<<endl<<median<<endl<<mode;
 
    return 0;
}

