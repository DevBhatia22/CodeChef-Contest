#include <iostream>
#include <bits/stdc++.h>



int main() {
	// your code goes here
	int BD;
	std::cin>>BD;
	while(BD--){
	    int total;
	    int friends;
	    std::cin>>total>>friends;
	    int temp = total / (friends + 1);
	    temp = total - (temp * friends);
	    std::cout<<temp<<'\n';
	}
	return 0;
}
