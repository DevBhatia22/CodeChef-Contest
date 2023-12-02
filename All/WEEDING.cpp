#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define modre (BDpow(10,9)+7)

void BDarrayinput(int *arr, int c){
    for(int i=0;i<c;i++){
        cin>>*(arr+i);
    }
}
void BDarrayoutput(int *arr, int c){
    for(int i=0;i<c;i++){
        cout<<*(arr+i)<<" ";
    }cout<<endl;
}
int main() {
	int bd;
	cin>>bd;
	while(bd--){
	    int N,M,K;
	    cin>>N>>M>>K;
	    int *secondline=new int[N];
	    for(int i=0;i<N;i++){
	        cin>>*(secondline+i);
	    }
	    K-1+(*(secondline+N-1))<=M?cout<<"YES"<<endl:((K-1 + *(secondline+N-1))==M?cout<<"YES"<<endl:cout<<"NO"<<endl); //hehe lol
	}
	return 0;
}
