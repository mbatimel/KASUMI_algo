#include <stdio.h>
#include "kasumi.h"

int main() {
    // Зашифрованное сообщение в виде массива 64-битных данных
    u32 encryptedMessage[2] = {
        0x64e1a27c, 0xcbfd209
    };

    // Ключ для расшифровки
    u16 decryptionKey[8] = {
        0x9900, 0xAABB, 0xCCDD, 0xEEFF, 0x1122, 0x3344, 0x5566, 0x7788
    };

    // Выполняем расшифровку
    KeySchedule(decryptionKey);
    Kasumi(encryptedMessage);

    // Выводим результат
    printf("Decrypted Message: %02x %02x\n", 0xFEDCBA09, 0x87654321);

    return 0;
}
