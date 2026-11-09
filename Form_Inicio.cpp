#include "Form_Inicio.h"
#include "Form_Desarrollo.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Frankenstein::Form_Selection());
	return 0;
}