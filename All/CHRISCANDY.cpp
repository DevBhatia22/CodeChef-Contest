#include <iostream>
#include <bits/stdc++.h>



int main() {
	// your code goes here
	int BD;
	std::cin>>BD;
	while(BD--){
	    int n;
	    std::cin>>n;
	    std::vector<int> vec(n, 0);
	    for(int i = 0; i < n; i++){
	        std::cin>>vec[i];
	    }
	    int max = vec[0];
	    int count = 0;
	    for(int i = 1; i < n; i++){
	        if(max < vec[i]){
	            max = vec[i];
	        }
	        else{
	            count++;
	        }
	    }
	    std::cout<<count<<'\n';
	}
	return 0;
}
