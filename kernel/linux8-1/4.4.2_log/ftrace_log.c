# tracer: function
#
# entries-in-buffer/entries-written: 20/20   #P:4
#
#                                _-----=> irqs-off/BH-disabled
#                               / _----=> need-resched
#                              | / _---=> hardirq/softirq
#                              || / _--=> preempt-depth
#                              ||| / _-=> migrate-disable
#                              |||| /     delay
#           TASK-PID     CPU#  |||||  TIMESTAMP  FUNCTION
#              | |         |   |||||     |         |
 process_exit.sh-1822    [000] .....  6541.709914: do_exit+0x4/0xa90 <-do_group_exit+0x3c/0x98
 process_exit.sh-1822    [000] .....  6541.709920: <stack trace>
 => do_exit+0x8/0xa90
 => do_group_exit+0x3c/0x98
 => __wake_up_parent+0x0/0x38
 => invoke_syscall+0x4c/0x110
 => el0_svc_common.constprop.3+0xfc/0x120
 => do_el0_svc+0x34/0xd0
 => el0_svc+0x30/0x88
 => el0t_64_sync_handler+0x98/0xc0
 => el0t_64_sync+0x18c/0x190
 process_exit.sh-1822    [000] .....  6541.710373: sched_process_exit: comm=process_exit.sh pid=1822 prio=120
 process_exit.sh-1822    [000] .....  6541.710375: <stack trace>
 => __traceiter_sched_process_exit+0x40/0x60
 => do_exit+0x6f4/0xa90
 => do_group_exit+0x3c/0x98
 => __wake_up_parent+0x0/0x38
 => invoke_syscall+0x4c/0x110
 => el0_svc_common.constprop.3+0xfc/0x120
 => do_el0_svc+0x34/0xd0
 => el0_svc+0x30/0x88
 => el0t_64_sync_handler+0x98/0xc0
 => el0t_64_sync+0x18c/0x190
          <idle>-0       [003] ..s1.  6541.725170: sched_process_free: comm=process_exit.sh pid=1822 prio=120
          <idle>-0       [003] ..s1.  6541.725174: <stack trace>
 => __traceiter_sched_process_free+0x40/0x60
 => delayed_put_task_struct+0xa4/0x128
 => rcu_core+0x2a0/0x8e8
 => rcu_core_si+0x18/0x28
 => __do_softirq+0x1a0/0x4d8
 => ____do_softirq+0x18/0x28
 => call_on_irq_stack+0x2c/0x54
 => do_softirq_own_stack+0x24/0x30
 => irq_exit_rcu+0x10c/0x148
 => el1_interrupt+0x3c/0x70
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => arch_cpu_idle+0x18/0x28
 => default_idle_call+0x50/0x188
 => do_idle+0x234/0x240
 => cpu_startup_entry+0x2c/0x38
 => secondary_start_kernel+0x128/0x150
 => __secondary_switched+0xb0/0xb4
            bash-1577    [003] .....  6545.512513: copy_process+0x4/0x14f8 <-kernel_clone+0x98/0x3f8
            bash-1577    [003] .....  6545.512522: <stack trace>
 => copy_process+0x8/0x14f8
 => kernel_clone+0x98/0x3f8
 => __do_sys_clone+0x6c/0x98
 => __arm64_sys_clone+0x28/0x38
 => invoke_syscall+0x4c/0x110
 => el0_svc_common.constprop.3+0xfc/0x120
 => do_el0_svc+0x34/0xd0
 => el0_svc+0x30/0x88
 => el0t_64_sync_handler+0x98/0xc0
 => el0t_64_sync+0x18c/0x190
            bash-1577    [003] .....  6545.513180: sched_process_fork: comm=bash pid=1577 child_comm=bash child_pid=1829
            bash-1577    [003] .....  6545.513184: <stack trace>
 => __traceiter_sched_process_fork+0x4c/0x70
 => kernel_clone+0x19c/0x3f8
 => __do_sys_clone+0x6c/0x98
 => __arm64_sys_clone+0x28/0x38
 => invoke_syscall+0x4c/0x110
 => el0_svc_common.constprop.3+0xfc/0x120
 => do_el0_svc+0x34/0xd0
 => el0_svc+0x30/0x88
 => el0t_64_sync_handler+0x98/0xc0
 => el0t_64_sync+0x18c/0x190
   rpi_proc_exit-1829    [001] .....  6554.516534: do_exit+0x4/0xa90 <-do_group_exit+0x3c/0x98
   rpi_proc_exit-1829    [001] .....  6554.516543: <stack trace>
 => do_exit+0x8/0xa90
 => do_group_exit+0x3c/0x98
 => __wake_up_parent+0x0/0x38
 => invoke_syscall+0x4c/0x110
 => el0_svc_common.constprop.3+0xfc/0x120
 => do_el0_svc+0x34/0xd0
 => el0_svc+0x30/0x88
 => el0t_64_sync_handler+0x98/0xc0
 => el0t_64_sync+0x18c/0x190
   rpi_proc_exit-1829    [001] .....  6554.516850: sched_process_exit: comm=rpi_proc_exit pid=1829 prio=120
   rpi_proc_exit-1829    [001] .....  6554.516854: <stack trace>
 => __traceiter_sched_process_exit+0x40/0x60
 => do_exit+0x6f4/0xa90
 => do_group_exit+0x3c/0x98
 => __wake_up_parent+0x0/0x38
 => invoke_syscall+0x4c/0x110
 => el0_svc_common.constprop.3+0xfc/0x120
 => do_el0_svc+0x34/0xd0
 => el0_svc+0x30/0x88
 => el0t_64_sync_handler+0x98/0xc0
 => el0t_64_sync+0x18c/0x190
          <idle>-0       [003] ..s1.  6554.531851: sched_process_free: comm=rpi_proc_exit pid=1829 prio=120
          <idle>-0       [003] ..s1.  6554.531857: <stack trace>
 => __traceiter_sched_process_free+0x40/0x60
 => delayed_put_task_struct+0xa4/0x128
 => rcu_core+0x2a0/0x8e8
 => rcu_core_si+0x18/0x28
 => __do_softirq+0x1a0/0x4d8
 => ____do_softirq+0x18/0x28
 => call_on_irq_stack+0x2c/0x54
 => do_softirq_own_stack+0x24/0x30
 => irq_exit_rcu+0x10c/0x148
 => el1_interrupt+0x3c/0x70
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => arch_cpu_idle+0x18/0x28
 => default_idle_call+0x50/0x188
 => do_idle+0x234/0x240
 => cpu_startup_entry+0x2c/0x38
 => secondary_start_kernel+0x128/0x150
 => __secondary_switched+0xb0/0xb4
            bash-1577    [003] .....  6556.882747: copy_process+0x4/0x14f8 <-kernel_clone+0x98/0x3f8
            bash-1577    [003] .....  6556.882755: <stack trace>
 => copy_process+0x8/0x14f8
 => kernel_clone+0x98/0x3f8
 => __do_sys_clone+0x6c/0x98
 => __arm64_sys_clone+0x28/0x38
 => invoke_syscall+0x4c/0x110
 => el0_svc_common.constprop.3+0xfc/0x120
 => do_el0_svc+0x34/0xd0
 => el0_svc+0x30/0x88
 => el0t_64_sync_handler+0x98/0xc0
 => el0t_64_sync+0x18c/0x190
            bash-1577    [003] .....  6556.883343: sched_process_fork: comm=bash pid=1577 child_comm=bash child_pid=1830
            bash-1577    [003] .....  6556.883347: <stack trace>
 => __traceiter_sched_process_fork+0x4c/0x70
 => kernel_clone+0x19c/0x3f8
 => __do_sys_clone+0x6c/0x98
 => __arm64_sys_clone+0x28/0x38
 => invoke_syscall+0x4c/0x110
 => el0_svc_common.constprop.3+0xfc/0x120
 => do_el0_svc+0x34/0xd0
 => el0_svc+0x30/0x88
 => el0t_64_sync_handler+0x98/0xc0
 => el0t_64_sync+0x18c/0x190
