// Speaking_cal.cpp : main project file.

#include "stdafx.h"
#include "Form1.h"
#include "fun.h"

using namespace Speaking_cal;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 
	Speaking_cal::Form1 form;
	// Create the main window and run it
	Application::Run(gcnew Form1());
	return 0;
}
