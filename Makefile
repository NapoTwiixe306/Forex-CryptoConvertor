# Compiler flags
CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c99

# Directories
SRCDIR = src
OBJDIR = obj
LIBDIR = lib

# Object files
OBJS = $(OBJDIR)/conversion.o $(OBJDIR)/display.o $(OBJDIR)/main.o

# Library files
LIBS = $(LIBDIR)/libhello.a

# Binary file
BIN = ForexConvert

# Colors
RED = \033[31m
GREEN = \033[32m
YELLOW = \033[33m
BLUE = \033[34m
NC = \033[0m

# Targets
all: $(BIN)

$(BIN): $(OBJS) $(LIBS)
	@echo "$(GREEN)Linking object files...$(NC)"
	@sleep 0.5
	$(CC) $(CFLAGS) $(OBJS) $(LIBS) -o $(BIN)
	@echo "$(GREEN)Build complete! Binary file is located at $(BIN).$(NC)"

$(LIBS): $(OBJDIR)/conversion.o
	@echo "$(BLUE)Building library file...$(NC)"
	@sleep 0.5
	ar rcs $(LIBS) $(OBJDIR)/conversion.o
	@echo "$(BLUE)Library file $(LIBS) has been created.$(NC)"

$(OBJDIR)/conversion.o: $(SRCDIR)/conversion.c $(SRCDIR)/conversion.h
	@echo "$(YELLOW)Compiling conversion.c...$(NC)"
	@sleep 0.5
	$(CC) $(CFLAGS) -c $(SRCDIR)/conversion.c -o $(OBJDIR)/conversion.o

$(OBJDIR)/display.o: $(SRCDIR)/display.c $(SRCDIR)/currency.h
	@echo "$(YELLOW)Compiling display.c...$(NC)"
	@sleep 0.5
	$(CC) $(CFLAGS) -c $(SRCDIR)/display.c -o $(OBJDIR)/display.o

$(OBJDIR)/main.o: $(SRCDIR)/main.c $(SRCDIR)/conversion.h $(SRCDIR)/currency.h
	@echo "$(YELLOW)Compiling main.c...$(NC)"
	@sleep 0.5
	$(CC) $(CFLAGS) -c $(SRCDIR)/main.c -o $(OBJDIR)/main.o

clean:
	@echo "$(RED)Cleaning up...$(NC)"
	@sleep 0.5
	rm -f $(OBJS) $(LIBS) $(BIN)
