#pragma once


#include "ReflectionDll.h"
#include <map>

using namespace RefDll;
namespace UItest
{
	class ObjectFactory
	{
	protected:
		typedef std::map<std::string, AbstractObject*> FactoryMap;
		FactoryMap objects_;
	public:
		static ObjectFactory& const getInstance();

		static void registerClass(std::string class_name, AbstractObject* object);

		static AbstractObject* createObjectByName(std::string class_name);
	private:
		ObjectFactory() {}
		ObjectFactory(ObjectFactory& root) = delete;
		ObjectFactory& operator= (ObjectFactory const&) = delete;
	};
}