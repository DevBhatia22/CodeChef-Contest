#include <iostream>
#include <bits/stdc++.h>



int main() {
	// your code goes here
	int BD;
	std::cin>>BD;
	while(BD--){
	    int n;
	    std::cin>>n;
	    std::vector<int> type;
	    std::vector<int> fruits;
	    for(int i = 0; i < n; i++){
	        int temp;
	        std::cin>>temp;
	        type.push_back(temp);
	    }
	    for(int i = 0; i < n; i++){
	        int temp;
	        std::cin>>temp;
	        fruits.push_back(temp);
	    }
	    std::unordered_map<int, int> map1;
	    for(int i = 0; i < n; i++){
	        if(map1[type[i]] == NULL || map1[type[i]] <= fruits[i]){
	            map1[type[i]] = fruits[i];
	        }
	    }
	    int answer = 0;
	    for(auto temp:map1){
	        if(temp.second >= 0){
	            answer += temp.second;
	        }
	    }
	    std::cout<<answer<<'\n';
	}
	return 0;
}
