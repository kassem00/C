#include "ds.h"
#define Head list->head
#define HNext list->head
#define TRUE 1
#define FALSE 0


/**
 * createEmptyList - function that retrieves a value associated with a key
 * @list: the hash table you want to look into
 * Return: void
 */
void createEmptyList(ST_list_t *list)
{
	list = malloc(sizeof(*list));
	list->listSize = 0;
	list->head->next = NULL;
}


int insertToList(ST_list_t *list, int position, int data)
{//fix
	ST_listNode_t *tmp = list->head;

	if(list == NULL)
		return (-1);

	if(position > list->listSize)
		return (-1);

	for(int i = 0; i < position; i++)
	{
		if (i == position)
			list->data = data;
		tmp = list->next;
	}
	return (0);
}


int deleteFromList(ST_list_t *list, int position){//fix
	ST_listNode_t *tmp;

	if(list == NULL)
		return (-1);

	if(position > list->listSize)
		return (-1);

	for(int i = 0; i < position; i++)
	{
		if (i == position)
			list->data = data;
		tmp = list->next;
	}

}


int printList(ST_list_t *list)
{//fix
	ST_listNode_t *tmp = list->head;

	if(list == NULL)
		return (-1);

	if(position > list->listSize)
		return (-1);

	for(int i = 0; i < position; i++)
	{
		if (i == position)
			tmp->data = data;
		tmp = list->next;
	}

	return (0);
}


int getNodeData(ST_list_t *list, int nodeNumber, int *nodeData)
{
	

}


int isTail(ST_listNode_t node)
{
	if (node->next == NULL)
		return TRUE;
	return FALSE;
}


int isEmpty(ST_list_t *list){
	if (listSize == 0)
		return True;
	return False;
}
