#include<iostream>
using namespace std;
class Ball{
	protected:double r;
	public:
		Ball():r(1.0){}
		Ball(double x):r(x){}
		virtual void display(){
			cout<<"�뾶rΪ��"<<r<<endl;}
		~Ball(){}};
class basketball:public Ball{
	private:
		unsigned int comnum;int time;
	public:
		basketball(){}
		basketball(double a=1.0,unsigned int b=0,int c=0):Ball(a),comnum(b),time(c){}
		virtual void display(){
			cout<<"basketball���������"<<endl;
			Ball::display();
			cout<<"�����������Ϊ��"<<comnum<<endl;
			cout<<"����ʱ��Ϊ��"<<time<<"����"<<endl;}
		~basketball(){}};
class valleyball:public Ball{
	private:
		unsigned int comnum;int time;
	public:
		valleyball(){}
		valleyball(double a=1.0,unsigned int b=0,int c=0):Ball(a),comnum(b),time(c){}
		virtual void display(){
			cout<<"valleyball���������"<<endl;
			Ball::display();
			cout<<"�����������Ϊ��"<<comnum<<endl;
			cout<<"����ʱ��Ϊ��"<<time<<"����"<<endl;}
		~valleyball(){}};
void query(Ball& abc){
	abc.display();}
int main(){
	basketball one(6,20,180);
	valleyball two(7,30,240);
	query(one);query(two);
	return 1;}
