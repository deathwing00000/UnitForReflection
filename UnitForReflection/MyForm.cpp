#include "MyForm.h"
#include "ObjectFactory.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace UItest;

[STAThreadAttribute]
void Main(array<String^>^ args) {
	ObjectFactory& instance = ObjectFactory::getInstance();
	instance.registerClass("ObjectA", new ObjectA);
	instance.registerClass("ObjectB", new ObjectB);
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	UItest::MyForm form;
	Application::Run(%form);
}