clean:
	rm -f generated.lex.yy.c generated.tab.c generated.tab.h lex.yy.c pdfValidator output.txt

build: text2PDF.l generated.y grammarBuilder.py
	python3 grammarBuilder.py
	bison -t generated.y
	flex -d text2PDF.l
	gcc -Wall lex.yy.c generated.tab.c -o pdfValidator

run:
	./pdfValidator ./random_text_0.pdf > output.txt 2>&1

all: clean build run