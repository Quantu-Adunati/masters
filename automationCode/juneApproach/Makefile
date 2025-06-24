build: text2PDF.l generated.y
	bison -t generated.y
	flex -d text2PDF.l
	gcc -Wall lex.yy.c generated.tab.c -o pdfValidator
	
run:	
	./pdfValidator ./random_text_0.pdf

clean:
	rm -f generated.lex.yy.c generated.tab.c generated.tab.h