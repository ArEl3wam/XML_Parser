#pragma once
#include"MainForm.h"
#include"Splash.h"
[STAThreadAttribute]
void main(cli::array<String^>^ args)
{
	//Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew XMLGui::Splash);
}