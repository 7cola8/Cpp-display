#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include <sstream>
using namespace std;
class SALES{
	private:
		vector<double>price;vector<string>goodsname;
	public:
		double a;string b;
		SALES(){}
		input(double x,string y){
			a=x;price.push_back(a);
			b=y;goodsname.push_back(b);}
		SALES(const SALES&input){
			a=input.a;b=input.b;}
		mean(){
			double x=0;
			for(int i=0;i<price.size();i++){
				x+=price[i];
				cout<<price[i]<<" "<<goodsname[i]<<endl;}
			x=x/price.size();
			cout<<"平均单价为："<<x<<endl;}
		~SALES(){}}; 
int main(){
	SALES s1;ifstream infile;string line;
	infile.open("C:\\Users\\86156\\Desktop\\c++\\sales销售记录.txt");
	if(!infile){
		cout<<"input file is error"<<endl;
		return 0;}
	while(getline(infile,line)){
		if(line[0]=='p')
			continue;
		istringstream abc(line);
		double num;string name;
		if(abc>>num>>name){
			s1.input(num,name);}}
	infile.close();
	s1.mean();
	return 1;}
