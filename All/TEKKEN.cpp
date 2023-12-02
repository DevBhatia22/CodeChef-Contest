#include <iostream>
using namespace std;

int main() {
	int D,d,e,v;
	cin>>D;
	while(D--){
	    cin>>d>>e>>v;
	    //cout<<d<<e<<v<<"lol"; hahalol
	    e>v?e=e-v:e=v-e;
	    d=d-e;
	    if(d>0){
	        cout<<"YES\n";
	    }
	    else{
	        cout<<"NO\n";
	    }
	}
	return 0;
}
