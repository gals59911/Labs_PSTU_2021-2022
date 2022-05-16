#pragma once

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button20;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->textBox1->Location = System::Drawing::Point(3, 28);
			this->textBox1->Name = L"textBox1";
			this->textBox1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox1->Size = System::Drawing::Size(340, 31);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"0";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Window;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button1->Location = System::Drawing::Point(108, 257);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 52);
			this->button1->TabIndex = 1;
			this->button1->Text = L"0";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button9_Click_1);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Window;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button2->Location = System::Drawing::Point(3, 257);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(108, 52);
			this->button2->TabIndex = 2;
			this->button2->Text = L"1";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button9_Click_1);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::Window;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button3->Location = System::Drawing::Point(108, 209);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(108, 52);
			this->button3->TabIndex = 3;
			this->button3->Text = L"2";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button9_Click_1);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::Window;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button4->Location = System::Drawing::Point(3, 209);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(108, 52);
			this->button4->TabIndex = 4;
			this->button4->Text = L"3";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button9_Click_1);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::Window;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button5->Location = System::Drawing::Point(108, 162);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(108, 52);
			this->button5->TabIndex = 5;
			this->button5->Text = L"4";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button9_Click_1);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::Window;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button6->Location = System::Drawing::Point(3, 162);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(108, 52);
			this->button6->TabIndex = 6;
			this->button6->Text = L"5";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button9_Click_1);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::Window;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button7->Location = System::Drawing::Point(108, 114);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(108, 52);
			this->button7->TabIndex = 7;
			this->button7->Text = L"6";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button9_Click_1);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::Window;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button8->Location = System::Drawing::Point(3, 114);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(108, 52);
			this->button8->TabIndex = 8;
			this->button8->Text = L"7";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button9_Click_1);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::Window;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button9->Location = System::Drawing::Point(108, 65);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(108, 52);
			this->button9->TabIndex = 9;
			this->button9->Text = L"8";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click_1);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::Window;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button10->Location = System::Drawing::Point(3, 65);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(108, 52);
			this->button10->TabIndex = 10;
			this->button10->Text = L"9";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button9_Click_1);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::Window;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button11->Location = System::Drawing::Point(379, 257);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(108, 52);
			this->button11->TabIndex = 11;
			this->button11->Text = L"=";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::Window;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button12->Location = System::Drawing::Point(376, 65);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(108, 52);
			this->button12->TabIndex = 12;
			this->button12->Text = L"+";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::Window;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button13->Location = System::Drawing::Point(379, 162);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(108, 52);
			this->button13->TabIndex = 13;
			this->button13->Text = L"-";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::Window;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button14->Location = System::Drawing::Point(379, 114);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(108, 52);
			this->button14->TabIndex = 14;
			this->button14->Text = L"*";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::Window;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button15->Location = System::Drawing::Point(274, 65);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(108, 52);
			this->button15->TabIndex = 15;
			this->button15->Text = L"/";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::SystemColors::Window;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button16->Location = System::Drawing::Point(274, 209);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(108, 52);
			this->button16->TabIndex = 16;
			this->button16->Text = L"(";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::SystemColors::Window;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button17->Location = System::Drawing::Point(274, 257);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(108, 52);
			this->button17->TabIndex = 17;
			this->button17->Text = L")";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::SystemColors::Window;
			this->button18->Font = (gcnew System::Drawing::Font(L"Wingdings", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->button18->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button18->Location = System::Drawing::Point(274, 162);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(108, 52);
			this->button18->TabIndex = 18;
			this->button18->Text = L"";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::SystemColors::Window;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button19->Location = System::Drawing::Point(274, 114);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(108, 52);
			this->button19->TabIndex = 19;
			this->button19->Text = L"С";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox1->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 25;
			this->listBox1->Location = System::Drawing::Point(669, 209);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 354);
			this->listBox1->TabIndex = 20;
			this->listBox1->Visible = false;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->textBox2->Location = System::Drawing::Point(394, 28);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 31);
			this->textBox2->TabIndex = 21;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Window;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(357, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(25, 25);
			this->label1->TabIndex = 22;
			this->label1->Text = L"=";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::SystemColors::HighlightText;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button20->Location = System::Drawing::Point(379, 209);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(108, 52);
			this->button20->TabIndex = 23;
			this->button20->Text = L",";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(499, 310);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->listBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button9_Click_1(System::Object^ sender, System::EventArgs^ e);
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {// (
	if (textBox1->Text == "0") { textBox1->Text = "("; }
	else { textBox1->Text += "("; }
	
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) { // )
	if (textBox1->Text == "0") { textBox1->Text = "0"; }
	else { textBox1->Text += ")"; }
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text->Length > 0)
	{
		textBox1->Text = textBox1->Text->Substring(0, textBox1->Text->Length - 1);
	}
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
 textBox1->Text += "/";
}

