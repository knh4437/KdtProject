#!/bin/sh

echo 0 > /sys/kernel/debug/tracing/tracing_on
echo "ftrace off"

sleep 3

cp /sys/kernel/debug/tracing/trace . 
mv trace ftrace_442.c
