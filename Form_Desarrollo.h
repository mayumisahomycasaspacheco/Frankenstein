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
		}
		
		private: System::Void Form_Desarrollo_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
		{
			e->Graphics->SmoothingMode = System::Drawing 
		}
	};
}