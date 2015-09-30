#include "linkedList.h"
#include <cstddef>

linkedList::linkedList()
{
	head = NULL;
	curr = head;
	size = 0;

}

linkedList::~linkedList()
{
	while (!head)
	{
		

	}//end while loop
}//end deconstuctor function

void linkedList::addFunction(int data)
{
	if (head = NULL)
	{
		head = tail = new nodes(data);
	}
	else
	{


	}
}