private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "+";
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "-";
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "*";
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e)
{
	textBox1->Text = "";
}
	   private :System ::String ^ cal(System :: String^ text)
	   {
		   listBox1->Items->Clear();
		   System :: String^ t = "";
		   for (int i = 0; i < text->Length; i++)
		   {
			   if (text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/')
			   {
				   listBox1->Items->Add(t);
				   listBox1->Items->Add(text[i]);
				   t = "";
			   }
			   else { t += text[i];}
		   }
		   listBox1->Items->Add(t);
		   for (int i = 0; i < listBox1->Items->Count; i++)
		   {
			   if (listBox1->Items[i]->ToString() == "*" || listBox1->Items[i]->ToString() == "/")
			   {
				   if (i == 0 || i == listBox1->Items->Count - 1)
				   {
					   return "Error";
				   }
				   System :: String^ r = calc1(listBox1->Items[i - 1]->ToString(), listBox1->Items[i]->ToString(), listBox1->Items[i + 1]->ToString());
				   if (r == "Error") return  "Error";
					   listBox1->Items->RemoveAt(i - 1);
					   listBox1->Items->RemoveAt(i - 1);
					   listBox1->Items->RemoveAt(i - 1);
					   listBox1->Items->Insert(i - 1, r);
					   i--;
		
			   }
		   }
		   for (int i = 0; i < listBox1->Items->Count; i++)
		   {
			   if (listBox1->Items[i]->ToString() == "+" || listBox1->Items[i]->ToString() == "-")
			   {
				   if (i == 0 || i == listBox1->Items->Count - 1)
				   {
					   return "Error";
				   }
				   if (listBox1->Items[i]->ToString() == "-" && listBox1->Items[i - 1]->ToString()) {
					   System::String^ r = "-" + listBox1->Items[i + 1]->ToString();
					   if (r == "Error")  return  "Error";
					   listBox1->Items->RemoveAt(i - 1);
					   listBox1->Items->RemoveAt(i - 1);
					   listBox1->Items->RemoveAt(i - 1);
					   listBox1->Items->Insert(i - 1, r);
					   i = 0;
				   }
				   else{
					   System::String^ r = calc1(listBox1->Items[i - 1]->ToString(), listBox1->Items[i]->ToString(), listBox1->Items[i + 1]->ToString());
					   if (r == "Error")  return  "Error";
					   listBox1->Items->RemoveAt(i - 1);
					   listBox1->Items->RemoveAt(i - 1);
					   listBox1->Items->RemoveAt(i - 1);
					   listBox1->Items->Insert(i - 1, r);
					   i = 0;
				   }
			   }
		   }
		   return listBox1->Items[0]->ToString();
		   
	   }
	   private: System::String^ Search(System::String^ s) // Выражения в  скобках 
	   {
		   bool o = false;
		   bool c = false;
		   int o_1 = -1;
		   int c_1 = -1;
		   for (int i = 0; i < s->Length; i++)
		   {
			   if (s[i] == '(')
			   {
				   o = true;
				   o_1 = i;
			   }
			   if (s[i] == ')')
			   {
				   if (o == true)
				   {
					   c = true;
					   c_1 = i;
					   String^ r = cal(s->Substring(o_1 + 1, c_1 - o_1 - 1));
					   s = s->Remove(o_1, c_1 - o_1 + 1);
					   s = s->Insert(o_1, r);

					   i = 0;
					   o = c = false;
					   c_1 = o_1 = -1;
				   }
				   else { return "Error";}
			   }
			   
		   }
		   if (o && !c)
		   {
			   return "Error";
		   }
		   for (int i = 0; i < s->Length; i++)
		   {
			   if (s[i] == '(')
			   {
				   Search(s);
			   }
		   }
		   return cal(s);
		   
	   }

	private: System ::String^calc1 (System::String ^n1,System :: String^ o, System :: String ^ n2){ // Операции над числами
		double ch1 = Convert::ToDouble(n1);
		double ch2 = Convert::ToDouble(n2);
		try {
			if (o == "+")
			{
				return (ch1 + ch2).ToString();
			}
			if (o == "*")
			{
				return (ch1 * ch2).ToString();
			}
			if (o == "-")
			{
				return (ch1 - ch2).ToString();
			}
			if (o == "/")
			{
				if (ch2 != 0)
				{
					return (ch1 / ch2).ToString();
				}
				else { return "You cannot"; }
			}


		}
		catch (SystemException^ error) { return "Error";}
		return "Error";
	}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text;
}
	   System::String^ c; System::String^ c1;
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listBox1->Text->Contains("-"))
		textBox2->Text = "-" + Search(textBox1->Text);
	else textBox2->Text = Search(textBox1->Text);
	c = textBox1->Text; c1 = textBox2->Text;
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "")
	{
		textBox1->Text = "0";
	}
	else { textBox1->Text += ","; }

}
};
}
