#ifndef GEN_H
#define GEN_H

class Gen {
public:
    char data;      // Gen karakteri
    Gen* genNext;      // Sonraki gene işaretçi
    Gen* genPrew;      // Sonraki gene işaretçi

    Gen(char d);    // Yapıcı fonksiyon
};

#endif
