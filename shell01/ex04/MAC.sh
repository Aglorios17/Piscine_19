#!/bin/bash
ifconfig -a | grep "ether " | cut -f2 -d ' '
