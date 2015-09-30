#pragma once


class linkedList
{
private:
	
	struct nodes
	{

		nodes* next;
	};
	nodes* head;
	nodes* tail;
	nodes* curr;

	int size;
public:
	
	linkedList();
	~linkedList();
	void addFunction(int);
	void deleteFunction();
};