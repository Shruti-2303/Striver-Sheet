//Optimal Approach

vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int xor1;
    int n = A.size();
    int i;
    int x = 0;
    int y = 0;
    int set_bit_no;

    xor1 = A[0];
    for(i=1;i<n;i++){
        xor1 = xor1 ^ A[i];
    }
    for(i=1;i<=n;i++){
        xor1 = xor1 ^ i;
    }

    set_bit_no = xor1 & ~(xor1 - 1);

    for(i=0;i<n;i++){
        if(A[i] & set_bit_no){
            x = x ^ A[i];
        }
        else{
            y = y ^ A[i];
        }
    }
      for(i=0;i<n;i++){
        if(i & set_bit_no){
            x = x ^ i;
        }
        else{
            y = y ^ i;
        }
    }
    int x_count = 0;
    for(i=0;i<n;i++){
        if(A[i]==x){
            x_count++;
        }
    }
    if(x_count==0)
        return {y,x};
    return {x,y};
}

//Approach 2
vector<int>missing_repeated_number(const vector<int> &A) {
    long long int len = A.size();

    long long int S = (len * (len+1) ) /2;
    long long int P = (len * (len +1) *(2*len +1) )/6;
    long long int missingNumber=0, repeating=0;
     
    for(int i=0;i<A.size(); i++){
       S -= (long long int)A[i];
       P -= (long long int)A[i]*(long long int)A[i];
    }
     
    missingNumber = (S + P/S)/2;

    repeating = missingNumber - S;

    vector <int> ans;

    ans.push_back(repeating);
    ans.push_back(missingNumber);

    return ans;
}