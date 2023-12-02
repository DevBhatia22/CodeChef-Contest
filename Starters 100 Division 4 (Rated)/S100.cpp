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
	    int len;
	    char temp;
	    std::cin>>len;
	    std::vector<int> vec;
	    for(int i = 0; i < len; i++){
	        std::cin>>temp;
	        vec.push_back(int(temp)-48);
	    }
	    bool onesandzeros = false;
	    int i = 0;
	    for(i = 0; i < len-2; i++){
	        if(vec[i] == 1 && !onesandzeros){
	            onesandzeros = true;
	            i++;
	            break;
	        }
	    }
	    if(onesandzeros){
	        while(i<len){
	            vec[i] = 0;
	            i++;
	        }
	    }
	    for(int i = 0; i < len; i++){
	        std::cout<<vec[i];
	    }std::cout<<std::endl;
	}
	return 0;
}
