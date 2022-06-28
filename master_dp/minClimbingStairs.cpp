class Solution {
public:

	int helper(vector<int>& cost, int start, int end){
		if(start>=end){
			return cost[end];
		}
		int left = helper(cost, start+1,end) + abs(cost[start]-cost[start+1]);
		int right = INT_MAX;
		if(start+2<end){
			right = helper( cost, start+2,end) + abs(cost[start]-cost[start-2]);
		}

		return min(left,right);
	}

    int minCostClimbingStairs(vector<int>& cost) {
        return helper(cost, 0 ,cost.size()-1);
    }
};