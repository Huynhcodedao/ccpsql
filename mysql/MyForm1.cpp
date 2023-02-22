#include "MyForm1.h"
#include "CONG.h"
#include"Tru.h"
#include "SOSANH.h"
#include"Register.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);


	while (true) {
		mysql::MyForm1 loginForm;
		Application::Run(% loginForm);

		if (loginForm.switchToRegister) {
	mysql::Register registerForm;
			Application::Run(% registerForm);
			if (registerForm.swicthToLogin) {
				continue;
			}
			else {
				break;
			}
		}
		else {
			break;
		}
	}
}

