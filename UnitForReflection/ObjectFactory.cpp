
#include "stdafx.h"
#include <stdexcept>
#include "ObjectFactory.h"


using namespace std;

namespace UItest
{
	ObjectFactory& const ObjectFactory::getInstance()
	{
		static ObjectFactory theSingleInstance;
		return theSingleInstance;
	}
	void ObjectFactory::registerClass(std::string class_name, AbstractObject* object_)
	{
		ObjectFactory& instance = ObjectFactory::getInstance();
		if (instance.objects_.find(class_name) == instance.objects_.end())
			instance.objects_[class_name] = object_;
	}
	AbstractObject* ObjectFactory::createObjectByName(std::string class_name)
	{
		ObjectFactory& instance = ObjectFactory::getInstance();
		map<string, AbstractObject*>::iterator tmp = instance.objects_.find(class_name);
		if (tmp != instance.objects_.end())
			return tmp->second->create();
		return 0;
	}
}