#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Student{
string name;int ID,mathScore,englishScore;
static int count,mathTotalScore,englishTotalScore;
public:
Student(string a,int b,int c,int d):name(a),ID(b),mathScore(c),englishScore(d) 
{count++;mathTotalScore+=mathScore;englishTotalScore+=englishScore;}
Student(string a,int b):name(a),ID(b){count++;mathScore=0;englishScore=0;}
void print(){
	cout<<"ѧ������Ϊ��"<<name<<endl;cout<<"ѧ��Ϊ��"<<ID<<endl;
	cout<<"��ѧ�ɼ�Ϊ��"<<mathScore<<endl;
	cout<<"Ӣ��ɼ�Ϊ��"<<englishScore<<endl;}
static void print_total(){
	cout<<"ѧ��������Ϊ��"<<count<<endl;
	cout<<"��ѧ�ܳɼ�Ϊ��"<<mathTotalScore<<endl;
	cout<<"Ӣ���ܳɼ�Ϊ��"<<englishTotalScore<<endl;}
	~Student(){}};
int Student::count=0;
int Student::mathTotalScore=0;
int Student::englishTotalScore=0;
int main(){
	vector<Student>Students;Student one("Mary",001,98,80);
	Student two("Lily",002,78,91);Student three("John",003);
	Students.push_back(one);Students.push_back(two);
	Students.push_back(three);
	for(int i=0;i<Students.size();i++){Students[i].print();}
	Student::print_total();return 0;}
