#CFLAGS := -Wall -O2 -fPIC --ptxas-options=-v
CFLAGS := -O2 -gencode arch=compute_70,code=sm_70 -D__TRACE__
SRCDIR := .
INCDIR := .
BINDIR := .
OBJDIR := .
BIN := lzss
TARGET := $(BINDIR)/$(BIN)

#CC = gcc
CC=/usr/local/cuda-10.0/bin/nvcc
#CC=/usr/local/cuda-10.1/bin/nvcc

SRCS := $(wildcard $(SRCDIR)/*.cu)
OBJS := $(patsubst $(SRCDIR)/%.cu, $(OBJDIR)/%.o, $(SRCS))

.PHONY: all clean
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.cu
	@if [ ! -e `dirname $@` ]; then mkdir -p `dirname $@`; fi
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -rf $(OBJDIR)/*.o $(BINDIR)/$(BIN)
