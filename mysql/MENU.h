#pragma once
#include"CONG.h"
#include"Tru.h"
#include"SOSANH.h"
namespace mysql {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MENU
	/// </summary>
	public ref class MENU : public System::Windows::Forms::Form
	{
	public:
		MENU(void)
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
		~MENU()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel2;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel_left;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Button^ btnSoSanh;
	private: System::Windows::Forms::Button^ btnCong;
	private: System::Windows::Forms::Button^ btnTru;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MENU::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel_left = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnSoSanh = (gcnew System::Windows::Forms::Button());
			this->btnCong = (gcnew System::Windows::Forms::Button());
			this->btnTru = (gcnew System::Windows::Forms::Button());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel_left->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(200, 89);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1058, 603);
			this->panel2->TabIndex = 7;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Gray;
			this->pictureBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(0, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(1058, 603);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(200, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1058, 89);
			this->panel1->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(28, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Home";
			// 
			// panel_left
			// 
			this->panel_left->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel_left->Controls->Add(this->pictureBox1);
			this->panel_left->Controls->Add(this->btnSoSanh);
			this->panel_left->Controls->Add(this->btnCong);
			this->panel_left->Controls->Add(this->btnTru);
			this->panel_left->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel_left->Location = System::Drawing::Point(0, 0);
			this->panel_left->Name = L"panel_left";
			this->panel_left->Size = System::Drawing::Size(200, 692);
			this->panel_left->TabIndex = 5;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Top;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(200, 148);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// btnSoSanh
			// 
			this->btnSoSanh->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnSoSanh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSoSanh->Location = System::Drawing::Point(0, 144);
			this->btnSoSanh->Name = L"btnSoSanh";
			this->btnSoSanh->Size = System::Drawing::Size(200, 83);
			this->btnSoSanh->TabIndex = 2;
			this->btnSoSanh->Text = L"So sánh";
			this->btnSoSanh->UseVisualStyleBackColor = false;
			this->btnSoSanh->Click += gcnew System::EventHandler(this, &MENU::btnSoSanh_Click);
			// 
			// btnCong
			// 
			this->btnCong->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnCong->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCong->Location = System::Drawing::Point(0, 303);
			this->btnCong->Name = L"btnCong";
			this->btnCong->Size = System::Drawing::Size(200, 83);
			this->btnCong->TabIndex = 0;
			this->btnCong->Text = L"Phép cộng";
			this->btnCong->UseVisualStyleBackColor = false;
			this->btnCong->Click += gcnew System::EventHandler(this, &MENU::btnCong_Click);
			// 
			// btnTru
			// 
			this->btnTru->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnTru->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTru->Location = System::Drawing::Point(0, 224);
			this->btnTru->Name = L"btnTru";
			this->btnTru->Size = System::Drawing::Size(200, 83);
			this->btnTru->TabIndex = 1;
			this->btnTru->Text = L"Phép trừ";
			this->btnTru->UseVisualStyleBackColor = false;
			this->btnTru->Click += gcnew System::EventHandler(this, &MENU::btnTru_Click);
			// 
			// MENU
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1258, 692);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel_left);
			this->Name = L"MENU";
			this->Text = L"MENU";
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel_left->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnCong_Click(System::Object^ sender, System::EventArgs^ e) {
		CONG^ f3 = gcnew CONG();
		f3->ShowDialog();
	}
private: System::Void btnTru_Click(System::Object^ sender, System::EventArgs^ e) {
	Tru^ f3 = gcnew Tru();
	f3->ShowDialog();
}
private: System::Void btnSoSanh_Click(System::Object^ sender, System::EventArgs^ e) {
	SOSANH^ f3 = gcnew SOSANH();
	f3->ShowDialog();
}
};
}
