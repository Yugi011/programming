# Makefile para Calculadora de Exámenes

CXX = g++
CXXFLAGS = -std=c++11

# Compilar programa original
chp1test: chp1test.cpp
	$(CXX) $(CXXFLAGS) -o chp1test chp1test.cpp

# Compilar interfaz gráfica FLTK
chp1test_gui: chp1test_gui.cpp
	$(CXX) $(CXXFLAGS) `fltk-config --cxxflags` -o chp1test_gui chp1test_gui.cpp `fltk-config --ldflags`

# Limpiar archivos compilados
clean:
	rm -f chp1test chp1test_gui

# Ayuda
help:
	@echo "Comandos disponibles:"
	@echo "  make chp1test      - Compilar programa original de terminal"
	@echo "  make chp1test_gui  - Compilar interfaz gráfica FLTK"
	@echo "  make clean         - Limpiar archivos compilados"
	@echo "  make install-fltk  - Instalar FLTK con Homebrew"

# Instalar FLTK
install-fltk:
	brew install fltk

.PHONY: clean help install-fltk