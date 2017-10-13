// ReflectionDll.h

#ifdef REFLECTIONDLL_EXPORTS
#define REFLECTIONDLL_API __declspec(dllexport) 
#else
#define REFLECTIONDLL_API __declspec(dllimport)
#endif

namespace RefDll
{
	class AbstractObject
	{
	public:
//		REFLECTIONDLL_API AbstractObject() {}
//		REFLECTIONDLL_API virtual ~AbstractObject() {}
		REFLECTIONDLL_API virtual  AbstractObject* create() const = 0;
	};

	class ObjectA : public AbstractObject
	{
	public:
	//	REFLECTIONDLL_API ObjectA() { }
//		REFLECTIONDLL_API virtual ~ObjectA() {}
		REFLECTIONDLL_API ObjectA*  create() const { return new ObjectA(); }
	};
	class ObjectB : public AbstractObject
	{
	public:
//		REFLECTIONDLL_API ObjectB() { }
//		REFLECTIONDLL_API virtual ~ObjectB() {}
		REFLECTIONDLL_API ObjectB*  create() const { return new ObjectB(); }
	};
}