#include<iostream>
using namespace std;
class ARR{
	private:
		int* data;unsigned int datasize,cap;
	public:
		ARR(){data=nullptr;datasize=0;cap=0;}
		ARR(unsigned int n){
			data=new int[n];datasize=0;cap=n;}
		void inputInfor(){
			int elem;
			while(cin>>elem){
				if(elem=='f'){
                	break;}
				addInfor(elem);}}
		void outputInfor(){
			for(int i=0;i<datasize;i++){
				cout<<data[i]<<" ";}
			cout<<endl;}
		void addInfor(int elem){
        	if(datasize==cap){
            	unsigned int newCap=(cap==0)?1:cap*2;
            	int* newData=new int[newCap];
            	for(unsigned int i=0;i<datasize;i++){
                	newData[i]=data[i];}
            	delete[] data;
            	data=newData;
            	cap=newCap;}
        	data[datasize++]=elem;}
		~ARR(){delete[] data;}};
int main(){
	ARR one(2);
	cout<<"������������������е�����"<<endl;
	cout<<"����fʱ��������"<<endl; 
	one.inputInfor();
	cout<<"�����������Ϊ��"<<endl;
	one.outputInfor();
	cout<<"����һ���µ����ֺ������"<<endl; 
	one.addInfor(6);
	one.outputInfor();
	return 1;}
