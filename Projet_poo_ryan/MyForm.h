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
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
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
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeight = 29;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(240, 150);
			this->dataGridView1->TabIndex = 0;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(0, 0);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 1;
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(0, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 23);
			this->label4->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(0, 0);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(0, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 23);
			this->label3->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(0, 0);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(0, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 23);
			this->label2->TabIndex = 6;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(0, 0);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 23);
			this->label1->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(0, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(100, 23);
			this->label5->TabIndex = 6;
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(200, 100);
			this->panel2->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::MenuHighlight;
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
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeight = 29;
			this->dataGridView2->Location = System::Drawing::Point(0, 0);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->Size = System::Drawing::Size(240, 150);
			this->dataGridView2->TabIndex = 0;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(0, 0);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 22);
			this->textBox8->TabIndex = 1;
			// 
			// label9
			// 
			this->label9->Location = System::Drawing::Point(0, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(100, 23);
			this->label9->TabIndex = 2;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(0, 0);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 22);
			this->textBox7->TabIndex = 3;
			// 
			// label8
			// 
			this->label8->Location = System::Drawing::Point(0, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(100, 23);
			this->label8->TabIndex = 4;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(0, 0);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 5;
			// 
			// label7
			// 
			this->label7->Location = System::Drawing::Point(0, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(100, 23);
			this->label7->TabIndex = 6;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(0, 0);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 7;
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(0, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(100, 23);
			this->label6->TabIndex = 8;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(969, 505);
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
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Controls->Add(this->panel1);

	this->panel1->Show();
	
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Controls->Add(this->panel3);
	
	 panel3->Show();
}


private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

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

}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

}

private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
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


	}

}
};
}
