#include<iostream>
using namespace std;
class Ball{
	protected:double r;
	public:
		Ball():r(1.0){}
		Ball(double x):r(x){}
		virtual void display(){
			cout<<"半径r为："<<r<<endl;}
		~Ball(){}};
class basketball:public Ball{
	private:
		unsigned int comnum;int time;
	public:
		basketball(){}
		basketball(double a=1.0,unsigned int b=0,int c=0):Ball(a),comnum(b),time(c){}
		virtual void display(){
			cout<<"basketball比赛结果："<<endl;
			Ball::display();
			cout<<"正规比赛人数为："<<comnum<<endl;
			cout<<"比赛时间为："<<time<<"分钟"<<endl;}
		~basketball(){}};
class valleyball:public Ball{
	private:
		unsigned int comnum;int time;
	public:
		valleyball(){}
		valleyball(double a=1.0,unsigned int b=0,int c=0):Ball(a),comnum(b),time(c){}
		virtual void display(){
			cout<<"valleyball比赛结果："<<endl;
			Ball::display();
			cout<<"正规比赛人数为："<<comnum<<endl;
			cout<<"比赛时间为："<<time<<"分钟"<<endl;}
		~valleyball(){}};
void query(Ball& abc){
	abc.display();}
int main(){
	basketball one(6,20,180);
	valleyball two(7,30,240);
	query(one);query(two);
	return 1;}
