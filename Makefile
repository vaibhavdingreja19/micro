CC = g++
CFLAGS = -Wall

LIBS=-lm


_DEPS = master.h 
DEPS = $(patsubst/%,$(_DEPS))

OBJ = arithmatic.cpp convert.cpp execution.cpp initilize_map_opcode.cpp input.cpp lda.cpp main.cpp mov.cpp resister_is.cpp seperator.cpp set.cpp set_flag_register.cpp sta.cpp upper.cpp validate.cpp


$(ODIR)/%.o: %.cpp $(DEPS)
		$(CC) -c -o $@ $< $(CFLAGS)
	
go: $(OBJ)
	g++ -o $@ $^ $(CFLAGS) $(LIBS)
