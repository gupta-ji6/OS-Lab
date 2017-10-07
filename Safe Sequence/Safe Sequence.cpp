#include <iostream>
using namespace std;

int main() {
	int nop=0,inst=0,freeR=0,i=0,totalCNeed=0,j=0;
	int pro[10],max[10],cNeed[10],need[10],safeSeq[10];
	cout<<"Enter number of processes: ";
	cin>>nop;
	cout<<endl;
	cout<<"Enter instancibility of a resource: ";
	cin>>inst;
	cout<<endl;
	for(i=0;i<nop;i++) {
		cout<<"Enter maximum need of process P"<<i<<": ";
		cin>>max[i];
		cout<<endl;
		cout<<"Enter current need of process P"<<i<<": ";
		cin>>cNeed[i];
		cout<<endl;
	}
	for(i=0;i<nop;i++) {
		need[i] = max[i] - cNeed[i];
	}
	for(i=0;i<nop;i++) {
		totalCNeed = totalCNeed + cNeed[i];
	}
	freeR = inst - totalCNeed;
	// cout<<totalCNeed<<" "<<freeR;
	for(i=0;i<nop;i++) {
		if(freeR>=need[i]) {
			//cout<<"Need = "<<need[i]<<" cNeed = "<<cNeed[i];
			freeR = freeR + cNeed[i];
			need[i]= need[i] + inst;
			safeSeq[j] = i;
			j=j+1;
		}
	}
	cout<<"Safe Sequence is: ";
	for(i=0;i<nop;i++) {
		cout<<"P"<<safeSeq[i]<<" ";
	}
	cout<<endl;
	return 0;
}
