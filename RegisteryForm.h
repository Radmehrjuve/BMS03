#pragma once

namespace BMS03 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RegisteryForm
	/// </summary>
	public ref class RegisteryForm : public System::Windows::Forms::Form
	{
	public:
		RegisteryForm(void)
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
		~RegisteryForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ lblRegisteryCVV;

	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ lblRegisteryAccountNumber;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txtRegisteryFamily;
	private: System::Windows::Forms::TextBox^ txtRegisteryNationalID;


	private: System::Windows::Forms::TextBox^ txtRegisteryName;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownRegisteryAge;
	private: System::Windows::Forms::TextBox^ txtRegisteryBalance;
	private: System::Windows::Forms::TextBox^ txtRegisteryPassword;
	private: System::Windows::Forms::Button^ btnRegisteryOK;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegisteryForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lblRegisteryCVV = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->lblRegisteryAccountNumber = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtRegisteryFamily = (gcnew System::Windows::Forms::TextBox());
			this->txtRegisteryNationalID = (gcnew System::Windows::Forms::TextBox());
			this->txtRegisteryName = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownRegisteryAge = (gcnew System::Windows::Forms::NumericUpDown());
			this->txtRegisteryBalance = (gcnew System::Windows::Forms::TextBox());
			this->txtRegisteryPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnRegisteryOK = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownRegisteryAge))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"_PDMS_Saleem_QuranFont", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(507, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(129, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter Your  National ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"_PDMS_Saleem_QuranFont", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(507, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 23);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Enter Your Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"_PDMS_Saleem_QuranFont", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(507, 107);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(96, 23);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Enter your family";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"_PDMS_Saleem_QuranFont", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(508, 205);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(107, 23);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Enter  your  Balance";
			// 
			// lblRegisteryCVV
			// 
			this->lblRegisteryCVV->AutoSize = true;
			this->lblRegisteryCVV->BackColor = System::Drawing::Color::Transparent;
			this->lblRegisteryCVV->Font = (gcnew System::Drawing::Font(L"_PDMS_Saleem_QuranFont", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblRegisteryCVV->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblRegisteryCVV->Location = System::Drawing::Point(365, 326);
			this->lblRegisteryCVV->Name = L"lblRegisteryCVV";
			this->lblRegisteryCVV->Size = System::Drawing::Size(28, 23);
			this->lblRegisteryCVV->TabIndex = 4;
			this->lblRegisteryCVV->Text = L"---";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"_PDMS_Saleem_QuranFont", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(508, 257);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(117, 23);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Enter Your  Password";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"_PDMS_Saleem_QuranFont", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Location = System::Drawing::Point(318, 303);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(69, 23);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Your cvv is: ";
			// 
			// lblRegisteryAccountNumber
			// 
			this->lblRegisteryAccountNumber->AutoSize = true;
			this->lblRegisteryAccountNumber->BackColor = System::Drawing::Color::Transparent;
			this->lblRegisteryAccountNumber->Font = (gcnew System::Drawing::Font(L"_PDMS_Saleem_QuranFont", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblRegisteryAccountNumber->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblRegisteryAccountNumber->Location = System::Drawing::Point(356, 280);
			this->lblRegisteryAccountNumber->Name = L"lblRegisteryAccountNumber";
			this->lblRegisteryAccountNumber->Size = System::Drawing::Size(52, 23);
			this->lblRegisteryAccountNumber->TabIndex = 8;
			this->lblRegisteryAccountNumber->Text = L"xxx-xxx";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"_PDMS_Saleem_QuranFont", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label10->Location = System::Drawing::Point(318, 257);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(132, 23);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Your  acount  number  is: ";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"_PDMS_Saleem_QuranFont", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label11->Location = System::Drawing::Point(97, 19);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(157, 42);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Registery Page";
			// 
			// txtRegisteryFamily
			// 
			this->txtRegisteryFamily->Location = System::Drawing::Point(511, 133);
			this->txtRegisteryFamily->Name = L"txtRegisteryFamily";
			this->txtRegisteryFamily->Size = System::Drawing::Size(100, 20);
			this->txtRegisteryFamily->TabIndex = 11;
			// 
			// txtRegisteryNationalID
			// 
			this->txtRegisteryNationalID->Location = System::Drawing::Point(511, 35);
			this->txtRegisteryNationalID->Name = L"txtRegisteryNationalID";
			this->txtRegisteryNationalID->Size = System::Drawing::Size(100, 20);
			this->txtRegisteryNationalID->TabIndex = 12;
			// 
			// txtRegisteryName
			// 
			this->txtRegisteryName->Location = System::Drawing::Point(511, 84);
			this->txtRegisteryName->Name = L"txtRegisteryName";
			this->txtRegisteryName->Size = System::Drawing::Size(100, 20);
			this->txtRegisteryName->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"_PDMS_Saleem_QuranFont", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label7->Location = System::Drawing::Point(508, 156);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(82, 23);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Enter your age";
			// 
			// numericUpDownRegisteryAge
			// 
			this->numericUpDownRegisteryAge->Location = System::Drawing::Point(511, 182);
			this->numericUpDownRegisteryAge->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 70, 0, 0, 0 });
			this->numericUpDownRegisteryAge->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 18, 0, 0, 0 });
			this->numericUpDownRegisteryAge->Name = L"numericUpDownRegisteryAge";
			this->numericUpDownRegisteryAge->Size = System::Drawing::Size(100, 20);
			this->numericUpDownRegisteryAge->TabIndex = 15;
			this->numericUpDownRegisteryAge->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 18, 0, 0, 0 });
			// 
			// txtRegisteryBalance
			// 
			this->txtRegisteryBalance->Location = System::Drawing::Point(511, 231);
			this->txtRegisteryBalance->Name = L"txtRegisteryBalance";
			this->txtRegisteryBalance->Size = System::Drawing::Size(100, 20);
			this->txtRegisteryBalance->TabIndex = 16;
			// 
			// txtRegisteryPassword
			// 
			this->txtRegisteryPassword->Location = System::Drawing::Point(512, 277);
			this->txtRegisteryPassword->Name = L"txtRegisteryPassword";
			this->txtRegisteryPassword->Size = System::Drawing::Size(100, 20);
			this->txtRegisteryPassword->TabIndex = 17;
			// 
			// btnRegisteryOK
			// 
			this->btnRegisteryOK->Font = (gcnew System::Drawing::Font(L"_PDMS_Saleem_QuranFont", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnRegisteryOK->Location = System::Drawing::Point(528, 303);
			this->btnRegisteryOK->Name = L"btnRegisteryOK";
			this->btnRegisteryOK->Size = System::Drawing::Size(75, 38);
			this->btnRegisteryOK->TabIndex = 18;
			this->btnRegisteryOK->Text = L"OK";
			this->btnRegisteryOK->UseVisualStyleBackColor = true;
			// 
			// RegisteryForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(735, 401);
			this->Controls->Add(this->btnRegisteryOK);
			this->Controls->Add(this->txtRegisteryPassword);
			this->Controls->Add(this->txtRegisteryBalance);
			this->Controls->Add(this->numericUpDownRegisteryAge);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtRegisteryName);
			this->Controls->Add(this->txtRegisteryNationalID);
			this->Controls->Add(this->txtRegisteryFamily);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->lblRegisteryAccountNumber);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->lblRegisteryCVV);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"RegisteryForm";
			this->Text = L"RegisteryForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownRegisteryAge))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
