long long solve(int N, int K, vector<long long> GeekNum) {
        // code here
        long long res = 0;
        //for k sums
        for(auto i : GeekNum) res = res + i; 
        
        //for maintainig vector k to n-1
        for(int curr = K; curr<N; curr++){
            GeekNum.push_back(res);
            res = res + GeekNum[curr] - GeekNum[curr-K];
            
        }
        
        //result is last element of vector
        return GeekNum[N-1];
    }