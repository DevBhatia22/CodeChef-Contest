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
	int x;
	std::cin>>x;
	if(x < 100){
	    std::cout<<"YES";
	}
	else{
	    std::cout<<"NO";
	}
	return 0;
}
