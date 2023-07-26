#pragma once
#include <iostream>
#include "Viewer.h"
//#include "MyUserControl.h"


namespace Project7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

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
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ settings_box;
	/*private: System::Windows::Forms::Button^ goback_box;*/







	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->settings_box = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox2
			// 
			this->pictureBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(0, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(790, 521);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(316, 395);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(169, 126);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(526, 46);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(334, 486);
			this->pictureBox3->TabIndex = 4;
			this->pictureBox3->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Snap ITC", 9));
			this->label1->Location = System::Drawing::Point(142, 58);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(378, 19);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Find the image you have been searching for";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(333, 367);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(124, 16);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Click on the camera";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			this->label2->MouseLeave += gcnew System::EventHandler(this, &MyForm::cam_labelLL);
			this->label2->MouseHover += gcnew System::EventHandler(this, &MyForm::cam_label);
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
			this->settings_box->Click += gcnew System::EventHandler(this, &MyForm::settings_box_Click);
			this->settings_box->MouseLeave += gcnew System::EventHandler(this, &MyForm::MouseLeave_settings);
			this->settings_box->MouseHover += gcnew System::EventHandler(this, &MyForm::MouseHover_settings);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(790, 521);
			this->Controls->Add(this->settings_box);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox2);
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(808, 568);
			this->Name = L"MyForm";
			this->Text = L"Auto Detector";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		camera::openCam1();
		/*Application::ExitThread();*/
		/*delete components;*/
		/*pictureBox3->Size = System::Drawing::Size(69, 16);*/
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void MouseHover_settings(System::Object^ sender, System::EventArgs^ e) {
	settings_box->Text = L"GO BACK";
	settings_box->Size = System::Drawing::Size(133, 34);
	settings_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.9F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	
}

private: System::Void MouseLeave_settings(System::Object^ sender, System::EventArgs^ e) {
	settings_box->Text = L"SETTINGS";
	settings_box->Size = System::Drawing::Size(134, 34);
	settings_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));

}
public:
	int num_click = 0;
	void clear_wid() {
		delete pictureBox1;
		delete label2;
		delete pictureBox2;
		delete pictureBox3;
		
		/*delete label1;*/
		
		/*delete settings_box;*/
		label1->Text = L"SETTINGS";
        /*settings_box->Text = L"GO BACK";*/
		/*label1->BackColor = System::Drawing::SystemColors::;*/
		label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
		label1->Location = System::Drawing::Point(220, 58);
		label1->Size = System::Drawing::Size(700, 500);
		num_click += 1;
		
	}
	

	void create_gobackBox() {
		InitializeComponent();
	}
	
	   
private: System::Void settings_box_Click(System::Object^ sender, System::EventArgs^ e) {
	
	clear_wid();
	/*pictureBox2->*//*BackColor = System::Drawing::Color::White;*/
		
		if (num_click % 2 == 0 ) {
			delete settings_box;
			delete label1;
			create_gobackBox();
		}
		else {
			settings_box->Text = L"SETTINGS";
			/*create_gobackBox();*/
		}

}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void cam_label(System::Object^ sender, System::EventArgs^ e) {
	label2->Text = L"Let's find what you need";
	label2->Location = System::Drawing::Point(240, 300);
	/*label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.7F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));*/
}
private: System::Void cam_labelLL(System::Object^ sender, System::EventArgs^ e) {
	label2->Text = L"Click on the camera";
	label2->Location = System::Drawing::Point(250, 299);
}
};
}
