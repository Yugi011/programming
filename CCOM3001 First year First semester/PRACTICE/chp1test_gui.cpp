#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Output.H>
#include <FL/Fl_Box.H>
#include <FL/fl_ask.H>
#include <iomanip>
#include <sstream>
#include <string>

using namespace std;

class ExamCalculatorGUI {
private:
    Fl_Window *window;
    Fl_Input *score1_input;
    Fl_Input *score2_input;
    Fl_Input *score3_input;
    Fl_Input *score4_input;
    Fl_Output *result_output;
    Fl_Button *calculate_button;
    Fl_Button *clear_button;
    Fl_Button *exit_button;
    
public:
    ExamCalculatorGUI() {
        // Crear ventana principal
        window = new Fl_Window(500, 450, "🎓 Calculadora de Exámenes - CCOM3001");
        window->color(fl_rgb_color(245, 245, 250));
        
        // Header con color azul
        Fl_Box *header = new Fl_Box(0, 0, 500, 80);
        header->box(FL_FLAT_BOX);
        header->color(fl_rgb_color(70, 130, 180));
        
        // Título
        Fl_Box *title = new Fl_Box(20, 15, 460, 35, "🎓 CALCULADORA DE EXÁMENES");
        title->labelfont(FL_HELVETICA_BOLD);
        title->labelsize(18);
        title->labelcolor(FL_WHITE);
        title->align(FL_ALIGN_CENTER);
        
        // Subtítulo
        Fl_Box *subtitle = new Fl_Box(20, 45, 460, 25, "Sistema de Promedio Ponderado - CCOM3001");
        subtitle->labelfont(FL_HELVETICA);
        subtitle->labelsize(12);
        subtitle->labelcolor(fl_rgb_color(220, 220, 255));
        subtitle->align(FL_ALIGN_CENTER);
        
        // Marco principal
        Fl_Box *main_frame = new Fl_Box(30, 100, 440, 200);
        main_frame->box(FL_BORDER_BOX);
        main_frame->color(FL_WHITE);
        
        // Campos de entrada
        int y_pos = 120;
        int spacing = 35;
        
        // Examen 1
        Fl_Box *label1 = new Fl_Box(50, y_pos, 180, 25, "📝 ENTER SCORE FOR EXAM 1:");
        label1->align(FL_ALIGN_LEFT | FL_ALIGN_INSIDE);
        label1->labelfont(FL_HELVETICA_BOLD);
        label1->labelsize(11);
        label1->labelcolor(fl_rgb_color(70, 130, 180));
        score1_input = new Fl_Input(250, y_pos, 180, 25);
        score1_input->box(FL_DOWN_BOX);
        score1_input->color(fl_rgb_color(248, 252, 255));
        
        // Examen 2
        y_pos += spacing;
        Fl_Box *label2 = new Fl_Box(50, y_pos, 180, 25, "📝 ENTER SCORE FOR EXAM 2:");
        label2->align(FL_ALIGN_LEFT | FL_ALIGN_INSIDE);
        label2->labelfont(FL_HELVETICA_BOLD);
        label2->labelsize(11);
        label2->labelcolor(fl_rgb_color(70, 130, 180));
        score2_input = new Fl_Input(250, y_pos, 180, 25);
        score2_input->box(FL_DOWN_BOX);
        score2_input->color(fl_rgb_color(248, 252, 255));
        
        // Examen 3
        y_pos += spacing;
        Fl_Box *label3 = new Fl_Box(50, y_pos, 180, 25, "📝 ENTER SCORE FOR EXAM 3:");
        label3->align(FL_ALIGN_LEFT | FL_ALIGN_INSIDE);
        label3->labelfont(FL_HELVETICA_BOLD);
        label3->labelsize(11);
        label3->labelcolor(fl_rgb_color(70, 130, 180));
        score3_input = new Fl_Input(250, y_pos, 180, 25);
        score3_input->box(FL_DOWN_BOX);
        score3_input->color(fl_rgb_color(248, 252, 255));
        
        // Examen 4
        y_pos += spacing;
        Fl_Box *label4 = new Fl_Box(50, y_pos, 180, 25, "📝 ENTER SCORE FOR EXAM 4:");
        label4->align(FL_ALIGN_LEFT | FL_ALIGN_INSIDE);
        label4->labelfont(FL_HELVETICA_BOLD);
        label4->labelsize(11);
        label4->labelcolor(fl_rgb_color(70, 130, 180));
        score4_input = new Fl_Input(250, y_pos, 180, 25);
        score4_input->box(FL_DOWN_BOX);
        score4_input->color(fl_rgb_color(248, 252, 255));
        
        // Botones
        calculate_button = new Fl_Button(80, 320, 120, 35, "🔢 CALCULAR");
        calculate_button->callback(calculate_callback, this);
        calculate_button->box(FL_ROUND_UP_BOX);
        calculate_button->color(fl_rgb_color(34, 139, 34));
        calculate_button->labelcolor(FL_WHITE);
        calculate_button->labelfont(FL_HELVETICA_BOLD);
        
        clear_button = new Fl_Button(220, 320, 120, 35, "🗑️ LIMPIAR");
        clear_button->callback(clear_callback, this);
        clear_button->box(FL_ROUND_UP_BOX);
        clear_button->color(fl_rgb_color(255, 140, 0));
        clear_button->labelcolor(FL_WHITE);
        clear_button->labelfont(FL_HELVETICA_BOLD);
        
        exit_button = new Fl_Button(360, 320, 100, 35, "🚪 SALIR");
        exit_button->callback(exit_callback, this);
        exit_button->box(FL_ROUND_UP_BOX);
        exit_button->color(fl_rgb_color(220, 20, 60));
        exit_button->labelcolor(FL_WHITE);
        exit_button->labelfont(FL_HELVETICA_BOLD);
        
        // Marco del resultado
        Fl_Box *result_frame = new Fl_Box(30, 370, 440, 60);
        result_frame->box(FL_BORDER_BOX);
        result_frame->color(fl_rgb_color(255, 255, 240));
        
        // Etiqueta del resultado
        Fl_Box *result_label = new Fl_Box(50, 380, 420, 20, "🏆 WEIGHTED TEST SCORE:");
        result_label->align(FL_ALIGN_CENTER);
        result_label->labelfont(FL_HELVETICA_BOLD);
        result_label->labelsize(12);
        result_label->labelcolor(fl_rgb_color(184, 134, 11));
        
        // Campo de resultado
        result_output = new Fl_Output(50, 405, 420, 20);
        result_output->box(FL_DOWN_BOX);
        result_output->color(fl_rgb_color(255, 255, 240));
        result_output->textfont(FL_HELVETICA_BOLD);
        result_output->textsize(14);
        result_output->textcolor(fl_rgb_color(184, 134, 11));
        result_output->align(FL_ALIGN_CENTER);
        result_output->value("Ingrese las puntuaciones y presione CALCULAR");
        
        window->end();
    }
    
