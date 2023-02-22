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
	/// Summary for SOSANH
	/// </summary>
	public ref class SOSANH : public System::Windows::Forms::Form
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



	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtValue1;
	private: System::Windows::Forms::TextBox^ txttong;
	private: System::Windows::Forms::TextBox^ txtValue2;



	public:
		SOSANH(void)
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
		~SOSANH()
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SOSANH::typeid));
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnHome = (gcnew System::Windows::Forms::Button());
			this->txtAns = (gcnew System::Windows::Forms::TextBox());
			this->btnResult = (gcnew System::Windows::Forms::Button());
			this->txtPoint = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtValue1 = (gcnew System::Windows::Forms::TextBox());
			this->txttong = (gcnew System::Windows::Forms::TextBox());
			this->txtValue2 = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(72, 15);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(33, 25);
			this->label6->TabIndex = 54;
			this->label6->Text = L"ID";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(111, 15);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(102, 30);
			this->textBox1->TabIndex = 53;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &SOSANH::textBox1_TextChanged);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->btnHome);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->txtAns);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 556);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1258, 136);
			this->panel1->TabIndex = 51;
			// 
			// btnHome
			// 
			this->btnHome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnHome->Location = System::Drawing::Point(580, 38);
			this->btnHome->Name = L"btnHome";
			this->btnHome->Size = System::Drawing::Size(120, 48);
			this->btnHome->TabIndex = 11;
			this->btnHome->Text = L"Home";
			this->btnHome->UseVisualStyleBackColor = true;
			this->btnHome->Click += gcnew System::EventHandler(this, &SOSANH::btnHome_Click);
			// 
			// txtAns
			// 
			this->txtAns->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtAns->Location = System::Drawing::Point(111, 15);
			this->txtAns->Name = L"txtAns";
			this->txtAns->Size = System::Drawing::Size(86, 30);
			this->txtAns->TabIndex = 46;
			// 
			// btnResult
			// 
			this->btnResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnResult->Location = System::Drawing::Point(580, 402);
			this->btnResult->Name = L"btnResult";
			this->btnResult->Size = System::Drawing::Size(120, 50);
			this->btnResult->TabIndex = 50;
			this->btnResult->Text = L"Result";
			this->btnResult->UseVisualStyleBackColor = true;
			this->btnResult->Click += gcnew System::EventHandler(this, &SOSANH::btnResult_Click);
			// 
			// txtPoint
			// 
			this->txtPoint->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtPoint->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPoint->Location = System::Drawing::Point(139, 72);
			this->txtPoint->Name = L"txtPoint";
			this->txtPoint->Size = System::Drawing::Size(58, 23);
			this->txtPoint->TabIndex = 48;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1258, 556);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 52;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &SOSANH::pictureBox1_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::White;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(72, 72);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(61, 25);
			this->label10->TabIndex = 56;
			this->label10->Text = L"Point";
			// 
			// txtValue1
			// 
			this->txtValue1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtValue1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtValue1->Location = System::Drawing::Point(340, 270);
			this->txtValue1->Name = L"txtValue1";
			this->txtValue1->Size = System::Drawing::Size(205, 49);
			this->txtValue1->TabIndex = 57;
			// 
			// txttong
			// 
			this->txttong->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txttong->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txttong->Location = System::Drawing::Point(580, 270);
			this->txttong->Name = L"txttong";
			this->txttong->Size = System::Drawing::Size(120, 49);
			this->txttong->TabIndex = 58;
			// 
			// txtValue2
			// 
			this->txtValue2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtValue2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtValue2->Location = System::Drawing::Point(732, 270);
			this->txtValue2->Name = L"txtValue2";
			this->txtValue2->Size = System::Drawing::Size(199, 49);
			this->txtValue2->TabIndex = 55;
			// 
			// SOSANH
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(1258, 692);
			this->Controls->Add(this->txtValue2);
			this->Controls->Add(this->txttong);
			this->Controls->Add(this->txtValue1);
			this->Controls->Add(this->txtPoint);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->btnResult);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"SOSANH";
			this->Text = L"SOSANH";
			this->Load += gcnew System::EventHandler(this, &SOSANH::SOSANH_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SOSANH_Load(System::Object^ sender, System::EventArgs^ e) {
		MathsOperator();

		txtAns->Clear();
		txtAns->Text = "100";
	}
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
	
	float vl1, vl2, test, point, ans;
	float tong = 2;


	ans = Convert::ToDouble(txtAns->Text);
	if (ans != 0) {
		vl1 = Convert::ToDouble(txtValue1->Text);
		vl2 = Convert::ToDouble(txtValue2->Text);
		tong = vl1 - vl2;
		//test = Convert::ToDouble(txttong->Text);
		point = Convert::ToDouble(txtPoint->Text);
		
		String^ test = "";
		if (tong > 0) {
			test = ">";

		}
		else if(tong==0) {
			test = "=";
		}
		else {
			test = "<";
		}
		if (txttong->Text ==test ) {

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
			txttong->Text = "";
			SoundPlayer^ sp = gcnew SoundPlayer("C://mysql//1.wav");
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
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	txtPoint->Clear();
	txtPoint->Text = "0";
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
