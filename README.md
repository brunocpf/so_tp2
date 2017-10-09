# TP2 &mdash; Paginador xv6
### Bruno Cesar Pimenta Fernandes &mdash; 2013007161
* [Repositório](https://github.com/brunocpf/so_tp2)


## Introdução

Neste trabalho prático, modificamos o sistema xv6, aplicando conceitos de memória virtual aprendidos em aula (em particular, o copy-on-write).


## Parte 1: Comando date

Na primeira parte do trabalho, foi implementado o comando date no xv6. Foi seguido o tutorial como especificado.

Na implementação da função `sys_date()` em `sysproc.c`, foi usada a função `cmostime()` da biblioteca `date.h`, que armazena a data e o horário atual do sistema (em UTC) nos campos da struct `rtcdate` passada como parâmetro.

Na implementação do comando `date`, escrito em `date.c`, basta imprimir na saída os campos da `rtcdate` recebidos pela chamada de sistema implementada.

## Parte 2: Chamadas de sistema auxiliares




## Parte 3: Páginas Copy-on-Write