#ifndef __Vector__
#define __Vector__

#include "WProgram.h"

template<typename Data>
class Vector {
public:
	Vector() 
	: d_size(0), d_capacity(0), d_data(0) 
	{};
	
	Vector(Vector const &other) 
	  : d_size(other.d_size), d_capacity(other.d_capacity), d_data(0) 
	{
		d_data = (Data *)malloc(d_capacity*sizeof(Data));
		memcpy(d_data, other.d_data, d_size*sizeof(Data)); 
	};
	
	~Vector() 
	{
		free(d_data);
	};
	
	Vector &operator=(Vector const &other)
	{
		free(d_data);
		d_size = other.d_size;
		d_capacity = other.d_capacity;
		d_data = (Data *)malloc(d_capacity*sizeof(Data));
		memcpy(d_data, other.d_data, d_size*sizeof(Data));
		return *this;
	};

	void push_back(Data const &x)
	{
		if (d_capacity == d_size)
		{
			resize(); 
		}
		d_data[d_size++] = x;
	};
	
	Data& pop_back()
	{
		Data& poppedItem = d_data[d_size--];
		resize();
		return poppedItem;
	};
	
	size_t size() const
	{
		return d_size;
	};
	
	Data const &operator[](size_t idx) const
	{
		return d_data[idx];
	};
	
	Data &operator[](size_t idx) {
		return d_data[idx];
	};
	
private:
        size_t d_size; // Stores no. of actually stored objects
        size_t d_capacity; // Stores allocated capacity
        Data *d_data; // Stores data

	void resize()
	{
		d_capacity = d_capacity ? d_capacity*2 : 1;
		Data *newdata = (Data *)malloc(d_capacity*sizeof(Data));
		memcpy(newdata, d_data, d_size * sizeof(Data)); free(d_data);
		d_data = newdata;
	};
};

#endif //__Vector__
