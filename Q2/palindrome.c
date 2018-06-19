#include <stdio.h>
#include <stdbool.h>

/**
 * Escreva uma função que analisa uma dada palavra ou frase, retornando se a mesma é um palíndromo ou não.
 * 
 * Função: bool isPalindrome (char[] sentence, int length)
 * Input:
 * - sentence: array de caracteres em minúsculo da palavra ou frase a ser analisada.
 * - length: tamanho do array - número de caracteres
 * Output: true se a sentença é um palídromo, falso caso negativo.
 */

bool isPalindrome (char sentence[], int length) {
    printf("\nisPalindrome::START: %s, %d\n", sentence, length);

    bool temp = true;
     if (length % 2 != 0) {
         int half = (length -1) / 2;
         for (int i = 0; i < half; ++i) {
             if (sentence[i] != sentence[length - 1 - i]) {
                 temp = false;
             }
         }
     } else {
         temp = false;
     }
     if (temp) {
         printf("true\n");
     } else {
         printf("false\n");
     }
   
    
    
    printf("\nisPalindrome::END\n");
     if (temp) {
         return true;
    return false;
}

int main()
{
    printf("\n### CESAR School :: Sistemas Digitais :: Coding1 :: Palindrome ###\n");
    
    // true cases
    isPalindrome("ovo", 3);
    isPalindrome("arara", 5);

    // false cases
    isPalindrome("cesar", 5);
    isPalindrome("school", 6);

    return 0;
}
 
