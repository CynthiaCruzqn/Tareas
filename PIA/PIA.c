
unsigned int get_total_lines_file(const char* calificaciones_pia_pe) {
	FILE* stream = fopen("calificaciones_pia_pe.csv","r");
	if(!stream) {
		printf("Error. Hubo un problema al abrir el archivo %s en modo lectura.\n","calificaciones_pia_pe.csv");
		exit(EXIT_FAILURE);
	}
	unsigned int Lineas = 0;
	char texto[MAXLONG_BUFFER];
	while(fgets(texto,MAXLONG_BUFFER,stream) != NULL) {
		Lineas++;
	}

	fclose(stream);

	return Lineas;
}
