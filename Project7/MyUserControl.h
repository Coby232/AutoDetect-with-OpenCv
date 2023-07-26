#pragma once


using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace MyUsercontrol1 {

	/// <summary>
	/// Summary for MyUserControl
	/// </summary>
	public ref class MyUserControl : public System::Windows::Forms::UserControl
	{
	public:
		MyUserControl(void)
		{
			InitializeComponent1();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyUserControl()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ SETTINGS_label;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ settings_box;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

	protected:

	public:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent1(void)
		{
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SETTINGS_label = (gcnew System::Windows::Forms::Label());
			this->settings_box = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(66, 51);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(666, 24);
			this->comboBox1->TabIndex = 0;
			// 
			// SETTINGS_label
			// 
			// settings_box
			// 
			this->settings_box->Cursor = System::Windows::Forms::Cursors::Hand;
			this->settings_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->settings_box->Location = System::Drawing::Point(587, 459);
			this->settings_box->Name = L"settings_box";
			this->settings_box->Size = System::Drawing::Size(175, 41);
			this->settings_box->TabIndex = 7;
			this->settings_box->Text = L"SETTINGS";
			this->settings_box->UseVisualStyleBackColor = true;
			
			// MyUserControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->SETTINGS_label);
			this->Controls->Add(this->comboBox1);
			this->Name = L"MyUserControl";
			this->Size = System::Drawing::Size(790, 521);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void InitializeComponent() {
		this->button1 = (gcnew System::Windows::Forms::Button());
		this->button3 = (gcnew System::Windows::Forms::Button());
		this->button4 = (gcnew System::Windows::Forms::Button());
		this->SuspendLayout();
		// 
		// button1
		// 
		this->button1->Location = System::Drawing::Point(184, 154);
		this->button1->Name = L"button1";
		this->button1->Size = System::Drawing::Size(402, 46);
		this->button1->TabIndex = 0;
		this->button1->Text = L"button1";
		this->button1->UseVisualStyleBackColor = true;
		this->button1->Click += gcnew System::EventHandler(this, &MyUserControl::button1_Click);
		// 
		// button3
		// 
		this->button3->Location = System::Drawing::Point(184, 237);
		this->button3->Name = L"button3";
		this->button3->Size = System::Drawing::Size(402, 46);
		this->button3->TabIndex = 2;
		this->button3->Text = L"button3";
		this->button3->UseVisualStyleBackColor = true;
		// 
		// button4
		// 
		this->button4->Location = System::Drawing::Point(184, 322);
		this->button4->Name = L"button4";
		this->button4->Size = System::Drawing::Size(402, 46);
		this->button4->TabIndex = 3;
		this->button4->Text = L"button4";
		this->button4->UseVisualStyleBackColor = true;
		// 
		// MyUserControl
		// 
		this->Controls->Add(this->button4);
		this->Controls->Add(this->button3);
		this->Controls->Add(this->button1);
		this->MaximumSize = System::Drawing::Size(790, 521);
		this->Name = L"MyUserControl";
		this->Size = System::Drawing::Size(790, 521);
		this->ResumeLayout(false);

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
