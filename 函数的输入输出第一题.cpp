#include<iostream>
#include<vector>
#include<fstream>
using namespace std;
void sum1(const vector<int>&nums){
    int i;
    if(nums.size()%2==0){ 
        for(i=0;i<nums.size();i=i+2){
            cout<<"��ͽ��Ϊ"<<nums[i]+nums[i+1]<<" ";}}
	else{
		cout<<"��������Ϊ���������һλ����û�����"<<endl;
        for(i=0;i<nums.size()-1;i=i+2){
            cout<<"��ͽ��Ϊ"<<nums[i]+nums[i+1]<<" ";}
        i=nums.size()-1;cout<<"û����͵����ݣ�"<<nums[i]<<" ";}}
void sum2(const vector<int>&nums){
    int i,j;
    if(nums.size()%2==0){
        for(i=0,j=nums.size()-1;i<nums.size()/2;i++,j--){
            cout<<"��ͽ��Ϊ"<<nums[i]+nums[j]<<" ";}}
	else{
        for(i=0,j=nums.size()-1;i<(nums.size()-1)/2;i++,j--){
            cout<<"��ͽ��Ϊ"<<nums[i]+nums[j]<<" ";}}}
int type(){
    vector<int>nums;
    cout<<"������һ������������-1ʱ������:";int n;
    while(cin>>n&&n!=-1){nums.push_back(n);}
    cout<<"�������: ";sum1(nums);cout<<endl;
    cout<<"��β���: ";sum2(nums);cout<<endl;
	return 0;}
int wenjian(){
    vector<int>nums;ifstream infile;int n; 
    infile.open("C:\\Users\\86156\\Desktop\\c++\\numbers.txt");
    if(!infile){cout<<"�ļ���ȡʧ��"<<endl;return 0;}
    while(!infile.eof()){infile>>n;nums.push_back(n);}
    infile.close();
    cout<<"�������: ";sum1(nums);cout<<endl;
    cout<<"��β���: ";sum2(nums);cout<<endl;
    return 0;}
int main(){
    cout<<"�Ӽ����������ݣ�"<<endl;type();
    cout<<"���ļ��ж�ȡ����:"<<endl;wenjian();return 0;}
