# Compiler flags
CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c99

# Directories
SRCDIR = src
OBJDIR = obj
LIBDIR = lib

# Object files
SRCS = $(wildcard $(SRCDIR)/*.c)
OBJS = $(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(SRCS))

# Library files
LIBS = $(LIBDIR)/libhello.a

# Binary file
BIN = ForexConvert

# Targets
all: $(BIN)

$(BIN): $(OBJS) $(LIBS)
	@echo "\033[32mLinking object files...\033[0m"
	@sleep 0.5
	$(CC) $(CFLAGS) $(OBJS) $(LIBS) -o $(BIN)
	@echo "\033[32mBuild complete! Binary file is located at $(BIN).\033[0m"

$(LIBS): $(OBJDIR)/conversion.o
	@echo "\033[34mBuilding library file...\033[0m"
	@sleep 0.5
	ar rcs $(LIBS) $(OBJDIR)/conversion.o
	@echo "\033[34mLibrary file $(LIBS) has been created.\033[0m"

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@echo "\033[33mCompiling $<...\033[0m"
	@sleep 0.5
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "\033[31mCleaning up...\033[0m"
	@sleep 0.5
	rm -f $(OBJS) $(LIBS) $(BIN)
