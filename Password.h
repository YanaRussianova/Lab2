
#include <string>
using namespace std;

class password {
private:
	char * log;
	char * par;
	password *head, *tail, *next;
public:
	password() {
		head = NULL;
		tail = NULL;
		log = nullptr;
		par = nullptr;
	}
	password(const password&ob) {}
	~password();
	void proverka();//�������� �� ����������
	char *decript(char *);//��������
	char *encript(char *);//�����������
	void smena();//������� ������
	int admin();//������� �� �����
};

