#pragma once
#ifndef _RDET_H_
#define _RDET_H_

#include <vector>
#include "FAT.h"
#include "Entry.h"

class RDET {

protected:	//protected attributes
	int _size;
	FAT* _fat;
	BYTE* _data;
	std::vector<Entry> _entries;

protected:	//protected utilites
	int size();
	void _getAllEntries();
	void _readData();
	std::string _toString(int level = 0);	//To output the index tree in RDET (This is our target)

public:		//getter
	FAT* fat();
	BYTE* data();
	std::vector<Entry> entries();

public:		//API
	std::string toString();	//API for _toString(0);

public:
	RDET();
	RDET(FAT*);
	~RDET();
};



#endif // !_RDET_H_


