#include<iostream>
using namespace std;
void add(int source1[][4],int source2[][4],int result[][4]){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            result[i][j]=source1[i][j]+source2[i][j];}}}
void showMatrix(int show[][4]){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<show[i][j]<<" ";}
        cout<<endl;}}
int main(){
    int result[4][4];
    int source1[4][4]={
	{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int source2[4][4] = {
	{17,18,19,20},{21,22,23,24},{25,26,27,28},{29,30,31,32}};
    add(source1,source2,result);
	cout<<"source1:"<<endl;showMatrix(source1);cout<<endl;
	cout<<"source2:"<<endl;showMatrix(source2);cout<<endl;
	cout<<"result:"<<endl;showMatrix(result);return 0;}
