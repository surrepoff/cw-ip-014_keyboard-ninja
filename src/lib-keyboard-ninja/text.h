#ifndef TEXT_H
#define TEXT_H

void randomize_text_number(char text_type, char text_number[11]);
char randomize_text_type();
void randomize_identifier(char identifier[16]);
void read_text(char text[512], char identifier[16], char filename[256]);

#endif /* TEXT_H */