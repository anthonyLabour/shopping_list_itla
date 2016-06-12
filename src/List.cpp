/*
 * List.cpp
 *
 *  Created on: May 22, 2016
 *      Author: raydelto
 */

#include "List.h"
#include <iostream>
#include <cstdlib>
using namespace std;

List::List(): _first(NULL), _last(NULL)
{


}

void List::add(Element* element)
{
	if(_first == NULL)//if the list is empty, the new element is gonna the first and the last.
	{
		_first = element;
		_last = element;
	}
	else //if the list is not empty
	{
		_last ->setNext(element);
		_last = element;

	}
}

void List::remove(int index)
{
	//TODO: Implement this method
	cout << "You should write the code for removing the index " << index << endl;
}
