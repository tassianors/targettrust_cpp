#include <string>

using namespace std;

class mystring: public string {
	private:
	char c;
	public:
	static int counter;
	mystring(char *p);
	mystring(void);
	void setc(char p);
	void subblanc(void);
	void subblanc(char p);

};

