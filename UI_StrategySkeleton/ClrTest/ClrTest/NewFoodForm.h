#pragma once

namespace ClrTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for NewFoodForm
	/// </summary>
	public ref class NewFoodForm : public System::Windows::Forms::Form
	{
	public:
		NewFoodForm(void)
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
		~NewFoodForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  foodTypeLabel;
	protected:
	private: System::Windows::Forms::ComboBox^  foodTypecomboBox;
	private: System::Windows::Forms::Panel^  basicFoodPanel;
	private: System::Windows::Forms::Label^  vitaminsLabel;
	private: System::Windows::Forms::Label^  carbohydratesLabel;
	private: System::Windows::Forms::Label^  fatLabel;
	private: System::Windows::Forms::Label^  ProteinLabel;
	private: System::Windows::Forms::Label^  searchWordsLabel;
	private: System::Windows::Forms::Label^  foodNameLabel;
	private: System::Windows::Forms::TextBox^  mineralsTextBox;
	private: System::Windows::Forms::TextBox^  fiberTextBox;
	private: System::Windows::Forms::TextBox^  vitaminsTextBox;
	private: System::Windows::Forms::TextBox^  carbohydratesTextBox;
	private: System::Windows::Forms::TextBox^  fatTextBox;
	private: System::Windows::Forms::TextBox^  proteinTextBox;
	private: System::Windows::Forms::TextBox^  SeachWordsTextBox;
	private: System::Windows::Forms::TextBox^  foodNametextBox;
	private: System::Windows::Forms::Label^  mineralsLabel;
	private: System::Windows::Forms::Label^  fiberLabel;
	private: System::Windows::Forms::Button^  okButton;
	private: System::Windows::Forms::Button^  Cancel;
	private: System::Windows::Forms::Panel^  compositeFoodPanel;
	private: System::Windows::Forms::Button^  addButton;
	private: System::Windows::Forms::TextBox^  compositeTextBox;
	private: System::Windows::Forms::Label^  compositeLabel;
	private: System::Windows::Forms::ComboBox^  addBasicComboBox;
	private: System::Windows::Forms::Label^  basicFoodSelectLabel;

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
			this->foodTypeLabel = (gcnew System::Windows::Forms::Label());
			this->foodTypecomboBox = (gcnew System::Windows::Forms::ComboBox());
			this->basicFoodPanel = (gcnew System::Windows::Forms::Panel());
			this->vitaminsLabel = (gcnew System::Windows::Forms::Label());
			this->carbohydratesLabel = (gcnew System::Windows::Forms::Label());
			this->fatLabel = (gcnew System::Windows::Forms::Label());
			this->ProteinLabel = (gcnew System::Windows::Forms::Label());
			this->searchWordsLabel = (gcnew System::Windows::Forms::Label());
			this->foodNameLabel = (gcnew System::Windows::Forms::Label());
			this->fiberLabel = (gcnew System::Windows::Forms::Label());
			this->mineralsLabel = (gcnew System::Windows::Forms::Label());
			this->okButton = (gcnew System::Windows::Forms::Button());
			this->Cancel = (gcnew System::Windows::Forms::Button());
			this->foodNametextBox = (gcnew System::Windows::Forms::TextBox());
			this->SeachWordsTextBox = (gcnew System::Windows::Forms::TextBox());
			this->proteinTextBox = (gcnew System::Windows::Forms::TextBox());
			this->fatTextBox = (gcnew System::Windows::Forms::TextBox());
			this->carbohydratesTextBox = (gcnew System::Windows::Forms::TextBox());
			this->vitaminsTextBox = (gcnew System::Windows::Forms::TextBox());
			this->fiberTextBox = (gcnew System::Windows::Forms::TextBox());
			this->mineralsTextBox = (gcnew System::Windows::Forms::TextBox());
			this->compositeFoodPanel = (gcnew System::Windows::Forms::Panel());
			this->basicFoodSelectLabel = (gcnew System::Windows::Forms::Label());
			this->addBasicComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->compositeLabel = (gcnew System::Windows::Forms::Label());
			this->compositeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->basicFoodPanel->SuspendLayout();
			this->compositeFoodPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// foodTypeLabel
			// 
			this->foodTypeLabel->AutoSize = true;
			this->foodTypeLabel->Location = System::Drawing::Point(26, 29);
			this->foodTypeLabel->Name = L"foodTypeLabel";
			this->foodTypeLabel->Size = System::Drawing::Size(91, 13);
			this->foodTypeLabel->TabIndex = 0;
			this->foodTypeLabel->Text = L"Select Food Type";
			// 
			// foodTypecomboBox
			// 
			this->foodTypecomboBox->FormattingEnabled = true;
			this->foodTypecomboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Basic Food", L"Composite Food" });
			this->foodTypecomboBox->Location = System::Drawing::Point(141, 29);
			this->foodTypecomboBox->Name = L"foodTypecomboBox";
			this->foodTypecomboBox->Size = System::Drawing::Size(121, 21);
			this->foodTypecomboBox->TabIndex = 1;
			this->foodTypecomboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &NewFoodForm::foodTypecomboBox_SelectedIndexChanged);
			// 
			// basicFoodPanel
			// 
			this->basicFoodPanel->Controls->Add(this->mineralsTextBox);
			this->basicFoodPanel->Controls->Add(this->fiberTextBox);
			this->basicFoodPanel->Controls->Add(this->vitaminsTextBox);
			this->basicFoodPanel->Controls->Add(this->carbohydratesTextBox);
			this->basicFoodPanel->Controls->Add(this->fatTextBox);
			this->basicFoodPanel->Controls->Add(this->proteinTextBox);
			this->basicFoodPanel->Controls->Add(this->mineralsLabel);
			this->basicFoodPanel->Controls->Add(this->fiberLabel);
			this->basicFoodPanel->Controls->Add(this->vitaminsLabel);
			this->basicFoodPanel->Controls->Add(this->carbohydratesLabel);
			this->basicFoodPanel->Controls->Add(this->fatLabel);
			this->basicFoodPanel->Controls->Add(this->ProteinLabel);
			this->basicFoodPanel->Location = System::Drawing::Point(12, 132);
			this->basicFoodPanel->Name = L"basicFoodPanel";
			this->basicFoodPanel->Size = System::Drawing::Size(272, 256);
			this->basicFoodPanel->TabIndex = 2;
			this->basicFoodPanel->Visible = false;
			this->basicFoodPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &NewFoodForm::basicFoodPanel_Paint);
			// 
			// vitaminsLabel
			// 
			this->vitaminsLabel->AutoSize = true;
			this->vitaminsLabel->Location = System::Drawing::Point(20, 135);
			this->vitaminsLabel->Name = L"vitaminsLabel";
			this->vitaminsLabel->Size = System::Drawing::Size(46, 13);
			this->vitaminsLabel->TabIndex = 5;
			this->vitaminsLabel->Text = L"Vitamins";
			// 
			// carbohydratesLabel
			// 
			this->carbohydratesLabel->AutoSize = true;
			this->carbohydratesLabel->Location = System::Drawing::Point(20, 99);
			this->carbohydratesLabel->Name = L"carbohydratesLabel";
			this->carbohydratesLabel->Size = System::Drawing::Size(75, 13);
			this->carbohydratesLabel->TabIndex = 4;
			this->carbohydratesLabel->Text = L"Carbohydrates";
			// 
			// fatLabel
			// 
			this->fatLabel->AutoSize = true;
			this->fatLabel->Location = System::Drawing::Point(20, 63);
			this->fatLabel->Name = L"fatLabel";
			this->fatLabel->Size = System::Drawing::Size(22, 13);
			this->fatLabel->TabIndex = 3;
			this->fatLabel->Text = L"Fat";

			// 
			// ProteinLabel
			// 
			this->ProteinLabel->AutoSize = true;
			this->ProteinLabel->Location = System::Drawing::Point(20, 21);
			this->ProteinLabel->Name = L"ProteinLabel";
			this->ProteinLabel->Size = System::Drawing::Size(40, 13);
			this->ProteinLabel->TabIndex = 2;
			this->ProteinLabel->Text = L"Protein";
			// 
			// searchWordsLabel
			// 
			this->searchWordsLabel->AutoSize = true;
			this->searchWordsLabel->Location = System::Drawing::Point(26, 105);
			this->searchWordsLabel->Name = L"searchWordsLabel";
			this->searchWordsLabel->Size = System::Drawing::Size(75, 13);
			this->searchWordsLabel->TabIndex = 1;
			this->searchWordsLabel->Text = L"Search Words";
			// 
			// foodNameLabel
			// 
			this->foodNameLabel->AutoSize = true;
			this->foodNameLabel->Location = System::Drawing::Point(26, 75);
			this->foodNameLabel->Name = L"foodNameLabel";
			this->foodNameLabel->Size = System::Drawing::Size(62, 13);
			this->foodNameLabel->TabIndex = 0;
			this->foodNameLabel->Text = L"Food Name";
			// 
			// fiberLabel
			// 
			this->fiberLabel->AutoSize = true;
			this->fiberLabel->Location = System::Drawing::Point(20, 174);
			this->fiberLabel->Name = L"fiberLabel";
			this->fiberLabel->Size = System::Drawing::Size(30, 13);
			this->fiberLabel->TabIndex = 6;
			this->fiberLabel->Text = L"Fiber";
			// 
			// mineralsLabel
			// 
			this->mineralsLabel->AutoSize = true;
			this->mineralsLabel->Location = System::Drawing::Point(20, 216);
			this->mineralsLabel->Name = L"mineralsLabel";
			this->mineralsLabel->Size = System::Drawing::Size(46, 13);
			this->mineralsLabel->TabIndex = 7;
			this->mineralsLabel->Text = L"Minerals";
			// 
			// okButton
			// 
			this->okButton->Location = System::Drawing::Point(52, 404);
			this->okButton->Name = L"okButton";
			this->okButton->Size = System::Drawing::Size(74, 21);
			this->okButton->TabIndex = 8;
			this->okButton->Text = L"Ok";
			this->okButton->UseVisualStyleBackColor = true;
			// 
			// Cancel
			// 
			this->Cancel->Location = System::Drawing::Point(153, 403);
			this->Cancel->Name = L"Cancel";
			this->Cancel->Size = System::Drawing::Size(75, 23);
			this->Cancel->TabIndex = 8;
			this->Cancel->Text = L"Cancel";
			this->Cancel->UseVisualStyleBackColor = true;
			// 
			// foodNametextBox
			// 
			this->foodNametextBox->Location = System::Drawing::Point(141, 68);
			this->foodNametextBox->Name = L"foodNametextBox";
			this->foodNametextBox->Size = System::Drawing::Size(121, 20);
			this->foodNametextBox->TabIndex = 8;
			// 
			// SeachWordsTextBox
			// 
			this->SeachWordsTextBox->Location = System::Drawing::Point(141, 102);
			this->SeachWordsTextBox->Name = L"SeachWordsTextBox";
			this->SeachWordsTextBox->Size = System::Drawing::Size(121, 20);
			this->SeachWordsTextBox->TabIndex = 9;
			// 
			// proteinTextBox
			// 
			this->proteinTextBox->Location = System::Drawing::Point(129, 14);
			this->proteinTextBox->Name = L"proteinTextBox";
			this->proteinTextBox->Size = System::Drawing::Size(121, 20);
			this->proteinTextBox->TabIndex = 10;
			// 
			// fatTextBox
			// 
			this->fatTextBox->Location = System::Drawing::Point(129, 56);
			this->fatTextBox->Name = L"fatTextBox";
			this->fatTextBox->Size = System::Drawing::Size(121, 20);
			this->fatTextBox->TabIndex = 11;
			// 
			// carbohydratesTextBox
			// 
			this->carbohydratesTextBox->Location = System::Drawing::Point(129, 92);
			this->carbohydratesTextBox->Name = L"carbohydratesTextBox";
			this->carbohydratesTextBox->Size = System::Drawing::Size(121, 20);
			this->carbohydratesTextBox->TabIndex = 12;
			// 
			// vitaminsTextBox
			// 
			this->vitaminsTextBox->Location = System::Drawing::Point(129, 128);
			this->vitaminsTextBox->Name = L"vitaminsTextBox";
			this->vitaminsTextBox->Size = System::Drawing::Size(121, 20);
			this->vitaminsTextBox->TabIndex = 13;
			// 
			// fiberTextBox
			// 
			this->fiberTextBox->Location = System::Drawing::Point(129, 167);
			this->fiberTextBox->Name = L"fiberTextBox";
			this->fiberTextBox->Size = System::Drawing::Size(121, 20);
			this->fiberTextBox->TabIndex = 14;
			// 
			// mineralsTextBox
			// 
			this->mineralsTextBox->Location = System::Drawing::Point(129, 209);
			this->mineralsTextBox->Name = L"mineralsTextBox";
			this->mineralsTextBox->Size = System::Drawing::Size(121, 20);
			this->mineralsTextBox->TabIndex = 15;
			// 
			// compositeFoodPanel
			// 
			this->compositeFoodPanel->Controls->Add(this->addButton);
			this->compositeFoodPanel->Controls->Add(this->compositeTextBox);
			this->compositeFoodPanel->Controls->Add(this->compositeLabel);
			this->compositeFoodPanel->Controls->Add(this->addBasicComboBox);
			this->compositeFoodPanel->Controls->Add(this->basicFoodSelectLabel);
			this->compositeFoodPanel->Location = System::Drawing::Point(12, 132);
			this->compositeFoodPanel->Name = L"compositeFoodPanel";
			this->compositeFoodPanel->Size = System::Drawing::Size(269, 256);
			this->compositeFoodPanel->TabIndex = 16;
			this->compositeFoodPanel->Visible = false;
			// 
			// basicFoodSelectLabel
			// 
			this->basicFoodSelectLabel->AutoSize = true;
			this->basicFoodSelectLabel->Location = System::Drawing::Point(18, 21);
			this->basicFoodSelectLabel->Name = L"basicFoodSelectLabel";
			this->basicFoodSelectLabel->Size = System::Drawing::Size(82, 13);
			this->basicFoodSelectLabel->TabIndex = 0;
			this->basicFoodSelectLabel->Text = L"Add Basic Food";
			// 
			// addBasicComboBox
			// 
			this->addBasicComboBox->FormattingEnabled = true;
			this->addBasicComboBox->Location = System::Drawing::Point(125, 21);
			this->addBasicComboBox->Name = L"addBasicComboBox";
			this->addBasicComboBox->Size = System::Drawing::Size(121, 21);
			this->addBasicComboBox->TabIndex = 1;
			// 
			// compositeLabel
			// 
			this->compositeLabel->AutoSize = true;
			this->compositeLabel->Location = System::Drawing::Point(18, 99);
			this->compositeLabel->Name = L"compositeLabel";
			this->compositeLabel->Size = System::Drawing::Size(56, 13);
			this->compositeLabel->TabIndex = 2;
			this->compositeLabel->Text = L"Composite";
			// 
			// compositeTextBox
			// 
			this->compositeTextBox->Location = System::Drawing::Point(125, 92);
			this->compositeTextBox->MaximumSize = System::Drawing::Size(800, 800);
			this->compositeTextBox->Multiline = true;
			this->compositeTextBox->Name = L"compositeTextBox";
			this->compositeTextBox->Size = System::Drawing::Size(121, 95);
			this->compositeTextBox->TabIndex = 3;
			// 
			// addButton
			// 
			this->addButton->Location = System::Drawing::Point(125, 48);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(121, 23);
			this->addButton->TabIndex = 4;
			this->addButton->Text = L"Add";
			this->addButton->UseVisualStyleBackColor = true;
			// 
			// NewFoodForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(303, 463);
			this->Controls->Add(this->compositeFoodPanel);
			this->Controls->Add(this->Cancel);
			this->Controls->Add(this->okButton);
			this->Controls->Add(this->basicFoodPanel);
			this->Controls->Add(this->foodTypecomboBox);
			this->Controls->Add(this->foodTypeLabel);
			this->Controls->Add(this->SeachWordsTextBox);
			this->Controls->Add(this->foodNametextBox);
			this->Controls->Add(this->searchWordsLabel);
			this->Controls->Add(this->foodNameLabel);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"NewFoodForm";
			this->Text = L"New Food Form";
			this->basicFoodPanel->ResumeLayout(false);
			this->basicFoodPanel->PerformLayout();
			this->compositeFoodPanel->ResumeLayout(false);
			this->compositeFoodPanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void basicFoodPanel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void foodTypecomboBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

			 //System::Console::WriteLine(this->foodTypecomboBox->SelectedItem->ToString());

			 if (this->foodTypecomboBox->SelectedIndex==0)
			 {
				 this->basicFoodPanel->Visible = true;
				 this->compositeFoodPanel->Visible = false;
			 }
			 else
			 {
				 this->basicFoodPanel->Visible = false;
				 this->compositeFoodPanel->Visible = true;

			 }

}
};
}
