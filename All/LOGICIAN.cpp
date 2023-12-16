#include <iostream>
#include <bits/stdc++.h>



int main() {
	// your code goes here
	int BD;
	std::cin>>BD;
	while(BD--){
	    int n;
	    std::cin>>n;
	    std::string str;
	    std::cin>>str;
	    bool yes = true;
	    for(int i = 0; i < n; i++){
	        if(yes){
	            if(i == n - 1 && str[i] == '1'){
	                std::cout<<"YES"<<'\n';
	                break;
	            }
	            else if(str[i] == '0'){
	                std::cout<<"NO"<<'\n';
	                yes = false;
	            }
	            else{
	                std::cout<<"IDK"<<'\n';
	            }
	        }
	        else{
	            std::cout<<"NO"<<'\n';
	        }
	    }
	}
	return 0;
}
