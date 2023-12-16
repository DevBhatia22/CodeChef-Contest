#include <iostream>
#include <bits/stdc++.h>



int main() {
	// your code goes here
	int BD;
	std::cin>>BD;
	while(BD--){
	    std::string str;
	    std::cin>>str;
	    int j = -1;
	    bool answer = true;
	    for(char i:str){
	        j++;
	        if(j == 1 || j == 3 || j == 5){
	            if(i == 'A' || i=='E' || i=='I' || i=='O' || i=='U'){
	                continue;
	            }
	            else{
	                answer = false;
	                break;
	            }
	        }
	        else{
	            if(i == 'A' || i=='E' || i=='I' || i=='O' || i=='U'){
	                answer = false;
	                break;
	            }
	            else{
	                continue;
	            }
	        }
	    }
	    if(answer){
	        std::cout<<"YES"<<std::endl;
	        continue;
	    }
	    std::cout<<"NO"<<std::endl;
	}
	return 0;
}
