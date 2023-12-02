#include <iostream>
#include <bits/stdc++.h>



int main() {
	// your code goes here
	int BD;
	std::cin>>BD;
	while(BD--){
	    std::vector<int> nums;
	    int size;
	    std::cin>>size;
	    while(size--){
	        int temp;
	        std::cin>>temp;
	        nums.push_back(temp);
	    }
	    int answer = 0;
	    for(int i:nums){
	        answer = answer ^ i;
	    }
	    if(answer == 0){
	        std::cout<<0<<std::endl;
	    }
	    else{
	        int min = answer;
	        for(int i:nums){
	            int temp = answer ^ i;
	            if(temp < min){
	                min = temp;
	            }
	        }
	        std::cout<<min<<std::endl;
	    }
	}
	return 0;
}
