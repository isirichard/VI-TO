/*
 * AVLTree.h
 *
 *  Created on: Nov 7, 2017
 *      Author: christian
 */

#ifndef DATASTRUCTURES_SIMPLE_AVLTREE_H_
#define DATASTRUCTURES_SIMPLE_AVLTREE_H_

#include <iostream>
#include <fstream>

template <class key,class value>
class AVLNode{
	key _Key;
	value _Value;
	AVLNode<key,value>* left;
	AVLNode<key,value>* right;
	short _Height;
public:
	AVLNode(key _key,value _value):
		_Key(_key),_Value(_value),left(0),right(0),_Height(1){}
	AVLNode<key,value>*& Left() {return left;}
	AVLNode<key,value>*& Right(){ return right;}
	value GetValue(){return _Value;}
	void SetValue(value _value){ _Value = _value;}
	short GetHeight(){ return _Height;}
	void SetHeight(int _height){ _Height = _height;}
	key Key(){return _Key;}
};

template <class key,class value>
class AVLTree{
	AVLNode<key,value>* root;
	int nullCounter;  //to print null in the dot file
	AVLNode<key,value>* insert(AVLNode<key,value>* _node,
			key _key, value _value);
	AVLNode<key,value>* remove(AVLNode<key,value>*,key);
	AVLNode<key,value>* min(AVLNode<key,value>*);
	AVLNode<key,value>* max(AVLNode<key,value>*);
	AVLNode<key,value>* deleteMin(AVLNode<key,value>*);
	AVLNode<key,value>* rightRotation(AVLNode<key,value>*);
	AVLNode<key,value>* leftRotation(AVLNode<key,value>*);
	AVLNode<key,value>* balance(AVLNode<key,value>*);
	short height(AVLNode<key,value>*);
	short balanceFactor(AVLNode<key,value>*);
	void updateHeight(AVLNode<key,value>*);
	void deleteMin();
	void show(AVLNode<key,value>*,std::ostream &);

public:
	AVLTree():root(0),nullCounter(0){}
	void insert(key _key,value _value);
	void remove(key _key); //Hibbard deletion
	value search(key _key);
	void show(std::ostream&);
};

#endif /* DATASTRUCTURES_SIMPLE_AVLTREE_H_ */
