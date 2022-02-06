#!/bin/bash
sortie=88
./identity
while [ "$?" -eq "$sortie" ]; do
    ./identity
done