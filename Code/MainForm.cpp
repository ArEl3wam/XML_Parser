#pragma once
#include"MainForm.h"
#include"Splash.h"
using namespace XMLGui;
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main(cli::array<String^>^ args)
{
	//Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Splash);
}