/*
 * Storage.h
 *
 *  Created on: 03-Nov-2018
 *      Author: OMKAR
 */
//Part 18 Tempelate
#ifndef STORAGE_H_
#define STORAGE_H_

template<class T>

class Storage {
	T values[50];
public:
	T& operator[] (int arrInd){
		return values[arrInd];
	}

};

#endif /* STORAGE_H_ */
