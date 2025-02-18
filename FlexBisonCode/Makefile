build: manualFLexBison.l manualFLexBison.y
	bison -d manualFLexBison.y
	flex manualFLexBison.l
	gcc -Wall lex.yy.c manualFLexBison.tab.c -o pdfValidator
	
run:	
	./pdfValidator ../multiPage.pdf

clean:
	rm -f manualFLexBison lex.yy.c manualFLexBison.tab.c manualFLexBison.tab.h