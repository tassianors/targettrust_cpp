/***********************************************************************/
#include "esparLine.h"
/***********************************************************************/
void esparLine::add(int pos, int val)
{
	struct st_node *aux = new struct st_node;
	struct st_node *aux2;

	aux->elem = val;
	aux->position = pos;

	cout << __FUNCTION__ << endl;

	if (this->head == NULL) {
		this->head = aux;
		this->size = 1;
		return;
	}
	aux2 = this->head;
	while (aux2->next != NULL) {
		aux2 = aux2->next;
		cout << ".";
	}
	this->size++;
	aux2->next = aux;
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
	this->head = NULL;
}

/***********************************************************************/
esparLine::~esparLine(void)
{
	struct st_node *next;
	struct st_node *aux;
	
	aux= this->head;
	if (aux != NULL)
		next = this->head->next;
	else 
		aux = NULL;

	while (aux != NULL) {
		cout << "del " << aux->elem << endl;
		delete (aux);
		aux = NULL;
		aux = next;
		if (aux != NULL)
			next = aux->next;
	}
}

/***********************************************************************/
int& esparLine::operator()(int j)
{
	return;
}
/***********************************************************************/
int esparLine::operator[](int j)
{
	return 0;
}
/***********************************************************************/

