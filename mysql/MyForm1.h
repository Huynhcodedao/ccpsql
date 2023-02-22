#pragma once
#include "MENU.h"

namespace mysql {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			CenterToScreen();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::LinkLabel^ linkRegister;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::Button^ btnLogin;
	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::Label^ label3;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->linkRegister = (gcnew System::Windows::Forms::LinkLabel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::White;
			this->groupBox1->Controls->Add(this->linkRegister);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->btnExit);
			this->groupBox1->Controls->Add(this->txtPassword);
			this->groupBox1->Controls->Add(this->btnLogin);
			this->groupBox1->Controls->Add(this->txtUsername);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(326, 199);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(606, 295);
			this->groupBox1->TabIndex = 16;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Sign in";
			// 
			// linkRegister
			// 
			this->linkRegister->AutoSize = true;
			this->linkRegister->LinkColor = System::Drawing::Color::Black;
			this->linkRegister->Location = System::Drawing::Point(451, 260);
			this->linkRegister->Name = L"linkRegister";
			this->linkRegister->Size = System::Drawing::Size(128, 32);
			this->linkRegister->TabIndex = 10;
			this->linkRegister->TabStop = true;
			this->linkRegister->Text = L"Register";
			this->linkRegister->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm1::linkRegister_LinkClicked);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(16, 59);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(116, 25);
			this->label4->TabIndex = 3;
			this->label4->Text = L"User name";
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::Color::White;
			this->btnExit->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExit.Image")));
			this->btnExit->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnExit->Location = System::Drawing::Point(403, 186);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(139, 44);
			this->btnExit->TabIndex = 7;
			this->btnExit->Text = L"Cancel";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm1::btnExit_Click);
			// 
			// txtPassword
			// 
			this->txtPassword->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPassword->Location = System::Drawing::Point(210, 120);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(332, 30);
			this->txtPassword->TabIndex = 9;
			// 
			// btnLogin
			// 
			this->btnLogin->BackColor = System::Drawing::Color::White;
			this->btnLogin->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->btnLogin->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnLogin.Image")));
			this->btnLogin->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnLogin->Location = System::Drawing::Point(210, 186);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(139, 44);
			this->btnLogin->TabIndex = 6;
			this->btnLogin->Tag = L"";
			this->btnLogin->Text = L"Login";
			this->btnLogin->UseVisualStyleBackColor = false;
			this->btnLogin->Click += gcnew System::EventHandler(this, &MyForm1::btnLogin_Click);
			// 
			// txtUsername
			// 
			this->txtUsername->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->txtUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtUsername->Location = System::Drawing::Point(210, 59);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(332, 30);
			this->txtUsername->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(16, 120);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1258, 692);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ conString = L"datasource=localhost;port=3306;username=root;password=123456789";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(conString);
		MySqlCommand^ cmdDataDase = gcnew MySqlCommand("select *from database.edata where user_name='" + this->txtUsername->Text + "'and password='" + this->txtPassword->Text + "'; ", conDataBase);

		MySqlDataReader^ myReader;
		try {
			conDataBase->Open();
			myReader = cmdDataDase->ExecuteReader();
			int count = 0;
			while (myReader->Read()) {
				count++;
			}
			if (count == 1) {
				MENU^ f2 = gcnew MENU();
				f2->ShowDialog();
			}
			else if (count > 1) {
				MessageBox::Show("Unknown");
			}
			else {
				MessageBox::Show("Wrong password or username!");

			}

		}
		catch (Exception^ ex) {

			MessageBox::Show(ex->Message);
		}
	}
private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult  iExit;
	iExit = MessageBox::Show("Comfirm if you want to cancel", "System", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	if (iExit == System::Windows::Forms::DialogResult::Yes) {
		Application::Exit();
	}
}
public: bool switchToRegister = false;
private: System::Void linkRegister_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

	this->switchToRegister = true;
	this->Close();
}
private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
