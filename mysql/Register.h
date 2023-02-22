#pragma once

namespace mysql {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::Speech::Synthesis;
	using namespace System::Media;

	/// <summary>
	/// Summary for Register
	/// </summary>
	public ref class Register : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		DataTable^ sqlDt = gcnew DataTable();
		MySqlDataAdapter^ sqlDta = gcnew MySqlDataAdapter();
		MySqlDataReader^ sqlDd;
		DataSet^ DS = gcnew DataSet();

		String^ sqlQuery;

		String^ server = "localhost";
		String^ username = "root";
		String^ password = "123456789"; String^ database = "database";
	public:
		Register(void)
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
		~Register()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtComfirm;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::TextBox^ txtPhone;
	private: System::Windows::Forms::LinkLabel^ linkLogin;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::Button^ btnOk;
	private: System::Windows::Forms::TextBox^ txtID;
	private: System::Windows::Forms::Label^ label3;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Register::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtComfirm = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtPhone = (gcnew System::Windows::Forms::TextBox());
			this->linkLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->btnOk = (gcnew System::Windows::Forms::Button());
			this->txtID = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::White;
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->txtComfirm);
			this->groupBox1->Controls->Add(this->txtPassword);
			this->groupBox1->Controls->Add(this->txtUsername);
			this->groupBox1->Controls->Add(this->txtPhone);
			this->groupBox1->Controls->Add(this->linkLogin);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->btnExit);
			this->groupBox1->Controls->Add(this->txtName);
			this->groupBox1->Controls->Add(this->btnOk);
			this->groupBox1->Controls->Add(this->txtID);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(284, 59);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(690, 575);
			this->groupBox1->TabIndex = 17;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Register";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(31, 304);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(106, 25);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Password";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(31, 365);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(190, 25);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Comfirm password";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(31, 188);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 25);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Phone";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(31, 249);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(116, 25);
			this->label5->TabIndex = 15;
			this->label5->Text = L"User name";
			// 
			// txtComfirm
			// 
			this->txtComfirm->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->txtComfirm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtComfirm->Location = System::Drawing::Point(290, 362);
			this->txtComfirm->Name = L"txtComfirm";
			this->txtComfirm->PasswordChar = '*';
			this->txtComfirm->Size = System::Drawing::Size(332, 30);
			this->txtComfirm->TabIndex = 14;
			// 
			// txtPassword
			// 
			this->txtPassword->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPassword->Location = System::Drawing::Point(290, 301);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(332, 30);
			this->txtPassword->TabIndex = 13;
			// 
			// txtUsername
			// 
			this->txtUsername->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->txtUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtUsername->Location = System::Drawing::Point(290, 244);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(332, 30);
			this->txtUsername->TabIndex = 12;
			// 
			// txtPhone
			// 
			this->txtPhone->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->txtPhone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPhone->Location = System::Drawing::Point(290, 183);
			this->txtPhone->Name = L"txtPhone";
			this->txtPhone->Size = System::Drawing::Size(332, 30);
			this->txtPhone->TabIndex = 11;
			// 
			// linkLogin
			// 
			this->linkLogin->AutoSize = true;
			this->linkLogin->LinkColor = System::Drawing::Color::Black;
			this->linkLogin->Location = System::Drawing::Point(586, 531);
			this->linkLogin->Name = L"linkLogin";
			this->linkLogin->Size = System::Drawing::Size(98, 32);
			this->linkLogin->TabIndex = 10;
			this->linkLogin->TabStop = true;
			this->linkLogin->Text = L"Log in";
			this->linkLogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Register::linkLogin_LinkClicked);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(31, 72);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(33, 25);
			this->label4->TabIndex = 3;
			this->label4->Text = L"ID";
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::Color::White;
			this->btnExit->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExit.Image")));
			this->btnExit->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnExit->Location = System::Drawing::Point(483, 443);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(139, 44);
			this->btnExit->TabIndex = 7;
			this->btnExit->Text = L"Cancel";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &Register::btnExit_Click);
			// 
			// txtName
			// 
			this->txtName->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->txtName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtName->Location = System::Drawing::Point(290, 125);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(332, 30);
			this->txtName->TabIndex = 9;
			// 
			// btnOk
			// 
			this->btnOk->BackColor = System::Drawing::Color::White;
			this->btnOk->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->btnOk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOk->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnOk.Image")));
			this->btnOk->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnOk->Location = System::Drawing::Point(290, 443);
			this->btnOk->Name = L"btnOk";
			this->btnOk->Size = System::Drawing::Size(139, 44);
			this->btnOk->TabIndex = 6;
			this->btnOk->Tag = L"";
			this->btnOk->Text = L"Create";
			this->btnOk->UseVisualStyleBackColor = false;
			this->btnOk->Click += gcnew System::EventHandler(this, &Register::btnOk_Click);
			// 
			// txtID
			// 
			this->txtID->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->txtID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtID->Location = System::Drawing::Point(290, 64);
			this->txtID->Name = L"txtID";
			this->txtID->Size = System::Drawing::Size(332, 30);
			this->txtID->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(31, 125);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Name";
			// 
			// Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1258, 692);
			this->Controls->Add(this->groupBox1);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Name = L"Register";
			this->Text = L"Register";
			this->Load += gcnew System::EventHandler(this, &Register::Register_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnOk_Click(System::Object^ sender, System::EventArgs^ e) {

		sqlConn->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;

		String^ Id = txtID->Text;
		String^ name = txtName->Text;
		String^ phone = txtPhone->Text;
		String^ username = txtUsername->Text;
		String^ password = txtPassword->Text;
		String^ comfirmPassword = txtComfirm->Text;
		if (Id->Length == 0 || name->Length == 0 || phone->Length == 0 || username->Length == 0 || password->Length == 0 || comfirmPassword->Length == 0) {
			MessageBox::Show("Please enter all the fields", "On or more empty fields", MessageBoxButtons::OK);
			return;
		}
		if (String::Compare(password, comfirmPassword) != 0) {
			MessageBox::Show("Password and Comfirm Password do not match", "Password Error", MessageBoxButtons::OK);
			return;
		}


		try {
			sqlConn->Open();
			sqlQuery = "INSERT INTO edata(Eid, name, Phone, user_name, password)" + "value('" + txtID->Text + "', '" + txtName->Text + "', '" + txtPhone->Text + "', '" + txtUsername->Text + "', '" + txtPassword->Text + "')";
			sqlCmd = gcnew MySqlCommand(sqlQuery, sqlConn);
			sqlDd = sqlCmd->ExecuteReader(); MessageBox::Show("Registered a new user");
			sqlConn->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Failer to register new user", "Register Failure", MessageBoxButtons::OK);
		}
		finally {
			sqlConn->Close();
		}
	}
private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult  iExit;
	iExit = MessageBox::Show("Comfirm if you want to cancel", "System", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	if (iExit == System::Windows::Forms::DialogResult::Yes) {
		Application::Exit();
	}
}
public: bool swicthToLogin = false;
private: System::Void linkLogin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->swicthToLogin = true;
	this->Close();
}
private: System::Void Register_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
