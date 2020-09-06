//����ģʽ

#include <iostream>
#include <vector>
using namespace std;

//���������յ�����ʽ
class Singleton{
public:
	static Singleton* getInstance(){
		if(ins == nullptr){
			ins = new Singleton();
		}
		return ins;
	}
	
	class cGarbo{
		public:
			~cGarbo(){
				if(Singleton::ins != nullptr){
					delete Singleton::ins;
					Singleton::ins = nullptr;
				}
			}
	}; 
	
	static cGarbo garbo;
	
private:
	Singleton(){}
	Singleton(const Singleton&){}
	Singleton& operator= (const Singleton& ){}
	
	static Singleton* ins;
}; 

Singleton* Singleton::ins = nullptr;
Singleton::cGarbo garbo;


//��̬�ֲ�����������ģʽ
 class Singleton{
public:
	static Singleton* getInstance(){
		static Singleton ins;
		return &ins;
	}
	
private:
	Singleton(){}
	Singleton(const Singleton& ){}
	Singleton& operator= (const Singleton& ){}
}; 


//����ģʽ
class Singleton{
public:
	static Singleton* getInstance(){
		return &ins;
	}
	
private:
	Singleton(){}
	Singleton(const Singleton& ){}
	Singleton& operator= (const Singleton& ){}
	
	static Singleton ins;
};

Singleton Singleton::ins; 


////////

int main()
{
	
}
