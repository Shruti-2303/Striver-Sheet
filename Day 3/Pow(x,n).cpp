#include<bits/stdc++.h>

using namespace std;
    double myPow(double x, int n) {
        double ans = 1.0;
        long long a = n;
        if(a<0) a=-1*a;
        while(a>0){
            if(a%2==0){
                x = x * x;
                a = a/2;
            }
            else{
                ans = ans * x;
                a = a-1;  
            }
        }
        if(n<0){
            ans = (double)1/(double)ans;
        }
        return ans;
        
    }
int main() {
  cout << myPow(2, 10) << endl;
}