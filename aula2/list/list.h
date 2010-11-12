using namespace std;

struct st_node {
	int data;
	struct st_node *next;
};

class mylist {
	private:
		struct st_node *elem;
	public:
		void insert(int v);
		void show(void);
		mylist(void);
		~mylist(void);
};
