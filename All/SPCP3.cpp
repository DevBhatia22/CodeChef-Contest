#include <iostream>
#include <bits/stdc++.h>



int main() {
	// your code goes here
	int BD;
	std::cin>>BD;
	while(BD--){
        int answer1 = 0, answer2 = 0;
	    int chefMarble, friendMarble;
	    std::cin>>chefMarble>>friendMarble;
	   // std::cout<<chefMarble % friendMarble<<std::endl;
	    if(friendMarble == 1 || chefMarble % friendMarble == 0){
	        std::cout<<0<<std::endl;
	    }
	    else{
	        int temp1 = chefMarble, temp2 = friendMarble;
	        while(temp1 > 0 && (temp1 % temp2)){
	            answer1++;
	            temp1--;
	            temp2++;
	        }
	        if(temp1 == 0){
	            answer1 = INT_MAX;
	        }
	        while(friendMarble >= 1 && (chefMarble % friendMarble)){
	            answer2++;
	            chefMarble++;
	            friendMarble--;
	        }
	        std::cout<<std::min(answer1, answer2)<<std::endl;
	    }
	}
	return 0;
}
