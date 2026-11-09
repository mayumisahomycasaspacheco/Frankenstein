#include "Form_Inicio.h"
#include "Form_Desarrollo.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Frankenstein::Form_Desarrollo^ frm = gcnew Frankenstein::Form_Desarrollo();
	frm->cargar_escena(2);
	Application::Run(frm);
	return 0;
}