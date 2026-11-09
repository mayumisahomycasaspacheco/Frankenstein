#pragma once
#include "Form_Desarrollo.h"

namespace Frankenstein {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Form_Selection
	/// </summary>
	public ref class Form_Selection : public System::Windows::Forms::Form
	{
	public:
		Form_Selection(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//

			String^ ruta = System::IO::Path::Combine(Application::StartupPath, L"Sprite-0001.png");
			if (System::IO::File::Exists(ruta))
			{
				this->BackgroundImage = Image::FromFile(ruta);
				this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			}
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Form_Selection()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

		System::Windows::Forms::Label^ lbl_titulo;
		System::Windows::Forms::Button^ btn_robot;
		System::Windows::Forms::Button^ btn_casita;
		System::Windows::Forms::Button^ btn_volver;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lbl_titulo = (gcnew System::Windows::Forms::Label());
			this->btn_robot = (gcnew System::Windows::Forms::Button());
			this->btn_casita = (gcnew System::Windows::Forms::Button());
			this->btn_volver = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbl_titulo
			// 
			this->lbl_titulo->Font = (gcnew System::Drawing::Font(L"Arial", 28, System::Drawing::FontStyle::Bold));
			this->lbl_titulo->ForeColor = System::Drawing::Color::DarkOrange;
			this->lbl_titulo->Location = System::Drawing::Point(262, 150);
			this->lbl_titulo->Name = L"lbl_titulo";
			this->lbl_titulo->Size = System::Drawing::Size(641, 60);
			this->lbl_titulo->TabIndex = 0;
			this->lbl_titulo->Text = L"CHOOSE WHAT TO BUILD";
			this->lbl_titulo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_robot
			// 
			this->btn_robot->BackColor = System::Drawing::Color::Indigo;
			this->btn_robot->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btn_robot->FlatAppearance->BorderSize = 2;
			this->btn_robot->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkSlateBlue;
			this->btn_robot->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_robot->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold));
			this->btn_robot->ForeColor = System::Drawing::Color::Orange;
			this->btn_robot->Location = System::Drawing::Point(473, 282);
			this->btn_robot->Name = L"btn_robot";
			this->btn_robot->Size = System::Drawing::Size(221, 66);
			this->btn_robot->TabIndex = 1;
			this->btn_robot->Text = L"ROBOT";
			this->btn_robot->UseVisualStyleBackColor = false;
			this->btn_robot->Click += gcnew System::EventHandler(this, &Form_Selection::btn_robot_Click);
			// 
			// btn_casita
			// 
			this->btn_casita->BackColor = System::Drawing::Color::Indigo;
			this->btn_casita->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btn_casita->FlatAppearance->BorderSize = 2;
			this->btn_casita->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkSlateBlue;
			this->btn_casita->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_casita->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold));
			this->btn_casita->ForeColor = System::Drawing::Color::Orange;
			this->btn_casita->Location = System::Drawing::Point(473, 367);
			this->btn_casita->Name = L"btn_casita";
			this->btn_casita->Size = System::Drawing::Size(221, 66);
			this->btn_casita->TabIndex = 2;
			this->btn_casita->Text = L"HOUSE";
			this->btn_casita->UseVisualStyleBackColor = false;
			this->btn_casita->Click += gcnew System::EventHandler(this, &Form_Selection::btn_casita_Click);
			// 
			// btn_volver
			// 
			this->btn_volver->BackColor = System::Drawing::Color::Indigo;
			this->btn_volver->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btn_volver->FlatAppearance->BorderSize = 2;
			this->btn_volver->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkSlateBlue;
			this->btn_volver->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_volver->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold));
			this->btn_volver->ForeColor = System::Drawing::Color::Orange;
			this->btn_volver->Location = System::Drawing::Point(473, 453);
			this->btn_volver->Name = L"btn_volver";
			this->btn_volver->Size = System::Drawing::Size(221, 70);
			this->btn_volver->TabIndex = 3;
			this->btn_volver->Text = L"RETURN";
			this->btn_volver->UseVisualStyleBackColor = false;
			this->btn_volver->Click += gcnew System::EventHandler(this, &Form_Selection::btn_volver_Click);
			// 
			// Form_Selection
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1182, 620);
			this->Controls->Add(this->btn_volver);
			this->Controls->Add(this->btn_casita);
			this->Controls->Add(this->btn_robot);
			this->Controls->Add(this->lbl_titulo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form_Selection";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Frankenstein";
			this->ResumeLayout(false);

		}
#pragma endregion
		void abrir_escena(int escena)
		{
			Form_Desarrollo^ frm = gcnew Form_Desarrollo();
			frm->cargar_escena(escena);
			this->Hide();
			frm->ShowDialog();
			this->Show();
			delete frm;
		}
	private: System::Void btn_robot_Click(System::Object^ sender, System::EventArgs^ e)
	{
		abrir_escena(1);
	}
	private: System::Void btn_casita_Click(System::Object^ sender, System::EventArgs^ e)
	{
		abrir_escena(2);
	}
	private: System::Void btn_volver_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}
	};
}
