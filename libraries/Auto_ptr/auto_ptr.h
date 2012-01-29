#ifndef __auto_ptr__
#define __auto_ptr__

#include <stdlib.h>

template<typename T>
class auto_ptr:
public:
	auto_ptr(const T* ptr)
	{
		_ptr = ptr;
	};

	~auto_ptr()
	{
		delete _ptr;
		_ptr = NULL;
	};

	get() const
	{
		return _ptr;
	};

	release()
	{
		T* ptr = _ptr;
		_ptr = NULL;
		return ptr;
	};

private:
	auto_ptr();
	auto_ptr(const &auto_ptr);
	T* _ptr;
};
#endif //__auto_ptr__
