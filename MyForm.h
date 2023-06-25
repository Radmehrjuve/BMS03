#pragma once

namespace BMS03 {

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

	protected:

	protected:

	private: System::Windows::Forms::Button^ btnEntranceOK;
	private: System::Windows::Forms::TextBox^ txtEnteranceUsername;
	private: System::Windows::Forms::TextBox^ txtPasswordEnterence;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;

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
			this->btnEntranceOK = (gcnew System::Windows::Forms::Button());
			this->txtEnteranceUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtPasswordEnterence = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnEntranceOK
			// 
			this->btnEntranceOK->BackColor = System::Drawing::Color::Transparent;
			this->btnEntranceOK->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEntranceOK.BackgroundImage")));
			this->btnEntranceOK->Font = (gcnew System::Drawing::Font(L"_PDMS_Saleem_QuranFont", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnEntranceOK->ForeColor = System::Drawing::Color::White;
			this->btnEntranceOK->Location = System::Drawing::Point(473, 193);
			this->btnEntranceOK->Name = L"btnEntranceOK";
			this->btnEntranceOK->Size = System::Drawing::Size(65, 43);
			this->btnEntranceOK->TabIndex = 2;
			this->btnEntranceOK->Text = L"OK";
			this->btnEntranceOK->UseVisualStyleBackColor = false;
			this->btnEntranceOK->Click += gcnew System::EventHandler(this, &MyForm::btnEntranceOK_Click);
			// 
			// txtEnteranceUsername
			// 
			this->txtEnteranceUsername->Location = System::Drawing::Point(455, 90);
			this->txtEnteranceUsername->Name = L"txtEnteranceUsername";
			this->txtEnteranceUsername->Size = System::Drawing::Size(94, 20);
			this->txtEnteranceUsername->TabIndex = 3;
			// 
			// txtPasswordEnterence
			// 
			this->txtPasswordEnterence->Location = System::Drawing::Point(455, 156);
			this->txtPasswordEnterence->Name = L"txtPasswordEnterence";
			this->txtPasswordEnterence->Size = System::Drawing::Size(94, 20);
			this->txtPasswordEnterence->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"_PDMS_Saleem_QuranFont", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(423, 46);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label1->Size = System::Drawing::Size(148, 28);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Enter your national ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"_PDMS_Saleem_QuranFont", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(478, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 28);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Login";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(0, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"_PDMS_Saleem_QuranFont", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(354, 261);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(284, 34);
			this->label4->TabIndex = 8;
			this->label4->Text = L"If you dont have an account, Register";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"_PDMS_Saleem_QuranFont", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(429, 113);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(137, 28);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Enter your password";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->Font = (gcnew System::Drawing::Font(L"_PDMS_Saleem_QuranFont", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(456, 298);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 36);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Register";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(650, 400);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtPasswordEnterence);
			this->Controls->Add(this->txtEnteranceUsername);
			this->Controls->Add(this->btnEntranceOK);
			this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void btnEntranceOK_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		
	}
};
}
