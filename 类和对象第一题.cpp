#include <iostream>
#include<vector> 
using namespace std;
void jia(vector<vector<int>>a,vector<vector<int>>b){
	for(int i=0,j=0;i<2;i++,j++){
		for(int p=0,q=0;p<2;p++,q++)
			b[j][q]=a[i][p]+b[j][q];}
	cout<<"������ӵĽ��Ϊ��"<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++)
			cout<<b[i][j]<<" ";
		cout<<"\n"<<endl;}}
void jian(vector<vector<int>>a,vector<vector<int>>b){
	for(int i=0,j=0;i<2;i++,j++){
		for(int p=0,q=0;p<2;p++,q++)
			b[j][q]=b[j][q]-a[i][p];}
	cout<<"��������Ľ��Ϊ��"<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++)
			cout<<b[i][j]<<" ";
		cout<<"\n"<<endl;}}
void cheng(vector<vector<int>>a,vector<vector<int>>b){
	vector<vector<int>>c;c={{0,0,0},{0,0,0}};
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			for(int k=0;k<2;k++){
				c[i][j]+=a[i][k]*b[k][j];}}}
	cout<<"arr1*arr2�Ľ��Ϊ��"<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++)
			cout<<c[i][j]<<" ";
		cout<<"\n"<<endl;}}
int main(){
	vector<vector<int>>arr1,arr2;
	arr1={{1,2},{3,4}};arr2={{5,6},{7,8}};
	cout<<"����1Ϊ��"<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++) cout<<arr1[i][j]<<" ";
		cout<<"\n"<<endl;}
	cout<<"����2Ϊ��"<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++) cout<<arr2[i][j]<<" ";
		cout<<"\n"<<endl;}
	jia(arr1,arr2);jian(arr1,arr2);cheng(arr1,arr2);return 0;}
