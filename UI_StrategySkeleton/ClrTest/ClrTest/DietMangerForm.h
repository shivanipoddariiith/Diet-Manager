#pragma once

namespace ClrTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DietMangerForm
	/// </summary>
	public ref class DietMangerForm : public System::Windows::Forms::Form
	{
	public:
		DietMangerForm(void)
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
		~DietMangerForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  userNameLabel;
	protected:
	private: System::Windows::Forms::Label^  genderLabel;
	private: System::Windows::Forms::Label^  heightLabel;
	private: System::Windows::Forms::Label^  genderValueLabel;
	private: System::Windows::Forms::Label^  heightValueLabel;
	private: System::Windows::Forms::Label^  ageLabel;
	private: System::Windows::Forms::Label^  activityLevelLabel;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  dayInformationLabel;
	private: System::Windows::Forms::Label^  dayIntakeLabel;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  methodLabel;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  toLabel;
	private: System::Windows::Forms::Label^  fromLabel;
	private: System::Windows::Forms::MonthCalendar^  monthCalendar2;
	private: System::Windows::Forms::MonthCalendar^  monthCalendar1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  intakeLabel;
	private: System::Windows::Forms::Label^  consumedLabel;

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
			this->userNameLabel = (gcnew System::Windows::Forms::Label());
			this->genderLabel = (gcnew System::Windows::Forms::Label());
			this->heightLabel = (gcnew System::Windows::Forms::Label());
			this->genderValueLabel = (gcnew System::Windows::Forms::Label());
			this->heightValueLabel = (gcnew System::Windows::Forms::Label());
			this->ageLabel = (gcnew System::Windows::Forms::Label());
			this->activityLevelLabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dayInformationLabel = (gcnew System::Windows::Forms::Label());
			this->dayIntakeLabel = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->methodLabel = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->monthCalendar2 = (gcnew System::Windows::Forms::MonthCalendar());
			this->fromLabel = (gcnew System::Windows::Forms::Label());
			this->toLabel = (gcnew System::Windows::Forms::Label());
			this->consumedLabel = (gcnew System::Windows::Forms::Label());
			this->intakeLabel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// userNameLabel
			// 
			this->userNameLabel->AutoSize = true;
			this->userNameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->userNameLabel->Location = System::Drawing::Point(21, 21);
			this->userNameLabel->Name = L"userNameLabel";
			this->userNameLabel->Size = System::Drawing::Size(79, 24);
			this->userNameLabel->TabIndex = 0;
			this->userNameLabel->Text = L"User999";
			// 
			// genderLabel
			// 
			this->genderLabel->AutoSize = true;
			this->genderLabel->Location = System::Drawing::Point(153, 52);
			this->genderLabel->Name = L"genderLabel";
			this->genderLabel->Size = System::Drawing::Size(42, 13);
			this->genderLabel->TabIndex = 1;
			this->genderLabel->Text = L"Gender";
			// 
			// heightLabel
			// 
			this->heightLabel->AutoSize = true;
			this->heightLabel->Location = System::Drawing::Point(329, 52);
			this->heightLabel->Name = L"heightLabel";
			this->heightLabel->Size = System::Drawing::Size(38, 13);
			this->heightLabel->TabIndex = 2;
			this->heightLabel->Text = L"Height";
			// 
			// genderValueLabel
			// 
			this->genderValueLabel->AutoSize = true;
			this->genderValueLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->genderValueLabel->ForeColor = System::Drawing::SystemColors::WindowText;
			this->genderValueLabel->Location = System::Drawing::Point(201, 50);
			this->genderValueLabel->Name = L"genderValueLabel";
			this->genderValueLabel->Size = System::Drawing::Size(38, 16);
			this->genderValueLabel->TabIndex = 3;
			this->genderValueLabel->Text = L"Male";
			// 
			// heightValueLabel
			// 
			this->heightValueLabel->AutoSize = true;
			this->heightValueLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->heightValueLabel->Location = System::Drawing::Point(383, 50);
			this->heightValueLabel->Name = L"heightValueLabel";
			this->heightValueLabel->Size = System::Drawing::Size(32, 18);
			this->heightValueLabel->TabIndex = 4;
			this->heightValueLabel->Text = L"186";
			// 
			// ageLabel
			// 
			this->ageLabel->AutoSize = true;
			this->ageLabel->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ageLabel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ageLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ageLabel->Location = System::Drawing::Point(47, 75);
			this->ageLabel->Name = L"ageLabel";
			this->ageLabel->Padding = System::Windows::Forms::Padding(10);
			this->ageLabel->Size = System::Drawing::Size(53, 38);
			this->ageLabel->TabIndex = 5;
			this->ageLabel->Text = L"Age";
			// 
			// activityLevelLabel
			// 
			this->activityLevelLabel->AutoSize = true;
			this->activityLevelLabel->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->activityLevelLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->activityLevelLabel->Location = System::Drawing::Point(416, 75);
			this->activityLevelLabel->Name = L"activityLevelLabel";
			this->activityLevelLabel->Padding = System::Windows::Forms::Padding(10);
			this->activityLevelLabel->Size = System::Drawing::Size(107, 38);
			this->activityLevelLabel->TabIndex = 6;
			this->activityLevelLabel->Text = L"ActivityLevel";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(201, 75);
			this->label2->Name = L"label2";
			this->label2->Padding = System::Windows::Forms::Padding(10);
			this->label2->Size = System::Drawing::Size(74, 38);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Weight";
			// 
			// dayInformationLabel
			// 
			this->dayInformationLabel->AutoSize = true;
			this->dayInformationLabel->Location = System::Drawing::Point(47, 164);
			this->dayInformationLabel->Name = L"dayInformationLabel";
			this->dayInformationLabel->Size = System::Drawing::Size(118, 13);
			this->dayInformationLabel->TabIndex = 8;
			this->dayInformationLabel->Text = L"Today\'s Calorie Intake :";
			// 
			// dayIntakeLabel
			// 
			this->dayIntakeLabel->AutoSize = true;
			this->dayIntakeLabel->Location = System::Drawing::Point(201, 164);
			this->dayIntakeLabel->Name = L"dayIntakeLabel";
			this->dayIntakeLabel->Size = System::Drawing::Size(25, 13);
			this->dayIntakeLabel->TabIndex = 9;
			this->dayIntakeLabel->Text = L"189";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"BMR", L"RMR" });
			this->comboBox1->Location = System::Drawing::Point(343, 156);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(191, 21);
			this->comboBox1->TabIndex = 10;
			// 
			// methodLabel
			// 
			this->methodLabel->AutoSize = true;
			this->methodLabel->Location = System::Drawing::Point(260, 164);
			this->methodLabel->Name = L"methodLabel";
			this->methodLabel->Size = System::Drawing::Size(65, 13);
			this->methodLabel->TabIndex = 11;
			this->methodLabel->Text = L"with Method";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->intakeLabel);
			this->panel1->Controls->Add(this->consumedLabel);
			this->panel1->Controls->Add(this->toLabel);
			this->panel1->Controls->Add(this->fromLabel);
			this->panel1->Controls->Add(this->monthCalendar2);
			this->panel1->Controls->Add(this->monthCalendar1);
			this->panel1->Location = System::Drawing::Point(50, 231);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(501, 267);
			this->panel1->TabIndex = 12;
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(9, 36);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 0;
			// 
			// monthCalendar2
			// 
			this->monthCalendar2->Location = System::Drawing::Point(246, 36);
			this->monthCalendar2->Name = L"monthCalendar2";
			this->monthCalendar2->TabIndex = 1;
			// 
			// fromLabel
			// 
			this->fromLabel->AutoSize = true;
			this->fromLabel->Location = System::Drawing::Point(15, 14);
			this->fromLabel->Name = L"fromLabel";
			this->fromLabel->Size = System::Drawing::Size(30, 13);
			this->fromLabel->TabIndex = 2;
			this->fromLabel->Text = L"From";
			// 
			// toLabel
			// 
			this->toLabel->AutoSize = true;
			this->toLabel->Location = System::Drawing::Point(246, 14);
			this->toLabel->Name = L"toLabel";
			this->toLabel->Size = System::Drawing::Size(20, 13);
			this->toLabel->TabIndex = 3;
			this->toLabel->Text = L"To";
			// 
			// consumedLabel
			// 
			this->consumedLabel->AutoSize = true;
			this->consumedLabel->Location = System::Drawing::Point(58, 217);
			this->consumedLabel->Name = L"consumedLabel";
			this->consumedLabel->Size = System::Drawing::Size(87, 13);
			this->consumedLabel->TabIndex = 4;
			this->consumedLabel->Text = L"Consumed :  555";
			// 
			// intakeLabel
			// 
			this->intakeLabel->AutoSize = true;
			this->intakeLabel->Location = System::Drawing::Point(243, 217);
			this->intakeLabel->Name = L"intakeLabel";
			this->intakeLabel->Size = System::Drawing::Size(61, 13);
			this->intakeLabel->TabIndex = 5;
			this->intakeLabel->Text = L"Intake: 556";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label1->Location = System::Drawing::Point(190, 244);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 20);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Status";
			// 
			// DietMangerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(577, 522);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->methodLabel);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->dayIntakeLabel);
			this->Controls->Add(this->dayInformationLabel);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->activityLevelLabel);
			this->Controls->Add(this->ageLabel);
			this->Controls->Add(this->heightValueLabel);
			this->Controls->Add(this->genderValueLabel);
			this->Controls->Add(this->heightLabel);
			this->Controls->Add(this->genderLabel);
			this->Controls->Add(this->userNameLabel);
			this->Name = L"DietMangerForm";
			this->Text = L"DietMangerForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
