#!/bin/bash

#!/bin/bash

echo 0 > /sys/kernel/debug/tracing/tracing_on
sleep 1
echo "tracing_off"

echo 8096 > /sys/kernel/debug/tracing/buffer_size_kb
sleep 1

echo nop > /sys/kernel/debug/tracing/current_tracer
sleep 1

echo 1 > /sys/kernel/debug/tracing/events/irq/irq_handler_exit/enable
echo 1 > /sys/kernel/debug/tracing/events/irq/irq_handler_entry/enable
echo 1 > /sys/kernel/debug/tracing/events/sched/sched_switch/enable
echo 1 > /sys/kernel/debug/tracing/events/sched/sched_wakeup/enable
echo 1 > /sys/kernel/debug/tracing/events/sched/sched_stat_runtime/enable

echo 1 > /sys/kernel/debug/tracing/tracing_on
echo "tracing_on"
