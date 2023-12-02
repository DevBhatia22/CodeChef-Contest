
#include <bits/stdc++.h>



int main() {
	// your code goes here
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int BD;
	std::cin>>BD;
	while(BD--){
	    std::vector<int> nums;
	    int size1;
	    std::cin>>size1;
	    while(size1--){
	        int temp;
	        std::cin>>temp;
	        nums.push_back(temp);
	    }
	    std::vector<int> even;
	    std::vector<int> odd;
	    for(int i:nums){
	        if(!(i%2)){
	            even.push_back(i);
	            continue;
	        }
	        odd.push_back(i);
	    }
	    if(even.size() % 2 || odd.size() % 2){
	        std::cout<<-1<<'\n';
	        continue;
	    }
	    std::sort(even.begin(), even.end());
	    std::sort(odd.begin(), odd.end());
	    std::vector<int> answer(nums.size());
	    int j = 0;
	    for(int i = 0; i < even.size() / 2; i++){
	        answer[j] = (even[i] + even[even.size() - i - 1]) / 2;
	        answer[j + nums.size() / 2] = std::abs((even[i] - even[even.size() - i - 1])) / 2;
	        j++;
	    }
	    for(int i = 0; i < odd.size() / 2; i++){
	        answer[j] = (odd[i] + odd[odd.size() - i - 1]) / 2;
	        answer[j + nums.size() / 2] = std::abs((odd[i] - odd[odd.size() - i - 1])) / 2;
	        j++;
	    }
	    for(int i:answer){
	        std::cout<<i<<" ";
	    }std::cout<<'\n';
	}
	std::cout<<std::flush;
	return 0;
}