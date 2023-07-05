#pragma once

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ ResultLabel;
	private: System::Windows::Forms::Button^ button_ac;






	private: System::Windows::Forms::Button^ button_divide;
	private: System::Windows::Forms::Button^ button_multiply;


	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button_minus;

	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button_plus;

	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button_equals;
	private: System::Windows::Forms::Button^ button_point;
	private: double first_num;
	private: char user_action = ' ';
	private: bool isEqual = false;
	



	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button_plusminus;
	private: System::Windows::Forms::Button^ button_procent;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->ResultLabel = (gcnew System::Windows::Forms::Label());
			this->button_ac = (gcnew System::Windows::Forms::Button());
			this->button_divide = (gcnew System::Windows::Forms::Button());
			this->button_multiply = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button_minus = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button_plus = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button_equals = (gcnew System::Windows::Forms::Button());
			this->button_point = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button_plusminus = (gcnew System::Windows::Forms::Button());
			this->button_procent = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Tomato;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(9, 9);
			this->button1->Margin = System::Windows::Forms::Padding(0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(23, 23);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button1_MouseMove);
			// 
			// ResultLabel
			// 
			this->ResultLabel->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 33, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ResultLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ResultLabel->Location = System::Drawing::Point(35, 61);
			this->ResultLabel->Name = L"ResultLabel";
			this->ResultLabel->Size = System::Drawing::Size(255, 53);
			this->ResultLabel->TabIndex = 1;
			this->ResultLabel->Text = L"0";
			this->ResultLabel->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// button_ac
			// 
			this->button_ac->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_ac->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_ac->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_ac->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_ac->Location = System::Drawing::Point(12, 139);
			this->button_ac->Name = L"button_ac";
			this->button_ac->Size = System::Drawing::Size(65, 65);
			this->button_ac->TabIndex = 2;
			this->button_ac->Text = L"AC";
			this->button_ac->UseVisualStyleBackColor = false;
			this->button_ac->Click += gcnew System::EventHandler(this, &MyForm::button_ac_Click);
			// 
			// button_divide
			// 
			this->button_divide->BackColor = System::Drawing::Color::Chocolate;
			this->button_divide->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_divide->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_divide->Location = System::Drawing::Point(225, 139);
			this->button_divide->Name = L"button_divide";
			this->button_divide->Size = System::Drawing::Size(65, 65);
			this->button_divide->TabIndex = 5;
			this->button_divide->Text = L"/";
			this->button_divide->UseVisualStyleBackColor = false;
			this->button_divide->Click += gcnew System::EventHandler(this, &MyForm::button_divide_Click);
			// 
			// button_multiply
			// 
			this->button_multiply->BackColor = System::Drawing::Color::Chocolate;
			this->button_multiply->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_multiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_multiply->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_multiply->Location = System::Drawing::Point(225, 210);
			this->button_multiply->Name = L"button_multiply";
			this->button_multiply->Size = System::Drawing::Size(65, 65);
			this->button_multiply->TabIndex = 9;
			this->button_multiply->Text = L"*";
			this->button_multiply->UseVisualStyleBackColor = false;
			this->button_multiply->Click += gcnew System::EventHandler(this, &MyForm::button_multiply_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Gray;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button7->Location = System::Drawing::Point(154, 210);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(65, 65);
			this->button7->TabIndex = 8;
			this->button7->Text = L"9";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Gray;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button8->Location = System::Drawing::Point(83, 210);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(65, 65);
			this->button8->TabIndex = 7;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Gray;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button9->Location = System::Drawing::Point(12, 210);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(65, 65);
			this->button9->TabIndex = 6;
			this->button9->Text = L"7";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button_minus
			// 
			this->button_minus->BackColor = System::Drawing::Color::Chocolate;
			this->button_minus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_minus->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_minus->Location = System::Drawing::Point(225, 281);
			this->button_minus->Name = L"button_minus";
			this->button_minus->Size = System::Drawing::Size(65, 65);
			this->button_minus->TabIndex = 13;
			this->button_minus->Text = L"-";
			this->button_minus->UseVisualStyleBackColor = false;
			this->button_minus->Click += gcnew System::EventHandler(this, &MyForm::button_minus_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Gray;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button11->Location = System::Drawing::Point(154, 281);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(65, 65);
			this->button11->TabIndex = 12;
			this->button11->Text = L"6";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Gray;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button12->Location = System::Drawing::Point(83, 281);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(65, 65);
			this->button12->TabIndex = 11;
			this->button12->Text = L"5";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Gray;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button13->Location = System::Drawing::Point(12, 281);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(65, 65);
			this->button13->TabIndex = 10;
			this->button13->Text = L"4";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button_plus
			// 
			this->button_plus->BackColor = System::Drawing::Color::Chocolate;
			this->button_plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_plus->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_plus->Location = System::Drawing::Point(225, 352);
			this->button_plus->Name = L"button_plus";
			this->button_plus->Size = System::Drawing::Size(65, 65);
			this->button_plus->TabIndex = 17;
			this->button_plus->Text = L"+";
			this->button_plus->UseVisualStyleBackColor = false;
			this->button_plus->Click += gcnew System::EventHandler(this, &MyForm::button_plus_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Gray;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button15->Location = System::Drawing::Point(154, 352);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(65, 65);
			this->button15->TabIndex = 16;
			this->button15->Text = L"3";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Gray;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button16->Location = System::Drawing::Point(83, 352);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(65, 65);
			this->button16->TabIndex = 15;
			this->button16->Text = L"2";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::Gray;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button17->Location = System::Drawing::Point(12, 352);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(65, 65);
			this->button17->TabIndex = 14;
			this->button17->Text = L"1";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button_equals
			// 
			this->button_equals->BackColor = System::Drawing::Color::Chocolate;
			this->button_equals->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_equals->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_equals->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_equals->Location = System::Drawing::Point(225, 423);
			this->button_equals->Name = L"button_equals";
			this->button_equals->Size = System::Drawing::Size(65, 65);
			this->button_equals->TabIndex = 21;
			this->button_equals->Text = L"=";
			this->button_equals->UseVisualStyleBackColor = false;
			this->button_equals->Click += gcnew System::EventHandler(this, &MyForm::button_equals_Click);
			// 
			// button_point
			// 
			this->button_point->BackColor = System::Drawing::Color::Gray;
			this->button_point->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_point->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_point->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_point->Location = System::Drawing::Point(154, 423);
			this->button_point->Name = L"button_point";
			this->button_point->Size = System::Drawing::Size(65, 65);
			this->button_point->TabIndex = 20;
			this->button_point->Text = L",";
			this->button_point->UseVisualStyleBackColor = false;
			this->button_point->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::Gray;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button21->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button21->Location = System::Drawing::Point(12, 423);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(136, 65);
			this->button21->TabIndex = 18;
			this->button21->Text = L"0";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button_plusminus
			// 
			this->button_plusminus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_plusminus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_plusminus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_plusminus->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_plusminus->Location = System::Drawing::Point(83, 139);
			this->button_plusminus->Name = L"button_plusminus";
			this->button_plusminus->Size = System::Drawing::Size(65, 65);
			this->button_plusminus->TabIndex = 3;
			this->button_plusminus->Text = L"+/-";
			this->button_plusminus->UseVisualStyleBackColor = false;
			this->button_plusminus->Click += gcnew System::EventHandler(this, &MyForm::button_plusminus_Click);
			// 
			// button_procent
			// 
			this->button_procent->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_procent->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_procent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_procent->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_procent->Location = System::Drawing::Point(154, 139);
			this->button_procent->Name = L"button_procent";
			this->button_procent->Size = System::Drawing::Size(65, 65);
			this->button_procent->TabIndex = 4;
			this->button_procent->Text = L"%";
			this->button_procent->UseVisualStyleBackColor = false;
			this->button_procent->Click += gcnew System::EventHandler(this, &MyForm::button_PERCENT_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(301, 500);
			this->Controls->Add(this->button_equals);
			this->Controls->Add(this->button_point);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button_plus);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button_minus);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button_multiply);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button_divide);
			this->Controls->Add(this->button_procent);
			this->Controls->Add(this->button_plusminus);
			this->Controls->Add(this->button_ac);
			this->Controls->Add(this->ResultLabel);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void button1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->button1->Text = L"X";
	}
	private: System::Void MyForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->button1->Text = L" ";
	}
	

