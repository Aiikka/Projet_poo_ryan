#pragma once
#include "CL_CAD.h"
#include"SVC_gestionCommande.h"
#include"CL_svc_gestionClient.h"
#include"SVC_gestionPersonnel.h"
#include"CL_mappFACTURE.h"
namespace Projetpooryan {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Drawing;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Xml;
	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button1;

	private: NS_SVC::CL_svc_gestionCOMMANDE^ commande;
	private: NS_SVC::CL_svc_gestionPersonnel^ personnel;
	private: NS_SVC::CL_svc_gestionClient^ client;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label14;
















	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(363, 1);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(174, 51);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Commande";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(543, 1);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(181, 51);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Stock";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 1);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(162, 51);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Personnel";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button5->Location = System::Drawing::Point(730, 1);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(213, 50);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Statistique";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(180, 1);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(177, 50);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Client";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(12, 58);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(931, 435);
			this->panel1->TabIndex = 6;
			this->panel1->Visible = false;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);


			// label1
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Id_Personnel";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(23, 64);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(171, 22);
			this->textBox1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(20, 106);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nom";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(23, 136);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(171, 22);
			this->textBox2->TabIndex = 3;
			//
		
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(20, 175);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"adresse";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(23, 194);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(171, 22);
			this->textBox3->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(20, 231);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(108, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Date_Embauche";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(23, 261);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(171, 22);
			this->textBox4->TabIndex = 7;
			//
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(250, 70);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(500, 200);
			this->dataGridView1->TabIndex = 7;
			// 
			// dataGridView1
			// 
			
			
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(200, 100);
			this->panel2->TabIndex = 0;




			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(28, 28);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(58, 16);
			this->label6->TabIndex = 0;
			this->label6->Text = L"id_Client";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(31, 65);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(131, 22);
			this->textBox5->TabIndex = 1;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(28, 105);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(36, 16);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Nom";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(31, 141);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(131, 22);
			this->textBox6->TabIndex = 3;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(28, 180);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(54, 16);
			this->label8->TabIndex = 4;
			this->label8->Text = L"Prenom";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(31, 212);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(131, 22);
			this->textBox7->TabIndex = 5;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(28, 268);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(105, 16);
			this->label9->TabIndex = 6;
			this->label9->Text = L"Date_naissance";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(31, 300);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(131, 22);
			this->textBox8->TabIndex = 7;
			// 
			// dataGridView2
			//
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(250, 70);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(500, 200);
			this->dataGridView2->TabIndex = 8;
			// 
			// panel3
			// 
			
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Controls->Add(this->dataGridView2);
			this->panel3->Controls->Add(this->textBox8);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->textBox7);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->textBox6);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->textBox5);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Location = System::Drawing::Point(12, 57);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(945, 435);
			this->panel3->TabIndex = 7;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel3_Paint);
			// 
			// panel4
			// 
			
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->dataGridView3);
			this->panel5->Controls->Add(this->button13);
			this->panel5->Controls->Add(this->button12);
			this->panel5->Controls->Add(this->button11);
			this->panel5->Controls->Add(this->button6);
			this->panel5->Controls->Add(this->button10);
			this->panel5->Controls->Add(this->button9);
			this->panel5->Controls->Add(this->button8);
			this->panel5->Controls->Add(this->button7);
			this->panel5->Controls->Add(this->label13);
			this->panel5->Controls->Add(this->textBox12);
			this->panel5->Controls->Add(this->textBox11);
			this->panel5->Controls->Add(this->label12);
			this->panel5->Controls->Add(this->textBox10);
			this->panel5->Controls->Add(this->label11);
			this->panel5->Controls->Add(this->textBox9);
			this->panel5->Controls->Add(this->label10);
			this->panel5->Location = System::Drawing::Point(8, 57);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(949, 446);
			this->panel5->TabIndex = 7;
			this->panel5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel5_Paint);
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(266, 3);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(680, 360);
			this->dataGridView3->TabIndex = 17;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(4, 368);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 23);
			this->button13->TabIndex = 16;
			this->button13->Text = L"<<";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(247, 368);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 23);
			this->button12->TabIndex = 15;
			this->button12->Text = L">>";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(85, 368);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 23);
			this->button11->TabIndex = 14;
			this->button11->Text = L"<";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(166, 368);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 13;
			this->button6->Text = L">";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(149, 397);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(92, 50);
			this->button10->TabIndex = 12;
			this->button10->Text = L"Afficher";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(149, 314);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(92, 48);
			this->button9->TabIndex = 11;
			this->button9->Text = L"modifier";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(32, 397);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(92, 50);
			this->button8->TabIndex = 10;
			this->button8->Text = L"Supprimer";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(28, 314);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(94, 46);
			this->button7->TabIndex = 9;
			this->button7->Text = L"Ajouter";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(29, 252);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(95, 16);
			this->label13->TabIndex = 7;
			this->label13->Text = L"date_Livraison";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(28, 271);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(204, 22);
			this->textBox12->TabIndex = 6;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(28, 211);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(204, 22);
			this->textBox11->TabIndex = 5;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(25, 179);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(111, 16);
			this->label12->TabIndex = 4;
			this->label12->Text = L"date_Commande";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(28, 138);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(204, 22);
			this->textBox10->TabIndex = 3;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(25, 110);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(99, 16);
			this->label11->TabIndex = 2;
			this->label11->Text = L"NomReference";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(28, 56);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(204, 22);
			this->textBox9->TabIndex = 1;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(29, 37);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(93, 16);
			this->label10->TabIndex = 0;
			this->label10->Text = L"id_commande";
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->dataGridView4);
			this->panel6->Controls->Add(this->button21);
			this->panel6->Controls->Add(this->button20);
			this->panel6->Controls->Add(this->button19);
			this->panel6->Controls->Add(this->button18);
			this->panel6->Controls->Add(this->button17);
			this->panel6->Controls->Add(this->button16);
			this->panel6->Controls->Add(this->button15);
			this->panel6->Controls->Add(this->button14);
			this->panel6->Controls->Add(this->textBox15);
			this->panel6->Controls->Add(this->label16);
			this->panel6->Controls->Add(this->textBox14);
			this->panel6->Controls->Add(this->label15);
			this->panel6->Controls->Add(this->textBox13);
			this->panel6->Controls->Add(this->label14);
			this->panel6->Location = System::Drawing::Point(3, 57);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(962, 418);
			this->panel6->TabIndex = 7;
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(86, 303);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(75, 23);
			this->button21->TabIndex = 34;
			this->button21->Text = L"<";
			this->button21->UseVisualStyleBackColor = true;
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(5, 303);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(75, 23);
			this->button20->TabIndex = 33;
			this->button20->Text = L"<<";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(167, 303);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(75, 23);
			this->button19->TabIndex = 32;
			this->button19->Text = L">";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(248, 303);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(75, 23);
			this->button18->TabIndex = 31;
			this->button18->Text = L">>";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(21, 332);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(98, 39);
			this->button17->TabIndex = 30;
			this->button17->Text = L"Supprimer";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(199, 332);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(84, 43);
			this->button16->TabIndex = 29;
			this->button16->Text = L"Afficher";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(135, 245);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(84, 44);
			this->button15->TabIndex = 28;
			this->button15->Text = L"Modifier";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click_1);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(21, 245);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(98, 43);
			this->button14->TabIndex = 27;
			this->button14->Text = L"Ajouter";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(21, 200);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(150, 22);
			this->textBox15->TabIndex = 26;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(18, 176);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(119, 16);
			this->label16->TabIndex = 25;
			this->label16->Text = L"reaprovisionement";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(21, 115);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(150, 22);
			this->textBox14->TabIndex = 24;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(18, 84);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(79, 16);
			this->label15->TabIndex = 23;
			this->label15->Text = L"Nom_article";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(21, 43);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(150, 22);
			this->textBox13->TabIndex = 22;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(18, 11);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(62, 16);
			this->label14->TabIndex = 21;
			this->label14->Text = L"id_Article";
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(329, 3);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowHeadersWidth = 51;
			this->dataGridView4->RowTemplate->Height = 24;
			this->dataGridView4->Size = System::Drawing::Size(630, 323);
			this->dataGridView4->TabIndex = 35;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(977, 507);
		
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label5);

			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Controls->Add(this->panel1);

	this->panel3->Hide();
	this->panel5->Hide();
	this->panel6->Hide();
	this->panel1->Show();

}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Controls->Add(this->panel5);

	this->panel1->Hide();
	this->panel3->Hide();
	this->panel6->Hide();
	this->panel5->Show();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Add(this->panel6);
	this->panel1->Hide();
	this->panel3->Hide();
	this->panel5->Hide();
	this->panel6->Show();
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Controls->Add(this->panel3);
	this->panel1->Hide();
    this->panel5->Hide();
	this->panel6->Hide();
	 panel3->Show();
}


private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

	

}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

}

private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	


}

private: System::Void panel5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	
}

private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox13_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button15_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}
