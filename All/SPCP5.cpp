#include <iostream>
#include <bits/stdc++.h>



int main() {
	// your code goes here
	int BD;
	std::cin>>BD;
	while(BD--){
	    int hp;
	    std::cin>>hp;
	    int p = 1;
	    int moves = 0;
	    int damage = 1;
	    while(hp > 0){
	        bool prime = true;
	        for(int j = 2; j * j <= hp; j++){
	            if(hp % j == 0){
	                prime = false;
	                break;
	            }
	        }
	        if(prime){
	            hp = 0;
	            moves++;
	            break;
	        }
	        else{
	            hp -= damage;
	            damage *= 2;
	            moves++;
	        }
	    }
	    if(hp == 0){
	        std::cout<<moves<<std::endl;
	    }
	    else{
	        std::cout<<-1<<std::endl;
	    }
	}
	return 0;
}
