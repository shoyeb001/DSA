//max sum subarray of size k

vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
     list<long long>neg;
     vector<long long>res;
     int i=0; int j=0;
     while(j<N){
         if(A[j]<0){
             neg.push_back(A[j]);
         }
         if(j-i+1<K){
             j++;
         }

         else if(j-i+1==K){
            if(neg.size()==0){
                 res.push_back(0);
            }else{
                res.push_back(neg.front());
                if(A[i]==neg.front()){
                 neg.pop_front();
                } 
            }
            
             i++;
             j++;
         }
     }
     return res;
                                                 
 }
