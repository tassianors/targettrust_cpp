/***********************************************************************/
#include "esparLine.h"
/***********************************************************************/
int & esparLine::add(int pos, int val)
{
	struct st_node *aux = new struct st_node;
	struct st_node *aux2;

	PRINT_INFO;
	cout << "add "<<val<<endl;
	aux->elem = val;
	aux->position = pos;

	if (this->head == NULL) {
		this->head = aux;
		this->size = 1;
		return this->head->elem;
	}
	aux2 = this->head;
	while (aux2->next != NULL) {
		aux2 = aux2->next;
	}
	this->size++;
	aux2->next = aux;
	return aux->elem;
}

/***********************************************************************/
void esparLine::show(void)
{
	struct st_node *aux;
	aux = this->head;

	cout << "show: " << endl;
	while (aux != NULL) {
		cout << aux->elem << ". ";
		aux = aux->next;
	}
	cout << endl;
}

/***********************************************************************/
esparLine::esparLine(int ncol, int i, matrix *m): line(ncol, m), lineIndex(i)
{
	PRINT_INFO;
	this->head = NULL;
}

/***********************************************************************/
esparLine::~esparLine(void)
{
	struct st_node *next;
	struct st_node *cur;
	
	cur= this->head;
	if (cur != NULL)
		next = this->head->next;
	else 
		cur = NULL;

	while (cur != NULL) {
		cout << "del " << cur->elem << endl;
		delete (cur);
		cur = NULL;
		cur = next;
		if (cur != NULL)
			next = cur->next;
	}
}

/***********************************************************************/
int& esparLine::operator()(int j)
{
	struct st_node *node = NULL;

	if (this->head != NULL)
		node = this->head;

	while (node != NULL) {
		if (node->position == j)
			return node->elem;
		node = node->next;
	}
	return this->add(j, 0);
}
/***********************************************************************/
int esparLine::operator[](int j)
{
	struct st_node *node = NULL;

	if (this->head != NULL)
		node = this->head;

	while (node != NULL) {
		if (node->position == j)
			return node->elem;
		node = node->next;
	}
	return 0;//this->add(j, 0);
}
/***********************************************************************/

