build: text2PDF.l generated_parser.y
	bison -d generated_parser.y
	flex text2PDF.l
	gcc -Wall lex.yy.c generated_parser.tab.c -o pdfValidator
	
run:	
	./pdfValidator ../multiPage.pdf

clean:
	rm -f generated_parser lex.yy.c generated_parser.tab.c generated_parser.tab.h