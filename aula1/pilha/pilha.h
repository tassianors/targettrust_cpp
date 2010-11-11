#define MAX_SIZE 32

using namespace std;

class pilha {
	private:
	int buffer[MAX_SIZE];
	int pos;
	public:
	pilha();
	~pilha();
	int pop(void);
	void push(int val);
	int top(void);
};

