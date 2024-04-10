#!/bin/bash

max_pid=$(cat /proc/sys/kernel/pid_max)

echo "The maximum value a PID can have is $max_pid"
