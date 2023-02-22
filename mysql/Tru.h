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
	/// Summary for Tru
	/// </summary>
	public ref class Tru : public System::Windows::Forms::Form
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
	private: System::Windows::Forms::PictureBox^ pictureBox1;


	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::TextBox^ txtValue1;
	private: System::Windows::Forms::TextBox^ txtValue2;
	private: System::Windows::Forms::TextBox^ txttong;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	public:
		Tru(void)
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
		~Tru()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label6;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btnHome;
	private: System::Windows::Forms::Button^ btnResult;

	private: System::Windows::Forms::TextBox^ txtPoint;

	private: System::Windows::Forms::TextBox^ txtAns;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Tru::typeid));
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnHome = (gcnew System::Windows::Forms::Button());
			this->txtAns = (gcnew System::Windows::Forms::TextBox());
			this->btnResult = (gcnew System::Windows::Forms::Button());
			this->txtPoint = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtValue1 = (gcnew System::Windows::Forms::TextBox());
			this->txtValue2 = (gcnew System::Windows::Forms::TextBox());
			this->txttong = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(34, 26);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(33, 25);
			this->label6->TabIndex = 40;
			this->label6->Text = L"ID";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(73, 26);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(102, 30);
			this->textBox1->TabIndex = 39;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Tru::textBox1_TextChanged);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->btnHome);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->txtAns);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 509);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1240, 136);
			this->panel1->TabIndex = 37;
			// 
			// btnHome
			// 
			this->btnHome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnHome->Location = System::Drawing::Point(560, 36);
			this->btnHome->Name = L"btnHome";
			this->btnHome->Size = System::Drawing::Size(130, 55);
			this->btnHome->TabIndex = 11;
			this->btnHome->Text = L"Home";
			this->btnHome->UseVisualStyleBackColor = true;
			this->btnHome->Click += gcnew System::EventHandler(this, &Tru::btnHome_Click);
			// 
			// txtAns
			// 
			this->txtAns->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtAns->Location = System::Drawing::Point(73, 26);
			this->txtAns->Name = L"txtAns";
			this->txtAns->Size = System::Drawing::Size(86, 30);
			this->txtAns->TabIndex = 32;
			// 
			// btnResult
			// 
			this->btnResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnResult->Location = System::Drawing::Point(560, 393);
			this->btnResult->Name = L"btnResult";
			this->btnResult->Size = System::Drawing::Size(130, 58);
			this->btnResult->TabIndex = 36;
			this->btnResult->Text = L"Result";
			this->btnResult->UseVisualStyleBackColor = true;
			this->btnResult->Click += gcnew System::EventHandler(this, &Tru::btnResult_Click);
			// 
			// txtPoint
			// 
			this->txtPoint->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtPoint->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPoint->Location = System::Drawing::Point(222, 214);
			this->txtPoint->Name = L"txtPoint";
			this->txtPoint->Size = System::Drawing::Size(86, 23);
			this->txtPoint->TabIndex = 34;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1240, 509);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 38;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Tru::pictureBox1_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::White;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(140, 214);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(61, 25);
			this->label9->TabIndex = 41;
			this->label9->Text = L"Point";
			// 
			// txtValue1
			// 
			this->txtValue1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtValue1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtValue1->Location = System::Drawing::Point(291, 258);
			this->txtValue1->Name = L"txtValue1";
			this->txtValue1->Size = System::Drawing::Size(159, 49);
			this->txtValue1->TabIndex = 43;
			// 
			// txtValue2
			// 
			this->txtValue2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtValue2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtValue2->Location = System::Drawing::Point(613, 258);
			this->txtValue2->Name = L"txtValue2";
			this->txtValue2->Size = System::Drawing::Size(163, 49);
			this->txtValue2->TabIndex = 44;
			// 
			// txttong
			// 
			this->txttong->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txttong->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txttong->Location = System::Drawing::Point(934, 257);
			this->txttong->Name = L"txttong";
			this->txttong->Size = System::Drawing::Size(88, 49);
			this->txttong->TabIndex = 45;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(475, 257);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 56);
			this->button1->TabIndex = 46;
			this->button1->Text = L"-";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(807, 257);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(92, 56);
			this->button2->TabIndex = 47;
			this->button2->Text = L"=";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// Tru
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(1240, 645);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txttong);
			this->Controls->Add(this->txtValue2);
			this->Controls->Add(this->txtValue1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->btnResult);
			this->Controls->Add(this->txtPoint);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Tru";
			this->Text = L"Tru";
			this->Load += gcnew System::EventHandler(this, &Tru::Tru_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnHome_Click(System::Object^ sender, System::EventArgs^ e) {
		sqlConn->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
		float diemcu, tc, sum;
		try {
			sqlConn->Open();
			String^ mon4 = "Select point from edata where Eid ='" + textBox1->Text + "' ";
			sqlCmd = gcnew MySqlCommand(mon4, sqlConn);
			sqlDd = sqlCmd->ExecuteReader();
			sqlDd->Read();
			String^ du2 = sqlDd->GetString(0);

			diemcu = Convert::ToDouble(du2);
			tc = Convert::ToDouble(txtPoint->Text);
			sum = diemcu + tc;
			sqlConn->Close();
		}

		catch (Exception^ ex) {

		}
		finally {
			sqlConn->Close();
		}

		//update điểm vào ô text

		sqlConn->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
		try {

			sqlConn->Open();
			sqlQuery = "Update edata Set Eid=N'" + textBox1->Text + "',point='" + sum + "' where Eid='" + textBox1->Text + "' ";
			sqlCmd = gcnew MySqlCommand(sqlQuery, sqlConn);
			sqlDd = sqlCmd->ExecuteReader();
			sqlConn->Close();
		}

		catch (Exception^ ex) {
			
		}
		finally {
			sqlConn->Close();
		}
		this->Close();
	}
		   //Random số

		   SpeechSynthesizer^ Sapi = gcnew SpeechSynthesizer();
		   Random^ rnd = gcnew Random();
		   String^ ArithmeticOperator;
		   int AddValue = 0;
	private: System::Void MathsOperator() {
		int number1 = rnd->Next(1, 10);
		int number2 = rnd->Next(1, 9);
		int operation = rnd->Next(1, 5);
		int num = 1;

		for (int i = 0; i < num; i++) {
			switch (operation) {
			case 1:
				txtValue1->Text = Convert::ToString(number1);
				txtValue2->Text = Convert::ToString(number2);
				break;
				default:
					txtValue1->Text = Convert::ToString(number1);
					txtValue2->Text = Convert::ToString(number2);
					break;

			}
		}
	}
private: System::Void btnResult_Click(System::Object^ sender, System::EventArgs^ e) {
	SpeechSynthesizer^ Sapi = gcnew SpeechSynthesizer;
	
	float vl1, vl2, test, point, ans;
	float tong = 0;


	ans = Convert::ToDouble(txtAns->Text);
	if (ans != 0) {
		vl1 = Convert::ToDouble(txtValue1->Text);
		vl2 = Convert::ToDouble(txtValue2->Text);
		tong = vl1 - vl2;
		test = Convert::ToDouble(txttong->Text);
		point = Convert::ToDouble(txtPoint->Text);
		if (test == tong) {

			point++;
			txtPoint->Clear();
			txtPoint->Text = Convert::ToString(point);
			txttong->Text = "";
			SoundPlayer^ sp1 = gcnew SoundPlayer("C://mysql//1.wav");
			sp1->Load();
			sp1->PlaySync();
		}
		else {
			ans--;
			Sapi->SpeakAsync("Incorrec answer, the right answer is:" + Convert::ToString(tong));
			txttong->Text = "";
			SoundPlayer^ sp = gcnew SoundPlayer("C://mysql//123.wav");
			sp->Load();
			sp->PlaySync();

		}

		txtAns->Clear();
		txtAns->Text = Convert::ToString(ans);
	}
	else {
		System::Windows::Forms::DialogResult  iExit;
		iExit = MessageBox::Show("Comfirm if you want to cancel", "System", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	}
	MathsOperator();
}
private: System::Void Tru_Load(System::Object^ sender, System::EventArgs^ e) {
	MathsOperator();

	txtAns->Clear();
	txtAns->Text = "100";
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	txtPoint->Clear();
	txtPoint->Text = "0";
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
