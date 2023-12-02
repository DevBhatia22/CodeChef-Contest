#include <bits/stdc++.h>
#define ll long long
#define modre (BDpow(10,9)+7)

void BDarrayinput(auto *arr, auto c){
    for(auto i=0;i<c;i++){
        std::cin>>arr[i];
    }
}
void BDarrayoutput(auto *arr, auto c){
    for(auto i=0;i<c;i++){
        std::cout<<arr[i]<<" ";
    }std::cout<<'\n';
}
int main() {
	int BD;
	std::cin>>BD;
	while(BD--){
	    int w,x,y,z;
	    std::cin>>w>>x>>y>>z;
	    if(w-x + y-z >= 0){
	        std::cout<<"NO"<<std::endl;
	    }
	    else{
	        std::cout<<"YES"<<std::endl;
	    }
	}
	return 0;
}