private: System::Void buttonNumber_Click(System::Object^ sender, System::EventArgs^ e) {
	
			this->ResultLabel->ForeColor = Color::White;
		   Button^ button = safe_cast<Button^>(sender);
		   
		   if (this->ResultLabel->Text == "0" || isEqual)
		   {
			   this->ResultLabel->Text = button->Text;
			   isEqual = false; 
		   }
		   else
		   {
			   this->ResultLabel->Text += button->Text;
		   }
}
	
private: System::Void button_plus_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('+');
}

private: System::Void button_minus_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('-');
}

private: System::Void button_multiply_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('*');
}
private: System::Void button_divide_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('/');
}
private: System::Void button_PERCENT_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('%');
}
private: System::Void math_action(char action) {
	this->first_num = System::Convert::ToDouble(this->ResultLabel->Text);
	this->user_action = action;
	this->ResultLabel->Text = "0";
}

private: System::Void button_equals_Click(System::Object^ sender, System::EventArgs^ e) {
	if (user_action == ' ')
	{
		return;
	}
	double second = System::Convert::ToDouble(this->ResultLabel->Text);
	double res;
	switch (user_action)
	{
	case '%':
		res = (double)this->first_num * (double)second / 100;
		break;
	case '+': res = (double)this->first_num + (double)second;
		break;
	case '-': res = (double)this->first_num - (double)second;
		break;
	case '*': res = (double)this->first_num * (double)second;
		break;
	case '/':
		if (second == 0)
		{
			this->ResultLabel->ForeColor = Color::DarkRed;
			res = 0;
			
			MessageBox::Show(this, "Нельзя делить на ноль. Ти лох", "Контрактник!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			res = (double)this->first_num / (double)second;
			break;
		}
		
	}
	isEqual = true;
	if (res == 54) {
		this->ResultLabel->Text = "oldman";
	}
	else {

		this->ResultLabel->Text = System::Convert::ToString(res);
	}
	
	
}
	   
private: System::Void button_ac_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ResultLabel->Text = "0";
	this->first_num = 0;
    this->user_action = ' ';
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button_point_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button_plusminus_Click(System::Object^ sender, System::EventArgs^ e) {
	int num = System::Convert::ToDouble(this->ResultLabel->Text);
	num *= -1;
	this->ResultLabel->Text = System::Convert::ToString(num);
}
};
}
