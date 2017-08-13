#include <iostream>
using namespace std;

struct process {
	char state[10];
	int pCount[10];
};
int main() {
	int i,j,time=0,inst;
	struct process p;
	cout<<"Enter instancibility of resource"<<endl;
	cin>>inst;
	cout<<"Enter instructions of the process"<<endl;
	for(i=0;p.state[i]!='h';i++) {
		cin>>p.state[i];
		if(p.state[i]=='h') {
			break;
		}
		cin>>p.pCount[i];
	}	
	cout<<"The process table for the process is -"<<endl;
	cout<<"T"<<"\t"<<"P"<<"\t"<<"R"<<endl;
	cout<<"0"<<"\t"<<"u"<<"\t"<<inst<<endl;
	for(i=0;p.state[i]!='h';i++) {
		if(p.state[i]=='c') {
			for(j=p.pCount[i];j!=0;j--){
				time=time+1;
				cout<<time<<"\t"<<"c"<<"\t"<<inst<<endl;
			}
		}
		if(p.state[i]=='r') {
			inst=inst-1;
		}
		if(p.state[i]=='f') {
			inst=inst+1;
		}
	}
	cout<<time<<"\t"<<"h"<<"\t"<<inst<<endl;
	return 0;
}
