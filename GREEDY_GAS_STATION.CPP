https://www.interviewbit.com/problems/gas-station/
int Solution::canCompleteCircuit(const vector<int> &A, const vector<int> &B) {
    int current=0;
    int total_fuel=0,total_cost=0;
    int start=0;
    for(int i=0;i<A.size();i++){
        total_fuel+=A[i];
    }
    //calculating total_fuel
    for(int i=0;i<A.size();i++){
        total_cost+=B[i];
    }
    //calculating total_cost
    if(total_fuel<total_cost){
        return -1;
    }
    //if total_fuel<total_cost then no traversal is possible.
    for(int i=0;i<A.size();i++){
        current+=(A[i]-B[i]);
        if(current<0){
            start=i+1;
            current=0;
        }
        //adding A[i]-B[i] to get current.
        //if amount[i]<cost[i] then we can't take it.
        //or if fuel[i]<cost[i] then we can't take it.
        //and we check for next index i.e. (i+1)
    }
    return start;
}
//https://www.youtube.com/watch?v=HQpDS9wuzws
