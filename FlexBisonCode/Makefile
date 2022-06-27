text2PDF: text2PDF.l text2PDF.y
	bison -d text2PDF.y
	flex text2PDF.l
	gcc -Wall lex.yy.c text2PDF.tab.c -o text2PDF
	
run:	
	./text2PDF ../text2Full.pdf

clean:
	rm -f text2PDF lex.yy.c text2PDF.tab.c text2PDF.tab.h