    ███████ ████████         ██████  ██████  ██ ███    ██ ████████ ███████ 
    ██         ██            ██   ██ ██   ██ ██ ████   ██    ██    ██      
    █████      ██            ██████  ██████  ██ ██ ██  ██    ██    █████   
    ██         ██            ██      ██   ██ ██ ██  ██ ██    ██    ██      
    ██         ██    ███████ ██      ██   ██ ██ ██   ████    ██    ██      
                                                                       
                                                                       

# ft_printf

**ft_printf** é uma implementação personalizada da função `printf` em C. Este projeto foi desenvolvido como parte do currículo da 42, onde o objetivo é criar uma versão própria da função `printf`, capaz de formatar e imprimir uma variedade de tipos de dados.

## 📋 Índice

- [Visão Geral](#visão-geral)
- [Instalação](#instalação)
- [Uso](#uso)
- [Especificadores Suportados](#especificadores-suportados)
- [Exemplos](#exemplos)
- [Desempenho](#desempenho)
- [Licença](#licença)
- [Contato](#contato)

## 🌟 Visão Geral

O projeto **ft_printf** tem como objetivo criar uma função `printf` personalizada, que suporta uma variedade de especificadores de formato, como `%d`, `%s`, `%x`, entre outros. A implementação é feita do zero, sem o uso da biblioteca padrão do C, e lida com a formatação e impressão de strings, caracteres, inteiros, números hexadecimais, ponteiros, entre outros.

## 🚀 Instalação

### Pré-requisitos

- **gcc** (ou outro compilador C)
- **make**

### Passos de Instalação

1. Clone o repositório:
    ```bash
    git clone https://github.com/SFzone42/ft_printf.git
    cd ft_printf
    ```

2. Compile a biblioteca:
    ```bash
    make
    ```

Isso criará o arquivo `libftprintf.a`, que pode ser linkado com seus projetos para usar a função `ft_printf`.

## 🎮 Uso

Para utilizar a função `ft_printf` em seu projeto, basta incluir o cabeçalho e linkar a biblioteca:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!\n", "world");
    return 0;
}
```

Compile seu programa com a biblioteca `libftprintf.a`:

```bash
gcc -o my_program my_program.c -L. -lftprintf
```

## 🛠️ Especificadores Suportados

A função `ft_printf` suporta os seguintes especificadores de formato:

- **%c**: Caractere
- **%s**: String
- **%p**: Ponteiro
- **%d**: Inteiro decimal (base 10)
- **%i**: Inteiro decimal (base 10)
- **%u**: Inteiro não assinado (base 10)
- **%x**: Inteiro hexadecimal (minúsculas)
- **%X**: Inteiro hexadecimal (maiúsculas)
- **%%**: Sinal de porcentagem

## 📂 Exemplos

Aqui estão alguns exemplos de uso do `ft_printf`:

```c
ft_printf("Character: %c\n", 'A');
ft_printf("String: %s\n", "Hello, world!");
ft_printf("Decimal: %d\n", 42);
ft_printf("Hexadecimal: %x\n", 255);
ft_printf("Pointer: %p\n", &ft_printf);
```

Saída:

```
Character: A
String: Hello, world!
Decimal: 42
Hexadecimal: ff
Pointer: 0x7ffeefbff5c0
```

## 🚀 Desempenho

O **ft_printf** foi desenvolvido com foco na eficiência, embora seu principal objetivo seja a precisão e a compatibilidade com a função `printf` da biblioteca padrão do C. Testes foram realizados para garantir a conformidade com diferentes especificadores e o manejo correto de casos de borda.

## 📄 Licença

Este projeto está licenciado sob a Licença MIT - veja o arquivo [LICENSE](LICENSE) para detalhes.

## 📞 Contato

- **GitHub**: [SFzone42](https://github.com/SFzone42)
- **Email**: liedsonnhabacuc@example.com

---

Esse README oferece uma visão clara e detalhada do projeto **ft_printf**, facilitando o uso e a contribuição por parte de outros desenvolvedores.
