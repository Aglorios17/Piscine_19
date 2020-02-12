#!/bin/bash
find . -type f -name "*.sh" -exec sh -c 'printf "%s\n" "${0%.*}"' {} ';' | awk -F/ '{print $NF}'
