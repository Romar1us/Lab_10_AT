#include <iostream>
#include "Exception.h"
#include "deque.h"
#include <Windows.h>
#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace Lab10;

[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Lab10::MyForm form;
	Application::Run(% form);
	return 0;
}
