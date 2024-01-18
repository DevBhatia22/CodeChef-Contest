#include <iostream>
#include <bits/stdc++.h>



int main() {
	// your code goes here
	int BD;
	std::cin>>BD;
	while(BD--){
	    int length;
	    std::cin>>length;
	    std::vector<int> vector(length, 0);
	    for(int i = 0; i < length; i++){
	        std::cin>>vector[i];
	    }
	    if(length <= 2){
	        std::cout<<-1<<'\n';
	        continue;
	    }
	    int even;
	    int odd;
	    int one;
	    if(length % 2 != 1){
	        even = length;
	        odd = length - 3;
	        one = length - 1;
	    }
	    else{
	        one = length;
	        even = length - 1;
	        odd = length - 2;
	    }
	    for(int i:vector){
	        if(i == 1){
	            std::cout<<one<<" ";
	        }
	        else if(i % 2 != 1){
	            std::cout<<even<<" ";
	            even -= 2;
	        }
	        else{
	            std::cout<<odd<<" ";
	            odd -= 2;
	        }
	    }
	    std::cout<<'\n';
	}
	return 0;
}
