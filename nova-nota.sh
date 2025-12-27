#!/bin/bash

echo "Digite o titulo da nota:"
read titulo

echo $titulo > .listaNotas.dat

nano /home/pedro/Documents/Anotacoes/$titulo.txt