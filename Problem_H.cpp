#include <stdio.h>

int main (){
	char text[110];
	scanf("%[^\n]", text);
	printf("#include <stdio.h\n");
	printf("int main()\n");
	printf("{\n");
	printf("    printf(\"%%s\\n\",\"%s\");\n", text);
	printf("    return 0;\n");
	printf("}\n");
}
