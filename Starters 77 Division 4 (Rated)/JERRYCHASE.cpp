#include <iostream>
using namespace std;

int main() {
	int D,d,e;
	cin>>D;
	while(D--){
	    cin>>d>>e;
	    if(e>d){
	        cout<<"YES\n";
	    }
	    else{
	        cout<<"NO\n";
	    }
	}
	return 0;
}