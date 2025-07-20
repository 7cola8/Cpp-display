#include<iostream>
#include<vector>
#include<fstream>
using namespace std;
void sum1(const vector<int>&nums){
    int i;
    if(nums.size()%2==0){ 
        for(i=0;i<nums.size();i=i+2){
            cout<<"求和结果为"<<nums[i]+nums[i+1]<<" ";}}
	else{
		cout<<"读入数据为奇数，最后一位数字没有求和"<<endl;
        for(i=0;i<nums.size()-1;i=i+2){
            cout<<"求和结果为"<<nums[i]+nums[i+1]<<" ";}
        i=nums.size()-1;cout<<"没有求和的数据："<<nums[i]<<" ";}}
void sum2(const vector<int>&nums){
    int i,j;
    if(nums.size()%2==0){
        for(i=0,j=nums.size()-1;i<nums.size()/2;i++,j--){
            cout<<"求和结果为"<<nums[i]+nums[j]<<" ";}}
	else{
        for(i=0,j=nums.size()-1;i<(nums.size()-1)/2;i++,j--){
            cout<<"求和结果为"<<nums[i]+nums[j]<<" ";}}}
int type(){
    vector<int>nums;
    cout<<"请输入一组数（当输入-1时结束）:";int n;
    while(cin>>n&&n!=-1){nums.push_back(n);}
    cout<<"两两相加: ";sum1(nums);cout<<endl;
    cout<<"首尾相加: ";sum2(nums);cout<<endl;
	return 0;}
int wenjian(){
    vector<int>nums;ifstream infile;int n; 
    infile.open("C:\\Users\\86156\\Desktop\\c++\\numbers.txt");
    if(!infile){cout<<"文件读取失败"<<endl;return 0;}
    while(!infile.eof()){infile>>n;nums.push_back(n);}
    infile.close();
    cout<<"两两相加: ";sum1(nums);cout<<endl;
    cout<<"首尾相加: ";sum2(nums);cout<<endl;
    return 0;}
int main(){
    cout<<"从键盘输入数据："<<endl;type();
    cout<<"从文件中读取数据:"<<endl;wenjian();return 0;}