    void show() {
        window->show();
    }
    
    // Callbacks
    static void calculate_callback(Fl_Widget*, void* data) {
        ExamCalculatorGUI* calc = (ExamCalculatorGUI*)data;
        calc->calculate();
    }
    
    static void clear_callback(Fl_Widget*, void* data) {
        ExamCalculatorGUI* calc = (ExamCalculatorGUI*)data;
        calc->clear();
    }
    
    static void exit_callback(Fl_Widget*, void* data) {
        ExamCalculatorGUI* calc = (ExamCalculatorGUI*)data;
        calc->exit_program();
    }
    
    void calculate() {
        try {
            // Validar que todos los campos tengan datos
            if (!score1_input->value() || !score2_input->value() || 
                !score3_input->value() || !score4_input->value()) {
                fl_alert("⚠️ Error: Todos los campos son obligatorios.\nPor favor complete todas las puntuaciones.");
                result_output->value("❌ Error: Complete todos los campos");
                result_output->textcolor(fl_rgb_color(220, 20, 60));
                return;
            }
            
            // Obtener valores (exactamente como en chp1test.cpp)
            double testScore1 = stod(score1_input->value());
            double testScore2 = stod(score2_input->value());
            double testScore3 = stod(score3_input->value());
            double testScore4 = stod(score4_input->value());
            
            // Validar rango
            if (testScore1 < 0 || testScore1 > 100 || testScore2 < 0 || testScore2 > 100 ||
                testScore3 < 0 || testScore3 > 100 || testScore4 < 0 || testScore4 > 100) {
                fl_alert("⚠️ Error: Las puntuaciones deben estar entre 0 y 100.");
                result_output->value("❌ Error: Puntuaciones fuera del rango (0-100)");
                result_output->textcolor(fl_rgb_color(220, 20, 60));
                return;
            }
            
            // Calcular exactamente como en chp1test.cpp
            double weightTestScore = (testScore1 + testScore2 + testScore3 + testScore4) / 400;
            
            // Formatear resultado exactamente como en chp1test.cpp
            ostringstream oss;
            oss << fixed << setprecision(2);
            oss << "Weighted Test Score: " << weightTestScore * 100 << "%";
            
            result_output->value(oss.str().c_str());
            result_output->textcolor(fl_rgb_color(34, 139, 34)); // Verde
            
            // Mostrar desglose como en chp1test.cpp
            ostringstream details;
            details << "-----------------------------------------------------------\n";
            details << "EXAM 1: " << testScore1 << "\n";
            details << "EXAM 2: " << testScore2 << "\n";
            details << "EXAM 3: " << testScore3 << "\n";
            details << "EXAM 4: " << testScore4 << "\n";
            details << "-----------------------------------------------------------\n";
            details << fixed << setprecision(2);
            details << "Weighted Test Score: " << weightTestScore * 100 << "%\n";
            details << "-----------------------------------------------------------";
            
            fl_message("%s", details.str().c_str());
            
        } catch (const exception& e) {
            fl_alert("⚠️ Error: Formato de número inválido.\nPor favor ingrese solo números válidos.");
            result_output->value("❌ Error: Formato numérico inválido");
            result_output->textcolor(fl_rgb_color(220, 20, 60));
        }
    }
    
    void clear() {
        score1_input->value("");
        score2_input->value("");
        score3_input->value("");
        score4_input->value("");
        result_output->value("Ingrese las puntuaciones y presione CALCULAR");
        result_output->textcolor(fl_rgb_color(128, 128, 128));
    }
    
    void exit_program() {
        if (fl_choice("¿Está seguro que desea salir?", "Cancelar", "Sí, salir", NULL)) {
            window->hide();
        }
    }
    
    ~ExamCalculatorGUI() {
        delete window;
    }
};

int main() {
    ExamCalculatorGUI calculator;
    calculator.show();
    return Fl::run();
}