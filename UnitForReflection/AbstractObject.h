#include "stdafx.h"
namespace UItest
{
	class AbstractObject
	{
	public:
		AbstractObject() {}
		virtual ~AbstractObject() {}
		virtual AbstractObject* create() const = 0;
	};

	class ObjectA : public AbstractObject
	{
	public:
		ObjectA() { }
		virtual ~ObjectA() {}
		ObjectA*  create() const { return new ObjectA(); }
	};
	class ObjectB : public AbstractObject
	{
	public:
		ObjectB() { }
		virtual ~ObjectB() {}
		ObjectB*  create() const { return new ObjectB(); }
	};
}