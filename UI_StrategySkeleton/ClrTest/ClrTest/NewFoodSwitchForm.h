#pragma once

namespace ClrTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for NewFoodSwitchForm
	/// </summary>
	public ref class NewFoodSwitchForm : public System::Windows::Forms::Form
	{
	public:
		NewFoodSwitchForm(void)
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
		~NewFoodSwitchForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  internetButton;
	private: System::Windows::Forms::Button^  manualButton;
	protected:

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
			this->internetButton = (gcnew System::Windows::Forms::Button());
			this->manualButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// internetButton
			// 
			this->internetButton->Location = System::Drawing::Point(33, 33);
			this->internetButton->Name = L"internetButton";
			this->internetButton->Size = System::Drawing::Size(75, 57);
			this->internetButton->TabIndex = 0;
			this->internetButton->Text = L"Load From Internet";
			this->internetButton->UseVisualStyleBackColor = true;
			// 
			// manualButton
			// 
			this->manualButton->Location = System::Drawing::Point(136, 33);
			this->manualButton->Name = L"manualButton";
			this->manualButton->Size = System::Drawing::Size(78, 57);
			this->manualButton->TabIndex = 1;
			this->manualButton->Text = L"Create Manually";
			this->manualButton->UseVisualStyleBackColor = true;
			this->manualButton->Click += gcnew System::EventHandler(this, &NewFoodSwitchForm::button2_Click);
			// 
			// NewFoodSwitchForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(252, 124);
			this->Controls->Add(this->manualButton);
			this->Controls->Add(this->internetButton);
			this->Name = L"NewFoodSwitchForm";
			this->Text = L"NewFoodSwitchForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
