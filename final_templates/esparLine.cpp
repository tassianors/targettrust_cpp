/***********************************************************************/
#include "esparLine.h"
#include "myexceptions.h"
/***********************************************************************/
template <class T>
T& esparLine<T>::add(int pos, T val)
{
	struct st_node<T> *aux = new struct st_node<T>;
	struct st_node<T> *aux2;

	PRINT_INFO;
	//cout << "add "<<val<<endl;
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
template <class T>
void esparLine<T>::show(void)
{
	struct st_node<T> *aux;
	aux = this->head;

	cout << "show: " << endl;
	while (aux != NULL) {
		cout << aux->elem << ". ";
		aux = aux->next;
	}
	cout << endl;
}

/***********************************************************************/
template <class T>
esparLine<T>::esparLine(int ncol, int i, matrix<T> *m): line<T>(ncol, m), lineIndex(i)
{
	PRINT_INFO;
	this->owner = m;
	this->head = NULL;
}

/***********************************************************************/
template <class T>
esparLine<T>::~esparLine(void)
{
	struct st_node<T> *next;
	struct st_node<T> *cur;
	
	cur= this->head;
	if (cur != NULL)
		next = this->head->next;
	else 
		cur = NULL;

	while (cur != NULL) {
		//cout << "del " << cur->elem << endl;
		delete (cur);
		this->size--;
		cur = NULL;
		cur = next;
		if (cur != NULL)
			next = cur->next;
	}
	//cout << "final size = "<< this->size << " - line " << this->lineIndex<< endl;
}

/***********************************************************************/
template <class T>
T& esparLine<T>::operator()(int j)
{
	struct st_node<T> *node = NULL;

	if (this->head != NULL)
		node = this->head;

	while (node != NULL) {
		if (node->position == j) {
			PRINT_INFO;
			return node->elem;
		}
		node = node->next;
	}
	throw matrix_excep("nao achei");
	return this->add(j, this->owner->getNull());
}
/***********************************************************************/
template <class T>
T esparLine<T>::operator[](int j) const
{
	struct st_node<T> *node = NULL;

	if (this->head != NULL)
		node = this->head;

	while (node != NULL) {
		if (node->position == j) {
			PRINT_INFO;
			return node->elem;
		}
		node = node->next;
	}
	return this->owner->getNull();
}
/***********************************************************************/

