#pragma once
#include "CLservices.h"

namespace MININFPROJETPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de MyFormGestionStatistique
	/// </summary>
	public ref class MyFormGestionStatistique : public System::Windows::Forms::Form
	{
	public:
		MyFormGestionStatistique(void)
		{
			InitializeComponent();
			this->oSvc = gcnew NS_Comp_Svc::CLservices_Statistiques();

		}
	private: NS_Comp_Svc::CLservices_Statistiques^ oSvc; //oublie pas ------------------------------------

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::RadioButton^ radioButton9;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::RadioButton^ radioButton10;
	private: System::Windows::Forms::RadioButton^ radioButton11;
	private: System::Windows::Forms::RadioButton^ radioButton12;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Data::DataSet^ oDs;////oublie pas ------------------------------------
	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~MyFormGestionStatistique()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button9;
	protected:

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormGestionStatistique::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton12 = (gcnew System::Windows::Forms::RadioButton());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::HighlightText;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(1397, 222);
			this->dataGridView1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->button1->FlatAppearance->BorderSize = 2;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(858, 724);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(236, 71);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Calculer panier moyen";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyFormGestionStatistique::CalculpanierMoyen_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->button2->FlatAppearance->BorderSize = 2;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(389, 724);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(197, 71);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Calculer chiffre d\'affaire sur un mois";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyFormGestionStatistique::chiffreAffaireUnMois_Click);
			// 
			// dateTimePicker3
			// 
			this->dateTimePicker3->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePicker3->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker3->Location = System::Drawing::Point(637, 175);
			this->dateTimePicker3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dateTimePicker3->Name = L"dateTimePicker3";
			this->dateTimePicker3->Size = System::Drawing::Size(128, 26);
			this->dateTimePicker3->TabIndex = 31;
			this->dateTimePicker3->Value = System::DateTime(2023, 12, 6, 0, 0, 0, 0);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->button3->FlatAppearance->BorderSize = 2;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Location = System::Drawing::Point(858, 639);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(236, 71);
			this->button3->TabIndex = 32;
			this->button3->Text = L"Identifier produits sous seuil de reaprovisionnement";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyFormGestionStatistique::produitsSouseuil_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->button4->FlatAppearance->BorderSize = 2;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button4->Location = System::Drawing::Point(389, 539);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(197, 85);
			this->button4->TabIndex = 33;
			this->button4->Text = L"Calculer le montant total des achats pour un client";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyFormGestionStatistique::totalAchatClient_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(637, 64);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(128, 26);
			this->textBox1->TabIndex = 34;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(641, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 20);
			this->label1->TabIndex = 35;
			this->label1->Text = L"id_client";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->button5->FlatAppearance->BorderSize = 2;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button5->Location = System::Drawing::Point(389, 639);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(197, 71);
			this->button5->TabIndex = 36;
			this->button5->Text = L"Identifier les 10 articles les plus vendus";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyFormGestionStatistique::plusVendus_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->button6->FlatAppearance->BorderSize = 2;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button6->Location = System::Drawing::Point(606, 639);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(228, 71);
			this->button6->TabIndex = 37;
			this->button6->Text = L"Identifier les 10 articles les moins vendus";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyFormGestionStatistique::moinsVendus_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->button7->FlatAppearance->BorderSize = 2;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button7->Location = System::Drawing::Point(606, 724);
			this->button7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(228, 71);
			this->button7->TabIndex = 38;
			this->button7->Text = L"Calculer la valeur commerciale du stock";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyFormGestionStatistique::TotalValeurAchatStock_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->button8->FlatAppearance->BorderSize = 2;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button8->Location = System::Drawing::Point(858, 539);
			this->button8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(236, 85);
			this->button8->TabIndex = 39;
			this->button8->Text = L"Calculer la valeur d�achat du stock";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyFormGestionStatistique::totalValeurCommercialeStock_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(637, 126);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(128, 26);
			this->textBox2->TabIndex = 40;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyFormGestionStatistique::textBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(640, 101);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 20);
			this->label2->TabIndex = 41;
			this->label2->Text = L"id_stock";
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button9->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->button9->FlatAppearance->BorderSize = 2;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button9->Location = System::Drawing::Point(606, 539);
			this->button9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(228, 85);
			this->button9->TabIndex = 42;
			this->button9->Text = L"Analyser les fluctuations commerciales pour �valuer la valeur des stocks.";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyFormGestionStatistique::simulation_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->radioButton3);
			this->panel1->Controls->Add(this->radioButton2);
			this->panel1->Controls->Add(this->radioButton1);
			this->panel1->Location = System::Drawing::Point(197, 19);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(425, 51);
			this->panel1->TabIndex = 44;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(281, 10);
			this->radioButton3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(57, 24);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"5%";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(148, 10);
			this->radioButton2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(66, 24);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"10%";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(17, 10);
			this->radioButton1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(66, 24);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"20%";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyFormGestionStatistique::radioButton1_CheckedChanged);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->radioButton4);
			this->panel2->Controls->Add(this->radioButton5);
			this->panel2->Controls->Add(this->radioButton6);
			this->panel2->Location = System::Drawing::Point(197, 76);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(425, 51);
			this->panel2->TabIndex = 45;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(281, 10);
			this->radioButton4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(66, 24);
			this->radioButton4->TabIndex = 2;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"15%";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(148, 10);
			this->radioButton5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(66, 24);
			this->radioButton5->TabIndex = 1;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"10%";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(17, 10);
			this->radioButton6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(57, 24);
			this->radioButton6->TabIndex = 0;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"5%";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->radioButton7);
			this->panel3->Controls->Add(this->radioButton8);
			this->panel3->Controls->Add(this->radioButton9);
			this->panel3->Location = System::Drawing::Point(197, 132);
			this->panel3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(425, 51);
			this->panel3->TabIndex = 46;
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(281, 10);
			this->radioButton7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(57, 24);
			this->radioButton7->TabIndex = 2;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"6%";
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(148, 10);
			this->radioButton8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(57, 24);
			this->radioButton8->TabIndex = 1;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"5%";
			this->radioButton8->UseVisualStyleBackColor = true;
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Location = System::Drawing::Point(17, 10);
			this->radioButton9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(57, 24);
			this->radioButton9->TabIndex = 0;
			this->radioButton9->TabStop = true;
			this->radioButton9->Text = L"0%";
			this->radioButton9->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(140, 32);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 20);
			this->label3->TabIndex = 47;
			this->label3->Text = L"TVA";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(33, 90);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(147, 20);
			this->label4->TabIndex = 48;
			this->label4->Text = L"marge commerciale";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(33, 146);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(149, 20);
			this->label5->TabIndex = 49;
			this->label5->Text = L"remise commericale";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(26, 201);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(150, 20);
			this->label6->TabIndex = 50;
			this->label6->Text = L"d�marque inconnue";
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->radioButton10);
			this->panel4->Controls->Add(this->radioButton11);
			this->panel4->Controls->Add(this->radioButton12);
			this->panel4->Location = System::Drawing::Point(197, 190);
			this->panel4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(425, 51);
			this->panel4->TabIndex = 47;
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->Location = System::Drawing::Point(281, 10);
			this->radioButton10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(57, 24);
			this->radioButton10->TabIndex = 2;
			this->radioButton10->TabStop = true;
			this->radioButton10->Text = L"5%";
			this->radioButton10->UseVisualStyleBackColor = true;
			// 
			// radioButton11
			// 
			this->radioButton11->AutoSize = true;
			this->radioButton11->Location = System::Drawing::Point(148, 10);
			this->radioButton11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(57, 24);
			this->radioButton11->TabIndex = 1;
			this->radioButton11->TabStop = true;
			this->radioButton11->Text = L"3%";
			this->radioButton11->UseVisualStyleBackColor = true;
			// 
			// radioButton12
			// 
			this->radioButton12->AutoSize = true;
			this->radioButton12->Location = System::Drawing::Point(17, 10);
			this->radioButton12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton12->Name = L"radioButton12";
			this->radioButton12->Size = System::Drawing::Size(57, 24);
			this->radioButton12->TabIndex = 0;
			this->radioButton12->TabStop = true;
			this->radioButton12->Text = L"2%";
			this->radioButton12->UseVisualStyleBackColor = true;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::Control;
			this->panel5->Controls->Add(this->panel4);
			this->panel5->Controls->Add(this->label6);
			this->panel5->Controls->Add(this->label5);
			this->panel5->Controls->Add(this->label4);
			this->panel5->Controls->Add(this->label3);
			this->panel5->Controls->Add(this->panel3);
			this->panel5->Controls->Add(this->panel2);
			this->panel5->Controls->Add(this->panel1);
			this->panel5->Controls->Add(this->label2);
			this->panel5->Controls->Add(this->textBox2);
			this->panel5->Controls->Add(this->label1);
			this->panel5->Controls->Add(this->textBox1);
			this->panel5->Controls->Add(this->dateTimePicker3);
			this->panel5->Location = System::Drawing::Point(335, 258);
			this->panel5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(792, 260);
			this->panel5->TabIndex = 51;
			// 
			// MyFormGestionStatistique
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1423, 808);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyFormGestionStatistique";
			this->Text = L"MyFormGestionStatistique";
			this->Load += gcnew System::EventHandler(this, &MyFormGestionStatistique::MyFormGestionStatistique_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void CalculpanierMoyen_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc = gcnew NS_Comp_Svc::CLservices_Statistiques();
		this->dataGridView1->Refresh();
		this->oDs = this->oSvc->Servicecalculerpaniermoyen("Rsl");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";
	}


	private: System::Void produitsSouseuil_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc = gcnew NS_Comp_Svc::CLservices_Statistiques();
		this->dataGridView1->Refresh();
		this->oDs = this->oSvc->ServiceproduitsSousSueilReaprovisionnement("Rsl");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";
	}

	private: System::Void plusVendus_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc = gcnew NS_Comp_Svc::CLservices_Statistiques();
		this->dataGridView1->Refresh();
		this->oDs = this->oSvc->ServicearticlePlusVendus("Rsl");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";
	}
	private: System::Void moinsVendus_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc = gcnew NS_Comp_Svc::CLservices_Statistiques();
		this->dataGridView1->Refresh();
		this->oDs = this->oSvc->ServicearticleMoinssVendus("Rsl");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";
	}
	private: System::Void chiffreAffaireUnMois_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc = gcnew NS_Comp_Svc::CLservices_Statistiques();
		this->dataGridView1->Refresh();



		this->oDs = this->oSvc->ServiceChiffreAffaireSurUnMois("Rsl", dateTimePicker3->Text);
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";


	}
	private: System::Void totalAchatClient_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc = gcnew NS_Comp_Svc::CLservices_Statistiques();
		this->dataGridView1->Refresh();
		Int16 id;

		if (Int16::TryParse(textBox1->Text, id)) {
			int id = Convert::ToInt16(textBox1->Text);
			this->oDs = this->oSvc->ServiceTotalAchatClient("Rsl", id);
			this->dataGridView1->DataSource = this->oDs;
			this->dataGridView1->DataMember = "Rsl";
		}
		else {

			MessageBox::Show("La valeur dans id_client n'est pas un entier valide.", "Erreur de conversion", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}


	}
	private: System::Void TotalValeurAchatStock_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc = gcnew NS_Comp_Svc::CLservices_Statistiques();
		this->dataGridView1->Refresh();
		Int16 id;
		if (Int16::TryParse(textBox2->Text, id)) {
			int id = Convert::ToInt16(textBox2->Text);
			this->oDs = this->oSvc->ServicetotalValeurCommercialeStock("Rsl", id);
			this->dataGridView1->DataSource = this->oDs;
			this->dataGridView1->DataMember = "Rsl";
		}
		else {
			MessageBox::Show("La valeur dans id_stock n'est pas un entier valide.", "Erreur de conversion", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void totalValeurCommercialeStock_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc = gcnew NS_Comp_Svc::CLservices_Statistiques();
		this->dataGridView1->Refresh();
		Int16 id;
		if (Int16::TryParse(textBox2->Text, id)) {
			int id = Convert::ToInt16(textBox2->Text);
			this->oDs = this->oSvc->ServiceTotalValeurAchatStock("Rsl", id);
			this->dataGridView1->DataSource = this->oDs;
			this->dataGridView1->DataMember = "Rsl";
		}
		else {
			MessageBox::Show("La valeur dans id_stock n'est pas un entier valide.", "Erreur de conversion", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	}


	private: System::Void simulation_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc = gcnew NS_Comp_Svc::CLservices_Statistiques();
		this->dataGridView1->Refresh();

		Int16 id;
		if (Int16::TryParse(textBox2->Text, id)) {
			int id = Convert::ToInt16(textBox2->Text);
			String^ tva = "0.00";
			String^ remise = "0.00";
			String^ marge = "0.00";
			String^ demarche = "0.00";
			if (radioButton1->Checked) {
				tva = "1.20"; // Assurez-vous que tva est une cha�ne, donc vous devez utiliser des guillemets doubles
			}
			if (radioButton2->Checked) {
				tva = "1.15"; // Assurez-vous que tva est une cha�ne, donc vous devez utiliser des guillemets doubles
			}
			if (radioButton3->Checked) {
				tva = "1.05"; // Assurez-vous que tva est une cha�ne, donc vous devez utiliser des guillemets doubles
			}
			if (radioButton9->Checked) {
				remise = "0.00"; // Assurez-vous que tva est une cha�ne, donc vous devez utiliser des guillemets doubles
			}
			if (radioButton8->Checked) {
				remise = "0.05"; // Assurez-vous que tva est une cha�ne, donc vous devez utiliser des guillemets doubles
			}
			if (radioButton7->Checked) {
				remise = "0.06"; // Assurez-vous que tva est une cha�ne, donc vous devez utiliser des guillemets doubles
			}
			if (radioButton6->Checked) {
				marge = "1.05"; // Assurez-vous que tva est une cha�ne, donc vous devez utiliser des guillemets doubles
			}
			if (radioButton5->Checked) {
				marge = "1.10"; // Assurez-vous que tva est une cha�ne, donc vous devez utiliser des guillemets doubles
			}
			if (radioButton4->Checked) {
				marge = "1.15"; // Assurez-vous que tva est une cha�ne, donc vous devez utiliser des guillemets doubles
			}
			if (radioButton12->Checked) {
				demarche = "0.02"; // Assurez-vous que tva est une cha�ne, donc vous devez utiliser des guillemets doubles
			}
			if (radioButton11->Checked) {
				demarche = "0.03"; // Assurez-vous que tva est une cha�ne, donc vous devez utiliser des guillemets doubles
			}
			if (radioButton10->Checked) {
				demarche = "0.05"; // Assurez-vous que tva est une cha�ne, donc vous devez utiliser des guillemets doubles
			}
			if (tva == "0.00" || marge == "0.00" || demarche == "0.00") {
				MessageBox::Show("Veuillez s�lectionner vos param�tres.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {



				this->oDs = this->oSvc->ServicetotalSimulationValeurCommercialeStock("Rsl", id, tva, remise, marge, demarche);
				this->dataGridView1->DataSource = this->oDs;
				this->dataGridView1->DataMember = "Rsl";
			}


		}
		else {
			MessageBox::Show("La valeur dans id_stock n'est pas un entier valide.", "Erreur de conversion", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyFormGestionStatistique_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}