#include <iostream>
#include <bits/stdc++.h>



int main() {
	// your code goes here
	int BD;
	std::cin>>BD;
	while(BD--){
	    int length;
	    std::string string;
	    std::cin>>length;
	    std::cin>>string;
	    bool cont = false;
	    for(int i = 0; i < length - 1; i++){
	        if(cont){
	            std::cout<<string[i];
	            continue;
	        }
	        if(string[i] > string[i + 1]){
	            cont = true;
	            continue;
	        }
	        else{
	            std::cout<<string[i];
	        }
	    }
	    if(cont){
	        std::cout<<string[length - 1];
	    }
	    std::cout<<'\n';
	}
	return 0;
}
