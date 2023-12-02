#include <iostream>
#include <bits/stdc++.h>



int main() {
	// your code goes here
	int BD;
	std::cin>>BD;
	while(BD--){
	    int sp, tp;
	    std::cin>>sp>>tp;
	    std::cout<<std::max(sp, tp) * 2 - 1<<std::endl;
	}
	return 0;
}
