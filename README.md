# Some LEX and YACC programs

Lex is a lexical analyzer generator or a scanner generator  that takes a set of regular expressions and generates a C program that 
matches input against those regular expressions. It takes a description of the token patterns in a programming language and generates 
code that can recognize those tokens in the input.

Yacc (Yet Another Compiler Compiler) is a parser generator that takes a grammar specification and generates a C program that parses input 
according to that grammar. The grammar specification describes the syntax of the programming language, and Yacc generates code that can 
parse input according to that syntax.

Together, Lex and Yacc can be used to build a complete compiler or interpreter for a programming language. Lex is used to break the input 
into a stream of tokens, and Yacc is used to parse those tokens according to the syntax of the language. The resulting parse tree can 
then be used to generate code or execute the input directly.

While programming in lex and yacc, we would give the lex program as an input to the yacc program


# Compiling lex and yacc programs

- Write the lex program and save it as '*file_name*.lex'
- Inorder to compile the lex program, type in **lex file_name.lex**
- Now you would get a file named '*lex.yy.c*' in the current working directory
- Compile the *lex.yy.c* file using **gcc lex.yy.c**
- Use **./a.out** to run the program
