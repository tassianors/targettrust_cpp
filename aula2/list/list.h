using namespace std;

struct no {
	int data;
	struct no *next;
};

class mylist {
	private:
		struct no elem;
	public:
		void insert(int v);
		void show(void);
		mylist(void);
		~mylist(void);
};

