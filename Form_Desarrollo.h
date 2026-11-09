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

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

		Controladora^ controladora;
		bool armado;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(882, 553);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form_Desarrollo";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Frankenstein";
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
		
		private: System::Void Form_Desarrollo_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
		{
			e->Graphics->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::AntiAlias;
			controladora->dibujar_todo(e->Graphics);
		}
	};
}