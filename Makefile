objects = tool_for_test.o main_in_project.c
  


project:$(objects)
	gcc -g -O0 tool_for_test.o main_in_project.c -o project
tool_for_test.o:tool_for_test.c
	gcc -g -O0 -c tool_for_test.c -o tool_for_test.o

.PHONY:clean
clean:
	rm project $(objects)



