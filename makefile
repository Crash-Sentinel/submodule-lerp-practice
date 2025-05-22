# Name of the main file
MAIN := main

# Compile
make:
	g++ ${MAIN}.cc -o ${MAIN}.exe

# Execute
flash: ${MAIN}.exe
	.\${MAIN}.exe