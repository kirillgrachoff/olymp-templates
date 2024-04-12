#!/usr/bin/bash

#for s in $(ls -A); do
# rm -r $s
#done
if [[ -f CMakeLists.txt ]]; then
    echo "modifying existing CMakeLists.txt"
else
    cp ~/Templates/olymp-templates/olymp/CMakeLists.txt .
fi
cp ~/Templates/olymp-templates/olymp/Olymp.cpp main.cpp
for i in $@; do
  if [[ $i == vscode ]]; then
    cp -r ~/Templates/olymp-templates/olymp/.vscode .
    code .
  elif [[ $i == gvim ]]; then
    gvim .
  else
    cp ~/Templates/olymp-templates/olymp/Olymp.cpp $i.cpp
    echo "add_executable($i $i.cpp)" >> CMakeLists.txt
    echo "target_precompile_headers($i REUSE_FROM main)" >> CMakeLists.txt
  fi
done
