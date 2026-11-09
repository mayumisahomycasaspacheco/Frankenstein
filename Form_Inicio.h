#pragma once
#include "Form_Selection.h"
#include "Form_Creditos.h"

namespace Frankenstein {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Menu principal: JUGAR / CREDITOS / SALIR
	/// </summary>
	public ref class Form_Inicio : public System::Windows::Forms::Form
	{
	public:
		Form_Inicio(void)
		{
			InitializeComponent();
			//
			//TODO: agregar codigo de constructor aqui
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
		/// Limpiar los recursos que se esten usando.
		/// </summary>
		~Form_Inicio()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Variable del disenador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

		//Componentes
		System::Windows::Forms::Label^ lbl_titulo;
		System::Windows::Forms::Label^ lbl_subtitulo;
		System::Windows::Forms::Button^ btn_jugar;
		System::Windows::Forms::Button^ btn_creditos;
		System::Windows::Forms::Button^ btn_salir;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metodo necesario para admitir el Disenador. No se puede modificar
		/// el contenido de este metodo con el editor de codigo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form_Inicio::typeid));
			this->lbl_titulo = (gcnew System::Windows::Forms::Label());
			this->lbl_subtitulo = (gcnew System::Windows::Forms::Label());
			this->btn_jugar = (gcnew System::Windows::Forms::Button());
			this->btn_creditos = (gcnew System::Windows::Forms::Button());
			this->btn_salir = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbl_titulo
			// 
			this->lbl_titulo->BackColor = System::Drawing::Color::Transparent;
			this->lbl_titulo->Font = (gcnew System::Drawing::Font(L"Arial", 38, System::Drawing::FontStyle::Bold));
			this->lbl_titulo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_titulo->Location = System::Drawing::Point(331, 117);
			this->lbl_titulo->Name = L"lbl_titulo";
			this->lbl_titulo->Size = System::Drawing::Size(533, 70);
			this->lbl_titulo->TabIndex = 0;
			this->lbl_titulo->Text = L"FRANKENSTEIN";
			this->lbl_titulo->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lbl_subtitulo
			// 
			this->lbl_subtitulo->BackColor = System::Drawing::Color::Transparent;
			this->lbl_subtitulo->Font = (gcnew System::Drawing::Font(L"Arial", 12));
			this->lbl_subtitulo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->lbl_subtitulo->Location = System::Drawing::Point(459, 227);
			this->lbl_subtitulo->Name = L"lbl_subtitulo";
			this->lbl_subtitulo->Size = System::Drawing::Size(274, 25);
			this->lbl_subtitulo->TabIndex = 1;
			this->lbl_subtitulo->Text = L"Build monsters piece by piece";
			this->lbl_subtitulo->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// btn_jugar
			// 
			this->btn_jugar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_jugar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_jugar->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold));
			this->btn_jugar->ForeColor = System::Drawing::Color::White;
			this->btn_jugar->Location = System::Drawing::Point(482, 305);
			this->btn_jugar->Name = L"btn_jugar";
			this->btn_jugar->Size = System::Drawing::Size(220, 50);
			this->btn_jugar->TabIndex = 2;
			this->btn_jugar->Text = L"PLAY";
			this->btn_jugar->UseVisualStyleBackColor = false;
			this->btn_jugar->Click += gcnew System::EventHandler(this, &Form_Inicio::btn_jugar_Click);
			// 
			// btn_creditos
			// 
			this->btn_creditos->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->btn_creditos->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_creditos->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold));
			this->btn_creditos->ForeColor = System::Drawing::Color::White;
			this->btn_creditos->Location = System::Drawing::Point(482, 370);
			this->btn_creditos->Name = L"btn_creditos";
			this->btn_creditos->Size = System::Drawing::Size(220, 50);
			this->btn_creditos->TabIndex = 3;
			this->btn_creditos->Text = L"CREDITS";
			this->btn_creditos->UseVisualStyleBackColor = false;
			this->btn_creditos->Click += gcnew System::EventHandler(this, &Form_Inicio::btn_creditos_Click);
			// 
			// btn_salir
			// 
			this->btn_salir->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->btn_salir->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_salir->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold));
			this->btn_salir->ForeColor = System::Drawing::Color::White;
			this->btn_salir->Location = System::Drawing::Point(482, 435);
			this->btn_salir->Name = L"btn_salir";
			this->btn_salir->Size = System::Drawing::Size(220, 50);
			this->btn_salir->TabIndex = 4;
			this->btn_salir->Text = L"EXIT";
			this->btn_salir->UseVisualStyleBackColor = false;
			this->btn_salir->Click += gcnew System::EventHandler(this, &Form_Inicio::btn_salir_Click);
			// 
			// Form_Inicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(15)),
			static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1200, 667);
			this->Controls->Add(this->btn_salir);
			this->Controls->Add(this->btn_creditos);
			this->Controls->Add(this->btn_jugar);
			this->Controls->Add(this->lbl_subtitulo);
			this->Controls->Add(this->lbl_titulo);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form_Inicio";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Fankeinsten";
			this->ResumeLayout(false);

		}
#pragma endregion

		//EVENTOS
	private: System::Void btn_jugar_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Form_Selection^ frm = gcnew Form_Selection();
		this->Hide();
		frm->ShowDialog();
		this->Show();
		delete frm;
	}
	private: System::Void btn_creditos_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Form_Creditos^ frm = gcnew Form_Creditos();
		this->Hide();
		frm->ShowDialog();
		this->Show();
		delete frm;
	}
	private: System::Void btn_salir_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close(); //Es el formulario principal: al cerrarlo termina el programa
	}
	};
}
