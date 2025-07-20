#include<iostream>
using namespace std;
class Time{
	private:
		int hour,minute,second;
	public:
		Time(int a=0,int b=0,int c=0):hour(a),minute(b),second(c){}
		Time(const Time& copy){
			hour=copy.hour;minute=copy.minute;second=copy.second;}
		Time operator+(const Time& other)const{
        	Time result;
        	result.hour=hour+other.hour;
        	result.minute=minute+other.minute;
        	result.second=second+other.second;
        	if(result.second>=60){
            	result.second-=60;result.minute++;}
        	if(result.minute>=60){
            	result.minute-=60;result.hour++;}
            if(result.hour>=24){
            	int t;t=result.hour/24;
				cout<<"��t3��ӵ�ʱ�䳬��"<<t<<"��"<<endl;
            	result.hour=result.hour%24;}
        	return result;}
    	Time operator-(const Time& other)const{
        	Time result;
        	int second1=hour*3600+minute*60+second;
        	int second2=other.hour*3600+other.minute*60+other.second;
        	int cha=second1-second2;
        	if(cha<0) cha+=24*3600;
        	result.hour=cha/3600;
        	result.minute=(cha%3600)/60;
        	result.second=(cha%3600)%60;
        	return result;}
    	friend ostream& operator<<(ostream& os,const Time& t){
        	os<<t.hour<<":"<<t.minute<<":"<<t.second;
        	return os;}
    	friend istream& operator>>(istream& is,Time& t){
        	char one,two;
        	is>>t.hour>>one>>t.minute>>two>>t.second;
        	return is;}
    	friend int operator>(const Time& t1,const Time& t2){
        	int second1=t1.hour*3600+t1.minute*60+t1.second;
        	int second2=t2.hour*3600+t2.minute*60+t2.second;
        	if(second1>second2) return 1;
        	else return -1;}
		~Time(){}};
int main(){
	Time t1;Time t2(18,30);
	Time t3(18,30,23);Time t4(t3);
	cout<<"t1Ϊ"<<t1<<endl;cout<<"t2Ϊ"<<t2<<endl;
    cout<<"t3Ϊ"<<t3<<endl;cout<<"t4Ϊ"<<t4<<endl;
    cout<<"������һ��ʱ��:\n";cin>>t1;
    int i;i=t1>t2;
    if(i==1) cout<<"������ʱ���t2��"<<endl;
	else cout<<"��������ʱ���t2С"<<endl;
    Time t5=t1+t3;Time t6=t3-t1;
    cout<<"�������ʱ���t3��ӣ���ȥ�������ʱ��Ϊ"<<t5<<endl;
    cout<<"t3��ȥ�������ʱ��Ϊ"<<t6<<endl;
	return 1;}
