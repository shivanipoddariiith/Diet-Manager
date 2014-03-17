#include "UserForm.h"
#include "NewUserForm.h"
#include "NewFoodForm.h"

using namespace ClrTest;

using namespace System;
using namespace System::Windows::Forms;

int main()
{
	NewFoodForm form;

	Application::Run(%form);
	return 0;
}