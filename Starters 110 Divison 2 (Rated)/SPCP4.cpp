#include <iostream>
#include <bits/stdc++.h>



int main() {
	// your code goes here
	int BD;
	std::cin>>BD;
	while(BD--){
	    int total, boys, girls, k;
	    std::cin>>total>>boys>>k;
	    girls = total - boys;
	    boys %= k;
	    girls %= k;
	    total = std::abs(girls - boys);
	    std::cout<<total<<std::endl;
	}
	return 0;
}
