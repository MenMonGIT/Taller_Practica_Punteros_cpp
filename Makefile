all: main

# Compilador
CXX = clang++
override CXXFLAGS += -g -Wall -Werror

# Biblioteca requerida
LIBS = -lcurl

# Encontrar archivos fuente
SRCS = $(shell find . -name '.ccls-cache' -type d -prune -o -type f -name '*.cpp' -print | sed -e 's/ /\\ /g')

# Regla principal (compilación y enlazado en un solo paso)
main: $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $@ $(LIBS)

# Compilación en modo debug sin optimizaciones
main-debug: $(SRCS)
	NIX_HARDENING_ENABLE= $(CXX) $(CXXFLAGS) -O0 $(SRCS) -o $@ $(LIBS)

# Limpiar archivos generados
clean:
	rm -f main main-debug