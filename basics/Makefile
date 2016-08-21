# Hi, its a single makefile
# run the compiled file:
# ~/./.bin/hello

MY_COMPILER=g++
BINARY_DIR=.bin
FILE_NAME=hello

all: demo

demo: compile

compile: clean generate
	@echo ">>>create the binary file"
	@mkdir $(BINARY_DIR)
	$(MY_COMPILER) $(FILE_NAME).o -o $(BINARY_DIR)/$(FILE_NAME)

generate:
	@echo ">>>generating the output"
	$(MY_COMPILER) -c $(FILE_NAME).cpp

clean:
	@echo ">>>cleaning if exists some output"
	rm -fr $(FILE_NAME).o
	rm -fr $(BINARY_DIR)
