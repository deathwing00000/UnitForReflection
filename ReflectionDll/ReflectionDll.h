// ReflectionDll.h

//#ifdef REFLECTIONDLL_EXPORTS
#define DLL_EXPORT __declspec(dllexport) 
//#else
//#define REFLECTIONDLL_API __declspec(dllimport)
//#endif

namespace RefDll
{
	class AbstractObject
	{
	public:
//		REFLECTIONDLL_API AbstractObject() {}
//		REFLECTIONDLL_API virtual ~AbstractObject() {}
		DLL_EXPORT virtual  AbstractObject* create() const = 0;
	};

	class ObjectA : public AbstractObject
	{
	public:
	//	REFLECTIONDLL_API ObjectA() { }
//		REFLECTIONDLL_API virtual ~ObjectA() {}
		DLL_EXPORT ObjectA*  create() const { return new ObjectA(); }
	};
	class ObjectB : public AbstractObject
	{
	public:
//		REFLECTIONDLL_API ObjectB() { }
//		REFLECTIONDLL_API virtual ~ObjectB() {}
		DLL_EXPORT ObjectB*  create() const { return new ObjectB(); }
	};
}