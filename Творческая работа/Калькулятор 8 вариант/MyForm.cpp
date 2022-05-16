#include "MyForm.h"
#include <Windows.h>
using namespace Calculator;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}

System::Void Calculator::MyForm::button9_Click_1(System::Object^ sender, System::EventArgs^ e)
{
	Button^ n = safe_cast<Button^>(sender);
	if (textBox1->Text == "0") { textBox1->Text = n->Text;}
	else { textBox1->Text = textBox1->Text + n->Text;}
}
