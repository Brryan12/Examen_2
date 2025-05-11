#pragma once
template<typename Datatype>
class Iterador
{
public:
	virtual bool isDone() = 0;
	virtual Datatype* currentItem() = 0;
	virtual void next() = 0;
	virtual void first() = 0;

};

