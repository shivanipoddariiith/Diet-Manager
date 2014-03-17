#pragma once

namespace ClrTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for NewUserForm
	/// </summary>
	public ref class NewUserForm : public System::Windows::Forms::Form
	{
	public:
		NewUserForm(void)
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
		~NewUserForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  okButton;
	protected:
	private: System::Windows::Forms::Button^  cancelButton;
	private: System::Windows::Forms::Label^  nameLabel;
	private: System::Windows::Forms::Label^  ageLabel;
	private: System::Windows::Forms::Label^  genderLabel;
	private: System::Windows::Forms::Label^  heightLabel;
	private: System::Windows::Forms::Label^  weightLabel;
	private: System::Windows::Forms::ComboBox^  genderComboBox;
	private: System::Windows::Forms::TextBox^  heightTextBox;
	private: System::Windows::Forms::TextBox^  ageTextBox;
	private: System::Windows::Forms::TextBox^  weightTextBox;
	private: System::Windows::Forms::TextBox^  nameTextBox;




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
			this->okButton = (gcnew System::Windows::Forms::Button());
			this->cancelButton = (gcnew System::Windows::Forms::Button());
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->ageLabel = (gcnew System::Windows::Forms::Label());
			this->genderLabel = (gcnew System::Windows::Forms::Label());
			this->heightLabel = (gcnew System::Windows::Forms::Label());
			this->weightLabel = (gcnew System::Windows::Forms::Label());
			this->genderComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->heightTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ageTextBox = (gcnew System::Windows::Forms::TextBox());
			this->weightTextBox = (gcnew System::Windows::Forms::TextBox());
			this->nameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// okButton
			// 
			this->okButton->Location = System::Drawing::Point(50, 281);
			this->okButton->Name = L"okButton";
			this->okButton->Size = System::Drawing::Size(75, 23);
			this->okButton->TabIndex = 0;
			this->okButton->Text = L"Ok";
			this->okButton->UseVisualStyleBackColor = true;
			// 
			// cancelButton
			// 
			this->cancelButton->Location = System::Drawing::Point(152, 281);
			this->cancelButton->Name = L"cancelButton";
			this->cancelButton->Size = System::Drawing::Size(75, 23);
			this->cancelButton->TabIndex = 1;
			this->cancelButton->Text = L"Cancel";
			this->cancelButton->UseVisualStyleBackColor = true;
			// 
			// nameLabel
			// 
			this->nameLabel->AutoSize = true;
			this->nameLabel->Location = System::Drawing::Point(34, 55);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(35, 13);
			this->nameLabel->TabIndex = 2;
			this->nameLabel->Text = L"Name";

			// 
			// ageLabel
			// 
			this->ageLabel->AutoSize = true;
			this->ageLabel->Location = System::Drawing::Point(34, 159);
			this->ageLabel->Name = L"ageLabel";
			this->ageLabel->Size = System::Drawing::Size(26, 13);
			this->ageLabel->TabIndex = 3;
			this->ageLabel->Text = L"Age";
			// 
			// genderLabel
			// 
			this->genderLabel->AutoSize = true;
			this->genderLabel->Location = System::Drawing::Point(34, 90);
			this->genderLabel->Name = L"genderLabel";
			this->genderLabel->Size = System::Drawing::Size(42, 13);
			this->genderLabel->TabIndex = 4;
			this->genderLabel->Text = L"Gender";
			// 
			// heightLabel
			// 
			this->heightLabel->AutoSize = true;
			this->heightLabel->Location = System::Drawing::Point(34, 129);
			this->heightLabel->Name = L"heightLabel";
			this->heightLabel->Size = System::Drawing::Size(38, 13);
			this->heightLabel->TabIndex = 5;
			this->heightLabel->Text = L"Height";

			// 
			// weightLabel
			// 
			this->weightLabel->AutoSize = true;
			this->weightLabel->Location = System::Drawing::Point(34, 186);
			this->weightLabel->Name = L"weightLabel";
			this->weightLabel->Size = System::Drawing::Size(41, 13);
			this->weightLabel->TabIndex = 6;
			this->weightLabel->Text = L"Weight";
			// 
			// genderComboBox
			// 
			this->genderComboBox->FormattingEnabled = true;
			this->genderComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->genderComboBox->Location = System::Drawing::Point(96, 87);
			this->genderComboBox->Name = L"genderComboBox";
			this->genderComboBox->Size = System::Drawing::Size(121, 21);
			this->genderComboBox->TabIndex = 7;

			// 
			// heightTextBox
			// 
			this->heightTextBox->Location = System::Drawing::Point(96, 128);
			this->heightTextBox->Name = L"heightTextBox";
			this->heightTextBox->Size = System::Drawing::Size(121, 20);
			this->heightTextBox->TabIndex = 8;
			// 
			// ageTextBox
			// 
			this->ageTextBox->Location = System::Drawing::Point(96, 158);
			this->ageTextBox->Name = L"ageTextBox";
			this->ageTextBox->Size = System::Drawing::Size(121, 20);
			this->ageTextBox->TabIndex = 9;
			// 
			// weightTextBox
			// 
			this->weightTextBox->Location = System::Drawing::Point(96, 186);
			this->weightTextBox->Name = L"weightTextBox";
			this->weightTextBox->Size = System::Drawing::Size(121, 20);
			this->weightTextBox->TabIndex = 10;
			// 
			// nameTextBox
			// 
			this->nameTextBox->Location = System::Drawing::Point(96, 55);
			this->nameTextBox->Name = L"nameTextBox";
			this->nameTextBox->Size = System::Drawing::Size(121, 20);
			this->nameTextBox->TabIndex = 11;
			// 
			// NewUserForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(257, 326);
			this->Controls->Add(this->nameTextBox);
			this->Controls->Add(this->weightTextBox);
			this->Controls->Add(this->ageTextBox);
			this->Controls->Add(this->heightTextBox);
			this->Controls->Add(this->genderComboBox);
			this->Controls->Add(this->weightLabel);
			this->Controls->Add(this->heightLabel);
			this->Controls->Add(this->genderLabel);
			this->Controls->Add(this->ageLabel);
			this->Controls->Add(this->nameLabel);
			this->Controls->Add(this->cancelButton);
			this->Controls->Add(this->okButton);
			this->Name = L"NewUserForm";
			this->Text = L"NewUserForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	

};
}
