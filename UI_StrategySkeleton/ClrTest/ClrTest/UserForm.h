#pragma once

namespace ClrTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UserForm
	/// </summary>
	public ref class UserForm : public System::Windows::Forms::Form
	{
	public:
		UserForm(void)
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
		~UserForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  existingUserLabel;
	private: System::Windows::Forms::Label^  newUserLabel;
	private: System::Windows::Forms::Button^  newUserButton;
	private: System::Windows::Forms::Button^  proceedButton;

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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->existingUserLabel = (gcnew System::Windows::Forms::Label());
			this->newUserLabel = (gcnew System::Windows::Forms::Label());
			this->newUserButton = (gcnew System::Windows::Forms::Button());
			this->proceedButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(176, 28);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(168, 21);
			this->comboBox1->TabIndex = 0;
			// 
			// existingUserLabel
			// 
			this->existingUserLabel->AutoSize = true;
			this->existingUserLabel->Location = System::Drawing::Point(40, 31);
			this->existingUserLabel->Name = L"existingUserLabel";
			this->existingUserLabel->Size = System::Drawing::Size(101, 13);
			this->existingUserLabel->TabIndex = 1;
			this->existingUserLabel->Text = L"Select Existing User";
			
			// 
			// newUserLabel
			// 
			this->newUserLabel->AutoSize = true;
			this->newUserLabel->Location = System::Drawing::Point(40, 81);
			this->newUserLabel->Name = L"newUserLabel";
			this->newUserLabel->Size = System::Drawing::Size(88, 13);
			this->newUserLabel->TabIndex = 2;
			this->newUserLabel->Text = L"Create New User";
			// 
			// newUserButton
			// 
			this->newUserButton->Location = System::Drawing::Point(176, 74);
			this->newUserButton->Name = L"newUserButton";
			this->newUserButton->Size = System::Drawing::Size(78, 23);
			this->newUserButton->TabIndex = 3;
			this->newUserButton->Text = L"New";
			this->newUserButton->UseVisualStyleBackColor = true;
			this->newUserButton->Click += gcnew System::EventHandler(this, &UserForm::newUserButton_Click);
			// 
			// proceedButton
			// 
			this->proceedButton->Location = System::Drawing::Point(266, 126);
			this->proceedButton->Name = L"proceedButton";
			this->proceedButton->Size = System::Drawing::Size(78, 23);
			this->proceedButton->TabIndex = 4;
			this->proceedButton->Text = L"Proceed";
			this->proceedButton->UseVisualStyleBackColor = true;
			
			// 
			// UserForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(366, 170);
			this->Controls->Add(this->proceedButton);
			this->Controls->Add(this->newUserButton);
			this->Controls->Add(this->newUserLabel);
			this->Controls->Add(this->existingUserLabel);
			this->Controls->Add(this->comboBox1);
			this->MaximizeBox = false;
			this->Name = L"UserForm";
			this->Text = L"User";
			this->Load += gcnew System::EventHandler(this, &UserForm::UserForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void UserForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	
	private: System::Void newUserButton_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
