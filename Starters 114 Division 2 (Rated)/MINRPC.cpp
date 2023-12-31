#include <iostream>
#include <bits/stdc++.h>



int main() {
	// your code goes here
	int BD;
	std::cin>>BD;
	while(BD--){
	    int n;
	    std::cin>>n;
	    std::vector<char> vec(n, '0');
	    for(int i = 0; i < n; i++){
	        std::cin>>vec[i];
	    }
	    int count = 0;
	    int win = vec.size() / 2;
	    win++;
	    int i;
	    for(i = 0; i < n; i++){
	        if(i < vec.size() - win){
	            std::cout<<'P';
	            if(vec[i] == 'R'){
	                win--;
	            }
	        }
	        else{
	            if(vec[i] == 'R'){
	                std::cout<<'P';
	                win--;
	            }
	            else if(vec[i] == 'P'){
	                std::cout<<'S';
	                win--;
	            }
	            else if(vec[i] == 'S'){
	                std::cout<<'R';
	                win--;
	            }
	        }
	    }
	    std::cout<<'\n';
	}
	return 0;
}
