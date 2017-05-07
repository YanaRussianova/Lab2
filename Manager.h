
#include <string>
#include "Provider.h"
#include "Store.h"
using namespace std;

class manager : virtual public sklad, virtual public dostavka
{
private:
	char* kod;//код товара
	char* otpravka;//дата отгрузки
	manager *head, *tail, *next, *prev;
public:
	manager() :sklad(), dostavka() {
		head = NULL;
		tail = NULL;
		kod = nullptr;
		otpravka = nullptr;
	}
	manager(const manager&ob);
	~manager();
	void read();//считываем заказы
	void forma();//оформить заказ
	void smenit();//изменить файл
	void zap();//перезаписать файл
	void print();//напичатать заказы
};
