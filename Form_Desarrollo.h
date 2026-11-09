#pragma once
#include "Lego_Rectangulo.h"
#include "Lego_Elipse.h"
#include "Lego_Triangulo.h"
#include "Lego_Linea.h"
#include "Controladora.h"

namespace Frankenstein {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class Form_Desarrollo : public System::Windows::Forms::Form
	{
	public:
		Form_Desarrollo(void)
		{
			InitializeComponent();
			this->DoubleBuffered = true;
			controladora = gcnew Controladora();
			armado = false;
		}

		void cargar_escena(int escena)
		{
			if (escena == 1)
			{
				crear_robot();
			}

			else
			{
				crear_casa();
			}
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Form_Desarrollo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>

		System::Windows::Forms::Timer^ timer1;
		System::Windows::Forms::Button^ btn_armar;
		System::Windows::Forms::Button^ btn_desarmar;
		System::Windows::Forms::Button^ btn_menu;

		Controladora^ controladora;
		bool armado;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->btn_armar = (gcnew System::Windows::Forms::Button());
			this->btn_desarmar = (gcnew System::Windows::Forms::Button());
			this->btn_menu = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 20;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form_Desarrollo::timer1_Tick);
			// 
			// btn_armar
			// 
			this->btn_armar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_armar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_armar->Font = (gcnew System::Drawing::Font(L"Consolas", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_armar->ForeColor = System::Drawing::Color::White;
			this->btn_armar->Location = System::Drawing::Point(424, 537);
			this->btn_armar->Name = L"btn_armar";
			this->btn_armar->Size = System::Drawing::Size(166, 46);
			this->btn_armar->TabIndex = 0;
			this->btn_armar->TabStop = false;
			this->btn_armar->Text = L"ARMAR";
			this->btn_armar->UseVisualStyleBackColor = false;
			this->btn_armar->Click += gcnew System::EventHandler(this, &Form_Desarrollo::btn_armar_Click);
			// 
			// btn_desarmar
			// 
			this->btn_desarmar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->btn_desarmar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_desarmar->Font = (gcnew System::Drawing::Font(L"Consolas", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_desarmar->ForeColor = System::Drawing::Color::White;
			this->btn_desarmar->Location = System::Drawing::Point(594, 537);
			this->btn_desarmar->Name = L"btn_desarmar";
			this->btn_desarmar->Size = System::Drawing::Size(166, 46);
			this->btn_desarmar->TabIndex = 1;
			this->btn_desarmar->TabStop = false;
			this->btn_desarmar->Text = L"DESARMAR";
			this->btn_desarmar->UseVisualStyleBackColor = false;
			this->btn_desarmar->Click += gcnew System::EventHandler(this, &Form_Desarrollo::btn_desarmar_Click);
			// 
			// btn_menu
			// 
			this->btn_menu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->btn_menu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_menu->Font = (gcnew System::Drawing::Font(L"Consolas", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_menu->ForeColor = System::Drawing::Color::White;
			this->btn_menu->Location = System::Drawing::Point(944, 537);
			this->btn_menu->Name = L"btn_menu";
			this->btn_menu->Size = System::Drawing::Size(126, 46);
			this->btn_menu->TabIndex = 2;
			this->btn_menu->TabStop = false;
			this->btn_menu->Text = L"Menu";
			this->btn_menu->UseVisualStyleBackColor = false;
			this->btn_menu->Click += gcnew System::EventHandler(this, &Form_Desarrollo::btn_menu_Click);
			// 
			// Form_Desarrollo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1182, 620);
			this->Controls->Add(this->btn_menu);
			this->Controls->Add(this->btn_desarmar);
			this->Controls->Add(this->btn_armar);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form_Desarrollo";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Frankenstein";
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form_Desarrollo::Form_Desarrollo_Paint);
			this->ResumeLayout(false);

		}
#pragma endregion
		int color_rgb(int r, int g, int b)
		{
			return ColorTranslator::ToWin32(Color::FromArgb(r, g, b));
		}

		//Escena 1 : Crear Robot

		void crear_robot()
		{
			controladora->agregar(gcnew Lego_Triangulo(780, 180, 410, 95, 25, 15, color_rgb(130, 60, 160)));
			controladora->agregar(gcnew Lego_Triangulo(830, 180, 465, 95, 25, 15, color_rgb(130, 60, 160)));
			controladora->agregar(gcnew Lego_Linea(720, 170, 450, 70, 0, 40, color_rgb(200, 200, 210)));
			controladora->agregar(gcnew Lego_Elipse(650, 180, 440, 55, 20, 20, color_rgb(255, 120, 0)));

			controladora->agregar(gcnew Lego_Rectangulo(40, 40, 400, 110, 100, 80, color_rgb(110, 170, 90)));
			controladora->agregar(gcnew Lego_Rectangulo(780, 120, 388, 140, 12, 8, color_rgb(180, 180, 190)));
			controladora->agregar(gcnew Lego_Rectangulo(820, 120, 500, 140, 12, 8, color_rgb(180, 180, 190)));
			controladora->agregar(gcnew Lego_Elipse(640, 50, 418, 128, 20, 20, color_rgb(250, 230, 80)));
			controladora->agregar(gcnew Lego_Elipse(690, 50, 462, 128, 20, 20, color_rgb(250, 230, 80)));
			controladora->agregar(gcnew Lego_Rectangulo(740, 60, 425, 165, 50, 10, color_rgb(20, 10, 30)));

			controladora->agregar(gcnew Lego_Rectangulo(820, 50, 440, 190, 20, 15, color_rgb(80, 130, 70)));
			controladora->agregar(gcnew Lego_Rectangulo(230, 40, 340, 215, 40, 110, color_rgb(110, 170, 90)));
			controladora->agregar(gcnew Lego_Rectangulo(230, 170, 520, 215, 40, 110, color_rgb(110, 170, 90)));
			controladora->agregar(gcnew Lego_Rectangulo(60, 150, 380, 205, 140, 150, color_rgb(90, 110, 150)));
			controladora->agregar(gcnew Lego_Rectangulo(650, 110, 435, 250, 30, 30, color_rgb(255, 120, 0)));

			controladora->agregar(gcnew Lego_Rectangulo(50, 330, 400, 355, 45, 110, color_rgb(70, 80, 130)));
			controladora->agregar(gcnew Lego_Rectangulo(120, 330, 455, 355, 45, 110, color_rgb(70, 80, 130)));
			controladora->agregar(gcnew Lego_Rectangulo(200, 330, 390, 465, 60, 20, color_rgb(40, 40, 55)));
			controladora->agregar(gcnew Lego_Rectangulo(200, 380, 450, 465, 60, 20, color_rgb(40, 40, 55)));
		}

		//Escena 2: Crear Casa

		void crear_casa()
		{
			controladora->agregar(gcnew Lego_Rectangulo(790, 160, 525, 185, 30, 60, color_rgb(90, 90, 100)));
			controladora->agregar(gcnew Lego_Linea(830, 130, 540, 185, 10, -35, color_rgb(200, 200, 210)));

			controladora->agregar(gcnew Lego_Rectangulo(30, 40, 330, 270, 240, 170, color_rgb(120, 100, 140)));
			controladora->agregar(gcnew Lego_Triangulo(20, 230, 310, 170, 280, 100, color_rgb(170, 40, 40)));

			controladora->agregar(gcnew Lego_Rectangulo(640, 40, 470, 310, 70, 70, color_rgb(250, 220, 90)));
			controladora->agregar(gcnew Lego_Linea(740, 40, 505, 310, 0, 70, color_rgb(90, 50, 20)));
			controladora->agregar(gcnew Lego_Linea(780, 60, 470, 345, 70, 0, color_rgb(90, 50, 20)));

			controladora->agregar(gcnew Lego_Rectangulo(40, 350, 360, 350, 60, 90, color_rgb(110, 60, 30)));
			controladora->agregar(gcnew Lego_Elipse(260, 430, 405, 392, 8, 8, color_rgb(240, 200, 60)));

			controladora->agregar(gcnew Lego_Linea(230, 350, 140, 380, 0, 80, color_rgb(100, 60, 30)));
			controladora->agregar(gcnew Lego_Elipse(130, 350, 105, 320, 70, 70, color_rgb(40, 110, 50)));

			controladora->agregar(gcnew Lego_Linea(740, 170, 800, 380, 0, 80, color_rgb(100, 60, 30)));
			controladora->agregar(gcnew Lego_Elipse(620, 150, 755, 290, 90, 100, color_rgb(40, 110,50)));

			controladora->agregar(gcnew Lego_Rectangulo(620, 330, 590, 470, 130, 35, color_rgb(200, 60, 60)));
			controladora->agregar(gcnew Lego_Rectangulo(780, 330, 620, 445, 60, 25, color_rgb(200, 220, 240)));
			controladora->agregar(gcnew Lego_Elipse(640, 410, 610, 490, 26, 26, color_rgb(20, 20, 25)));
			controladora->agregar(gcnew Lego_Elipse(700, 410, 685, 490, 26, 26, color_rgb(20, 20, 25)));
		}

		private: System::Void btn_armar_Click(System::Object^ sender, System::EventArgs^ e)
		{
			armado = true;
		}

		private: System::Void btn_desarmar_Click(System::Object^ sender, System::EventArgs^ e)
		{
			armado = false;
		}

		private: System::Void btn_menu_Click(System::Object^ sender, System::EventArgs^ e)
		{
			this->Close();
		}

		private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e)
		{
			controladora->mover_todo(armado);
			this->Invalidate();
		}
		
		private: System::Void Form_Desarrollo_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
		{
			e->Graphics->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::AntiAlias;
			controladora->dibujar_todo(e->Graphics);
		}
	};
}