#include <iostream>
#include <bits/stdc++.h>



int main() {
	// your code goes here
	int BD;
	std::cin>>BD;
	while(BD--){
	    int n;
	    std::cin>>n;
	    std::vector<int> indices;
	    long long prefixSum = 0;
	    for(int i = 0; i < n; i++){
	        int temp;
	        std::cin>>temp;
	        indices.push_back(temp);
	    }
	    std::sort(indices.begin(), indices.end());
	    long long count = 0;
	    std::vector<int> answer1;
	    
	    for(int i = 0; i < n; i++){
	        bool done = true;
	        for(int j = 0; j < n; j++){
	            if(indices[j] == 0){
	                continue;
	            }
	            if(prefixSum < indices[j]){
	                prefixSum += indices[j];
	                answer1.push_back(indices[j]);
	                indices[j] = 0;
	                done = false;
	                break;
	            }
	        }
	        if(done){
	            break;
	        }
	    }
	    
	    for(int i = 0; i < n; i++){
	        if(indices[i]){
	            answer1.push_back(indices[i]);
	            count++;
	        }
	    }
	    
	    std::cout<<count<<'\n';
	    for(int answer:answer1){
	        std::cout<<answer<<" ";
	    }
	    std::cout<<'\n';
	}
	return 0;
}
