#include <iostream>
using namespace std;

int main() {
	int bd;
	cin>>bd;
	while(bd--){
	    int N,Gbells,Ring,P;
	    cin>>N>>Gbells>>Ring>>P;
	    int answer=P;
	    for(int i=0;i<Ring;i++){
	        if(Gbells>0){
	            answer+=10;
	            Gbells--;
	            continue;
	        }
	        answer+=5;
	    }
	    N==Ring?answer=answer+20:answer=answer;
	    cout<<answer<<endl;
	}
	return 0;
}
