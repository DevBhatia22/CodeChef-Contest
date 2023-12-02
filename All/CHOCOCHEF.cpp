#include <bits/stdc++.h>
#define ll long long
#define modre (BDpow(10,9)+7)
using namespace std;
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
	    int nm;
	    cin>>nm;
	    nm-=2;
	    std::cout<<nm<<" "<<1<<" "<<1<<std::endl;
	}
	return 0;
}
