# tracer: nop
#
# entries-in-buffer/entries-written: 2978/2978   #P:4
#
#                                _-----=> irqs-off/BH-disabled
#                               / _----=> need-resched
#                              | / _---=> hardirq/softirq
#                              || / _--=> preempt-depth
#                              ||| / _-=> migrate-disable
#                              |||| /     delay
#           TASK-PID     CPU#  |||||  TIMESTAMP  FUNCTION
#              | |         |   |||||     |         |
    nop_trace.sh-1602    [003] dN.4.  1694.658800: sched_wakeup: comm=kworker/u8:3 pid=1583 prio=120 target_cpu=003
    nop_trace.sh-1602    [003] dN.2.  1694.658818: sched_stat_runtime: comm=nop_trace.sh pid=1602 runtime=1505093 [ns] vruntime=902965930 [ns]
    nop_trace.sh-1602    [003] d..2.  1694.658826: sched_switch: prev_comm=nop_trace.sh prev_pid=1602 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u8:3 next_pid=1583 next_prio=120
          <idle>-0       [002] d.h1.  1694.658857: irq_handler_entry: irq=2 name=IPI
    kworker/u8:3-1583    [003] d..2.  1694.658858: sched_stat_runtime: comm=kworker/u8:3 pid=1583 runtime=86315 [ns] vruntime=18826345424 [ns]
    kworker/u8:3-1583    [003] d..2.  1694.658864: sched_switch: prev_comm=kworker/u8:3 prev_pid=1583 prev_prio=120 prev_state=I ==> next_comm=nop_trace.sh next_pid=1602 next_prio=120
          <idle>-0       [002] dNh2.  1694.658868: sched_wakeup: comm=sshd pid=1487 prio=120 target_cpu=002
          <idle>-0       [002] dNh1.  1694.658871: irq_handler_exit: irq=2 ret=handled
    nop_trace.sh-1602    [003] dN.4.  1694.658876: sched_wakeup: comm=kworker/u8:3 pid=1583 prio=120 target_cpu=003
    nop_trace.sh-1602    [003] dN.2.  1694.658885: sched_stat_runtime: comm=nop_trace.sh pid=1602 runtime=15000 [ns] vruntime=902980930 [ns]
          <idle>-0       [002] d..2.  1694.658886: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1487 next_prio=120
    nop_trace.sh-1602    [003] d..2.  1694.658889: sched_switch: prev_comm=nop_trace.sh prev_pid=1602 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u8:3 next_pid=1583 next_prio=120
    kworker/u8:3-1583    [003] d..2.  1694.658901: sched_stat_runtime: comm=kworker/u8:3 pid=1583 runtime=28148 [ns] vruntime=18826373572 [ns]
    kworker/u8:3-1583    [003] d..2.  1694.658905: sched_switch: prev_comm=kworker/u8:3 prev_pid=1583 prev_prio=120 prev_state=I ==> next_comm=nop_trace.sh next_pid=1602 next_prio=120
          <idle>-0       [000] d.h1.  1694.659212: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh2.  1694.659222: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
          <idle>-0       [000] dNh1.  1694.659224: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d..2.  1694.659235: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
            sshd-1487    [002] d..2.  1694.659265: sched_stat_runtime: comm=sshd pid=1487 runtime=400574 [ns] vruntime=376185853 [ns]
    kworker/u9:2-809     [000] d.h..  1694.659284: irq_handler_entry: irq=37 name=mmc1
            sshd-1487    [002] d..2.  1694.659291: sched_switch: prev_comm=sshd prev_pid=1487 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
    kworker/u9:2-809     [000] d.h..  1694.659291: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h..  1694.659292: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h..  1694.659296: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.h1.  1694.659328: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1694.659332: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1694.659334: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1694.659335: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1694.659346: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1694.659354: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=136704 [ns] vruntime=18688250088 [ns]
    kworker/u9:2-809     [000] d.h1.  1694.659418: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1694.659431: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1694.659432: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1694.659434: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d..2.  1694.659440: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=86370 [ns] vruntime=18688251084 [ns]
    kworker/u9:2-809     [000] d..2.  1694.659446: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1694.659452: irq_handler_entry: irq=37 name=mmc1
          <idle>-0       [000] d.h1.  1694.659456: irq_handler_exit: irq=37 ret=handled
          <idle>-0       [000] d.h1.  1694.659458: irq_handler_entry: irq=37 name=mmc0
          <idle>-0       [000] d.h1.  1694.659459: irq_handler_exit: irq=37 ret=unhandled
          <idle>-0       [000] dNs5.  1694.659474: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
          <idle>-0       [000] d..2.  1694.659484: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d..2.  1694.659517: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=46259 [ns] vruntime=18688251617 [ns]
    kworker/u9:2-809     [000] d..2.  1694.659522: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
    nop_trace.sh-1602    [003] d..2.  1694.659770: sched_stat_runtime: comm=nop_trace.sh pid=1602 runtime=866333 [ns] vruntime=903847263 [ns]
    nop_trace.sh-1602    [003] dN.2.  1694.659786: sched_stat_runtime: comm=nop_trace.sh pid=1602 runtime=19204 [ns] vruntime=18836159646 [ns]
          <idle>-0       [000] d.h1.  1694.659813: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh2.  1694.659821: sched_wakeup: comm=bash pid=1577 prio=120 target_cpu=000
          <idle>-0       [000] dNh1.  1694.659823: irq_handler_exit: irq=2 ret=handled
    nop_trace.sh-1602    [003] d..2.  1694.659828: sched_stat_runtime: comm=nop_trace.sh pid=1602 runtime=41759 [ns] vruntime=18836201405 [ns]
          <idle>-0       [000] d..2.  1694.659833: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=1577 next_prio=120
    nop_trace.sh-1602    [003] d..2.  1694.659833: sched_switch: prev_comm=nop_trace.sh prev_pid=1602 prev_prio=120 prev_state=Z ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1.  1694.660512: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh2.  1694.660520: sched_wakeup: comm=kworker/u8:3 pid=1583 prio=120 target_cpu=003
          <idle>-0       [003] dNh1.  1694.660522: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2.  1694.660533: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:3 next_pid=1583 next_prio=120
          <idle>-0       [002] d.h1.  1694.660555: irq_handler_entry: irq=2 name=IPI
    kworker/u8:3-1583    [003] d..2.  1694.660557: sched_stat_runtime: comm=kworker/u8:3 pid=1583 runtime=42149 [ns] vruntime=18827243554 [ns]
    kworker/u8:3-1583    [003] d..2.  1694.660562: sched_switch: prev_comm=kworker/u8:3 prev_pid=1583 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [002] dNh2.  1694.660563: sched_wakeup: comm=sshd pid=1487 prio=120 target_cpu=002
          <idle>-0       [002] dNh1.  1694.660566: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d..2.  1694.660581: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1487 next_prio=120
          <idle>-0       [003] d.h1.  1694.660685: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh2.  1694.660689: sched_wakeup: comm=kworker/u8:3 pid=1583 prio=120 target_cpu=003
          <idle>-0       [003] dNh1.  1694.660691: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2.  1694.660699: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:3 next_pid=1583 next_prio=120
            sshd-1487    [002] d..2.  1694.660706: sched_stat_runtime: comm=sshd pid=1487 runtime=146981 [ns] vruntime=376332834 [ns]
            sshd-1487    [002] d..2.  1694.660714: sched_switch: prev_comm=sshd prev_pid=1487 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
            bash-1577    [000] d..2.  1694.660717: sched_stat_runtime: comm=bash pid=1577 runtime=898463 [ns] vruntime=205531825 [ns]
          <idle>-0       [002] d.h1.  1694.660722: irq_handler_entry: irq=2 name=IPI
    kworker/u8:3-1583    [003] d..2.  1694.660724: sched_stat_runtime: comm=kworker/u8:3 pid=1583 runtime=36056 [ns] vruntime=18827279610 [ns]
            bash-1577    [000] d..2.  1694.660727: sched_switch: prev_comm=bash prev_pid=1577 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
    kworker/u8:3-1583    [003] d..2.  1694.660728: sched_switch: prev_comm=kworker/u8:3 prev_pid=1583 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [002] dNh2.  1694.660728: sched_wakeup: comm=sshd pid=1487 prio=120 target_cpu=002
          <idle>-0       [002] dNh1.  1694.660730: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d..2.  1694.660737: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1487 next_prio=120
          <idle>-0       [000] d.h1.  1694.660850: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh2.  1694.660858: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
          <idle>-0       [000] dNh1.  1694.660860: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d..2.  1694.660870: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d.h1.  1694.660939: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1694.660952: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1694.660953: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1694.660955: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.h1.  1694.660962: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1694.660966: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1694.660967: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1694.660969: irq_handler_exit: irq=37 ret=unhandled
          <idle>-0       [001] d.h1.  1694.660978: irq_handler_entry: irq=2 name=IPI
    kworker/u9:2-809     [000] d.s3.  1694.660981: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
          <idle>-0       [001] dNh2.  1694.660987: sched_wakeup: comm=kworker/u9:0 pid=78 prio=100 target_cpu=001
          <idle>-0       [001] dNh1.  1694.660989: irq_handler_exit: irq=2 ret=handled
    kworker/u9:2-809     [000] d..2.  1694.660990: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=135759 [ns] vruntime=18688253183 [ns]
          <idle>-0       [001] d..2.  1694.661004: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u9:0 next_pid=78 next_prio=100
    kworker/u9:0-78      [001] d..2.  1694.661016: sched_stat_runtime: comm=kworker/u9:0 pid=78 runtime=31908 [ns] vruntime=20258618967 [ns]
    kworker/u9:0-78      [001] d..2.  1694.661020: sched_switch: prev_comm=kworker/u9:0 prev_pid=78 prev_prio=100 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
            sshd-1487    [002] d..2.  1694.661021: sched_stat_runtime: comm=sshd pid=1487 runtime=294556 [ns] vruntime=376627390 [ns]
            sshd-1487    [002] d..2.  1694.661029: sched_switch: prev_comm=sshd prev_pid=1487 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
    kworker/u9:2-809     [000] d.h1.  1694.661043: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1694.661055: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1694.661056: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1694.661058: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d..2.  1694.661064: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=74778 [ns] vruntime=18688254045 [ns]
    kworker/u9:2-809     [000] d..2.  1694.661069: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1694.661075: irq_handler_entry: irq=37 name=mmc1
          <idle>-0       [000] d.h1.  1694.661079: irq_handler_exit: irq=37 ret=handled
          <idle>-0       [000] d.h1.  1694.661080: irq_handler_entry: irq=37 name=mmc0
          <idle>-0       [000] d.h1.  1694.661081: irq_handler_exit: irq=37 ret=unhandled
          <idle>-0       [000] dNs5.  1694.661096: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
          <idle>-0       [000] d..2.  1694.661105: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d..2.  1694.661150: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=56074 [ns] vruntime=18688254691 [ns]
    kworker/u9:2-809     [000] d..2.  1694.661154: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1.  1694.661258: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1694.661258: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1694.661279: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1694.661287: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh2.  1694.661296: sched_wakeup: comm=in:imklog pid=435 prio=120 target_cpu=001
          <idle>-0       [003] dNh7.  1694.661297: sched_wakeup: comm=systemd-journal pid=143 prio=120 target_cpu=003
          <idle>-0       [001] dNh1.  1694.661297: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.  1694.661308: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d..2.  1694.661311: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=in:imklog next_pid=435 next_prio=120
          <idle>-0       [003] d..2.  1694.661327: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=systemd-journal next_pid=143 next_prio=120
          <idle>-0       [000] d.h1.  1694.661580: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh2.  1694.661590: sched_wakeup: comm=rs:main Q:Reg pid=436 prio=120 target_cpu=000
          <idle>-0       [000] dNh1.  1694.661592: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d..2.  1694.661601: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rs:main Q:Reg next_pid=436 next_prio=120
       in:imklog-435     [001] d..2.  1694.661610: sched_stat_runtime: comm=in:imklog pid=435 runtime=316519 [ns] vruntime=45331028 [ns]
       in:imklog-435     [001] d..2.  1694.661622: sched_switch: prev_comm=in:imklog prev_pid=435 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
 systemd-journal-143     [003] dN.4.  1694.661999: sched_wakeup: comm=kworker/3:1H pid=49 prio=100 target_cpu=003
 systemd-journal-143     [003] dN.2.  1694.662011: sched_stat_runtime: comm=systemd-journal pid=143 runtime=686333 [ns] vruntime=272924869 [ns]
 systemd-journal-143     [003] d..2.  1694.662018: sched_switch: prev_comm=systemd-journal prev_pid=143 prev_prio=120 prev_state=R+ ==> next_comm=kworker/3:1H next_pid=49 next_prio=100
    kworker/3:1H-49      [003] d..2.  1694.662124: sched_stat_runtime: comm=kworker/3:1H pid=49 runtime=134908 [ns] vruntime=18827202961 [ns]
   rs:main Q:Reg-436     [000] d.h..  1694.662126: irq_handler_entry: irq=37 name=mmc1
   rs:main Q:Reg-436     [000] d.h..  1694.662129: irq_handler_exit: irq=37 ret=unhandled
   rs:main Q:Reg-436     [000] d.h..  1694.662131: irq_handler_entry: irq=37 name=mmc0
    kworker/3:1H-49      [003] d..2.  1694.662131: sched_switch: prev_comm=kworker/3:1H prev_pid=49 prev_prio=100 prev_state=I ==> next_comm=systemd-journal next_pid=143 next_prio=120
   rs:main Q:Reg-436     [000] d.h..  1694.662136: irq_handler_exit: irq=37 ret=handled
 systemd-journal-143     [003] d..2.  1694.662151: sched_stat_runtime: comm=systemd-journal pid=143 runtime=28222 [ns] vruntime=272953091 [ns]
 systemd-journal-143     [003] d..2.  1694.662173: sched_switch: prev_comm=systemd-journal prev_pid=143 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
   rs:main Q:Reg-436     [000] dN.4.  1694.662924: sched_wakeup: comm=kworker/0:0H pid=8 prio=100 target_cpu=000
   rs:main Q:Reg-436     [000] dN.2.  1694.662934: sched_stat_runtime: comm=rs:main Q:Reg pid=436 runtime=1333389 [ns] vruntime=31783459 [ns]
   rs:main Q:Reg-436     [000] d..2.  1694.662940: sched_switch: prev_comm=rs:main Q:Reg prev_pid=436 prev_prio=120 prev_state=R+ ==> next_comm=kworker/0:0H next_pid=8 next_prio=100
    kworker/0:0H-8       [000] d..2.  1694.662998: sched_stat_runtime: comm=kworker/0:0H pid=8 runtime=80500 [ns] vruntime=18688249439 [ns]
    kworker/0:0H-8       [000] d..2.  1694.663004: sched_switch: prev_comm=kworker/0:0H prev_pid=8 prev_prio=100 prev_state=D ==> next_comm=rs:main Q:Reg next_pid=436 next_prio=120
   rs:main Q:Reg-436     [000] d..2.  1694.663019: sched_stat_runtime: comm=rs:main Q:Reg pid=436 runtime=21111 [ns] vruntime=31804570 [ns]
   rs:main Q:Reg-436     [000] d..2.  1694.663034: sched_switch: prev_comm=rs:main Q:Reg prev_pid=436 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1694.663813: irq_handler_entry: irq=37 name=mmc1
          <idle>-0       [000] dNh6.  1694.663827: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
          <idle>-0       [000] dNh1.  1694.663829: irq_handler_exit: irq=37 ret=handled
          <idle>-0       [000] dNh1.  1694.663830: irq_handler_entry: irq=37 name=mmc0
          <idle>-0       [000] dNh1.  1694.663832: irq_handler_exit: irq=37 ret=unhandled
          <idle>-0       [000] d..2.  1694.663844: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d.h1.  1694.663880: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1694.663885: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1694.663886: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1694.663888: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1694.663901: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1694.663909: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=85870 [ns] vruntime=18697270750 [ns]
     kworker/0:2-1499    [000] d.h1.  1694.663941: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1694.663948: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1694.663949: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1694.663951: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1694.663961: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1694.663967: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=59018 [ns] vruntime=18697329768 [ns]
     kworker/0:2-1499    [000] d.h1.  1694.663992: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1694.663996: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1694.663997: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1694.663999: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.h1.  1694.664001: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1694.664005: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1694.664006: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1694.664007: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1694.664017: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1694.664024: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=56389 [ns] vruntime=18697386157 [ns]
     kworker/0:2-1499    [000] d..4.  1694.664036: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=11889 [ns] vruntime=18697398046 [ns]
     kworker/0:2-1499    [000] dN.4.  1694.664041: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1694.664055: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d..2.  1694.664071: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=35241 [ns] vruntime=18688398452 [ns]
    kworker/u9:2-809     [000] d..2.  1694.664075: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=D ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d..4.  1694.664087: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=13944 [ns] vruntime=18697411990 [ns]
     kworker/0:2-1499    [000] dN.4.  1694.664091: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1694.664097: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d.h1.  1694.664157: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1694.664166: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1694.664168: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1694.664169: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1694.664180: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1694.664188: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=102519 [ns] vruntime=18688413172 [ns]
    kworker/u9:2-809     [000] d.h1.  1694.664220: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1694.664226: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1694.664227: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1694.664228: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1694.664239: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1694.664246: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=57963 [ns] vruntime=18688413840 [ns]
    kworker/u9:2-809     [000] d.h1.  1694.664368: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1694.664378: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1694.664379: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1694.664381: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1694.664391: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1694.664399: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=153296 [ns] vruntime=18688415608 [ns]
    kworker/u9:2-809     [000] d..2.  1694.664420: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=20759 [ns] vruntime=18688415847 [ns]
    kworker/u9:2-809     [000] d..2.  1694.664424: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=I ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d..2.  1694.664434: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=14278 [ns] vruntime=18697426268 [ns]
     kworker/0:2-1499    [000] d..2.  1694.664444: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1694.664975: irq_handler_entry: irq=37 name=mmc1
          <idle>-0       [000] d.h1.  1694.664977: irq_handler_exit: irq=37 ret=unhandled
          <idle>-0       [000] d.h1.  1694.664978: irq_handler_entry: irq=37 name=mmc0
          <idle>-0       [000] dNh5.  1694.664994: sched_wakeup: comm=kworker/0:0H pid=8 prio=100 target_cpu=000
          <idle>-0       [000] dNh1.  1694.664996: irq_handler_exit: irq=37 ret=handled
          <idle>-0       [000] d..2.  1694.665007: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:0H next_pid=8 next_prio=100
    kworker/0:0H-8       [000] d.h1.  1694.665036: irq_handler_entry: irq=37 name=mmc1
    kworker/0:0H-8       [000] d.h1.  1694.665038: irq_handler_exit: irq=37 ret=unhandled
    kworker/0:0H-8       [000] d.h1.  1694.665039: irq_handler_entry: irq=37 name=mmc0
    kworker/0:0H-8       [000] d.h3.  1694.665045: sched_wakeup: comm=kworker/0:0H pid=8 prio=100 target_cpu=000
    kworker/0:0H-8       [000] d.h1.  1694.665046: irq_handler_exit: irq=37 ret=handled
    kworker/0:0H-8       [000] d..2.  1694.665053: sched_stat_runtime: comm=kworker/0:0H pid=8 runtime=61574 [ns] vruntime=18688426978 [ns]
    kworker/0:0H-8       [000] d.h1.  1694.665080: irq_handler_entry: irq=37 name=mmc1
    kworker/0:0H-8       [000] d.h1.  1694.665082: irq_handler_exit: irq=37 ret=unhandled
    kworker/0:0H-8       [000] d.h1.  1694.665083: irq_handler_entry: irq=37 name=mmc0
    kworker/0:0H-8       [000] d.h1.  1694.665085: irq_handler_exit: irq=37 ret=handled
          <idle>-0       [003] d.h1.  1694.665129: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh2.  1694.665138: sched_wakeup: comm=systemd-journal pid=143 prio=120 target_cpu=003
          <idle>-0       [003] dNh1.  1694.665140: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2.  1694.665150: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=systemd-journal next_pid=143 next_prio=120
    kworker/0:0H-8       [000] d..2.  1694.665159: sched_stat_runtime: comm=kworker/0:0H pid=8 runtime=105908 [ns] vruntime=18688428199 [ns]
    kworker/0:0H-8       [000] d..2.  1694.665165: sched_switch: prev_comm=kworker/0:0H prev_pid=8 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
 systemd-journal-143     [003] d..5.  1694.665171: sched_wakeup: comm=jbd2/mmcblk0p2- pid=104 prio=120 target_cpu=003
 systemd-journal-143     [003] d..2.  1694.665183: sched_stat_runtime: comm=systemd-journal pid=143 runtime=49851 [ns] vruntime=273002942 [ns]
 systemd-journal-143     [003] d..2.  1694.665188: sched_switch: prev_comm=systemd-journal prev_pid=143 prev_prio=120 prev_state=D ==> next_comm=jbd2/mmcblk0p2- next_pid=104 next_prio=120
 jbd2/mmcblk0p2--104     [003] d..2.  1694.665203: sched_stat_runtime: comm=jbd2/mmcblk0p2- pid=104 runtime=20889 [ns] vruntime=18827222294 [ns]
 jbd2/mmcblk0p2--104     [003] d..2.  1694.665214: sched_switch: prev_comm=jbd2/mmcblk0p2- prev_pid=104 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1.  1694.665258: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1694.665258: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1694.665275: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1694.665277: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNs4.  1694.665291: sched_wakeup: comm=rcu_preempt pid=15 prio=120 target_cpu=000
          <idle>-0       [000] d..2.  1694.665315: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_preempt next_pid=15 next_prio=120
     rcu_preempt-15      [000] d..2.  1694.665370: sched_stat_runtime: comm=rcu_preempt pid=15 runtime=70444 [ns] vruntime=18690012429 [ns]
     rcu_preempt-15      [000] d..2.  1694.665374: sched_switch: prev_comm=rcu_preempt prev_pid=15 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1694.668840: irq_handler_entry: irq=37 name=mmc1
          <idle>-0       [000] d.h1.  1694.668842: irq_handler_exit: irq=37 ret=unhandled
          <idle>-0       [000] d.h1.  1694.668843: irq_handler_entry: irq=37 name=mmc0
          <idle>-0       [000] dNh5.  1694.668856: sched_wakeup: comm=kworker/0:0H pid=8 prio=100 target_cpu=000
          <idle>-0       [000] dNh1.  1694.668858: irq_handler_exit: irq=37 ret=handled
          <idle>-0       [000] d..2.  1694.668869: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:0H next_pid=8 next_prio=100
    kworker/0:0H-8       [000] d.h..  1694.668900: irq_handler_entry: irq=37 name=mmc1
    kworker/0:0H-8       [000] d.h..  1694.668902: irq_handler_exit: irq=37 ret=unhandled
    kworker/0:0H-8       [000] d.h..  1694.668903: irq_handler_entry: irq=37 name=mmc0
    kworker/0:0H-8       [000] d.h..  1694.668905: irq_handler_exit: irq=37 ret=handled
    kworker/0:0H-8       [000] d..2.  1694.668966: sched_stat_runtime: comm=kworker/0:0H pid=8 runtime=112111 [ns] vruntime=18688429492 [ns]
    kworker/0:0H-8       [000] d..2.  1694.668971: sched_switch: prev_comm=kworker/0:0H prev_pid=8 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1.  1694.669257: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1694.669257: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1694.669265: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1694.669270: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.H3.  1694.669306: irq_handler_entry: irq=37 name=mmc1
          <idle>-0       [000] d.H3.  1694.669308: irq_handler_exit: irq=37 ret=unhandled
          <idle>-0       [000] d.H3.  1694.669309: irq_handler_entry: irq=37 name=mmc0
          <idle>-0       [000] dNH7.  1694.669323: sched_wakeup: comm=kworker/0:0H pid=8 prio=100 target_cpu=000
          <idle>-0       [000] dNH3.  1694.669325: irq_handler_exit: irq=37 ret=handled
          <idle>-0       [000] d..2.  1694.669360: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:0H next_pid=8 next_prio=100
    kworker/0:0H-8       [000] d..4.  1694.669380: sched_stat_runtime: comm=kworker/0:0H pid=8 runtime=57259 [ns] vruntime=18688430152 [ns]
    kworker/0:0H-8       [000] d..4.  1694.669384: sched_wakeup: comm=rs:main Q:Reg pid=436 prio=120 target_cpu=000
    kworker/0:0H-8       [000] d..2.  1694.669412: sched_stat_runtime: comm=kworker/0:0H pid=8 runtime=34741 [ns] vruntime=18688430552 [ns]
    kworker/0:0H-8       [000] d..2.  1694.669417: sched_switch: prev_comm=kworker/0:0H prev_pid=8 prev_prio=100 prev_state=I ==> next_comm=rs:main Q:Reg next_pid=436 next_prio=120
          <idle>-0       [003] d.h1.  1694.669451: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh2.  1694.669458: sched_wakeup: comm=jbd2/mmcblk0p2- pid=104 prio=120 target_cpu=003
          <idle>-0       [003] dNh1.  1694.669460: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2.  1694.669470: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=jbd2/mmcblk0p2- next_pid=104 next_prio=120
   rs:main Q:Reg-436     [000] d..2.  1694.669486: sched_stat_runtime: comm=rs:main Q:Reg pid=436 runtime=72908 [ns] vruntime=31877478 [ns]
   rs:main Q:Reg-436     [000] d..2.  1694.669497: sched_switch: prev_comm=rs:main Q:Reg prev_pid=436 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1694.669505: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh2.  1694.669511: sched_wakeup: comm=rs:main Q:Reg pid=436 prio=120 target_cpu=000
          <idle>-0       [000] dNh1.  1694.669513: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d..2.  1694.669520: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rs:main Q:Reg next_pid=436 next_prio=120
 jbd2/mmcblk0p2--104     [003] d..4.  1694.669612: sched_stat_runtime: comm=jbd2/mmcblk0p2- pid=104 runtime=156370 [ns] vruntime=18827378664 [ns]
 jbd2/mmcblk0p2--104     [003] dN.4.  1694.669619: sched_wakeup: comm=kworker/3:1H pid=49 prio=100 target_cpu=003
 jbd2/mmcblk0p2--104     [003] d..2.  1694.669628: sched_switch: prev_comm=jbd2/mmcblk0p2- prev_pid=104 prev_prio=120 prev_state=R+ ==> next_comm=kworker/3:1H next_pid=49 next_prio=100
   rs:main Q:Reg-436     [000] d..2.  1694.669663: sched_stat_runtime: comm=rs:main Q:Reg pid=436 runtime=153092 [ns] vruntime=32030570 [ns]
   rs:main Q:Reg-436     [000] d..2.  1694.669684: sched_switch: prev_comm=rs:main Q:Reg prev_pid=436 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1694.669700: irq_handler_entry: irq=37 name=mmc1
          <idle>-0       [000] d.h1.  1694.669702: irq_handler_exit: irq=37 ret=unhandled
          <idle>-0       [000] d.h1.  1694.669703: irq_handler_entry: irq=37 name=mmc0
          <idle>-0       [000] d.h1.  1694.669706: irq_handler_exit: irq=37 ret=handled
    kworker/3:1H-49      [003] d..4.  1694.669713: sched_stat_runtime: comm=kworker/3:1H pid=49 runtime=101130 [ns] vruntime=18827204127 [ns]
    kworker/3:1H-49      [003] d..4.  1694.669719: sched_wakeup: comm=kworker/3:0H pid=1572 prio=100 target_cpu=003
    kworker/3:1H-49      [003] d..2.  1694.669724: sched_stat_runtime: comm=kworker/3:1H pid=49 runtime=11704 [ns] vruntime=18827204262 [ns]
    kworker/3:1H-49      [003] d..2.  1694.669728: sched_switch: prev_comm=kworker/3:1H prev_pid=49 prev_prio=100 prev_state=D ==> next_comm=kworker/3:0H next_pid=1572 next_prio=100
          <idle>-0       [001] d.h1.  1694.669778: irq_handler_entry: irq=2 name=IPI
    kworker/3:0H-1572    [003] d..2.  1694.669780: sched_stat_runtime: comm=kworker/3:0H pid=1572 runtime=56074 [ns] vruntime=18827202051 [ns]
    kworker/3:0H-1572    [003] d..2.  1694.669785: sched_switch: prev_comm=kworker/3:0H prev_pid=1572 prev_prio=100 prev_state=D ==> next_comm=jbd2/mmcblk0p2- next_pid=104 next_prio=120
          <idle>-0       [001] dNh2.  1694.669787: sched_wakeup: comm=kthreadd pid=2 prio=120 target_cpu=001
          <idle>-0       [001] dNh1.  1694.669789: irq_handler_exit: irq=2 ret=handled
 jbd2/mmcblk0p2--104     [003] d..2.  1694.669798: sched_stat_runtime: comm=jbd2/mmcblk0p2- pid=104 runtime=17778 [ns] vruntime=18827396442 [ns]
          <idle>-0       [001] d..2.  1694.669805: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kthreadd next_pid=2 next_prio=120
 jbd2/mmcblk0p2--104     [003] d..2.  1694.669809: sched_switch: prev_comm=jbd2/mmcblk0p2- prev_pid=104 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
        kthreadd-2       [001] d..2.  1694.669916: sched_stat_runtime: comm=kthreadd pid=2 runtime=134370 [ns] vruntime=20258858710 [ns]
        kthreadd-2       [001] d..2.  1694.669961: sched_stat_runtime: comm=kthreadd pid=2 runtime=44315 [ns] vruntime=20258903025 [ns]
          <idle>-0       [002] dnh1.  1694.669961: irq_handler_entry: irq=1 name=IPI
          <idle>-0       [002] dNh1.  1694.669963: irq_handler_exit: irq=1 ret=handled
        kthreadd-2       [001] d..2.  1694.669965: sched_switch: prev_comm=kthreadd prev_pid=2 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0       [002] d..2.  1694.669978: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kthreadd next_pid=1606 next_prio=120
    kworker/3:2H-1606    [002] d..2.  1694.670004: sched_stat_runtime: comm=kthreadd pid=1606 runtime=54796 [ns] vruntime=19379973932 [ns]
          <idle>-0       [003] d.h1.  1694.670004: irq_handler_entry: irq=2 name=IPI
    kworker/3:2H-1606    [002] d..2.  1694.670008: sched_switch: prev_comm=kthreadd prev_pid=1606 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [003] dNh2.  1694.670011: sched_wakeup: comm=kworker/3:0H pid=1572 prio=100 target_cpu=003
          <idle>-0       [003] dNh1.  1694.670013: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2.  1694.670022: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:0H next_pid=1572 next_prio=100
    kworker/3:0H-1572    [003] d..4.  1694.670054: sched_stat_runtime: comm=kworker/3:0H pid=1572 runtime=46593 [ns] vruntime=18827202588 [ns]
    kworker/3:0H-1572    [003] d..4.  1694.670059: sched_wakeup: comm=kworker/3:2H pid=1606 prio=100 target_cpu=003
    kworker/3:0H-1572    [003] d..2.  1694.670070: sched_stat_runtime: comm=kworker/3:0H pid=1572 runtime=16333 [ns] vruntime=18827202776 [ns]
    kworker/3:0H-1572    [003] d..2.  1694.670075: sched_switch: prev_comm=kworker/3:0H prev_pid=1572 prev_prio=100 prev_state=I ==> next_comm=kworker/3:2H next_pid=1606 next_prio=100
    kworker/3:2H-1606    [003] d..2.  1694.670087: sched_stat_runtime: comm=kworker/3:2H pid=1606 runtime=16241 [ns] vruntime=18836201592 [ns]
    kworker/3:2H-1606    [003] d..2.  1694.670096: sched_switch: prev_comm=kworker/3:2H prev_pid=1606 prev_prio=100 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1694.670651: irq_handler_entry: irq=37 name=mmc1
          <idle>-0       [000] d.h1.  1694.670653: irq_handler_exit: irq=37 ret=unhandled
          <idle>-0       [000] d.h1.  1694.670654: irq_handler_entry: irq=37 name=mmc0
          <idle>-0       [000] d.h1.  1694.670664: irq_handler_exit: irq=37 ret=handled
          <idle>-0       [003] d.h1.  1694.670667: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh2.  1694.670672: sched_wakeup: comm=kworker/3:1H pid=49 prio=100 target_cpu=003
          <idle>-0       [003] dNh1.  1694.670674: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2.  1694.670682: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:1H next_pid=49 next_prio=100
          <idle>-0       [000] d.h1.  1694.670711: irq_handler_entry: irq=37 name=mmc1
          <idle>-0       [000] d.h1.  1694.670713: irq_handler_exit: irq=37 ret=unhandled
          <idle>-0       [000] d.h1.  1694.670714: irq_handler_entry: irq=37 name=mmc0
    kworker/3:1H-49      [003] d..2.  1694.670714: sched_stat_runtime: comm=kworker/3:1H pid=49 runtime=44019 [ns] vruntime=18827204769 [ns]
    kworker/3:1H-49      [003] d..2.  1694.670719: sched_switch: prev_comm=kworker/3:1H prev_pid=49 prev_prio=100 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1694.670721: irq_handler_exit: irq=37 ret=handled
          <idle>-0       [003] d.h1.  1694.670725: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh2.  1694.670729: sched_wakeup: comm=kworker/3:1H pid=49 prio=100 target_cpu=003
          <idle>-0       [003] dNh1.  1694.670731: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2.  1694.670739: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:1H next_pid=49 next_prio=100
          <idle>-0       [000] d.h1.  1694.670766: irq_handler_entry: irq=37 name=mmc1
          <idle>-0       [000] d.h1.  1694.670768: irq_handler_exit: irq=37 ret=unhandled
          <idle>-0       [000] d.h1.  1694.670769: irq_handler_entry: irq=37 name=mmc0
          <idle>-0       [000] d.h1.  1694.670772: irq_handler_exit: irq=37 ret=handled
    kworker/3:1H-49      [003] d..4.  1694.670776: sched_stat_runtime: comm=kworker/3:1H pid=49 runtime=47278 [ns] vruntime=18827205314 [ns]
    kworker/3:1H-49      [003] d..4.  1694.670780: sched_wakeup: comm=jbd2/mmcblk0p2- pid=104 prio=120 target_cpu=003
    kworker/3:1H-49      [003] d..2.  1694.670804: sched_stat_runtime: comm=kworker/3:1H pid=49 runtime=28426 [ns] vruntime=18827205641 [ns]
    kworker/3:1H-49      [003] d..2.  1694.670808: sched_switch: prev_comm=kworker/3:1H prev_pid=49 prev_prio=100 prev_state=I ==> next_comm=jbd2/mmcblk0p2- next_pid=104 next_prio=120
 jbd2/mmcblk0p2--104     [003] d..4.  1694.670880: sched_stat_runtime: comm=jbd2/mmcblk0p2- pid=104 runtime=75888 [ns] vruntime=18827472330 [ns]
 jbd2/mmcblk0p2--104     [003] dN.4.  1694.670886: sched_wakeup: comm=kworker/3:1H pid=49 prio=100 target_cpu=003
 jbd2/mmcblk0p2--104     [003] d..2.  1694.670900: sched_switch: prev_comm=jbd2/mmcblk0p2- prev_pid=104 prev_prio=120 prev_state=R+ ==> next_comm=kworker/3:1H next_pid=49 next_prio=100
    kworker/3:1H-49      [003] d..2.  1694.670931: sched_stat_runtime: comm=kworker/3:1H pid=49 runtime=51463 [ns] vruntime=18827206234 [ns]
    kworker/3:1H-49      [003] d..2.  1694.670935: sched_switch: prev_comm=kworker/3:1H prev_pid=49 prev_prio=100 prev_state=D ==> next_comm=jbd2/mmcblk0p2- next_pid=104 next_prio=120
 jbd2/mmcblk0p2--104     [003] d..2.  1694.670941: sched_stat_runtime: comm=jbd2/mmcblk0p2- pid=104 runtime=10389 [ns] vruntime=18827482719 [ns]
 jbd2/mmcblk0p2--104     [003] d..2.  1694.670951: sched_switch: prev_comm=jbd2/mmcblk0p2- prev_pid=104 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1694.671144: irq_handler_entry: irq=37 name=mmc1
          <idle>-0       [000] d.h1.  1694.671146: irq_handler_exit: irq=37 ret=unhandled
          <idle>-0       [000] d.h1.  1694.671147: irq_handler_entry: irq=37 name=mmc0
          <idle>-0       [000] d.h1.  1694.671154: irq_handler_exit: irq=37 ret=handled
          <idle>-0       [003] d.h1.  1694.671157: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh2.  1694.671163: sched_wakeup: comm=kworker/3:1H pid=49 prio=100 target_cpu=003
          <idle>-0       [003] dNh1.  1694.671164: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2.  1694.671174: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:1H next_pid=49 next_prio=100
          <idle>-0       [000] d.h1.  1694.671207: irq_handler_entry: irq=37 name=mmc1
          <idle>-0       [000] d.h1.  1694.671208: irq_handler_exit: irq=37 ret=unhandled
          <idle>-0       [000] d.h1.  1694.671209: irq_handler_entry: irq=37 name=mmc0
          <idle>-0       [000] d.h1.  1694.671212: irq_handler_exit: irq=37 ret=handled
          <idle>-0       [000] d.h1.  1694.671214: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh2.  1694.671223: sched_wakeup: comm=rs:main Q:Reg pid=436 prio=120 target_cpu=000
    kworker/3:1H-49      [003] d..2.  1694.671224: sched_stat_runtime: comm=kworker/3:1H pid=49 runtime=62611 [ns] vruntime=18827206956 [ns]
          <idle>-0       [000] dNh1.  1694.671224: irq_handler_exit: irq=2 ret=handled
    kworker/3:1H-49      [003] d..2.  1694.671229: sched_switch: prev_comm=kworker/3:1H prev_pid=49 prev_prio=100 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [000] d..2.  1694.671234: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rs:main Q:Reg next_pid=436 next_prio=120
   rs:main Q:Reg-436     [000] d..2.  1694.671373: sched_stat_runtime: comm=rs:main Q:Reg pid=436 runtime=154370 [ns] vruntime=32184940 [ns]
   rs:main Q:Reg-436     [000] d..2.  1694.671380: sched_switch: prev_comm=rs:main Q:Reg prev_pid=436 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1694.671843: irq_handler_entry: irq=37 name=mmc1
          <idle>-0       [000] d.h1.  1694.671845: irq_handler_exit: irq=37 ret=unhandled
          <idle>-0       [000] d.h1.  1694.671846: irq_handler_entry: irq=37 name=mmc0
          <idle>-0       [000] dNh5.  1694.671863: sched_wakeup: comm=kworker/0:0H pid=8 prio=100 target_cpu=000
          <idle>-0       [000] dNh1.  1694.671865: irq_handler_exit: irq=37 ret=handled
          <idle>-0       [000] d..2.  1694.671876: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:0H next_pid=8 next_prio=100
    kworker/0:0H-8       [000] d.h1.  1694.671900: irq_handler_entry: irq=37 name=mmc1
    kworker/0:0H-8       [000] d.h1.  1694.671902: irq_handler_exit: irq=37 ret=unhandled
    kworker/0:0H-8       [000] d.h1.  1694.671903: irq_handler_entry: irq=37 name=mmc0
    kworker/0:0H-8       [000] d.h3.  1694.671909: sched_wakeup: comm=kworker/0:0H pid=8 prio=100 target_cpu=000
    kworker/0:0H-8       [000] d.h1.  1694.671911: irq_handler_exit: irq=37 ret=handled
    kworker/0:0H-8       [000] d..2.  1694.671917: sched_stat_runtime: comm=kworker/0:0H pid=8 runtime=60000 [ns] vruntime=18688431244 [ns]
          <idle>-0       [003] d.h1.  1694.671934: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh2.  1694.671940: sched_wakeup: comm=jbd2/mmcblk0p2- pid=104 prio=120 target_cpu=003
          <idle>-0       [003] dNh1.  1694.671942: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2.  1694.671951: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=jbd2/mmcblk0p2- next_pid=104 next_prio=120
    kworker/0:0H-8       [000] d..2.  1694.671956: sched_stat_runtime: comm=kworker/0:0H pid=8 runtime=39315 [ns] vruntime=18688431697 [ns]
    kworker/0:0H-8       [000] d..2.  1694.671961: sched_switch: prev_comm=kworker/0:0H prev_pid=8 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
 jbd2/mmcblk0p2--104     [003] d..4.  1694.671984: sched_stat_runtime: comm=jbd2/mmcblk0p2- pid=104 runtime=45037 [ns] vruntime=18827527756 [ns]
 jbd2/mmcblk0p2--104     [003] d..4.  1694.671988: sched_wakeup: comm=systemd-journal pid=143 prio=120 target_cpu=003
 jbd2/mmcblk0p2--104     [003] d..2.  1694.672002: sched_stat_runtime: comm=jbd2/mmcblk0p2- pid=104 runtime=19351 [ns] vruntime=18827547107 [ns]
 jbd2/mmcblk0p2--104     [003] d..2.  1694.672006: sched_switch: prev_comm=jbd2/mmcblk0p2- prev_pid=104 prev_prio=120 prev_state=S ==> next_comm=systemd-journal next_pid=143 next_prio=120
 systemd-journal-143     [003] d..2.  1694.672485: sched_stat_runtime: comm=systemd-journal pid=143 runtime=481500 [ns] vruntime=273484442 [ns]
 systemd-journal-143     [003] d..2.  1694.672500: sched_switch: prev_comm=systemd-journal prev_pid=143 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1694.673258: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1694.673259: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1694.673273: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1694.673274: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNs4.  1694.673288: sched_wakeup: comm=rcu_preempt pid=15 prio=120 target_cpu=000
          <idle>-0       [000] d..2.  1694.673312: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_preempt next_pid=15 next_prio=120
     rcu_preempt-15      [000] d..2.  1694.673360: sched_stat_runtime: comm=rcu_preempt pid=15 runtime=64982 [ns] vruntime=18690077411 [ns]
     rcu_preempt-15      [000] d..2.  1694.673365: sched_switch: prev_comm=rcu_preempt prev_pid=15 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1.  1694.677257: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1694.677258: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1694.677265: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1694.677270: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNs5.  1694.677285: sched_wakeup: comm=brcmf_wdog/mmc1 pid=336 prio=120 target_cpu=000
          <idle>-0       [000] d..2.  1694.677321: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=336 next_prio=120
 brcmf_wdog/mmc1-336     [000] d..2.  1694.677337: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=336 runtime=55352 [ns] vruntime=18688481620 [ns]
 brcmf_wdog/mmc1-336     [000] d..2.  1694.677341: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=336 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1.  1694.681257: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1694.681257: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1694.681265: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1694.681268: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNs4.  1694.681280: sched_wakeup: comm=rcu_preempt pid=15 prio=120 target_cpu=000
          <idle>-0       [000] d..2.  1694.681302: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_preempt next_pid=15 next_prio=120
     rcu_preempt-15      [000] d..2.  1694.681333: sched_stat_runtime: comm=rcu_preempt pid=15 runtime=45630 [ns] vruntime=18690123041 [ns]
     rcu_preempt-15      [000] d..2.  1694.681337: sched_switch: prev_comm=rcu_preempt prev_pid=15 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1.  1694.685257: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1694.685258: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1694.685264: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1694.685268: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNs5.  1694.685281: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
          <idle>-0       [000] dNH2.  1694.685287: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNH3.  1694.685291: sched_wakeup: comm=rcu_preempt pid=15 prio=120 target_cpu=000
          <idle>-0       [000] dNH2.  1694.685293: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d..2.  1694.685320: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_preempt next_pid=15 next_prio=120
     rcu_preempt-15      [000] d..2.  1694.685345: sched_stat_runtime: comm=rcu_preempt pid=15 runtime=54944 [ns] vruntime=18690177985 [ns]
     rcu_preempt-15      [000] d..2.  1694.685349: sched_switch: prev_comm=rcu_preempt prev_pid=15 prev_prio=120 prev_state=I ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d..2.  1694.685401: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=56000 [ns] vruntime=18697482268 [ns]
     kworker/0:2-1499    [000] d..2.  1694.685411: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1.  1694.689257: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1694.689268: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1694.693257: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1694.693261: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1694.693265: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1694.693274: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNs5.  1694.693288: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
          <idle>-0       [000] dNs4.  1694.693297: sched_wakeup: comm=rcu_preempt pid=15 prio=120 target_cpu=000
          <idle>-0       [000] dNs5.  1694.693305: sched_wakeup: comm=brcmf_wdog/mmc1 pid=336 prio=120 target_cpu=000
          <idle>-0       [000] d..2.  1694.693338: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=336 next_prio=120
 brcmf_wdog/mmc1-336     [000] d.h1.  1694.693377: irq_handler_entry: irq=37 name=mmc1
 brcmf_wdog/mmc1-336     [000] d.h1.  1694.693383: irq_handler_exit: irq=37 ret=handled
 brcmf_wdog/mmc1-336     [000] d.h1.  1694.693384: irq_handler_entry: irq=37 name=mmc0
 brcmf_wdog/mmc1-336     [000] d.h1.  1694.693386: irq_handler_exit: irq=37 ret=unhandled
 brcmf_wdog/mmc1-336     [000] d.s3.  1694.693398: sched_wakeup: comm=brcmf_wdog/mmc1 pid=336 prio=120 target_cpu=000
 brcmf_wdog/mmc1-336     [000] d..2.  1694.693406: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=336 runtime=90852 [ns] vruntime=18688573120 [ns]
 brcmf_wdog/mmc1-336     [000] d..2.  1694.693423: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=336 runtime=17519 [ns] vruntime=18688590639 [ns]
 brcmf_wdog/mmc1-336     [000] d..2.  1694.693428: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=336 prev_prio=120 prev_state=S ==> next_comm=rcu_preempt next_pid=15 next_prio=120
     rcu_preempt-15      [000] d..2.  1694.693457: sched_stat_runtime: comm=rcu_preempt pid=15 runtime=33537 [ns] vruntime=18690211522 [ns]
     rcu_preempt-15      [000] d..2.  1694.693460: sched_switch: prev_comm=rcu_preempt prev_pid=15 prev_prio=120 prev_state=I ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d..2.  1694.693488: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=31685 [ns] vruntime=18697513953 [ns]
     kworker/0:2-1499    [000] d..2.  1694.693498: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1.  1694.697257: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1694.697266: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1694.704184: irq_handler_entry: irq=37 name=mmc1
          <idle>-0       [000] dNh6.  1694.704197: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
          <idle>-0       [000] dNh1.  1694.704199: irq_handler_exit: irq=37 ret=handled
          <idle>-0       [000] dNh1.  1694.704200: irq_handler_entry: irq=37 name=mmc0
          <idle>-0       [000] dNh1.  1694.704202: irq_handler_exit: irq=37 ret=unhandled
          <idle>-0       [000] d..2.  1694.704217: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d.h1.  1694.704247: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1694.704251: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1694.704252: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1694.704254: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1694.704265: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1694.704273: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=78982 [ns] vruntime=18697592935 [ns]
     kworker/0:2-1499    [000] d.h1.  1694.704301: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1694.704309: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1694.704310: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1694.704312: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1694.704322: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1694.704329: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=56000 [ns] vruntime=18697648935 [ns]
     kworker/0:2-1499    [000] d.h1.  1694.704353: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1694.704357: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1694.704358: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1694.704360: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.h1.  1694.704362: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1694.704366: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1694.704367: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1694.704368: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1694.704378: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1694.704384: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=55740 [ns] vruntime=18697704675 [ns]
     kworker/0:2-1499    [000] d..4.  1694.704395: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=10760 [ns] vruntime=18697715435 [ns]
     kworker/0:2-1499    [000] dN.4.  1694.704401: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1694.704415: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d..2.  1694.704430: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=34926 [ns] vruntime=18688715837 [ns]
    kworker/u9:2-809     [000] d..2.  1694.704434: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=D ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d..4.  1694.704443: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=13592 [ns] vruntime=18697729027 [ns]
     kworker/0:2-1499    [000] dN.4.  1694.704447: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1694.704453: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d.h1.  1694.704477: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1694.704481: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1694.704482: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1694.704484: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1694.704494: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1694.704502: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=58037 [ns] vruntime=18688729696 [ns]
    kworker/u9:2-809     [000] d.h1.  1694.704518: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1694.704524: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1694.704525: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1694.704526: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1694.704536: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1694.704543: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=41500 [ns] vruntime=18688730174 [ns]
    kworker/u9:2-809     [000] d.h1.  1694.704595: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1694.704604: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1694.704606: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1694.704607: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1694.704617: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1694.704625: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=81408 [ns] vruntime=18688731113 [ns]
    kworker/u9:2-809     [000] d.h1.  1694.704657: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1694.704663: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1694.704664: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1694.704666: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1694.704676: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1694.704683: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=58481 [ns] vruntime=18688731787 [ns]
    kworker/u9:2-809     [000] d.h1.  1694.704791: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1694.704801: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1694.704802: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1694.704804: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1694.704814: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1694.704822: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=138889 [ns] vruntime=18688733389 [ns]
    kworker/u9:2-809     [000] d..2.  1694.704843: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=20611 [ns] vruntime=18688733626 [ns]
    kworker/u9:2-809     [000] d..2.  1694.704848: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=I ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d..2.  1694.704858: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=15500 [ns] vruntime=18697744527 [ns]
     kworker/0:2-1499    [000] d..2.  1694.704869: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1694.717261: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1694.717269: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNs5.  1694.717282: sched_wakeup: comm=brcmf_wdog/mmc1 pid=336 prio=120 target_cpu=000
          <idle>-0       [000] d..2.  1694.717311: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=336 next_prio=120
 brcmf_wdog/mmc1-336     [000] d..2.  1694.717324: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=336 runtime=30814 [ns] vruntime=18688775341 [ns]
 brcmf_wdog/mmc1-336     [000] d..2.  1694.717328: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=336 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1694.733261: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1694.733268: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNs5.  1694.733281: sched_wakeup: comm=brcmf_wdog/mmc1 pid=336 prio=120 target_cpu=000
          <idle>-0       [000] d..2.  1694.733308: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=336 next_prio=120
 brcmf_wdog/mmc1-336     [000] d.h1.  1694.733342: irq_handler_entry: irq=37 name=mmc1
 brcmf_wdog/mmc1-336     [000] d.h1.  1694.733346: irq_handler_exit: irq=37 ret=handled
 brcmf_wdog/mmc1-336     [000] d.h1.  1694.733347: irq_handler_entry: irq=37 name=mmc0
 brcmf_wdog/mmc1-336     [000] d.h1.  1694.733349: irq_handler_exit: irq=37 ret=unhandled
 brcmf_wdog/mmc1-336     [000] d.s3.  1694.733360: sched_wakeup: comm=brcmf_wdog/mmc1 pid=336 prio=120 target_cpu=000
 brcmf_wdog/mmc1-336     [000] d..2.  1694.733368: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=336 runtime=77000 [ns] vruntime=18688852341 [ns]
 brcmf_wdog/mmc1-336     [000] d..2.  1694.733384: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=336 runtime=16186 [ns] vruntime=18688868527 [ns]
 brcmf_wdog/mmc1-336     [000] d..2.  1694.733388: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=336 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [002] d.h1.  1694.800966: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] dNh4.  1694.800979: sched_wakeup: comm=lxpanel pid=766 prio=120 target_cpu=002
          <idle>-0       [002] dNh1.  1694.800982: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] dNh1.  1694.800985: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh5.  1694.800993: sched_wakeup: comm=kworker/2:3 pid=168 prio=120 target_cpu=002
          <idle>-0       [002] dNh1.  1694.800995: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] d..2.  1694.801010: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=766 next_prio=120
         lxpanel-766     [002] d..2.  1694.801171: sched_stat_runtime: comm=lxpanel pid=766 runtime=177315 [ns] vruntime=2603716009 [ns]
         lxpanel-766     [002] d..2.  1694.801180: sched_switch: prev_comm=lxpanel prev_pid=766 prev_prio=120 prev_state=S ==> next_comm=kworker/2:3 next_pid=168 next_prio=120
     kworker/2:3-168     [002] d..2.  1694.801203: sched_stat_runtime: comm=kworker/2:3 pid=168 runtime=33815 [ns] vruntime=19371007747 [ns]
     kworker/2:3-168     [002] d..2.  1694.801216: sched_switch: prev_comm=kworker/2:3 prev_pid=168 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1694.805261: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1694.805269: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNs5.  1694.805282: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
          <idle>-0       [000] d..2.  1694.805305: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d.h1.  1694.805346: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1694.805348: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.h1.  1694.805349: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h3.  1694.805357: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d.h1.  1694.805358: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d..2.  1694.805365: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=77556 [ns] vruntime=18697822083 [ns]
     kworker/0:2-1499    [000] d..2.  1694.805390: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=25426 [ns] vruntime=18697847509 [ns]
     kworker/0:2-1499    [000] d..2.  1694.805395: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1694.865263: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1694.865271: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1694.865284: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh2.  1694.865293: sched_wakeup: comm=kworker/u8:3 pid=1583 prio=120 target_cpu=003
          <idle>-0       [003] dNh1.  1694.865295: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2.  1694.865308: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:3 next_pid=1583 next_prio=120
    kworker/u8:3-1583    [003] d..2.  1694.865326: sched_stat_runtime: comm=kworker/u8:3 pid=1583 runtime=36945 [ns] vruntime=18827316555 [ns]
    kworker/u8:3-1583    [003] d..2.  1694.865330: sched_switch: prev_comm=kworker/u8:3 prev_pid=1583 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [002] d.h1.  1694.869263: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1694.869274: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] dNs4.  1694.869290: sched_wakeup: comm=kcompactd0 pid=42 prio=120 target_cpu=002
          <idle>-0       [002] d..2.  1694.869321: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kcompactd0 next_pid=42 next_prio=120
      kcompactd0-42      [002] d..2.  1694.869348: sched_stat_runtime: comm=kcompactd0 pid=42 runtime=50963 [ns] vruntime=19371024895 [ns]
      kcompactd0-42      [002] d..2.  1694.869353: sched_switch: prev_comm=kcompactd0 prev_pid=42 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1694.905263: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1694.905270: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNs5.  1694.905289: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
          <idle>-0       [000] dNH2.  1694.905295: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2.  1694.905298: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2.  1694.905321: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
          <idle>-0       [001] d.h1.  1694.905345: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] d.h1.  1694.905352: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh2.  1694.905352: sched_wakeup: comm=kworker/1:2 pid=1593 prio=120 target_cpu=001
          <idle>-0       [001] dNh1.  1694.905354: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh2.  1694.905359: sched_wakeup: comm=kworker/3:0 pid=1601 prio=120 target_cpu=003
          <idle>-0       [003] dNh1.  1694.905361: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d..2.  1694.905368: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:2 next_pid=1593 next_prio=120
          <idle>-0       [003] d..2.  1694.905373: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:0 next_pid=1601 next_prio=120
     kworker/0:2-1499    [000] d..2.  1694.905383: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=79389 [ns] vruntime=18697926898 [ns]
     kworker/0:2-1499    [000] d..2.  1694.905388: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
     kworker/1:2-1593    [001] d..2.  1694.905394: sched_stat_runtime: comm=kworker/1:2 pid=1593 runtime=45241 [ns] vruntime=20260836604 [ns]
     kworker/1:2-1593    [001] d..2.  1694.905399: sched_switch: prev_comm=kworker/1:2 prev_pid=1593 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
     kworker/3:0-1601    [003] d..2.  1694.905399: sched_stat_runtime: comm=kworker/3:0 pid=1601 runtime=43796 [ns] vruntime=18827245388 [ns]
     kworker/3:0-1601    [003] d..2.  1694.905404: sched_switch: prev_comm=kworker/3:0 prev_pid=1601 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1.  1695.013111: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh7.  1695.013126: sched_wakeup: comm=systemd-journal pid=143 prio=120 target_cpu=003
          <idle>-0       [003] dNh1.  1695.013131: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNh1.  1695.013133: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh5.  1695.013139: sched_wakeup: comm=kworker/3:0 pid=1601 prio=120 target_cpu=003
          <idle>-0       [003] dNh1.  1695.013141: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d..2.  1695.013154: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:0 next_pid=1601 next_prio=120
     kworker/3:0-1601    [003] d..2.  1695.013170: sched_stat_runtime: comm=kworker/3:0 pid=1601 runtime=32796 [ns] vruntime=18827278184 [ns]
     kworker/3:0-1601    [003] d..2.  1695.013175: sched_switch: prev_comm=kworker/3:0 prev_pid=1601 prev_prio=120 prev_state=I ==> next_comm=systemd-journal next_pid=143 next_prio=120
 systemd-journal-143     [003] d.h1.  1695.013262: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-143     [003] d.h2.  1695.013274: sched_stat_runtime: comm=systemd-journal pid=143 runtime=103186 [ns] vruntime=273587628 [ns]
 systemd-journal-143     [003] d.h1.  1695.013286: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1695.013288: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.  1695.013291: irq_handler_exit: irq=2 ret=handled
 systemd-journal-143     [003] d..2.  1695.013453: sched_stat_runtime: comm=systemd-journal pid=143 runtime=177796 [ns] vruntime=273765424 [ns]
 systemd-journal-143     [003] d..2.  1695.013461: sched_switch: prev_comm=systemd-journal prev_pid=143 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1.  1695.073419: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh4.  1695.073432: sched_wakeup: comm=gvfs-afc-volume pid=895 prio=120 target_cpu=003
          <idle>-0       [003] dNh1.  1695.073435: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d..2.  1695.073450: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=gvfs-afc-volume next_pid=895 next_prio=120
 gvfs-afc-volume-895     [003] d..2.  1695.073503: sched_stat_runtime: comm=gvfs-afc-volume pid=895 runtime=77667 [ns] vruntime=97757169 [ns]
 gvfs-afc-volume-895     [003] d..2.  1695.073513: sched_switch: prev_comm=gvfs-afc-volume prev_pid=895 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [001] d.h1.  1695.125265: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1695.125276: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNs5.  1695.125291: sched_wakeup: comm=kworker/1:2 pid=1593 prio=120 target_cpu=001
          <idle>-0       [001] dNH2.  1695.125297: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.  1695.125300: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d..2.  1695.125332: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:2 next_pid=1593 next_prio=120
     kworker/1:2-1593    [001] d.h1.  1695.125368: irq_handler_entry: irq=11 name=arch_timer
     kworker/1:2-1593    [001] d.h1.  1695.125374: irq_handler_exit: irq=11 ret=handled
     kworker/1:2-1593    [001] d..4.  1695.125391: sched_stat_runtime: comm=kworker/1:2 pid=1593 runtime=84278 [ns] vruntime=20260920882 [ns]
          <idle>-0       [000] d.h1.  1695.125396: irq_handler_entry: irq=14 name=fe00b880.mailbox
     kworker/1:2-1593    [001] d..4.  1695.125397: sched_wakeup: comm=kworker/1:1 pid=1502 prio=120 target_cpu=001
          <idle>-0       [000] d.h5.  1695.125402: sched_wakeup: comm=kworker/1:2 pid=1593 prio=120 target_cpu=001
          <idle>-0       [000] d.h1.  1695.125404: irq_handler_exit: irq=14 ret=handled
     kworker/1:2-1593    [001] d..2.  1695.125404: sched_stat_runtime: comm=kworker/1:2 pid=1593 runtime=13963 [ns] vruntime=20260934845 [ns]
     kworker/1:2-1593    [001] d..2.  1695.125408: sched_switch: prev_comm=kworker/1:2 prev_pid=1593 prev_prio=120 prev_state=R ==> next_comm=kworker/1:1 next_pid=1502 next_prio=120
     kworker/1:1-1502    [001] d..2.  1695.125426: sched_stat_runtime: comm=kworker/1:1 pid=1502 runtime=21426 [ns] vruntime=20258657451 [ns]
     kworker/1:1-1502    [001] d..2.  1695.125430: sched_switch: prev_comm=kworker/1:1 prev_pid=1502 prev_prio=120 prev_state=I ==> next_comm=kworker/1:2 next_pid=1593 next_prio=120
     kworker/1:2-1593    [001] d..2.  1695.125455: sched_stat_runtime: comm=kworker/1:2 pid=1593 runtime=29241 [ns] vruntime=20260964086 [ns]
     kworker/1:2-1593    [001] d..2.  1695.125464: sched_switch: prev_comm=kworker/1:2 prev_pid=1593 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0       [001] d.h1.  1695.253267: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh4.  1695.253287: sched_wakeup: comm=rtkit-daemon pid=653 prio=120 target_cpu=001
          <idle>-0       [001] dNh1.  1695.253290: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.  1695.253292: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh5.  1695.253298: sched_wakeup: comm=kworker/1:2 pid=1593 prio=120 target_cpu=001
          <idle>-0       [001] dNh1.  1695.253300: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d..2.  1695.253330: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rtkit-daemon next_pid=653 next_prio=120
          <idle>-0       [000] d.h1.  1695.253382: irq_handler_entry: irq=2 name=IPI
    rtkit-daemon-653     [001] d..2.  1695.253402: sched_stat_runtime: comm=rtkit-daemon pid=653 runtime=89149 [ns] vruntime=20919711 [ns]
    rtkit-daemon-653     [001] d..2.  1695.253411: sched_switch: prev_comm=rtkit-daemon prev_pid=653 prev_prio=120 prev_state=S ==> next_comm=kworker/1:2 next_pid=1593 next_prio=120
          <idle>-0       [000] dNh2.  1695.253412: sched_wakeup: comm=rtkit-daemon pid=654 prio=0 target_cpu=000
          <idle>-0       [000] dNh1.  1695.253414: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.  1695.253416: irq_handler_entry: irq=6 name=IPI
     kworker/1:2-1593    [001] d.h..  1695.253432: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.  1695.253433: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] dNh1.  1695.253435: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1695.253437: irq_handler_entry: irq=2 name=IPI
     kworker/1:2-1593    [001] d.h1.  1695.253438: sched_stat_runtime: comm=kworker/1:2 pid=1593 runtime=35611 [ns] vruntime=20260999697 [ns]
     kworker/1:2-1593    [001] d.h1.  1695.253443: sched_wakeup: comm=in:imklog pid=435 prio=120 target_cpu=001
          <idle>-0       [000] dNh1.  1695.253444: irq_handler_exit: irq=11 ret=handled
     kworker/1:2-1593    [001] d.h..  1695.253445: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh2.  1695.253446: sched_wakeup: comm=systemd-journal pid=143 prio=120 target_cpu=003
          <idle>-0       [003] dNh1.  1695.253448: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d..2.  1695.253460: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rtkit-daemon next_pid=654 next_prio=0
          <idle>-0       [003] d..2.  1695.253464: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=systemd-journal next_pid=143 next_prio=120
     kworker/1:2-1593    [001] d..2.  1695.253467: sched_stat_runtime: comm=kworker/1:2 pid=1593 runtime=31740 [ns] vruntime=20261031437 [ns]
     kworker/1:2-1593    [001] d..2.  1695.253472: sched_switch: prev_comm=kworker/1:2 prev_pid=1593 prev_prio=120 prev_state=I ==> next_comm=in:imklog next_pid=435 next_prio=120
    rtkit-daemon-654     [000] d..2.  1695.253531: sched_stat_runtime: comm=rtkit-daemon pid=654 runtime=88037 [ns] vruntime=0 [ns]
    rtkit-daemon-654     [000] d..2.  1695.253548: sched_stat_runtime: comm=rtkit-daemon pid=654 runtime=12037 [ns] vruntime=0 [ns]
    rtkit-daemon-654     [000] d..2.  1695.253553: sched_switch: prev_comm=rtkit-daemon prev_pid=654 prev_prio=0 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1695.253598: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh2.  1695.253607: sched_wakeup: comm=rs:main Q:Reg pid=436 prio=120 target_cpu=000
          <idle>-0       [000] dNh1.  1695.253609: irq_handler_exit: irq=2 ret=handled
       in:imklog-435     [001] d..2.  1695.253616: sched_stat_runtime: comm=in:imklog pid=435 runtime=147352 [ns] vruntime=45478380 [ns]
          <idle>-0       [000] d..2.  1695.253624: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rs:main Q:Reg next_pid=436 next_prio=120
       in:imklog-435     [001] d..2.  1695.253625: sched_switch: prev_comm=in:imklog prev_pid=435 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
   rs:main Q:Reg-436     [000] d..2.  1695.253853: sched_stat_runtime: comm=rs:main Q:Reg pid=436 runtime=249037 [ns] vruntime=32433977 [ns]
   rs:main Q:Reg-436     [000] d..2.  1695.253862: sched_switch: prev_comm=rs:main Q:Reg prev_pid=436 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
 systemd-journal-143     [003] d..2.  1695.253897: sched_stat_runtime: comm=systemd-journal pid=143 runtime=454852 [ns] vruntime=274220276 [ns]
 systemd-journal-143     [003] d..2.  1695.253906: sched_switch: prev_comm=systemd-journal prev_pid=143 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1.  1695.257267: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1695.257285: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1695.257326: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh2.  1695.257335: sched_wakeup: comm=rcu_preempt pid=15 prio=120 target_cpu=000
          <idle>-0       [000] dNh1.  1695.257337: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d..2.  1695.257351: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_preempt next_pid=15 next_prio=120
     rcu_preempt-15      [000] d..2.  1695.257381: sched_stat_runtime: comm=rcu_preempt pid=15 runtime=51333 [ns] vruntime=18690262855 [ns]
     rcu_preempt-15      [000] d..2.  1695.257386: sched_switch: prev_comm=rcu_preempt prev_pid=15 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1.  1695.261267: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1695.261277: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1695.265266: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1695.265270: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1695.265273: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1695.265279: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNs4.  1695.265293: sched_wakeup: comm=rcu_preempt pid=15 prio=120 target_cpu=000
          <idle>-0       [000] d..2.  1695.265325: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_preempt next_pid=15 next_prio=120
     rcu_preempt-15      [000] d..2.  1695.265358: sched_stat_runtime: comm=rcu_preempt pid=15 runtime=58111 [ns] vruntime=18690320966 [ns]
     rcu_preempt-15      [000] d..2.  1695.265362: sched_switch: prev_comm=rcu_preempt prev_pid=15 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1.  1695.269266: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1695.269276: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1695.381264: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1695.381273: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] dNs4.  1695.381288: sched_wakeup: comm=kcompactd0 pid=42 prio=120 target_cpu=002
          <idle>-0       [002] dNH3.  1695.381293: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNH7.  1695.381301: sched_wakeup: comm=kworker/2:3 pid=168 prio=120 target_cpu=002
          <idle>-0       [002] dNH3.  1695.381303: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] d..2.  1695.381335: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:3 next_pid=168 next_prio=120
     kworker/2:3-168     [002] d..2.  1695.381353: sched_stat_runtime: comm=kworker/2:3 pid=168 runtime=41611 [ns] vruntime=19371049358 [ns]
     kworker/2:3-168     [002] d..2.  1695.381358: sched_switch: prev_comm=kworker/2:3 prev_pid=168 prev_prio=120 prev_state=I ==> next_comm=kcompactd0 next_pid=42 next_prio=120
      kcompactd0-42      [002] d..2.  1695.381379: sched_stat_runtime: comm=kcompactd0 pid=42 runtime=25981 [ns] vruntime=19371050876 [ns]
      kcompactd0-42      [002] d..2.  1695.381387: sched_switch: prev_comm=kcompactd0 prev_pid=42 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [002] d.h1.  1695.401761: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] dNh4.  1695.401771: sched_wakeup: comm=lxpanel pid=766 prio=120 target_cpu=002
          <idle>-0       [002] dNh1.  1695.401774: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d..2.  1695.401788: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=766 next_prio=120
         lxpanel-766     [002] d..2.  1695.401903: sched_stat_runtime: comm=lxpanel pid=766 runtime=135204 [ns] vruntime=2603851213 [ns]
         lxpanel-766     [002] d..2.  1695.401910: sched_switch: prev_comm=lxpanel prev_pid=766 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1.  1695.509269: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1695.509277: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNs5.  1695.509293: sched_wakeup: comm=kworker/3:0 pid=1601 prio=120 target_cpu=003
          <idle>-0       [003] dNH2.  1695.509299: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNH2.  1695.509302: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] dNs5.  1695.509321: sched_wakeup: comm=kworker/u8:3 pid=1583 prio=120 target_cpu=003
          <idle>-0       [003] d..2.  1695.509345: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:0 next_pid=1601 next_prio=120
     kworker/3:0-1601    [003] d..4.  1695.509371: sched_stat_runtime: comm=kworker/3:0 pid=1601 runtime=44277 [ns] vruntime=18827322461 [ns]
          <idle>-0       [000] d.h1.  1695.509371: irq_handler_entry: irq=31 name=eth0
     kworker/3:0-1601    [003] d..4.  1695.509377: sched_wakeup: comm=kworker/3:1 pid=1480 prio=120 target_cpu=003
          <idle>-0       [000] d.h5.  1695.509380: sched_wakeup: comm=kworker/3:0 pid=1601 prio=120 target_cpu=003
          <idle>-0       [000] d.h1.  1695.509382: irq_handler_exit: irq=31 ret=handled
     kworker/3:0-1601    [003] d..2.  1695.509385: sched_stat_runtime: comm=kworker/3:0 pid=1601 runtime=12408 [ns] vruntime=18827334869 [ns]
     kworker/3:0-1601    [003] d..2.  1695.509388: sched_switch: prev_comm=kworker/3:0 prev_pid=1601 prev_prio=120 prev_state=R ==> next_comm=kworker/3:1 next_pid=1480 next_prio=120
     kworker/3:1-1480    [003] d..2.  1695.509417: sched_stat_runtime: comm=kworker/3:1 pid=1480 runtime=33611 [ns] vruntime=18827235203 [ns]
     kworker/3:1-1480    [003] d..2.  1695.509421: sched_switch: prev_comm=kworker/3:1 prev_pid=1480 prev_prio=120 prev_state=I ==> next_comm=kworker/u8:3 next_pid=1583 next_prio=120
    kworker/u8:3-1583    [003] d..2.  1695.509468: sched_stat_runtime: comm=kworker/u8:3 pid=1583 runtime=51259 [ns] vruntime=18827367814 [ns]
    kworker/u8:3-1583    [003] d..2.  1695.509472: sched_switch: prev_comm=kworker/u8:3 prev_pid=1583 prev_prio=120 prev_state=I ==> next_comm=kworker/3:0 next_pid=1601 next_prio=120
          <idle>-0       [000] d.h1.  1695.509495: irq_handler_entry: irq=31 name=eth0
     kworker/3:0-1601    [003] d..2.  1695.509495: sched_stat_runtime: comm=kworker/3:0 pid=1601 runtime=28056 [ns] vruntime=18827362925 [ns]
          <idle>-0       [000] d.h1.  1695.509501: irq_handler_exit: irq=31 ret=handled
     kworker/3:0-1601    [003] d..2.  1695.509503: sched_switch: prev_comm=kworker/3:0 prev_pid=1601 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1.  1695.509509: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh2.  1695.509514: sched_wakeup: comm=kworker/3:0 pid=1601 prio=120 target_cpu=003
          <idle>-0       [003] dNh1.  1695.509516: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2.  1695.509523: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:0 next_pid=1601 next_prio=120
          <idle>-0       [000] d.h1.  1695.509545: irq_handler_entry: irq=31 name=eth0
     kworker/3:0-1601    [003] d..2.  1695.509546: sched_stat_runtime: comm=kworker/3:0 pid=1601 runtime=33815 [ns] vruntime=18827396740 [ns]
          <idle>-0       [000] d.h1.  1695.509549: irq_handler_exit: irq=31 ret=handled
     kworker/3:0-1601    [003] d..2.  1695.509552: sched_switch: prev_comm=kworker/3:0 prev_pid=1601 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1.  1695.509558: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh2.  1695.509562: sched_wakeup: comm=kworker/3:0 pid=1601 prio=120 target_cpu=003
          <idle>-0       [003] dNh1.  1695.509563: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2.  1695.509570: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:0 next_pid=1601 next_prio=120
          <idle>-0       [000] d.h1.  1695.509593: irq_handler_entry: irq=31 name=eth0
     kworker/3:0-1601    [003] d..2.  1695.509593: sched_stat_runtime: comm=kworker/3:0 pid=1601 runtime=33000 [ns] vruntime=18827429740 [ns]
          <idle>-0       [000] d.h1.  1695.509596: irq_handler_exit: irq=31 ret=handled
     kworker/3:0-1601    [003] d..2.  1695.509597: sched_switch: prev_comm=kworker/3:0 prev_pid=1601 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1.  1695.509602: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh2.  1695.509605: sched_wakeup: comm=kworker/3:0 pid=1601 prio=120 target_cpu=003
          <idle>-0       [003] dNh1.  1695.509607: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2.  1695.509613: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:0 next_pid=1601 next_prio=120
          <idle>-0       [000] d.h1.  1695.509635: irq_handler_entry: irq=31 name=eth0
     kworker/3:0-1601    [003] d..2.  1695.509635: sched_stat_runtime: comm=kworker/3:0 pid=1601 runtime=31482 [ns] vruntime=18827461222 [ns]
          <idle>-0       [000] d.h1.  1695.509638: irq_handler_exit: irq=31 ret=handled
     kworker/3:0-1601    [003] d..2.  1695.509641: sched_switch: prev_comm=kworker/3:0 prev_pid=1601 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1.  1695.509647: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh2.  1695.509651: sched_wakeup: comm=kworker/3:0 pid=1601 prio=120 target_cpu=003
          <idle>-0       [003] dNh1.  1695.509653: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2.  1695.509659: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:0 next_pid=1601 next_prio=120
     kworker/3:0-1601    [003] d..2.  1695.509681: sched_stat_runtime: comm=kworker/3:0 pid=1601 runtime=32315 [ns] vruntime=18827493537 [ns]
     kworker/3:0-1601    [003] d..2.  1695.509691: sched_switch: prev_comm=kworker/3:0 prev_pid=1601 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1.  1695.513119: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh7.  1695.513130: sched_wakeup: comm=systemd-journal pid=143 prio=120 target_cpu=003
          <idle>-0       [003] dNh1.  1695.513135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d..2.  1695.513147: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=systemd-journal next_pid=143 next_prio=120
 systemd-journal-143     [003] d.h1.  1695.513271: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1695.513273: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1695.513281: irq_handler_exit: irq=11 ret=handled
 systemd-journal-143     [003] d.h2.  1695.513282: sched_stat_runtime: comm=systemd-journal pid=143 runtime=154926 [ns] vruntime=274375202 [ns]
 systemd-journal-143     [003] d.h1.  1695.513322: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1695.513323: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.  1695.513332: irq_handler_exit: irq=2 ret=handled
 systemd-journal-143     [003] d..2.  1695.513393: sched_stat_runtime: comm=systemd-journal pid=143 runtime=110703 [ns] vruntime=274485905 [ns]
 systemd-journal-143     [003] d..2.  1695.513400: sched_switch: prev_comm=systemd-journal prev_pid=143 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1695.829273: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1695.829281: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNs5.  1695.829296: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
          <idle>-0       [000] dNH2.  1695.829301: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2.  1695.829305: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2.  1695.829327: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d.h1.  1695.829377: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1695.829380: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.h1.  1695.829381: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h3.  1695.829390: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d.h1.  1695.829392: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d..2.  1695.829400: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=88815 [ns] vruntime=18698015713 [ns]
     kworker/0:2-1499    [000] d..2.  1695.829435: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=35870 [ns] vruntime=18698051583 [ns]
     kworker/0:2-1499    [000] d..2.  1695.829440: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [002] d.h1.  1695.893272: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1695.893281: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] dNs4.  1695.893295: sched_wakeup: comm=kcompactd0 pid=42 prio=120 target_cpu=002
          <idle>-0       [002] d..2.  1695.893320: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kcompactd0 next_pid=42 next_prio=120
      kcompactd0-42      [002] d..2.  1695.893342: sched_stat_runtime: comm=kcompactd0 pid=42 runtime=40463 [ns] vruntime=19371091339 [ns]
      kcompactd0-42      [002] d..2.  1695.893346: sched_switch: prev_comm=kcompactd0 prev_pid=42 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [002] d.h1.  1696.002495: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] dNh4.  1696.002505: sched_wakeup: comm=lxpanel pid=766 prio=120 target_cpu=002
          <idle>-0       [002] dNh1.  1696.002507: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] dNh1.  1696.002509: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh5.  1696.002516: sched_wakeup: comm=kworker/2:3 pid=168 prio=120 target_cpu=002
          <idle>-0       [002] dNh1.  1696.002517: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] d..2.  1696.002531: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:3 next_pid=168 next_prio=120
     kworker/2:3-168     [002] d..2.  1696.002548: sched_stat_runtime: comm=kworker/2:3 pid=168 runtime=33686 [ns] vruntime=19371083044 [ns]
     kworker/2:3-168     [002] d..2.  1696.002553: sched_switch: prev_comm=kworker/2:3 prev_pid=168 prev_prio=120 prev_state=I ==> next_comm=lxpanel next_pid=766 next_prio=120
         lxpanel-766     [002] d..2.  1696.002650: sched_stat_runtime: comm=lxpanel pid=766 runtime=101481 [ns] vruntime=2603952694 [ns]
         lxpanel-766     [002] d..2.  1696.002664: sched_switch: prev_comm=lxpanel prev_pid=766 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1696.016621: irq_handler_entry: irq=37 name=mmc1
          <idle>-0       [000] dNh6.  1696.016634: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
          <idle>-0       [000] dNh1.  1696.016636: irq_handler_exit: irq=37 ret=handled
          <idle>-0       [000] dNh1.  1696.016638: irq_handler_entry: irq=37 name=mmc0
          <idle>-0       [000] dNh1.  1696.016639: irq_handler_exit: irq=37 ret=unhandled
          <idle>-0       [000] d..2.  1696.016653: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d.h1.  1696.016686: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.016691: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.016692: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.016694: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1696.016706: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.016713: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=82796 [ns] vruntime=18698134379 [ns]
     kworker/0:2-1499    [000] d.h1.  1696.016744: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.016753: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.016754: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.016755: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1696.016765: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.016772: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=58797 [ns] vruntime=18698193176 [ns]
     kworker/0:2-1499    [000] d.h1.  1696.016796: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.016800: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.016801: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.016803: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.h1.  1696.016805: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.016808: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.016809: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.016811: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1696.016820: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.016827: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=54907 [ns] vruntime=18698248083 [ns]
     kworker/0:2-1499    [000] d..4.  1696.016838: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=11074 [ns] vruntime=18698259157 [ns]
     kworker/0:2-1499    [000] dN.4.  1696.016844: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.016857: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d..2.  1696.016873: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=35241 [ns] vruntime=18689259563 [ns]
    kworker/u9:2-809     [000] d..2.  1696.016877: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=D ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d..4.  1696.016887: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=13648 [ns] vruntime=18698272805 [ns]
     kworker/0:2-1499    [000] dN.4.  1696.016890: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.016897: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d.h1.  1696.016922: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.016926: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.016927: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.016929: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.016939: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.016947: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=59833 [ns] vruntime=18689273495 [ns]
    kworker/u9:2-809     [000] d.h1.  1696.016963: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.016967: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.016968: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.016970: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.016979: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.016986: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=39037 [ns] vruntime=18689273945 [ns]
    kworker/u9:2-809     [000] d.h1.  1696.017038: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.017048: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.017049: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.017050: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.017061: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.017068: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=81982 [ns] vruntime=18689274890 [ns]
    kworker/u9:2-809     [000] d.h1.  1696.017101: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.017110: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.017111: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.017113: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.017123: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.017130: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=62148 [ns] vruntime=18689275606 [ns]
          <idle>-0       [002] d.h1.  1696.017204: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh2.  1696.017212: sched_wakeup: comm=sshd pid=1487 prio=120 target_cpu=002
          <idle>-0       [002] dNh1.  1696.017214: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d..2.  1696.017228: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1487 next_prio=120
    kworker/u9:2-809     [000] d.h1.  1696.017246: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.017256: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.017257: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.017259: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.017269: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.017277: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=146907 [ns] vruntime=18689277300 [ns]
            sshd-1487    [002] d.h..  1696.017280: irq_handler_entry: irq=11 name=arch_timer
    kworker/u9:2-809     [000] d.h1.  1696.017281: irq_handler_entry: irq=11 name=arch_timer
    kworker/u9:2-809     [000] d.h2.  1696.017289: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=12667 [ns] vruntime=18689277446 [ns]
            sshd-1487    [002] d.h1.  1696.017292: sched_stat_runtime: comm=sshd pid=1487 runtime=84037 [ns] vruntime=376711427 [ns]
    kworker/u9:2-809     [000] d.h1.  1696.017299: irq_handler_exit: irq=11 ret=handled
            sshd-1487    [002] d.h..  1696.017301: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1696.017304: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] d.h1.  1696.017312: irq_handler_exit: irq=2 ret=handled
    kworker/u9:2-809     [000] d..2.  1696.017384: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=94111 [ns] vruntime=18689278531 [ns]
    kworker/u9:2-809     [000] d..2.  1696.017390: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=I ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d..2.  1696.017418: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=33982 [ns] vruntime=18698306787 [ns]
     kworker/0:2-1499    [000] d..2.  1696.017427: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1.  1696.017541: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh2.  1696.017549: sched_wakeup: comm=kworker/u8:3 pid=1583 prio=120 target_cpu=003
          <idle>-0       [003] dNh1.  1696.017551: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2.  1696.017564: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:3 next_pid=1583 next_prio=120
          <idle>-0       [000] d.h1.  1696.017587: irq_handler_entry: irq=2 name=IPI
            sshd-1487    [002] d..2.  1696.017588: sched_stat_runtime: comm=sshd pid=1487 runtime=295092 [ns] vruntime=377006519 [ns]
    kworker/u8:3-1583    [003] d..2.  1696.017591: sched_stat_runtime: comm=kworker/u8:3 pid=1583 runtime=46056 [ns] vruntime=18827413870 [ns]
    kworker/u8:3-1583    [003] d..2.  1696.017596: sched_switch: prev_comm=kworker/u8:3 prev_pid=1583 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
            sshd-1487    [002] d..2.  1696.017596: sched_switch: prev_comm=sshd prev_pid=1487 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] dNh2.  1696.017597: sched_wakeup: comm=bash pid=1577 prio=120 target_cpu=000
          <idle>-0       [000] dNh1.  1696.017598: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d..2.  1696.017612: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=1577 next_prio=120
          <idle>-0       [003] d.h1.  1696.017761: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh2.  1696.017766: sched_wakeup: comm=kworker/u8:3 pid=1583 prio=120 target_cpu=003
          <idle>-0       [003] dNh1.  1696.017768: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2.  1696.017780: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:3 next_pid=1583 next_prio=120
            bash-1577    [000] d..2.  1696.017792: sched_stat_runtime: comm=bash pid=1577 runtime=199241 [ns] vruntime=205731066 [ns]
          <idle>-0       [002] d.h1.  1696.017799: irq_handler_entry: irq=2 name=IPI
    kworker/u8:3-1583    [003] d..2.  1696.017801: sched_stat_runtime: comm=kworker/u8:3 pid=1583 runtime=37500 [ns] vruntime=18827451370 [ns]
            bash-1577    [000] d..2.  1696.017803: sched_switch: prev_comm=bash prev_pid=1577 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
    kworker/u8:3-1583    [003] d..2.  1696.017805: sched_switch: prev_comm=kworker/u8:3 prev_pid=1583 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [002] dNh2.  1696.017806: sched_wakeup: comm=sshd pid=1487 prio=120 target_cpu=002
          <idle>-0       [002] dNh1.  1696.017808: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d..2.  1696.017823: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1487 next_prio=120
          <idle>-0       [000] d.h1.  1696.018038: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh2.  1696.018045: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
          <idle>-0       [000] dNh1.  1696.018047: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d..2.  1696.018061: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
            sshd-1487    [002] d..2.  1696.018085: sched_stat_runtime: comm=sshd pid=1487 runtime=281389 [ns] vruntime=377287908 [ns]
            sshd-1487    [002] d..2.  1696.018094: sched_switch: prev_comm=sshd prev_pid=1487 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
    kworker/u9:2-809     [000] d.h1.  1696.018134: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.018145: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.018147: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.018149: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.h..  1696.018155: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h..  1696.018159: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h..  1696.018160: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h..  1696.018162: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s2.  1696.018174: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.018184: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=140481 [ns] vruntime=18689308407 [ns]
    kworker/u9:2-809     [000] d..2.  1696.018213: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=31056 [ns] vruntime=18689308765 [ns]
    kworker/u9:2-809     [000] d..2.  1696.018218: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1696.033282: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1696.033292: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNs5.  1696.033307: sched_wakeup: comm=brcmf_wdog/mmc1 pid=336 prio=120 target_cpu=000
          <idle>-0       [000] d..2.  1696.033338: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=336 next_prio=120
 brcmf_wdog/mmc1-336     [000] d..2.  1696.033354: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=336 runtime=36000 [ns] vruntime=18689342787 [ns]
 brcmf_wdog/mmc1-336     [000] d..2.  1696.033358: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=336 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1696.049281: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1696.049289: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNs5.  1696.049302: sched_wakeup: comm=brcmf_wdog/mmc1 pid=336 prio=120 target_cpu=000
          <idle>-0       [000] d..2.  1696.049328: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=336 next_prio=120
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.049363: irq_handler_entry: irq=37 name=mmc1
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.049367: irq_handler_exit: irq=37 ret=handled
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.049368: irq_handler_entry: irq=37 name=mmc0
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.049370: irq_handler_exit: irq=37 ret=unhandled
 brcmf_wdog/mmc1-336     [000] d.s3.  1696.049381: sched_wakeup: comm=brcmf_wdog/mmc1 pid=336 prio=120 target_cpu=000
 brcmf_wdog/mmc1-336     [000] d..2.  1696.049389: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=336 runtime=77315 [ns] vruntime=18689420102 [ns]
 brcmf_wdog/mmc1-336     [000] d..2.  1696.049405: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=336 runtime=16833 [ns] vruntime=18689436935 [ns]
 brcmf_wdog/mmc1-336     [000] d..2.  1696.049409: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=336 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1696.057281: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1696.057289: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1696.061847: irq_handler_entry: irq=37 name=mmc1
          <idle>-0       [000] dNh6.  1696.061859: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
          <idle>-0       [000] dNh1.  1696.061862: irq_handler_exit: irq=37 ret=handled
          <idle>-0       [000] dNh1.  1696.061863: irq_handler_entry: irq=37 name=mmc0
          <idle>-0       [000] dNh1.  1696.061864: irq_handler_exit: irq=37 ret=unhandled
          <idle>-0       [000] d..2.  1696.061878: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d.h1.  1696.061909: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.061913: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.061914: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.061916: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1696.061926: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.061934: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=77555 [ns] vruntime=18698384342 [ns]
     kworker/0:2-1499    [000] d.h1.  1696.061960: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.061967: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.061968: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.061969: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1696.061979: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.061985: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=52056 [ns] vruntime=18698436398 [ns]
     kworker/0:2-1499    [000] d.h1.  1696.062009: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.062013: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.062014: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.062016: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.h1.  1696.062018: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.062022: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.062023: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.062024: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1696.062033: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.062040: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=54315 [ns] vruntime=18698490713 [ns]
     kworker/0:2-1499    [000] d..4.  1696.062050: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=9814 [ns] vruntime=18698500527 [ns]
     kworker/0:2-1499    [000] dN.4.  1696.062055: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.062069: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d..2.  1696.062084: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=33593 [ns] vruntime=18689500914 [ns]
    kworker/u9:2-809     [000] d..2.  1696.062088: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=D ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d..4.  1696.062096: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=13148 [ns] vruntime=18698513675 [ns]
     kworker/0:2-1499    [000] dN.4.  1696.062100: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.062106: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d.h1.  1696.062129: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.062133: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.062134: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.062136: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.062146: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.062153: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=56722 [ns] vruntime=18689514329 [ns]
    kworker/u9:2-809     [000] d.h1.  1696.062170: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.062173: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.062174: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.062176: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.062185: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.062192: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=38741 [ns] vruntime=18689514775 [ns]
    kworker/u9:2-809     [000] d.h1.  1696.062238: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.062248: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.062249: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.062250: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.062260: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.062268: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=75611 [ns] vruntime=18689515647 [ns]
    kworker/u9:2-809     [000] d.h1.  1696.062297: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.062303: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.062304: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.062306: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.062316: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.062323: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=55408 [ns] vruntime=18689516286 [ns]
    kworker/u9:2-809     [000] d.h1.  1696.062418: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.062428: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.062429: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.062431: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.062441: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.062449: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=125574 [ns] vruntime=18689517734 [ns]
    kworker/u9:2-809     [000] d..2.  1696.062468: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=19277 [ns] vruntime=18689517956 [ns]
    kworker/u9:2-809     [000] d..2.  1696.062473: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=I ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d..2.  1696.062482: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=14241 [ns] vruntime=18698527916 [ns]
     kworker/0:2-1499    [000] d..2.  1696.062492: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1.  1696.074510: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh4.  1696.074520: sched_wakeup: comm=gvfs-afc-volume pid=895 prio=120 target_cpu=003
          <idle>-0       [003] dNh1.  1696.074523: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d..2.  1696.074537: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=gvfs-afc-volume next_pid=895 next_prio=120
 gvfs-afc-volume-895     [003] d..2.  1696.074586: sched_stat_runtime: comm=gvfs-afc-volume pid=895 runtime=70444 [ns] vruntime=97827613 [ns]
 gvfs-afc-volume-895     [003] d..2.  1696.074596: sched_switch: prev_comm=gvfs-afc-volume prev_pid=895 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1696.077280: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1696.077289: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNs5.  1696.077303: sched_wakeup: comm=brcmf_wdog/mmc1 pid=336 prio=120 target_cpu=000
          <idle>-0       [000] d..2.  1696.077330: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=336 next_prio=120
 brcmf_wdog/mmc1-336     [000] d..2.  1696.077342: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=336 runtime=29278 [ns] vruntime=18689557194 [ns]
 brcmf_wdog/mmc1-336     [000] d..2.  1696.077346: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=336 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1696.093282: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1696.093289: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNs5.  1696.093302: sched_wakeup: comm=brcmf_wdog/mmc1 pid=336 prio=120 target_cpu=000
          <idle>-0       [000] d..2.  1696.093328: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=336 next_prio=120
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.093362: irq_handler_entry: irq=37 name=mmc1
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.093366: irq_handler_exit: irq=37 ret=handled
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.093367: irq_handler_entry: irq=37 name=mmc0
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.093369: irq_handler_exit: irq=37 ret=unhandled
 brcmf_wdog/mmc1-336     [000] d.s3.  1696.093380: sched_wakeup: comm=brcmf_wdog/mmc1 pid=336 prio=120 target_cpu=000
 brcmf_wdog/mmc1-336     [000] d..2.  1696.093389: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=336 runtime=75704 [ns] vruntime=18689632898 [ns]
 brcmf_wdog/mmc1-336     [000] d..2.  1696.093406: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=336 runtime=18426 [ns] vruntime=18689651324 [ns]
 brcmf_wdog/mmc1-336     [000] d..2.  1696.093410: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=336 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1696.202111: irq_handler_entry: irq=37 name=mmc1
          <idle>-0       [000] dNh6.  1696.202124: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
          <idle>-0       [000] dNh1.  1696.202126: irq_handler_exit: irq=37 ret=handled
          <idle>-0       [000] dNh1.  1696.202127: irq_handler_entry: irq=37 name=mmc0
          <idle>-0       [000] dNh1.  1696.202129: irq_handler_exit: irq=37 ret=unhandled
          <idle>-0       [000] dNh1.  1696.202132: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.  1696.202135: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2.  1696.202149: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d.h1.  1696.202179: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.202183: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.202184: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.202186: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1696.202196: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.202204: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=84037 [ns] vruntime=18698611953 [ns]
     kworker/0:2-1499    [000] d.h1.  1696.202229: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.202235: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.202237: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.202238: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1696.202248: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.202254: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=50778 [ns] vruntime=18698662731 [ns]
     kworker/0:2-1499    [000] d.h1.  1696.202278: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.202282: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.202283: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.202284: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.h1.  1696.202287: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.202290: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.202291: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.202292: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1696.202302: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.202308: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=54241 [ns] vruntime=18698716972 [ns]
     kworker/0:2-1499    [000] d..4.  1696.202318: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=9407 [ns] vruntime=18698726379 [ns]
     kworker/0:2-1499    [000] dN.4.  1696.202323: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.202336: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d..2.  1696.202351: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=32444 [ns] vruntime=18689726753 [ns]
    kworker/u9:2-809     [000] d..2.  1696.202355: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=D ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d..4.  1696.202363: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=13186 [ns] vruntime=18698739565 [ns]
     kworker/0:2-1499    [000] dN.4.  1696.202367: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.202373: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d.h1.  1696.202396: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.202400: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.202401: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.202403: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.202413: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.202421: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=56944 [ns] vruntime=18689740221 [ns]
    kworker/u9:2-809     [000] d.h1.  1696.202437: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.202441: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.202442: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.202443: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.202453: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.202459: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=38815 [ns] vruntime=18689740668 [ns]
    kworker/u9:2-809     [000] d.h1.  1696.202505: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.202514: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.202515: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.202517: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.202527: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.202534: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=74648 [ns] vruntime=18689741529 [ns]
    kworker/u9:2-809     [000] d.h1.  1696.202563: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.202572: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.202573: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.202575: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.202585: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.202592: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=58111 [ns] vruntime=18689742199 [ns]
          <idle>-0       [002] d.h1.  1696.202636: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh2.  1696.202645: sched_wakeup: comm=sshd pid=1487 prio=120 target_cpu=002
          <idle>-0       [002] dNh1.  1696.202647: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d..2.  1696.202662: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1487 next_prio=120
    kworker/u9:2-809     [000] d.h1.  1696.202673: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.202683: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.202684: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.202686: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.202697: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.202704: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=111667 [ns] vruntime=18689743487 [ns]
    kworker/u9:2-809     [000] d..2.  1696.202724: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=19407 [ns] vruntime=18689743710 [ns]
    kworker/u9:2-809     [000] d..2.  1696.202729: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=I ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d..2.  1696.202747: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=24204 [ns] vruntime=18698763769 [ns]
     kworker/0:2-1499    [000] d..2.  1696.202758: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1.  1696.202819: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh2.  1696.202827: sched_wakeup: comm=kworker/u8:3 pid=1583 prio=120 target_cpu=003
          <idle>-0       [003] dNh1.  1696.202829: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2.  1696.202844: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:3 next_pid=1583 next_prio=120
            sshd-1487    [002] d..2.  1696.202860: sched_stat_runtime: comm=sshd pid=1487 runtime=219778 [ns] vruntime=377507686 [ns]
          <idle>-0       [000] d.h1.  1696.202864: irq_handler_entry: irq=2 name=IPI
            sshd-1487    [002] d..2.  1696.202868: sched_switch: prev_comm=sshd prev_pid=1487 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
    kworker/u8:3-1583    [003] d..2.  1696.202868: sched_stat_runtime: comm=kworker/u8:3 pid=1583 runtime=44481 [ns] vruntime=18827495851 [ns]
          <idle>-0       [000] dNh2.  1696.202872: sched_wakeup: comm=bash pid=1577 prio=120 target_cpu=000
    kworker/u8:3-1583    [003] d..2.  1696.202873: sched_switch: prev_comm=kworker/u8:3 prev_pid=1583 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [000] dNh1.  1696.202874: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d..2.  1696.202887: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=1577 next_prio=120
          <idle>-0       [003] d.h1.  1696.202978: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh2.  1696.202984: sched_wakeup: comm=kworker/u8:3 pid=1583 prio=120 target_cpu=003
          <idle>-0       [003] dNh1.  1696.202986: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2.  1696.202999: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:3 next_pid=1583 next_prio=120
            bash-1577    [000] d..2.  1696.203003: sched_stat_runtime: comm=bash pid=1577 runtime=135426 [ns] vruntime=205866492 [ns]
            bash-1577    [000] d..2.  1696.203011: sched_switch: prev_comm=bash prev_pid=1577 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [002] d.h1.  1696.203017: irq_handler_entry: irq=2 name=IPI
    kworker/u8:3-1583    [003] d..2.  1696.203020: sched_stat_runtime: comm=kworker/u8:3 pid=1583 runtime=38111 [ns] vruntime=18827533962 [ns]
    kworker/u8:3-1583    [003] d..2.  1696.203024: sched_switch: prev_comm=kworker/u8:3 prev_pid=1583 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [002] dNh2.  1696.203024: sched_wakeup: comm=sshd pid=1487 prio=120 target_cpu=002
          <idle>-0       [002] dNh1.  1696.203026: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d..2.  1696.203039: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1487 next_prio=120
          <idle>-0       [000] d.h1.  1696.203203: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh2.  1696.203209: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
          <idle>-0       [000] dNh1.  1696.203211: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d..2.  1696.203224: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
            sshd-1487    [002] d..2.  1696.203246: sched_stat_runtime: comm=sshd pid=1487 runtime=224222 [ns] vruntime=377731908 [ns]
            sshd-1487    [002] d..2.  1696.203254: sched_switch: prev_comm=sshd prev_pid=1487 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
    kworker/u9:2-809     [000] d.h1.  1696.203302: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.203314: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.203315: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.203316: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d..2.  1696.203323: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=116852 [ns] vruntime=18689765117 [ns]
    kworker/u9:2-809     [000] d..2.  1696.203328: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1696.203334: irq_handler_entry: irq=37 name=mmc1
          <idle>-0       [000] d.h1.  1696.203337: irq_handler_exit: irq=37 ret=handled
          <idle>-0       [000] d.h1.  1696.203338: irq_handler_entry: irq=37 name=mmc0
          <idle>-0       [000] d.h1.  1696.203340: irq_handler_exit: irq=37 ret=unhandled
          <idle>-0       [000] dNs5.  1696.203354: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
          <idle>-0       [000] d..2.  1696.203364: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d..2.  1696.203390: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=37167 [ns] vruntime=18689765545 [ns]
    kworker/u9:2-809     [000] d..2.  1696.203394: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1696.217284: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1696.217294: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNs5.  1696.217306: sched_wakeup: comm=brcmf_wdog/mmc1 pid=336 prio=120 target_cpu=000
          <idle>-0       [000] d..2.  1696.217335: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=336 next_prio=120
 brcmf_wdog/mmc1-336     [000] d..2.  1696.217348: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=336 runtime=30759 [ns] vruntime=18689794528 [ns]
 brcmf_wdog/mmc1-336     [000] d..2.  1696.217352: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=336 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1696.233284: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1696.233291: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNs5.  1696.233304: sched_wakeup: comm=brcmf_wdog/mmc1 pid=336 prio=120 target_cpu=000
          <idle>-0       [000] d..2.  1696.233331: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=336 next_prio=120
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.233365: irq_handler_entry: irq=37 name=mmc1
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.233370: irq_handler_exit: irq=37 ret=handled
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.233371: irq_handler_entry: irq=37 name=mmc0
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.233372: irq_handler_exit: irq=37 ret=unhandled
 brcmf_wdog/mmc1-336     [000] d.s3.  1696.233383: sched_wakeup: comm=brcmf_wdog/mmc1 pid=336 prio=120 target_cpu=000
 brcmf_wdog/mmc1-336     [000] d..2.  1696.233391: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=336 runtime=77389 [ns] vruntime=18689871917 [ns]
 brcmf_wdog/mmc1-336     [000] d..2.  1696.233407: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=336 runtime=16296 [ns] vruntime=18689888213 [ns]
 brcmf_wdog/mmc1-336     [000] d..2.  1696.233411: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=336 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1696.245284: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1696.245292: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1696.251494: irq_handler_entry: irq=37 name=mmc1
          <idle>-0       [000] dNh6.  1696.251506: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
          <idle>-0       [000] dNh1.  1696.251509: irq_handler_exit: irq=37 ret=handled
          <idle>-0       [000] dNh1.  1696.251510: irq_handler_entry: irq=37 name=mmc0
          <idle>-0       [000] dNh1.  1696.251512: irq_handler_exit: irq=37 ret=unhandled
          <idle>-0       [000] d..2.  1696.251525: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d.h1.  1696.251555: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.251559: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.251560: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.251561: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1696.251571: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.251579: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=75500 [ns] vruntime=18698839269 [ns]
     kworker/0:2-1499    [000] d.h1.  1696.251604: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.251610: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.251611: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.251613: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1696.251622: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.251629: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=50463 [ns] vruntime=18698889732 [ns]
     kworker/0:2-1499    [000] d.h1.  1696.251652: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.251657: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.251658: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.251659: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.h1.  1696.251662: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.251665: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.251666: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.251667: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1696.251677: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.251683: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=54611 [ns] vruntime=18698944343 [ns]
     kworker/0:2-1499    [000] d..4.  1696.251693: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=9963 [ns] vruntime=18698954306 [ns]
     kworker/0:2-1499    [000] dN.4.  1696.251699: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.251712: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d..2.  1696.251727: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=32704 [ns] vruntime=18689954683 [ns]
    kworker/u9:2-809     [000] d..2.  1696.251731: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=D ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d..4.  1696.251739: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=13370 [ns] vruntime=18698967676 [ns]
     kworker/0:2-1499    [000] dN.4.  1696.251743: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.251749: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d.h1.  1696.251772: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.251776: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.251777: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.251779: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.251789: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.251796: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=56500 [ns] vruntime=18689968327 [ns]
    kworker/u9:2-809     [000] d.h1.  1696.251812: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.251816: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.251817: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.251819: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.251828: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.251835: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=38648 [ns] vruntime=18689968772 [ns]
    kworker/u9:2-809     [000] d.h1.  1696.251880: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.251889: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.251890: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.251892: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.251902: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.251909: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=74222 [ns] vruntime=18689969628 [ns]
    kworker/u9:2-809     [000] d.h1.  1696.251938: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.251944: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.251945: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.251947: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.251957: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.251964: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=54741 [ns] vruntime=18689970259 [ns]
    kworker/u9:2-809     [000] d.h1.  1696.252043: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.252053: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.252054: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.252056: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.252066: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.252074: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=109815 [ns] vruntime=18689971525 [ns]
    kworker/u9:2-809     [000] d..2.  1696.252093: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=19000 [ns] vruntime=18689971744 [ns]
    kworker/u9:2-809     [000] d..2.  1696.252098: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=I ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d..2.  1696.252107: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=14741 [ns] vruntime=18698982417 [ns]
     kworker/0:2-1499    [000] d..2.  1696.252116: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1696.253426: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1696.253433: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1696.265284: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1696.265292: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNs5.  1696.265305: sched_wakeup: comm=brcmf_wdog/mmc1 pid=336 prio=120 target_cpu=000
          <idle>-0       [000] d..2.  1696.265332: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=336 next_prio=120
 brcmf_wdog/mmc1-336     [000] d..2.  1696.265344: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=336 runtime=29111 [ns] vruntime=18690011528 [ns]
 brcmf_wdog/mmc1-336     [000] d..2.  1696.265348: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=336 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [001] d.h1.  1696.277270: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1696.277274: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1696.277285: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1696.277295: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNs5.  1696.277310: sched_wakeup: comm=kworker/1:2 pid=1593 prio=120 target_cpu=001
          <idle>-0       [001] d..2.  1696.277348: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:2 next_pid=1593 next_prio=120
     kworker/1:2-1593    [001] d..2.  1696.277385: sched_stat_runtime: comm=kworker/1:2 pid=1593 runtime=63760 [ns] vruntime=20261095197 [ns]
     kworker/1:2-1593    [001] d..2.  1696.277389: sched_switch: prev_comm=kworker/1:2 prev_pid=1593 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1696.281285: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1696.281293: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNs5.  1696.281305: sched_wakeup: comm=brcmf_wdog/mmc1 pid=336 prio=120 target_cpu=000
          <idle>-0       [000] d..2.  1696.281331: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=336 next_prio=120
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.281365: irq_handler_entry: irq=37 name=mmc1
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.281369: irq_handler_exit: irq=37 ret=handled
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.281370: irq_handler_entry: irq=37 name=mmc0
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.281372: irq_handler_exit: irq=37 ret=unhandled
 brcmf_wdog/mmc1-336     [000] d.s3.  1696.281382: sched_wakeup: comm=brcmf_wdog/mmc1 pid=336 prio=120 target_cpu=000
 brcmf_wdog/mmc1-336     [000] d..2.  1696.281389: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=336 runtime=74703 [ns] vruntime=18690086231 [ns]
 brcmf_wdog/mmc1-336     [000] d..2.  1696.281406: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=336 runtime=16241 [ns] vruntime=18690102472 [ns]
 brcmf_wdog/mmc1-336     [000] d..2.  1696.281410: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=336 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1696.306633: irq_handler_entry: irq=37 name=mmc1
          <idle>-0       [000] dNh6.  1696.306646: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
          <idle>-0       [000] dNh1.  1696.306648: irq_handler_exit: irq=37 ret=handled
          <idle>-0       [000] dNh1.  1696.306649: irq_handler_entry: irq=37 name=mmc0
          <idle>-0       [000] dNh1.  1696.306651: irq_handler_exit: irq=37 ret=unhandled
          <idle>-0       [000] dNh1.  1696.306653: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.  1696.306656: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2.  1696.306670: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d.h1.  1696.306700: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.306704: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.306705: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.306706: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1696.306718: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.306725: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=83815 [ns] vruntime=18699066232 [ns]
     kworker/0:2-1499    [000] d.h1.  1696.306750: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.306757: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.306758: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.306759: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1696.306769: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.306776: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=50370 [ns] vruntime=18699116602 [ns]
     kworker/0:2-1499    [000] d.h1.  1696.306799: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.306803: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.306804: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.306805: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.h1.  1696.306808: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.306811: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.306812: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.306814: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1696.306823: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.306830: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=53982 [ns] vruntime=18699170584 [ns]
     kworker/0:2-1499    [000] d..4.  1696.306839: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=9685 [ns] vruntime=18699180269 [ns]
     kworker/0:2-1499    [000] dN.4.  1696.306844: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.306857: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d..2.  1696.306872: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=32741 [ns] vruntime=18690180646 [ns]
    kworker/u9:2-809     [000] d..2.  1696.306876: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=D ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d..4.  1696.306885: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=12870 [ns] vruntime=18699193139 [ns]
     kworker/0:2-1499    [000] dN.4.  1696.306888: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.306894: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d.h1.  1696.306918: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.306922: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.306923: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.306924: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.306935: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.306942: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=57056 [ns] vruntime=18690193797 [ns]
    kworker/u9:2-809     [000] d.h1.  1696.306958: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.306962: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.306963: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.306964: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.306973: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.306980: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=38148 [ns] vruntime=18690194237 [ns]
    kworker/u9:2-809     [000] d.h1.  1696.307026: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.307035: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.307036: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.307038: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.307048: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.307055: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=74704 [ns] vruntime=18690195098 [ns]
    kworker/u9:2-809     [000] d.h1.  1696.307083: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.307093: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.307094: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.307095: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.307105: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.307112: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=57166 [ns] vruntime=18690195757 [ns]
          <idle>-0       [002] d.h1.  1696.307154: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh2.  1696.307162: sched_wakeup: comm=sshd pid=1487 prio=120 target_cpu=002
          <idle>-0       [002] dNh1.  1696.307164: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d..2.  1696.307178: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1487 next_prio=120
    kworker/u9:2-809     [000] d.h1.  1696.307192: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.307202: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.307203: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.307205: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.307215: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.307223: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=110796 [ns] vruntime=18690197035 [ns]
    kworker/u9:2-809     [000] d..2.  1696.307242: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=19241 [ns] vruntime=18690197256 [ns]
    kworker/u9:2-809     [000] d..2.  1696.307247: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=I ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d..2.  1696.307265: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=22889 [ns] vruntime=18699216028 [ns]
     kworker/0:2-1499    [000] d..2.  1696.307275: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1.  1696.307331: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh2.  1696.307337: sched_wakeup: comm=kworker/u8:3 pid=1583 prio=120 target_cpu=003
          <idle>-0       [003] dNh1.  1696.307339: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2.  1696.307352: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:3 next_pid=1583 next_prio=120
          <idle>-0       [000] d.h1.  1696.307368: irq_handler_entry: irq=2 name=IPI
            sshd-1487    [002] d..2.  1696.307370: sched_stat_runtime: comm=sshd pid=1487 runtime=212074 [ns] vruntime=377943982 [ns]
    kworker/u8:3-1583    [003] d..2.  1696.307371: sched_stat_runtime: comm=kworker/u8:3 pid=1583 runtime=36908 [ns] vruntime=18827570870 [ns]
    kworker/u8:3-1583    [003] d..2.  1696.307376: sched_switch: prev_comm=kworker/u8:3 prev_pid=1583 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [000] dNh2.  1696.307376: sched_wakeup: comm=bash pid=1577 prio=120 target_cpu=000
          <idle>-0       [000] dNh1.  1696.307378: irq_handler_exit: irq=2 ret=handled
            sshd-1487    [002] d..2.  1696.307378: sched_switch: prev_comm=sshd prev_pid=1487 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d..2.  1696.307391: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=1577 next_prio=120
          <idle>-0       [003] d.h1.  1696.307479: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh2.  1696.307484: sched_wakeup: comm=kworker/u8:3 pid=1583 prio=120 target_cpu=003
          <idle>-0       [003] dNh1.  1696.307486: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2.  1696.307498: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:3 next_pid=1583 next_prio=120
            bash-1577    [000] d..2.  1696.307504: sched_stat_runtime: comm=bash pid=1577 runtime=132055 [ns] vruntime=205998547 [ns]
            bash-1577    [000] d..2.  1696.307512: sched_switch: prev_comm=bash prev_pid=1577 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [002] d.h1.  1696.307515: irq_handler_entry: irq=2 name=IPI
    kworker/u8:3-1583    [003] d..2.  1696.307518: sched_stat_runtime: comm=kworker/u8:3 pid=1583 runtime=35315 [ns] vruntime=18827606185 [ns]
    kworker/u8:3-1583    [003] d..2.  1696.307522: sched_switch: prev_comm=kworker/u8:3 prev_pid=1583 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [002] dNh2.  1696.307522: sched_wakeup: comm=sshd pid=1487 prio=120 target_cpu=002
          <idle>-0       [002] dNh1.  1696.307524: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d..2.  1696.307538: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1487 next_prio=120
          <idle>-0       [000] d.h1.  1696.307701: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh2.  1696.307707: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
          <idle>-0       [000] dNh1.  1696.307709: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d..2.  1696.307722: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
            sshd-1487    [002] d..2.  1696.307743: sched_stat_runtime: comm=sshd pid=1487 runtime=224074 [ns] vruntime=378168056 [ns]
            sshd-1487    [002] d..2.  1696.307751: sched_switch: prev_comm=sshd prev_pid=1487 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
    kworker/u9:2-809     [000] d.h1.  1696.307784: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.307795: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.307796: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.307798: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d..2.  1696.307804: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=100389 [ns] vruntime=18690217186 [ns]
    kworker/u9:2-809     [000] d..2.  1696.307809: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1696.307815: irq_handler_entry: irq=37 name=mmc1
          <idle>-0       [000] d.h1.  1696.307819: irq_handler_exit: irq=37 ret=handled
          <idle>-0       [000] d.h1.  1696.307820: irq_handler_entry: irq=37 name=mmc0
          <idle>-0       [000] d.h1.  1696.307821: irq_handler_exit: irq=37 ret=unhandled
          <idle>-0       [000] dNs5.  1696.307835: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
          <idle>-0       [000] d..2.  1696.307845: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d..2.  1696.307870: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=36444 [ns] vruntime=18690217606 [ns]
    kworker/u9:2-809     [000] d..2.  1696.307874: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1696.321286: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1696.321295: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNs5.  1696.321307: sched_wakeup: comm=brcmf_wdog/mmc1 pid=336 prio=120 target_cpu=000
          <idle>-0       [000] d..2.  1696.321335: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=336 next_prio=120
 brcmf_wdog/mmc1-336     [000] d..2.  1696.321348: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=336 runtime=30500 [ns] vruntime=18690246528 [ns]
 brcmf_wdog/mmc1-336     [000] d..2.  1696.321352: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=336 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1696.337286: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1696.337293: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNs5.  1696.337305: sched_wakeup: comm=brcmf_wdog/mmc1 pid=336 prio=120 target_cpu=000
          <idle>-0       [000] d..2.  1696.337331: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=336 next_prio=120
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.337366: irq_handler_entry: irq=37 name=mmc1
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.337369: irq_handler_exit: irq=37 ret=handled
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.337371: irq_handler_entry: irq=37 name=mmc0
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.337372: irq_handler_exit: irq=37 ret=unhandled
 brcmf_wdog/mmc1-336     [000] d.s3.  1696.337383: sched_wakeup: comm=brcmf_wdog/mmc1 pid=336 prio=120 target_cpu=000
 brcmf_wdog/mmc1-336     [000] d..2.  1696.337390: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=336 runtime=75426 [ns] vruntime=18690321954 [ns]
 brcmf_wdog/mmc1-336     [000] d..2.  1696.337407: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=336 runtime=16371 [ns] vruntime=18690338325 [ns]
 brcmf_wdog/mmc1-336     [000] d..2.  1696.337411: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=336 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1696.349286: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1696.349294: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1696.352472: irq_handler_entry: irq=37 name=mmc1
          <idle>-0       [000] dNh6.  1696.352484: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
          <idle>-0       [000] dNh1.  1696.352486: irq_handler_exit: irq=37 ret=handled
          <idle>-0       [000] dNh1.  1696.352487: irq_handler_entry: irq=37 name=mmc0
          <idle>-0       [000] dNh1.  1696.352490: irq_handler_exit: irq=37 ret=unhandled
          <idle>-0       [000] d..2.  1696.352505: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d.h1.  1696.352535: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.352539: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.352540: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.352541: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1696.352552: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.352559: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=77908 [ns] vruntime=18699293936 [ns]
     kworker/0:2-1499    [000] d.h1.  1696.352584: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.352591: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.352592: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.352593: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1696.352603: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.352609: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=50870 [ns] vruntime=18699344806 [ns]
     kworker/0:2-1499    [000] d.h1.  1696.352633: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.352637: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.352638: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.352639: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.h1.  1696.352642: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.352645: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.352646: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.352648: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1696.352657: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.352663: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=53907 [ns] vruntime=18699398713 [ns]
     kworker/0:2-1499    [000] d..4.  1696.352673: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=9630 [ns] vruntime=18699408343 [ns]
     kworker/0:2-1499    [000] dN.4.  1696.352678: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.352691: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d..2.  1696.352705: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=32204 [ns] vruntime=18690408714 [ns]
    kworker/u9:2-809     [000] d..2.  1696.352709: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=D ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d..4.  1696.352718: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=13129 [ns] vruntime=18699421472 [ns]
     kworker/0:2-1499    [000] dN.4.  1696.352721: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.352728: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d.h1.  1696.352751: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.352755: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.352756: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.352757: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.352768: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.352775: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=56482 [ns] vruntime=18690422123 [ns]
    kworker/u9:2-809     [000] d.h1.  1696.352791: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.352794: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.352795: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.352797: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.352806: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.352813: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=38111 [ns] vruntime=18690422562 [ns]
    kworker/u9:2-809     [000] d.h1.  1696.352858: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.352867: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.352868: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.352870: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.352880: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.352887: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=73889 [ns] vruntime=18690423414 [ns]
    kworker/u9:2-809     [000] d.h1.  1696.352915: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.352922: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.352923: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.352924: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.352934: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.352941: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=54370 [ns] vruntime=18690424041 [ns]
    kworker/u9:2-809     [000] d.h1.  1696.353021: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.353031: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.353032: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.353034: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.353044: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.353052: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=110352 [ns] vruntime=18690425314 [ns]
    kworker/u9:2-809     [000] d..2.  1696.353071: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=18926 [ns] vruntime=18690425532 [ns]
    kworker/u9:2-809     [000] d..2.  1696.353077: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=I ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d..2.  1696.353086: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=15667 [ns] vruntime=18699437139 [ns]
     kworker/0:2-1499    [000] d..2.  1696.353095: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1696.365286: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1696.365295: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNs5.  1696.365307: sched_wakeup: comm=brcmf_wdog/mmc1 pid=336 prio=120 target_cpu=000
          <idle>-0       [000] d..2.  1696.365334: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=336 next_prio=120
 brcmf_wdog/mmc1-336     [000] d..2.  1696.365347: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=336 runtime=28889 [ns] vruntime=18690466028 [ns]
 brcmf_wdog/mmc1-336     [000] d..2.  1696.365350: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=336 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1696.381286: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1696.381293: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNs5.  1696.381306: sched_wakeup: comm=brcmf_wdog/mmc1 pid=336 prio=120 target_cpu=000
          <idle>-0       [000] d..2.  1696.381332: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=336 next_prio=120
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.381365: irq_handler_entry: irq=37 name=mmc1
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.381369: irq_handler_exit: irq=37 ret=handled
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.381371: irq_handler_entry: irq=37 name=mmc0
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.381372: irq_handler_exit: irq=37 ret=unhandled
 brcmf_wdog/mmc1-336     [000] d.s3.  1696.381383: sched_wakeup: comm=brcmf_wdog/mmc1 pid=336 prio=120 target_cpu=000
 brcmf_wdog/mmc1-336     [000] d..2.  1696.381390: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=336 runtime=74870 [ns] vruntime=18690540898 [ns]
 brcmf_wdog/mmc1-336     [000] d..2.  1696.381407: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=336 runtime=16389 [ns] vruntime=18690557287 [ns]
 brcmf_wdog/mmc1-336     [000] d..2.  1696.381411: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=336 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [002] d.h1.  1696.405287: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1696.405297: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] dNs4.  1696.405311: sched_wakeup: comm=kcompactd0 pid=42 prio=120 target_cpu=002
          <idle>-0       [002] d..2.  1696.405338: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kcompactd0 next_pid=42 next_prio=120
      kcompactd0-42      [002] d..2.  1696.405362: sched_stat_runtime: comm=kcompactd0 pid=42 runtime=43593 [ns] vruntime=19371134932 [ns]
      kcompactd0-42      [002] d..2.  1696.405367: sched_switch: prev_comm=kcompactd0 prev_pid=42 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1696.431818: irq_handler_entry: irq=37 name=mmc1
          <idle>-0       [000] dNh6.  1696.431832: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
          <idle>-0       [000] dNh1.  1696.431834: irq_handler_exit: irq=37 ret=handled
          <idle>-0       [000] dNh1.  1696.431835: irq_handler_entry: irq=37 name=mmc0
          <idle>-0       [000] dNh1.  1696.431837: irq_handler_exit: irq=37 ret=unhandled
          <idle>-0       [000] dNh1.  1696.431839: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.  1696.431842: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2.  1696.431856: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d.h1.  1696.431886: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.431890: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.431891: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.431892: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1696.431903: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.431910: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=82592 [ns] vruntime=18699519731 [ns]
     kworker/0:2-1499    [000] d.h1.  1696.431934: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.431941: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.431942: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.431943: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1696.431953: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.431959: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=49723 [ns] vruntime=18699569454 [ns]
     kworker/0:2-1499    [000] d.h1.  1696.431982: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.431987: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.431988: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.431989: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.h1.  1696.431992: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.431995: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.431996: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.431997: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1696.432007: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.432013: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=53833 [ns] vruntime=18699623287 [ns]
     kworker/0:2-1499    [000] d..4.  1696.432023: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=9704 [ns] vruntime=18699632991 [ns]
     kworker/0:2-1499    [000] dN.4.  1696.432029: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.432043: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d..2.  1696.432057: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=33907 [ns] vruntime=18690633382 [ns]
    kworker/u9:2-809     [000] d..2.  1696.432061: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=D ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d..4.  1696.432070: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=13111 [ns] vruntime=18699646102 [ns]
     kworker/0:2-1499    [000] dN.4.  1696.432073: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.432079: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d.h1.  1696.432103: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.432107: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.432108: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.432109: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.432119: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.432126: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=56315 [ns] vruntime=18690646751 [ns]
    kworker/u9:2-809     [000] d.h1.  1696.432143: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.432146: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.432147: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.432149: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.432158: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.432165: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=38815 [ns] vruntime=18690647198 [ns]
    kworker/u9:2-809     [000] d.h1.  1696.432210: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.432219: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.432220: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.432222: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.432232: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.432239: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=73981 [ns] vruntime=18690648051 [ns]
    kworker/u9:2-809     [000] d.h1.  1696.432267: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.432277: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.432278: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.432280: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.432290: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.432297: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=57500 [ns] vruntime=18690648714 [ns]
          <idle>-0       [002] d.h1.  1696.432337: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh2.  1696.432344: sched_wakeup: comm=sshd pid=1487 prio=120 target_cpu=002
          <idle>-0       [002] dNh1.  1696.432345: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d..2.  1696.432358: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1487 next_prio=120
    kworker/u9:2-809     [000] d.h1.  1696.432375: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.432385: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.432386: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.432387: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.432398: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.432406: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=108797 [ns] vruntime=18690649969 [ns]
    kworker/u9:2-809     [000] d..2.  1696.432425: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=19407 [ns] vruntime=18690650192 [ns]
    kworker/u9:2-809     [000] d..2.  1696.432430: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=I ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d..2.  1696.432447: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=22500 [ns] vruntime=18699668602 [ns]
     kworker/0:2-1499    [000] d..2.  1696.432458: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1.  1696.432515: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh2.  1696.432521: sched_wakeup: comm=kworker/u8:3 pid=1583 prio=120 target_cpu=003
          <idle>-0       [003] dNh1.  1696.432522: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2.  1696.432535: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:3 next_pid=1583 next_prio=120
          <idle>-0       [000] d.h1.  1696.432551: irq_handler_entry: irq=2 name=IPI
            sshd-1487    [002] d..2.  1696.432555: sched_stat_runtime: comm=sshd pid=1487 runtime=213222 [ns] vruntime=378381278 [ns]
    kworker/u8:3-1583    [003] d..2.  1696.432555: sched_stat_runtime: comm=kworker/u8:3 pid=1583 runtime=36240 [ns] vruntime=18827642425 [ns]
          <idle>-0       [000] dNh2.  1696.432560: sched_wakeup: comm=bash pid=1577 prio=120 target_cpu=000
    kworker/u8:3-1583    [003] d..2.  1696.432560: sched_switch: prev_comm=kworker/u8:3 prev_pid=1583 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [000] dNh1.  1696.432561: irq_handler_exit: irq=2 ret=handled
            sshd-1487    [002] d..2.  1696.432562: sched_switch: prev_comm=sshd prev_pid=1487 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d..2.  1696.432575: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=1577 next_prio=120
          <idle>-0       [003] d.h1.  1696.432661: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh2.  1696.432667: sched_wakeup: comm=kworker/u8:3 pid=1583 prio=120 target_cpu=003
          <idle>-0       [003] dNh1.  1696.432668: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2.  1696.432681: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:3 next_pid=1583 next_prio=120
            bash-1577    [000] d..2.  1696.432687: sched_stat_runtime: comm=bash pid=1577 runtime=131092 [ns] vruntime=206129639 [ns]
            bash-1577    [000] d..2.  1696.432695: sched_switch: prev_comm=bash prev_pid=1577 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [002] d.h1.  1696.432697: irq_handler_entry: irq=2 name=IPI
    kworker/u8:3-1583    [003] d..2.  1696.432700: sched_stat_runtime: comm=kworker/u8:3 pid=1583 runtime=35723 [ns] vruntime=18827678148 [ns]
          <idle>-0       [002] dNh2.  1696.432704: sched_wakeup: comm=sshd pid=1487 prio=120 target_cpu=002
    kworker/u8:3-1583    [003] d..2.  1696.432704: sched_switch: prev_comm=kworker/u8:3 prev_pid=1583 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [002] dNh1.  1696.432705: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d..2.  1696.432719: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1487 next_prio=120
          <idle>-0       [000] d.h1.  1696.432878: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh2.  1696.432884: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
          <idle>-0       [000] dNh1.  1696.432886: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d..2.  1696.432899: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
            sshd-1487    [002] d..2.  1696.432921: sched_stat_runtime: comm=sshd pid=1487 runtime=219519 [ns] vruntime=378600797 [ns]
            sshd-1487    [002] d..2.  1696.432929: sched_switch: prev_comm=sshd prev_pid=1487 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
    kworker/u9:2-809     [000] d.h1.  1696.432961: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.432972: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.432973: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.432975: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d..2.  1696.432981: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=99185 [ns] vruntime=18690669746 [ns]
    kworker/u9:2-809     [000] d..2.  1696.432986: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1696.432992: irq_handler_entry: irq=37 name=mmc1
          <idle>-0       [000] d.h1.  1696.432995: irq_handler_exit: irq=37 ret=handled
          <idle>-0       [000] d.h1.  1696.432996: irq_handler_entry: irq=37 name=mmc0
          <idle>-0       [000] d.h1.  1696.432998: irq_handler_exit: irq=37 ret=unhandled
          <idle>-0       [000] dNs5.  1696.433012: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
          <idle>-0       [000] d..2.  1696.433021: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d..2.  1696.433047: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=36518 [ns] vruntime=18690670167 [ns]
    kworker/u9:2-809     [000] d..2.  1696.433051: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1696.445288: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1696.445297: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNs5.  1696.445309: sched_wakeup: comm=brcmf_wdog/mmc1 pid=336 prio=120 target_cpu=000
          <idle>-0       [000] d..2.  1696.445337: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=336 next_prio=120
 brcmf_wdog/mmc1-336     [000] d..2.  1696.445350: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=336 runtime=30908 [ns] vruntime=18690699510 [ns]
 brcmf_wdog/mmc1-336     [000] d..2.  1696.445354: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=336 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1696.461287: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1696.461295: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNs5.  1696.461307: sched_wakeup: comm=brcmf_wdog/mmc1 pid=336 prio=120 target_cpu=000
          <idle>-0       [000] d..2.  1696.461333: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=336 next_prio=120
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.461367: irq_handler_entry: irq=37 name=mmc1
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.461371: irq_handler_exit: irq=37 ret=handled
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.461372: irq_handler_entry: irq=37 name=mmc0
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.461374: irq_handler_exit: irq=37 ret=unhandled
 brcmf_wdog/mmc1-336     [000] d.s3.  1696.461385: sched_wakeup: comm=brcmf_wdog/mmc1 pid=336 prio=120 target_cpu=000
 brcmf_wdog/mmc1-336     [000] d..2.  1696.461393: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=336 runtime=75611 [ns] vruntime=18690775121 [ns]
 brcmf_wdog/mmc1-336     [000] d..2.  1696.461409: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=336 runtime=16556 [ns] vruntime=18690791677 [ns]
 brcmf_wdog/mmc1-336     [000] d..2.  1696.461413: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=336 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1696.473288: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1696.473295: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1696.478325: irq_handler_entry: irq=37 name=mmc1
          <idle>-0       [000] dNh6.  1696.478337: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
          <idle>-0       [000] dNh1.  1696.478339: irq_handler_exit: irq=37 ret=handled
          <idle>-0       [000] dNh1.  1696.478340: irq_handler_entry: irq=37 name=mmc0
          <idle>-0       [000] dNh1.  1696.478342: irq_handler_exit: irq=37 ret=unhandled
          <idle>-0       [000] d..2.  1696.478357: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d.h1.  1696.478386: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.478390: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.478391: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.478393: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1696.478403: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.478411: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=76389 [ns] vruntime=18699744991 [ns]
     kworker/0:2-1499    [000] d.h1.  1696.478436: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.478442: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.478443: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.478445: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1696.478454: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.478461: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=50389 [ns] vruntime=18699795380 [ns]
     kworker/0:2-1499    [000] d.h1.  1696.478484: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.478488: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.478489: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.478491: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.h1.  1696.478493: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.478496: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.478499: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.478501: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1696.478510: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.478517: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=56018 [ns] vruntime=18699851398 [ns]
     kworker/0:2-1499    [000] d..4.  1696.478526: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=9704 [ns] vruntime=18699861102 [ns]
     kworker/0:2-1499    [000] dN.4.  1696.478531: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.478544: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d..2.  1696.478558: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=31833 [ns] vruntime=18690861469 [ns]
    kworker/u9:2-809     [000] d..2.  1696.478562: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=D ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d..4.  1696.478571: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=12889 [ns] vruntime=18699873991 [ns]
     kworker/0:2-1499    [000] dN.4.  1696.478574: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.478580: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d.h1.  1696.478604: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.478608: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.478609: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.478610: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.478621: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.478628: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=56463 [ns] vruntime=18690874642 [ns]
    kworker/u9:2-809     [000] d.h1.  1696.478644: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.478647: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.478648: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.478650: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.478659: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.478666: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=38500 [ns] vruntime=18690875086 [ns]
    kworker/u9:2-809     [000] d.h1.  1696.478711: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.478721: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.478722: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.478723: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.478733: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.478740: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=74074 [ns] vruntime=18690875940 [ns]
    kworker/u9:2-809     [000] d.h1.  1696.478769: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.478775: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.478776: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.478777: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.478787: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.478794: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=53908 [ns] vruntime=18690876561 [ns]
    kworker/u9:2-809     [000] d.h1.  1696.478874: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.478884: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.478885: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.478886: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.478897: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.478905: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=110277 [ns] vruntime=18690877833 [ns]
    kworker/u9:2-809     [000] d..2.  1696.478924: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=18852 [ns] vruntime=18690878050 [ns]
    kworker/u9:2-809     [000] d..2.  1696.478929: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=I ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d..2.  1696.478939: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=15408 [ns] vruntime=18699889399 [ns]
     kworker/0:2-1499    [000] d..2.  1696.478948: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1696.493288: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1696.493296: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNs5.  1696.493309: sched_wakeup: comm=brcmf_wdog/mmc1 pid=336 prio=120 target_cpu=000
          <idle>-0       [000] d..2.  1696.493336: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=336 next_prio=120
 brcmf_wdog/mmc1-336     [000] d..2.  1696.493348: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=336 runtime=28871 [ns] vruntime=18690918270 [ns]
 brcmf_wdog/mmc1-336     [000] d..2.  1696.493352: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=336 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1696.509288: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1696.509296: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNs5.  1696.509308: sched_wakeup: comm=brcmf_wdog/mmc1 pid=336 prio=120 target_cpu=000
          <idle>-0       [000] d..2.  1696.509334: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=336 next_prio=120
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.509368: irq_handler_entry: irq=37 name=mmc1
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.509372: irq_handler_exit: irq=37 ret=handled
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.509373: irq_handler_entry: irq=37 name=mmc0
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.509374: irq_handler_exit: irq=37 ret=unhandled
 brcmf_wdog/mmc1-336     [000] d.s3.  1696.509385: sched_wakeup: comm=brcmf_wdog/mmc1 pid=336 prio=120 target_cpu=000
 brcmf_wdog/mmc1-336     [000] d..2.  1696.509392: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=336 runtime=74945 [ns] vruntime=18690993215 [ns]
 brcmf_wdog/mmc1-336     [000] d..2.  1696.509408: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=336 runtime=16204 [ns] vruntime=18691009419 [ns]
 brcmf_wdog/mmc1-336     [000] d..2.  1696.509412: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=336 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1.  1696.533288: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1696.533298: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNs5.  1696.533312: sched_wakeup: comm=kworker/3:0 pid=1601 prio=120 target_cpu=003
          <idle>-0       [003] dNH2.  1696.533318: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNH2.  1696.533322: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d..2.  1696.533358: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:0 next_pid=1601 next_prio=120
          <idle>-0       [000] d.h1.  1696.533384: irq_handler_entry: irq=31 name=eth0
     kworker/3:0-1601    [003] d..4.  1696.533385: sched_stat_runtime: comm=kworker/3:0 pid=1601 runtime=45962 [ns] vruntime=18827539499 [ns]
     kworker/3:0-1601    [003] d..4.  1696.533389: sched_wakeup: comm=kworker/3:1 pid=1480 prio=120 target_cpu=003
          <idle>-0       [000] d.h5.  1696.533393: sched_wakeup: comm=kworker/3:0 pid=1601 prio=120 target_cpu=003
          <idle>-0       [000] d.h1.  1696.533395: irq_handler_exit: irq=31 ret=handled
     kworker/3:0-1601    [003] d..2.  1696.533395: sched_stat_runtime: comm=kworker/3:0 pid=1601 runtime=10908 [ns] vruntime=18827550407 [ns]
     kworker/3:0-1601    [003] d..2.  1696.533398: sched_switch: prev_comm=kworker/3:0 prev_pid=1601 prev_prio=120 prev_state=R ==> next_comm=kworker/3:1 next_pid=1480 next_prio=120
     kworker/3:1-1480    [003] d..2.  1696.533423: sched_stat_runtime: comm=kworker/3:1 pid=1480 runtime=28092 [ns] vruntime=18827263295 [ns]
     kworker/3:1-1480    [003] d..2.  1696.533428: sched_switch: prev_comm=kworker/3:1 prev_pid=1480 prev_prio=120 prev_state=I ==> next_comm=kworker/3:0 next_pid=1601 next_prio=120
     kworker/3:0-1601    [003] d..2.  1696.533450: sched_stat_runtime: comm=kworker/3:0 pid=1601 runtime=27297 [ns] vruntime=18827577704 [ns]
          <idle>-0       [000] d.h1.  1696.533450: irq_handler_entry: irq=31 name=eth0
          <idle>-0       [000] d.h1.  1696.533455: irq_handler_exit: irq=31 ret=handled
     kworker/3:0-1601    [003] d..2.  1696.533457: sched_switch: prev_comm=kworker/3:0 prev_pid=1601 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1.  1696.533463: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh2.  1696.533468: sched_wakeup: comm=kworker/3:0 pid=1601 prio=120 target_cpu=003
          <idle>-0       [003] dNh1.  1696.533469: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2.  1696.533476: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:0 next_pid=1601 next_prio=120
          <idle>-0       [000] d.h1.  1696.533498: irq_handler_entry: irq=31 name=eth0
     kworker/3:0-1601    [003] d..2.  1696.533499: sched_stat_runtime: comm=kworker/3:0 pid=1601 runtime=32648 [ns] vruntime=18827610352 [ns]
          <idle>-0       [000] d.h1.  1696.533501: irq_handler_exit: irq=31 ret=handled
     kworker/3:0-1601    [003] d..2.  1696.533502: sched_switch: prev_comm=kworker/3:0 prev_pid=1601 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1.  1696.533507: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh2.  1696.533511: sched_wakeup: comm=kworker/3:0 pid=1601 prio=120 target_cpu=003
          <idle>-0       [003] dNh1.  1696.533512: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2.  1696.533518: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:0 next_pid=1601 next_prio=120
          <idle>-0       [000] d.h1.  1696.533541: irq_handler_entry: irq=31 name=eth0
     kworker/3:0-1601    [003] d..2.  1696.533541: sched_stat_runtime: comm=kworker/3:0 pid=1601 runtime=31500 [ns] vruntime=18827641852 [ns]
          <idle>-0       [000] d.h1.  1696.533544: irq_handler_exit: irq=31 ret=handled
     kworker/3:0-1601    [003] d..2.  1696.533544: sched_switch: prev_comm=kworker/3:0 prev_pid=1601 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1.  1696.533549: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh2.  1696.533553: sched_wakeup: comm=kworker/3:0 pid=1601 prio=120 target_cpu=003
          <idle>-0       [003] dNh1.  1696.533554: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2.  1696.533560: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:0 next_pid=1601 next_prio=120
          <idle>-0       [000] d.h1.  1696.533582: irq_handler_entry: irq=31 name=eth0
     kworker/3:0-1601    [003] d..2.  1696.533583: sched_stat_runtime: comm=kworker/3:0 pid=1601 runtime=31260 [ns] vruntime=18827673112 [ns]
          <idle>-0       [000] d.h1.  1696.533586: irq_handler_exit: irq=31 ret=handled
     kworker/3:0-1601    [003] d..2.  1696.533586: sched_switch: prev_comm=kworker/3:0 prev_pid=1601 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1.  1696.533591: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh2.  1696.533595: sched_wakeup: comm=kworker/3:0 pid=1601 prio=120 target_cpu=003
          <idle>-0       [003] dNh1.  1696.533596: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2.  1696.533602: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:0 next_pid=1601 next_prio=120
     kworker/3:0-1601    [003] d..2.  1696.533624: sched_stat_runtime: comm=kworker/3:0 pid=1601 runtime=30037 [ns] vruntime=18827703149 [ns]
     kworker/3:0-1601    [003] d..2.  1696.533632: sched_switch: prev_comm=kworker/3:0 prev_pid=1601 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1696.537288: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1696.537296: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1696.545462: irq_handler_entry: irq=37 name=mmc1
          <idle>-0       [000] dNh6.  1696.545474: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
          <idle>-0       [000] dNh1.  1696.545476: irq_handler_exit: irq=37 ret=handled
          <idle>-0       [000] dNh1.  1696.545477: irq_handler_entry: irq=37 name=mmc0
          <idle>-0       [000] dNh1.  1696.545479: irq_handler_exit: irq=37 ret=unhandled
          <idle>-0       [000] d..2.  1696.545494: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d.h1.  1696.545523: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.545527: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.545528: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.545530: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1696.545540: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.545548: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=76981 [ns] vruntime=18699966380 [ns]
     kworker/0:2-1499    [000] d.h1.  1696.545573: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.545579: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.545580: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.545582: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1696.545591: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.545598: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=50667 [ns] vruntime=18700017047 [ns]
     kworker/0:2-1499    [000] d.h1.  1696.545622: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.545626: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.545627: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.545628: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.h1.  1696.545631: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.545634: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.545635: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.545636: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1696.545646: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.545652: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=54241 [ns] vruntime=18700071288 [ns]
     kworker/0:2-1499    [000] d..4.  1696.545662: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=9907 [ns] vruntime=18700081195 [ns]
     kworker/0:2-1499    [000] dN.4.  1696.545667: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.545680: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d..2.  1696.545695: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=32167 [ns] vruntime=18691081566 [ns]
    kworker/u9:2-809     [000] d..2.  1696.545699: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=D ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d..4.  1696.545708: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=13259 [ns] vruntime=18700094454 [ns]
     kworker/0:2-1499    [000] dN.4.  1696.545711: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.545718: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d.h1.  1696.545742: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.545746: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.545747: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.545749: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.545759: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.545766: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=58648 [ns] vruntime=18691095130 [ns]
    kworker/u9:2-809     [000] d.h1.  1696.545782: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.545786: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.545787: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.545793: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.545802: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.545809: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=42537 [ns] vruntime=18691095620 [ns]
    kworker/u9:2-809     [000] d.h1.  1696.545859: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.545868: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.545869: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.545871: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.545881: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.545888: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=79056 [ns] vruntime=18691096532 [ns]
    kworker/u9:2-809     [000] d.h1.  1696.545917: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.545926: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.545927: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.545929: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.545939: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.545946: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=57648 [ns] vruntime=18691097197 [ns]
          <idle>-0       [002] d.h1.  1696.545987: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh2.  1696.545994: sched_wakeup: comm=sshd pid=1487 prio=120 target_cpu=002
          <idle>-0       [002] dNh1.  1696.545996: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d..2.  1696.546009: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1487 next_prio=120
    kworker/u9:2-809     [000] d.h1.  1696.546028: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.546038: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.546039: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.546040: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.546051: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.546059: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=112667 [ns] vruntime=18691098496 [ns]
    kworker/u9:2-809     [000] d..2.  1696.546078: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=19814 [ns] vruntime=18691098724 [ns]
    kworker/u9:2-809     [000] d..2.  1696.546084: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=I ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d..2.  1696.546094: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=15686 [ns] vruntime=18700110140 [ns]
     kworker/0:2-1499    [000] d..2.  1696.546104: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1.  1696.546163: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh2.  1696.546168: sched_wakeup: comm=kworker/u8:3 pid=1583 prio=120 target_cpu=003
          <idle>-0       [003] dNh1.  1696.546170: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2.  1696.546183: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:3 next_pid=1583 next_prio=120
          <idle>-0       [000] d.h1.  1696.546201: irq_handler_entry: irq=2 name=IPI
            sshd-1487    [002] d..2.  1696.546202: sched_stat_runtime: comm=sshd pid=1487 runtime=210518 [ns] vruntime=378811315 [ns]
    kworker/u8:3-1583    [003] d..2.  1696.546205: sched_stat_runtime: comm=kworker/u8:3 pid=1583 runtime=38389 [ns] vruntime=18827716537 [ns]
          <idle>-0       [000] dNh2.  1696.546209: sched_wakeup: comm=bash pid=1577 prio=120 target_cpu=000
    kworker/u8:3-1583    [003] d..2.  1696.546209: sched_switch: prev_comm=kworker/u8:3 prev_pid=1583 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
            sshd-1487    [002] d..2.  1696.546209: sched_switch: prev_comm=sshd prev_pid=1487 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] dNh1.  1696.546210: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d..2.  1696.546224: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=1577 next_prio=120
          <idle>-0       [003] d.h1.  1696.546311: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh2.  1696.546316: sched_wakeup: comm=kworker/u8:3 pid=1583 prio=120 target_cpu=003
          <idle>-0       [003] dNh1.  1696.546317: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2.  1696.546330: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:3 next_pid=1583 next_prio=120
            bash-1577    [000] d..2.  1696.546336: sched_stat_runtime: comm=bash pid=1577 runtime=130649 [ns] vruntime=206260288 [ns]
            bash-1577    [000] d..2.  1696.546343: sched_switch: prev_comm=bash prev_pid=1577 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [002] d.h1.  1696.546347: irq_handler_entry: irq=2 name=IPI
    kworker/u8:3-1583    [003] d..2.  1696.546350: sched_stat_runtime: comm=kworker/u8:3 pid=1583 runtime=35722 [ns] vruntime=18827752259 [ns]
    kworker/u8:3-1583    [003] d..2.  1696.546354: sched_switch: prev_comm=kworker/u8:3 prev_pid=1583 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [002] dNh2.  1696.546354: sched_wakeup: comm=sshd pid=1487 prio=120 target_cpu=002
          <idle>-0       [002] dNh1.  1696.546356: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d..2.  1696.546369: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1487 next_prio=120
          <idle>-0       [000] d.h1.  1696.546530: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh2.  1696.546536: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
          <idle>-0       [000] dNh1.  1696.546537: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d..2.  1696.546551: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
            sshd-1487    [002] d..2.  1696.546572: sched_stat_runtime: comm=sshd pid=1487 runtime=220667 [ns] vruntime=379031982 [ns]
            sshd-1487    [002] d..2.  1696.546580: sched_switch: prev_comm=sshd prev_pid=1487 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
    kworker/u9:2-809     [000] d.h1.  1696.546612: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.546623: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.546624: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.546626: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d..2.  1696.546633: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=99334 [ns] vruntime=18691111285 [ns]
    kworker/u9:2-809     [000] d..2.  1696.546637: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1696.546643: irq_handler_entry: irq=37 name=mmc1
          <idle>-0       [000] d.h1.  1696.546647: irq_handler_exit: irq=37 ret=handled
          <idle>-0       [000] d.h1.  1696.546648: irq_handler_entry: irq=37 name=mmc0
          <idle>-0       [000] d.h1.  1696.546649: irq_handler_exit: irq=37 ret=unhandled
          <idle>-0       [000] dNs5.  1696.546664: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
          <idle>-0       [000] d..2.  1696.546673: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d..2.  1696.546698: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=36537 [ns] vruntime=18691111706 [ns]
    kworker/u9:2-809     [000] d..2.  1696.546703: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1696.561289: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1696.561298: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNs5.  1696.561310: sched_wakeup: comm=brcmf_wdog/mmc1 pid=336 prio=120 target_cpu=000
          <idle>-0       [000] d..2.  1696.561338: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=336 next_prio=120
 brcmf_wdog/mmc1-336     [000] d..2.  1696.561350: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=336 runtime=30056 [ns] vruntime=18691140196 [ns]
 brcmf_wdog/mmc1-336     [000] d..2.  1696.561354: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=336 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1696.577289: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1696.577297: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNs5.  1696.577309: sched_wakeup: comm=brcmf_wdog/mmc1 pid=336 prio=120 target_cpu=000
          <idle>-0       [000] d..2.  1696.577335: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=336 next_prio=120
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.577369: irq_handler_entry: irq=37 name=mmc1
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.577373: irq_handler_exit: irq=37 ret=handled
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.577374: irq_handler_entry: irq=37 name=mmc0
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.577376: irq_handler_exit: irq=37 ret=unhandled
 brcmf_wdog/mmc1-336     [000] d.s3.  1696.577386: sched_wakeup: comm=brcmf_wdog/mmc1 pid=336 prio=120 target_cpu=000
 brcmf_wdog/mmc1-336     [000] d..2.  1696.577394: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=336 runtime=75629 [ns] vruntime=18691215825 [ns]
 brcmf_wdog/mmc1-336     [000] d..2.  1696.577410: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=336 runtime=16408 [ns] vruntime=18691232233 [ns]
 brcmf_wdog/mmc1-336     [000] d..2.  1696.577415: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=336 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1696.589289: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1696.589297: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1696.594888: irq_handler_entry: irq=37 name=mmc1
          <idle>-0       [000] dNh6.  1696.594900: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
          <idle>-0       [000] dNh1.  1696.594902: irq_handler_exit: irq=37 ret=handled
          <idle>-0       [000] dNh1.  1696.594903: irq_handler_entry: irq=37 name=mmc0
          <idle>-0       [000] dNh1.  1696.594904: irq_handler_exit: irq=37 ret=unhandled
          <idle>-0       [000] d..2.  1696.594919: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d.h1.  1696.594949: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.594953: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.594954: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.594955: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1696.594966: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.594973: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=76407 [ns] vruntime=18700186547 [ns]
     kworker/0:2-1499    [000] d.h1.  1696.594998: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.595005: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.595006: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.595008: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1696.595017: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.595024: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=51037 [ns] vruntime=18700237584 [ns]
     kworker/0:2-1499    [000] d.h1.  1696.595047: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.595051: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.595052: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.595054: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.h1.  1696.595056: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.595060: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.595061: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.595062: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1696.595072: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.595078: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=54167 [ns] vruntime=18700291751 [ns]
     kworker/0:2-1499    [000] d..4.  1696.595088: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=10037 [ns] vruntime=18700301788 [ns]
     kworker/0:2-1499    [000] dN.4.  1696.595094: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.595108: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d..2.  1696.595124: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=33741 [ns] vruntime=18691302177 [ns]
    kworker/u9:2-809     [000] d..2.  1696.595128: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=D ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d..4.  1696.595137: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=14981 [ns] vruntime=18700316769 [ns]
     kworker/0:2-1499    [000] dN.4.  1696.595140: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.595146: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d.h1.  1696.595170: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.595174: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.595175: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.595176: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.595186: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.595193: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=56519 [ns] vruntime=18691317421 [ns]
    kworker/u9:2-809     [000] d.h1.  1696.595210: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.595213: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.595214: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.595216: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.595225: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.595232: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=38611 [ns] vruntime=18691317866 [ns]
    kworker/u9:2-809     [000] d.h1.  1696.595277: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.595286: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.595287: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.595289: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.595299: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.595306: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=74037 [ns] vruntime=18691318720 [ns]
    kworker/u9:2-809     [000] d.h1.  1696.595335: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.595341: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.595342: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.595344: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.595354: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.595361: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=54629 [ns] vruntime=18691319350 [ns]
    kworker/u9:2-809     [000] d.h1.  1696.595439: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.595449: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.595450: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.595452: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.595463: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.595470: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=109278 [ns] vruntime=18691320610 [ns]
    kworker/u9:2-809     [000] d..2.  1696.595489: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=19000 [ns] vruntime=18691320829 [ns]
    kworker/u9:2-809     [000] d..2.  1696.595494: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=I ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d..2.  1696.595503: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=14296 [ns] vruntime=18700331065 [ns]
     kworker/0:2-1499    [000] d..2.  1696.595512: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [002] d.h1.  1696.603235: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] dNh4.  1696.603246: sched_wakeup: comm=lxpanel pid=766 prio=120 target_cpu=002
          <idle>-0       [002] dNh1.  1696.603249: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d..2.  1696.603263: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=766 next_prio=120
         lxpanel-766     [002] d..2.  1696.603396: sched_stat_runtime: comm=lxpanel pid=766 runtime=153185 [ns] vruntime=2604105879 [ns]
         lxpanel-766     [002] d..2.  1696.603404: sched_switch: prev_comm=lxpanel prev_pid=766 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1696.609290: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1696.609299: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNs5.  1696.609312: sched_wakeup: comm=brcmf_wdog/mmc1 pid=336 prio=120 target_cpu=000
          <idle>-0       [000] d..2.  1696.609339: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=336 next_prio=120
 brcmf_wdog/mmc1-336     [000] d..2.  1696.609351: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=336 runtime=29166 [ns] vruntime=18691360231 [ns]
 brcmf_wdog/mmc1-336     [000] d..2.  1696.609355: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=336 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1696.625290: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1696.625297: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNs5.  1696.625309: sched_wakeup: comm=brcmf_wdog/mmc1 pid=336 prio=120 target_cpu=000
          <idle>-0       [000] d..2.  1696.625335: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=336 next_prio=120
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.625369: irq_handler_entry: irq=37 name=mmc1
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.625373: irq_handler_exit: irq=37 ret=handled
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.625374: irq_handler_entry: irq=37 name=mmc0
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.625376: irq_handler_exit: irq=37 ret=unhandled
 brcmf_wdog/mmc1-336     [000] d.s3.  1696.625387: sched_wakeup: comm=brcmf_wdog/mmc1 pid=336 prio=120 target_cpu=000
 brcmf_wdog/mmc1-336     [000] d..2.  1696.625394: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=336 runtime=75241 [ns] vruntime=18691435472 [ns]
 brcmf_wdog/mmc1-336     [000] d..2.  1696.625410: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=336 runtime=16277 [ns] vruntime=18691451749 [ns]
 brcmf_wdog/mmc1-336     [000] d..2.  1696.625415: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=336 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1.  1696.757290: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1696.757290: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1696.757290: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1696.757298: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1696.757299: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1696.757300: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNs5.  1696.757311: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
          <idle>-0       [003] dNs5.  1696.757313: sched_wakeup: comm=kworker/u8:3 pid=1583 prio=120 target_cpu=003
          <idle>-0       [002] dNs5.  1696.757314: sched_wakeup: comm=kworker/2:3 pid=168 prio=120 target_cpu=002
          <idle>-0       [000] dNH2.  1696.757317: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2.  1696.757320: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] d..2.  1696.757342: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:3 next_pid=168 next_prio=120
          <idle>-0       [000] d..2.  1696.757344: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
          <idle>-0       [003] d..2.  1696.757346: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:3 next_pid=1583 next_prio=120
     kworker/2:3-168     [002] d..2.  1696.757362: sched_stat_runtime: comm=kworker/2:3 pid=168 runtime=40963 [ns] vruntime=19371124007 [ns]
     kworker/2:3-168     [002] d..2.  1696.757367: sched_switch: prev_comm=kworker/2:3 prev_pid=168 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
     kworker/0:2-1499    [000] d..2.  1696.757370: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=43574 [ns] vruntime=18700374639 [ns]
     kworker/0:2-1499    [000] d..2.  1696.757375: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
    kworker/u8:3-1583    [003] d..2.  1696.757389: sched_stat_runtime: comm=kworker/u8:3 pid=1583 runtime=61852 [ns] vruntime=18827814111 [ns]
    kworker/u8:3-1583    [003] d..2.  1696.757394: sched_switch: prev_comm=kworker/u8:3 prev_pid=1583 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1696.761290: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1696.761291: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1696.761300: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1696.761301: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1696.761318: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh2.  1696.761324: sched_wakeup: comm=rcu_preempt pid=15 prio=120 target_cpu=000
          <idle>-0       [000] dNh1.  1696.761326: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d..2.  1696.761335: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_preempt next_pid=15 next_prio=120
     rcu_preempt-15      [000] d..2.  1696.761363: sched_stat_runtime: comm=rcu_preempt pid=15 runtime=42277 [ns] vruntime=18691416916 [ns]
     rcu_preempt-15      [000] d..2.  1696.761368: sched_switch: prev_comm=rcu_preempt prev_pid=15 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [002] d.h1.  1696.765289: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1696.765289: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1696.765297: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1696.765300: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1696.766430: irq_handler_entry: irq=37 name=mmc1
          <idle>-0       [000] dNh6.  1696.766441: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
          <idle>-0       [000] dNh1.  1696.766443: irq_handler_exit: irq=37 ret=handled
          <idle>-0       [000] dNh1.  1696.766444: irq_handler_entry: irq=37 name=mmc0
          <idle>-0       [000] dNh1.  1696.766446: irq_handler_exit: irq=37 ret=unhandled
          <idle>-0       [000] d..2.  1696.766456: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d.h1.  1696.766486: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.766490: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.766491: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.766493: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1696.766503: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.766510: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=71537 [ns] vruntime=18700446176 [ns]
     kworker/0:2-1499    [000] d.h1.  1696.766536: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.766542: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.766543: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.766545: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1696.766555: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.766561: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=51333 [ns] vruntime=18700497509 [ns]
     kworker/0:2-1499    [000] d.h1.  1696.766585: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.766589: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.766590: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.766591: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.h1.  1696.766594: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.766597: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.766598: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.766600: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1696.766609: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.766615: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=54222 [ns] vruntime=18700551731 [ns]
     kworker/0:2-1499    [000] d..4.  1696.766625: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=9574 [ns] vruntime=18700561305 [ns]
     kworker/0:2-1499    [000] dN.4.  1696.766630: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.766643: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d..2.  1696.766658: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=32297 [ns] vruntime=18691561677 [ns]
    kworker/u9:2-809     [000] d..2.  1696.766662: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=D ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d..4.  1696.766672: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=13203 [ns] vruntime=18700574508 [ns]
     kworker/0:2-1499    [000] dN.4.  1696.766676: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.766682: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d.h1.  1696.766705: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.766709: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.766710: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.766712: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.766722: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.766729: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=58704 [ns] vruntime=18691575185 [ns]
    kworker/u9:2-809     [000] d.h1.  1696.766745: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.766749: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.766750: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.766752: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.766761: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.766768: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=38500 [ns] vruntime=18691575629 [ns]
    kworker/u9:2-809     [000] d.h1.  1696.766813: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.766822: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.766823: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.766825: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.766835: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.766842: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=73982 [ns] vruntime=18691576482 [ns]
    kworker/u9:2-809     [000] d.h1.  1696.766870: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.766880: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.766881: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.766883: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.766893: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.766900: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=57814 [ns] vruntime=18691577148 [ns]
          <idle>-0       [002] d.h1.  1696.766941: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh2.  1696.766949: sched_wakeup: comm=sshd pid=1487 prio=120 target_cpu=002
          <idle>-0       [002] dNh1.  1696.766950: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d..2.  1696.766960: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1487 next_prio=120
    kworker/u9:2-809     [000] d.h1.  1696.766986: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.766996: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.766997: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.766999: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.767009: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.767017: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=117389 [ns] vruntime=18691578502 [ns]
    kworker/u9:2-809     [000] d..2.  1696.767037: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=19593 [ns] vruntime=18691578728 [ns]
    kworker/u9:2-809     [000] d..2.  1696.767042: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=I ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d..2.  1696.767051: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=14278 [ns] vruntime=18700588786 [ns]
     kworker/0:2-1499    [000] d..2.  1696.767061: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1.  1696.767137: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh2.  1696.767143: sched_wakeup: comm=kworker/u8:3 pid=1583 prio=120 target_cpu=003
          <idle>-0       [003] dNh1.  1696.767144: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2.  1696.767157: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:3 next_pid=1583 next_prio=120
          <idle>-0       [000] d.h1.  1696.767174: irq_handler_entry: irq=2 name=IPI
    kworker/u8:3-1583    [003] d..2.  1696.767178: sched_stat_runtime: comm=kworker/u8:3 pid=1583 runtime=37704 [ns] vruntime=18827851815 [ns]
            sshd-1487    [002] d..2.  1696.767179: sched_stat_runtime: comm=sshd pid=1487 runtime=232389 [ns] vruntime=379264371 [ns]
    kworker/u8:3-1583    [003] d..2.  1696.767182: sched_switch: prev_comm=kworker/u8:3 prev_pid=1583 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [000] dNh2.  1696.767182: sched_wakeup: comm=bash pid=1577 prio=120 target_cpu=000
          <idle>-0       [000] dNh1.  1696.767184: irq_handler_exit: irq=2 ret=handled
            sshd-1487    [002] d..2.  1696.767187: sched_switch: prev_comm=sshd prev_pid=1487 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d..2.  1696.767194: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=1577 next_prio=120
          <idle>-0       [003] d.h1.  1696.767772: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh2.  1696.767777: sched_wakeup: comm=kworker/u8:3 pid=1583 prio=120 target_cpu=003
          <idle>-0       [003] dNh1.  1696.767779: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2.  1696.767790: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:3 next_pid=1583 next_prio=120
            bash-1577    [000] d..2.  1696.767802: sched_stat_runtime: comm=bash pid=1577 runtime=622167 [ns] vruntime=206882455 [ns]
          <idle>-0       [002] d.h1.  1696.767808: irq_handler_entry: irq=2 name=IPI
    kworker/u8:3-1583    [003] d..2.  1696.767811: sched_stat_runtime: comm=kworker/u8:3 pid=1583 runtime=35426 [ns] vruntime=18827887241 [ns]
            bash-1577    [000] d..2.  1696.767811: sched_switch: prev_comm=bash prev_pid=1577 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
    kworker/u8:3-1583    [003] d..2.  1696.767815: sched_switch: prev_comm=kworker/u8:3 prev_pid=1583 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [002] dNh2.  1696.767817: sched_wakeup: comm=sshd pid=1487 prio=120 target_cpu=002
          <idle>-0       [002] dNh1.  1696.767819: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d..2.  1696.767829: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1487 next_prio=120
          <idle>-0       [000] d.h1.  1696.768008: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh2.  1696.768015: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
          <idle>-0       [000] dNh1.  1696.768016: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d..2.  1696.768026: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
            sshd-1487    [002] d..2.  1696.768052: sched_stat_runtime: comm=sshd pid=1487 runtime=239500 [ns] vruntime=379503871 [ns]
            sshd-1487    [002] d..2.  1696.768060: sched_switch: prev_comm=sshd prev_pid=1487 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
    kworker/u9:2-809     [000] d.h1.  1696.768092: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.768104: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.768105: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.768107: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.h1.  1696.768114: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.768118: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.768119: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.768120: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.768132: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.768140: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=128259 [ns] vruntime=18691590265 [ns]
    kworker/u9:2-809     [000] d..2.  1696.768165: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=25592 [ns] vruntime=18691590560 [ns]
    kworker/u9:2-809     [000] d..2.  1696.768170: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1696.769290: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1696.769291: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1696.769304: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1696.769305: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNs4.  1696.769318: sched_wakeup: comm=rcu_preempt pid=15 prio=120 target_cpu=000
          <idle>-0       [000] d..2.  1696.769331: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_preempt next_pid=15 next_prio=120
     rcu_preempt-15      [000] d..2.  1696.769379: sched_stat_runtime: comm=rcu_preempt pid=15 runtime=64944 [ns] vruntime=18691653730 [ns]
     rcu_preempt-15      [000] d..2.  1696.769383: sched_switch: prev_comm=rcu_preempt prev_pid=15 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [002] d.h1.  1696.773290: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1696.773290: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1696.773297: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1696.773301: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] dNs5.  1696.773324: sched_wakeup: comm=kworker/2:3 pid=168 prio=120 target_cpu=002
          <idle>-0       [000] dNs5.  1696.773328: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
          <idle>-0       [002] d..2.  1696.773339: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:3 next_pid=168 next_prio=120
          <idle>-0       [000] d..2.  1696.773342: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d..2.  1696.773361: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=36203 [ns] vruntime=18700624989 [ns]
     kworker/2:3-168     [002] d..2.  1696.773362: sched_stat_runtime: comm=kworker/2:3 pid=168 runtime=40278 [ns] vruntime=19371164285 [ns]
     kworker/0:2-1499    [000] d..2.  1696.773366: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
     kworker/2:3-168     [002] d..2.  1696.773366: sched_switch: prev_comm=kworker/2:3 prev_pid=168 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1696.777290: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1696.777301: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNs4.  1696.777312: sched_wakeup: comm=rcu_preempt pid=15 prio=120 target_cpu=000
          <idle>-0       [000] d..2.  1696.777325: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_preempt next_pid=15 next_prio=120
     rcu_preempt-15      [000] d..2.  1696.777354: sched_stat_runtime: comm=rcu_preempt pid=15 runtime=44574 [ns] vruntime=18691698304 [ns]
     rcu_preempt-15      [000] d..2.  1696.777358: sched_switch: prev_comm=rcu_preempt prev_pid=15 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1696.781290: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1696.781300: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNs5.  1696.781313: sched_wakeup: comm=brcmf_wdog/mmc1 pid=336 prio=120 target_cpu=000
          <idle>-0       [000] d..2.  1696.781346: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=336 next_prio=120
 brcmf_wdog/mmc1-336     [000] d..2.  1696.781360: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=336 runtime=36778 [ns] vruntime=18691661767 [ns]
 brcmf_wdog/mmc1-336     [000] d..2.  1696.781363: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=336 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1696.797293: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1696.797300: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNs5.  1696.797312: sched_wakeup: comm=brcmf_wdog/mmc1 pid=336 prio=120 target_cpu=000
          <idle>-0       [000] d..2.  1696.797339: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=336 next_prio=120
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.797374: irq_handler_entry: irq=37 name=mmc1
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.797378: irq_handler_exit: irq=37 ret=handled
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.797379: irq_handler_entry: irq=37 name=mmc0
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.797381: irq_handler_exit: irq=37 ret=unhandled
 brcmf_wdog/mmc1-336     [000] d.s3.  1696.797392: sched_wakeup: comm=brcmf_wdog/mmc1 pid=336 prio=120 target_cpu=000
 brcmf_wdog/mmc1-336     [000] d..2.  1696.797399: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=336 runtime=77297 [ns] vruntime=18691739064 [ns]
 brcmf_wdog/mmc1-336     [000] d..2.  1696.797416: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=336 runtime=16907 [ns] vruntime=18691755971 [ns]
 brcmf_wdog/mmc1-336     [000] d..2.  1696.797420: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=336 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1696.809293: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1696.809300: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1696.812481: irq_handler_entry: irq=37 name=mmc1
          <idle>-0       [000] dNh6.  1696.812493: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
          <idle>-0       [000] dNh1.  1696.812495: irq_handler_exit: irq=37 ret=handled
          <idle>-0       [000] dNh1.  1696.812496: irq_handler_entry: irq=37 name=mmc0
          <idle>-0       [000] dNh1.  1696.812498: irq_handler_exit: irq=37 ret=unhandled
          <idle>-0       [000] d..2.  1696.812512: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d.h1.  1696.812543: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.812546: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.812549: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.812551: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1696.812561: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.812569: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=78740 [ns] vruntime=18700703729 [ns]
     kworker/0:2-1499    [000] d.h1.  1696.812594: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.812600: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.812601: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.812603: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1696.812613: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.812619: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=50574 [ns] vruntime=18700754303 [ns]
     kworker/0:2-1499    [000] d.h1.  1696.812643: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.812647: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.812648: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.812649: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.h1.  1696.812652: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.812655: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1696.812656: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1696.812657: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1696.812667: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.812673: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=54037 [ns] vruntime=18700808340 [ns]
     kworker/0:2-1499    [000] d..4.  1696.812683: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=9871 [ns] vruntime=18700818211 [ns]
     kworker/0:2-1499    [000] dN.4.  1696.812688: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.812701: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d..2.  1696.812716: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=32352 [ns] vruntime=18691818584 [ns]
    kworker/u9:2-809     [000] d..2.  1696.812720: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=D ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d..4.  1696.812728: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=13148 [ns] vruntime=18700831359 [ns]
     kworker/0:2-1499    [000] dN.4.  1696.812732: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1696.812738: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d.h1.  1696.812762: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.812766: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.812767: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.812768: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.812779: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.812786: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=57055 [ns] vruntime=18691832017 [ns]
    kworker/u9:2-809     [000] d.h1.  1696.812802: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.812806: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.812807: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.812808: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.812817: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.812824: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=38556 [ns] vruntime=18691832461 [ns]
    kworker/u9:2-809     [000] d.h1.  1696.812870: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.812880: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.812881: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.812883: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.812893: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.812900: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=75370 [ns] vruntime=18691833330 [ns]
    kworker/u9:2-809     [000] d.h1.  1696.812928: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.812934: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.812936: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.812937: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.812947: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.812954: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=54463 [ns] vruntime=18691833958 [ns]
    kworker/u9:2-809     [000] d.h1.  1696.813044: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1696.813054: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1696.813055: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1696.813056: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1696.813067: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1696.813074: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=120056 [ns] vruntime=18691835343 [ns]
    kworker/u9:2-809     [000] d..2.  1696.813093: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=18981 [ns] vruntime=18691835561 [ns]
    kworker/u9:2-809     [000] d..2.  1696.813098: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=I ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d..2.  1696.813107: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=14426 [ns] vruntime=18700845785 [ns]
     kworker/0:2-1499    [000] d..2.  1696.813117: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1696.825293: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1696.825302: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNs5.  1696.825315: sched_wakeup: comm=brcmf_wdog/mmc1 pid=336 prio=120 target_cpu=000
          <idle>-0       [000] d..2.  1696.825341: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=336 next_prio=120
 brcmf_wdog/mmc1-336     [000] d..2.  1696.825354: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=336 runtime=29019 [ns] vruntime=18691874804 [ns]
 brcmf_wdog/mmc1-336     [000] d..2.  1696.825358: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=336 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1696.841295: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1696.841302: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNs5.  1696.841315: sched_wakeup: comm=brcmf_wdog/mmc1 pid=336 prio=120 target_cpu=000
          <idle>-0       [000] d..2.  1696.841341: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=336 next_prio=120
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.841374: irq_handler_entry: irq=37 name=mmc1
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.841378: irq_handler_exit: irq=37 ret=handled
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.841379: irq_handler_entry: irq=37 name=mmc0
 brcmf_wdog/mmc1-336     [000] d.h1.  1696.841381: irq_handler_exit: irq=37 ret=unhandled
 brcmf_wdog/mmc1-336     [000] d.s3.  1696.841391: sched_wakeup: comm=brcmf_wdog/mmc1 pid=336 prio=120 target_cpu=000
 brcmf_wdog/mmc1-336     [000] d..2.  1696.841399: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=336 runtime=74852 [ns] vruntime=18691949656 [ns]
 brcmf_wdog/mmc1-336     [000] d..2.  1696.841415: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=336 runtime=16204 [ns] vruntime=18691965860 [ns]
 brcmf_wdog/mmc1-336     [000] d..2.  1696.841420: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=336 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1696.853294: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1696.853301: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNs5.  1696.853312: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
          <idle>-0       [000] d..2.  1696.853339: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d.h1.  1696.853385: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1696.853387: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.h1.  1696.853388: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h3.  1696.853398: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d.h1.  1696.853399: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d..2.  1696.853406: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=83889 [ns] vruntime=18700929674 [ns]
     kworker/0:2-1499    [000] d..2.  1696.853444: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=37778 [ns] vruntime=18700967452 [ns]
     kworker/0:2-1499    [000] d..2.  1696.853448: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [002] d.h1.  1696.917294: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1696.917302: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] dNs4.  1696.917318: sched_wakeup: comm=kcompactd0 pid=42 prio=120 target_cpu=002
          <idle>-0       [002] dNH3.  1696.917326: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNH7.  1696.917332: sched_wakeup: comm=kworker/2:3 pid=168 prio=120 target_cpu=002
          <idle>-0       [002] dNH3.  1696.917334: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] d..2.  1696.917366: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kcompactd0 next_pid=42 next_prio=120
      kcompactd0-42      [002] d..2.  1696.917392: sched_stat_runtime: comm=kcompactd0 pid=42 runtime=49056 [ns] vruntime=19371183988 [ns]
      kcompactd0-42      [002] d..2.  1696.917396: sched_switch: prev_comm=kcompactd0 prev_pid=42 prev_prio=120 prev_state=S ==> next_comm=kworker/2:3 next_pid=168 next_prio=120
     kworker/2:3-168     [002] d..2.  1696.917414: sched_stat_runtime: comm=kworker/2:3 pid=168 runtime=22537 [ns] vruntime=19371186822 [ns]
     kworker/2:3-168     [002] d..2.  1696.917422: sched_switch: prev_comm=kworker/2:3 prev_pid=168 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [002] d.h1.  1697.013295: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1697.013303: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1697.026807: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] dNh4.  1697.026818: sched_wakeup: comm=lxpanel pid=766 prio=120 target_cpu=002
          <idle>-0       [002] dNh1.  1697.026821: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] dNh1.  1697.026822: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh5.  1697.026828: sched_wakeup: comm=kworker/2:3 pid=168 prio=120 target_cpu=002
          <idle>-0       [002] dNh1.  1697.026830: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] d..2.  1697.026845: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:3 next_pid=168 next_prio=120
     kworker/2:3-168     [002] d..2.  1697.026861: sched_stat_runtime: comm=kworker/2:3 pid=168 runtime=34038 [ns] vruntime=19371220860 [ns]
     kworker/2:3-168     [002] d..2.  1697.026866: sched_switch: prev_comm=kworker/2:3 prev_pid=168 prev_prio=120 prev_state=I ==> next_comm=lxpanel next_pid=766 next_prio=120
          <idle>-0       [001] d.h1.  1697.026958: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh2.  1697.026968: sched_wakeup: comm=wpa_supplicant pid=606 prio=120 target_cpu=001
          <idle>-0       [001] dNh1.  1697.026970: irq_handler_exit: irq=2 ret=handled
         lxpanel-766     [002] d..2.  1697.026977: sched_stat_runtime: comm=lxpanel pid=766 runtime=115481 [ns] vruntime=2604221360 [ns]
          <idle>-0       [001] d..2.  1697.026985: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=wpa_supplicant next_pid=606 next_prio=120
         lxpanel-766     [002] d..2.  1697.026993: sched_switch: prev_comm=lxpanel prev_pid=766 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [002] d.h1.  1697.027264: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh2.  1697.027271: sched_wakeup: comm=lxpanel pid=766 prio=120 target_cpu=002
          <idle>-0       [002] dNh1.  1697.027273: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d..2.  1697.027288: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=766 next_prio=120
         lxpanel-766     [002] d..2.  1697.027392: sched_stat_runtime: comm=lxpanel pid=766 runtime=123703 [ns] vruntime=2604345063 [ns]
         lxpanel-766     [002] d..2.  1697.027400: sched_switch: prev_comm=lxpanel prev_pid=766 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1697.027592: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh2.  1697.027599: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
          <idle>-0       [000] dNh1.  1697.027601: irq_handler_exit: irq=2 ret=handled
  wpa_supplicant-606     [001] d..2.  1697.027603: sched_stat_runtime: comm=wpa_supplicant pid=606 runtime=638000 [ns] vruntime=23515407 [ns]
          <idle>-0       [000] d..2.  1697.027614: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
  wpa_supplicant-606     [001] d..2.  1697.027614: sched_switch: prev_comm=wpa_supplicant prev_pid=606 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
    kworker/u9:2-809     [000] d.h1.  1697.027648: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1697.027651: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1697.027653: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1697.027655: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1697.027667: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1697.027674: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=78148 [ns] vruntime=18691968353 [ns]
    kworker/u9:2-809     [000] d.h1.  1697.027691: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1697.027694: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1697.027696: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1697.027697: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1697.027707: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1697.027713: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=39759 [ns] vruntime=18691968811 [ns]
    kworker/u9:2-809     [000] d.h1.  1697.027763: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1697.027778: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1697.027779: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1697.027781: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d..2.  1697.027789: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=73481 [ns] vruntime=18691969658 [ns]
    kworker/u9:2-809     [000] d..2.  1697.027793: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1697.027800: irq_handler_entry: irq=37 name=mmc1
          <idle>-0       [000] d.h1.  1697.027804: irq_handler_exit: irq=37 ret=handled
          <idle>-0       [000] d.h1.  1697.027805: irq_handler_entry: irq=37 name=mmc0
          <idle>-0       [000] d.h1.  1697.027806: irq_handler_exit: irq=37 ret=unhandled
          <idle>-0       [000] dNs5.  1697.027820: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
          <idle>-0       [000] d..2.  1697.027830: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
          <idle>-0       [001] d.h1.  1697.027854: irq_handler_entry: irq=2 name=IPI
    kworker/u9:2-809     [000] d..2.  1697.027856: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=38148 [ns] vruntime=18691970098 [ns]
    kworker/u9:2-809     [000] d..2.  1697.027860: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [001] dNh2.  1697.027864: sched_wakeup: comm=wpa_supplicant pid=606 prio=120 target_cpu=001
          <idle>-0       [001] dNh1.  1697.027866: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d..2.  1697.027881: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=wpa_supplicant next_pid=606 next_prio=120
  wpa_supplicant-606     [001] d..2.  1697.027903: sched_stat_runtime: comm=wpa_supplicant pid=606 runtime=45203 [ns] vruntime=23560610 [ns]
  wpa_supplicant-606     [001] d..2.  1697.027908: sched_switch: prev_comm=wpa_supplicant prev_pid=606 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1697.028372: irq_handler_entry: irq=37 name=mmc1
          <idle>-0       [000] dNh6.  1697.028384: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
          <idle>-0       [000] dNh1.  1697.028386: irq_handler_exit: irq=37 ret=handled
          <idle>-0       [000] dNh1.  1697.028387: irq_handler_entry: irq=37 name=mmc0
          <idle>-0       [000] dNh1.  1697.028388: irq_handler_exit: irq=37 ret=unhandled
          <idle>-0       [000] d..2.  1697.028403: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d.h1.  1697.028432: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1697.028436: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1697.028437: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1697.028438: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1697.028448: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1697.028456: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=75074 [ns] vruntime=18701042526 [ns]
     kworker/0:2-1499    [000] d.h1.  1697.028480: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1697.028486: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1697.028487: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1697.028489: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1697.028498: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1697.028505: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=49575 [ns] vruntime=18701092101 [ns]
     kworker/0:2-1499    [000] d.h1.  1697.028528: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1697.028532: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1697.028533: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1697.028535: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.h1.  1697.028537: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1697.028541: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1697.028542: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1697.028543: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1697.028552: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1697.028559: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=53907 [ns] vruntime=18701146008 [ns]
     kworker/0:2-1499    [000] d..4.  1697.028569: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=9667 [ns] vruntime=18701155675 [ns]
     kworker/0:2-1499    [000] dN.4.  1697.028574: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1697.028587: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d..2.  1697.028601: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=32426 [ns] vruntime=18692156049 [ns]
    kworker/u9:2-809     [000] d..2.  1697.028605: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=D ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d..4.  1697.028614: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=13259 [ns] vruntime=18701168934 [ns]
     kworker/0:2-1499    [000] dN.4.  1697.028617: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1697.028624: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d.h1.  1697.028672: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1697.028681: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1697.028683: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1697.028684: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1697.028695: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1697.028702: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=87352 [ns] vruntime=18692169941 [ns]
    kworker/u9:2-809     [000] d.h1.  1697.028769: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1697.028785: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1697.028786: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1697.028787: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1697.028798: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1697.028805: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=103185 [ns] vruntime=18692171131 [ns]
          <idle>-0       [001] d.h1.  1697.028824: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh2.  1697.028830: sched_wakeup: comm=wpa_supplicant pid=606 prio=120 target_cpu=001
          <idle>-0       [001] dNh1.  1697.028832: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d..2.  1697.028845: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=wpa_supplicant next_pid=606 next_prio=120
    kworker/u9:2-809     [000] d.h1.  1697.028857: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1697.028867: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1697.028868: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1697.028869: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1697.028880: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1697.028887: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=81852 [ns] vruntime=18692172075 [ns]
    kworker/u9:2-809     [000] d..2.  1697.028906: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=18889 [ns] vruntime=18692172292 [ns]
    kworker/u9:2-809     [000] d..2.  1697.028910: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=I ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d..2.  1697.028920: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=13944 [ns] vruntime=18701182878 [ns]
     kworker/0:2-1499    [000] d..2.  1697.028931: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [002] d.h1.  1697.029185: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh2.  1697.029193: sched_wakeup: comm=lxpanel pid=766 prio=120 target_cpu=002
          <idle>-0       [002] dNh1.  1697.029195: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d..2.  1697.029208: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=766 next_prio=120
  wpa_supplicant-606     [001] d..2.  1697.029259: sched_stat_runtime: comm=wpa_supplicant pid=606 runtime=431574 [ns] vruntime=23992184 [ns]
  wpa_supplicant-606     [001] d..2.  1697.029267: sched_switch: prev_comm=wpa_supplicant prev_pid=606 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
         lxpanel-766     [002] d.h..  1697.029295: irq_handler_entry: irq=11 name=arch_timer
         lxpanel-766     [002] d.h1.  1697.029307: sched_stat_runtime: comm=lxpanel pid=766 runtime=118241 [ns] vruntime=2604463304 [ns]
         lxpanel-766     [002] d.h..  1697.029320: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1697.029321: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.  1697.029324: irq_handler_exit: irq=2 ret=handled
         lxpanel-766     [002] d..2.  1697.029439: sched_stat_runtime: comm=lxpanel pid=766 runtime=131204 [ns] vruntime=2604594508 [ns]
         lxpanel-766     [002] d..2.  1697.029446: sched_switch: prev_comm=lxpanel prev_pid=766 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1697.029951: irq_handler_entry: irq=37 name=mmc1
          <idle>-0       [000] dNh6.  1697.029963: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
          <idle>-0       [000] dNh1.  1697.029966: irq_handler_exit: irq=37 ret=handled
          <idle>-0       [000] dNh1.  1697.029967: irq_handler_entry: irq=37 name=mmc0
          <idle>-0       [000] dNh1.  1697.029968: irq_handler_exit: irq=37 ret=unhandled
          <idle>-0       [000] d..2.  1697.029983: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d.h1.  1697.030012: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1697.030016: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1697.030017: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1697.030019: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1697.030029: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1697.030036: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=75907 [ns] vruntime=18701258785 [ns]
     kworker/0:2-1499    [000] d.h1.  1697.030061: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1697.030067: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1697.030068: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1697.030070: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1697.030079: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1697.030086: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=50093 [ns] vruntime=18701308878 [ns]
     kworker/0:2-1499    [000] d.h1.  1697.030109: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1697.030113: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1697.030114: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1697.030115: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.h1.  1697.030118: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1697.030121: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1697.030122: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1697.030123: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1697.030133: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1697.030139: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=53333 [ns] vruntime=18701362211 [ns]
     kworker/0:2-1499    [000] d..4.  1697.030149: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=9611 [ns] vruntime=18701371822 [ns]
     kworker/0:2-1499    [000] dN.4.  1697.030154: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1697.030166: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d..2.  1697.030180: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=31445 [ns] vruntime=18692372184 [ns]
    kworker/u9:2-809     [000] d..2.  1697.030184: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=D ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d..4.  1697.030193: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=12685 [ns] vruntime=18701384507 [ns]
     kworker/0:2-1499    [000] dN.4.  1697.030196: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1697.030202: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d.h1.  1697.030259: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1697.030268: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1697.030269: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1697.030270: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1697.030281: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1697.030289: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=94833 [ns] vruntime=18692385601 [ns]
    kworker/u9:2-809     [000] d.h1.  1697.030318: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1697.030321: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1697.030322: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1697.030324: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d..2.  1697.030330: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=41982 [ns] vruntime=18692386085 [ns]
    kworker/u9:2-809     [000] d..2.  1697.030335: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=D ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d.h1.  1697.030341: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1697.030363: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1697.030364: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1697.030366: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s5.  1697.030377: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=47500 [ns] vruntime=18701432007 [ns]
     kworker/0:2-1499    [000] dNs5.  1697.030382: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1697.030391: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d.h1.  1697.030448: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1697.030457: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1697.030458: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1697.030460: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1697.030470: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1697.030478: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=100111 [ns] vruntime=18692433161 [ns]
    kworker/u9:2-809     [000] d..2.  1697.030496: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=18333 [ns] vruntime=18692433372 [ns]
    kworker/u9:2-809     [000] d..2.  1697.030500: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=I ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d..2.  1697.030522: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=26815 [ns] vruntime=18701458822 [ns]
     kworker/0:2-1499    [000] d..2.  1697.030533: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1697.033991: irq_handler_entry: irq=37 name=mmc1
          <idle>-0       [000] dNh6.  1697.034003: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
          <idle>-0       [000] dNh1.  1697.034005: irq_handler_exit: irq=37 ret=handled
          <idle>-0       [000] dNh1.  1697.034006: irq_handler_entry: irq=37 name=mmc0
          <idle>-0       [000] dNh1.  1697.034008: irq_handler_exit: irq=37 ret=unhandled
          <idle>-0       [000] d..2.  1697.034022: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d.h1.  1697.034051: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1697.034055: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1697.034056: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1697.034058: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1697.034068: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1697.034075: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=75407 [ns] vruntime=18701534229 [ns]
     kworker/0:2-1499    [000] d.h1.  1697.034100: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1697.034107: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1697.034108: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1697.034109: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1697.034119: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1697.034125: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=50037 [ns] vruntime=18701584266 [ns]
     kworker/0:2-1499    [000] d.h1.  1697.034148: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1697.034152: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1697.034153: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1697.034155: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.h1.  1697.034157: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1697.034160: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1697.034161: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1697.034163: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1697.034172: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1697.034178: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=53278 [ns] vruntime=18701637544 [ns]
     kworker/0:2-1499    [000] d..4.  1697.034188: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=9518 [ns] vruntime=18701647062 [ns]
     kworker/0:2-1499    [000] dN.4.  1697.034193: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1697.034206: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d..2.  1697.034220: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=31686 [ns] vruntime=18692647427 [ns]
    kworker/u9:2-809     [000] d..2.  1697.034224: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=D ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d..4.  1697.034232: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=12759 [ns] vruntime=18701659821 [ns]
     kworker/0:2-1499    [000] dN.4.  1697.034236: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1697.034242: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d.h1.  1697.034293: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1697.034302: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1697.034303: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1697.034304: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1697.034315: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1697.034322: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=89611 [ns] vruntime=18692660854 [ns]
    kworker/u9:2-809     [000] d.h1.  1697.034351: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1697.034354: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1697.034355: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1697.034356: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d..2.  1697.034363: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=40185 [ns] vruntime=18692661317 [ns]
    kworker/u9:2-809     [000] d..2.  1697.034367: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=D ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d.h1.  1697.034372: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1697.034394: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1697.034395: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1697.034396: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s5.  1697.034408: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=45315 [ns] vruntime=18701705136 [ns]
     kworker/0:2-1499    [000] dNs5.  1697.034412: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1697.034422: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d.h1.  1697.034475: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1697.034485: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1697.034486: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1697.034487: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1697.034498: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1697.034505: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=97241 [ns] vruntime=18692706257 [ns]
    kworker/u9:2-809     [000] d..2.  1697.034523: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=18352 [ns] vruntime=18692706468 [ns]
    kworker/u9:2-809     [000] d..2.  1697.034528: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=I ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d..2.  1697.034547: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=23814 [ns] vruntime=18701728950 [ns]
     kworker/0:2-1499    [000] d..2.  1697.034557: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1697.049297: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1697.049306: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNs5.  1697.049321: sched_wakeup: comm=brcmf_wdog/mmc1 pid=336 prio=120 target_cpu=000
          <idle>-0       [000] d..2.  1697.049349: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=336 next_prio=120
 brcmf_wdog/mmc1-336     [000] d..2.  1697.049362: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=336 runtime=30426 [ns] vruntime=18692759376 [ns]
 brcmf_wdog/mmc1-336     [000] d..2.  1697.049366: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=336 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1697.052795: irq_handler_entry: irq=37 name=mmc1
          <idle>-0       [000] dNh6.  1697.052806: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
          <idle>-0       [000] dNh1.  1697.052808: irq_handler_exit: irq=37 ret=handled
          <idle>-0       [000] dNh1.  1697.052809: irq_handler_entry: irq=37 name=mmc0
          <idle>-0       [000] dNh1.  1697.052811: irq_handler_exit: irq=37 ret=unhandled
          <idle>-0       [000] d..2.  1697.052825: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d.h1.  1697.052854: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1697.052858: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1697.052859: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1697.052861: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1697.052871: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1697.052878: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=74889 [ns] vruntime=18701803839 [ns]
     kworker/0:2-1499    [000] d.h1.  1697.052903: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1697.052909: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1697.052912: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1697.052913: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1697.052923: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1697.052930: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=51537 [ns] vruntime=18701855376 [ns]
     kworker/0:2-1499    [000] d.h1.  1697.052953: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1697.052957: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1697.052958: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1697.052960: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.h1.  1697.052962: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1697.052965: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1697.052966: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1697.052968: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1697.052977: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1697.052984: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=54204 [ns] vruntime=18701909580 [ns]
     kworker/0:2-1499    [000] d..4.  1697.052994: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=9666 [ns] vruntime=18701919246 [ns]
     kworker/0:2-1499    [000] dN.4.  1697.052998: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1697.053011: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d..2.  1697.053026: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=31834 [ns] vruntime=18692919613 [ns]
    kworker/u9:2-809     [000] d..2.  1697.053029: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=D ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d..4.  1697.053038: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=12833 [ns] vruntime=18701932079 [ns]
     kworker/0:2-1499    [000] dN.4.  1697.053041: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1697.053047: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d.h1.  1697.053096: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1697.053106: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1697.053107: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1697.053108: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1697.053119: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1697.053126: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=87574 [ns] vruntime=18692933089 [ns]
    kworker/u9:2-809     [000] d.h1.  1697.053154: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1697.053158: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1697.053159: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1697.053160: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d..2.  1697.053166: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=40222 [ns] vruntime=18692933553 [ns]
    kworker/u9:2-809     [000] d..2.  1697.053170: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=D ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d.h1.  1697.053176: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1697.053198: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1697.053199: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1697.053200: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s5.  1697.053212: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=45611 [ns] vruntime=18701977690 [ns]
     kworker/0:2-1499    [000] dNs5.  1697.053216: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1697.053226: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d.h1.  1697.053280: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1697.053289: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1697.053290: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1697.053292: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.h1.  1697.053294: irq_handler_entry: irq=11 name=arch_timer
    kworker/u9:2-809     [000] d.h2.  1697.053304: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=92112 [ns] vruntime=18692978752 [ns]
    kworker/u9:2-809     [000] d.h1.  1697.053313: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1697.053315: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] d.h1.  1697.053317: irq_handler_exit: irq=2 ret=handled
    kworker/u9:2-809     [000] d.s3.  1697.053324: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1697.053332: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=27740 [ns] vruntime=18692979072 [ns]
    kworker/u9:2-809     [000] d..2.  1697.053352: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=20000 [ns] vruntime=18692979302 [ns]
    kworker/u9:2-809     [000] d..2.  1697.053356: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=I ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d..2.  1697.053376: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=24056 [ns] vruntime=18702001746 [ns]
     kworker/0:2-1499    [000] d..2.  1697.053379: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1697.065297: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1697.065305: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNs5.  1697.065319: sched_wakeup: comm=brcmf_wdog/mmc1 pid=336 prio=120 target_cpu=000
          <idle>-0       [000] d..2.  1697.065347: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=336 next_prio=120
 brcmf_wdog/mmc1-336     [000] d..2.  1697.065360: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=336 runtime=30612 [ns] vruntime=18693032358 [ns]
 brcmf_wdog/mmc1-336     [000] d..2.  1697.065364: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=336 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1.  1697.075589: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh4.  1697.075600: sched_wakeup: comm=gvfs-afc-volume pid=895 prio=120 target_cpu=003
          <idle>-0       [003] dNh1.  1697.075603: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d..2.  1697.075617: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=gvfs-afc-volume next_pid=895 next_prio=120
 gvfs-afc-volume-895     [003] d..2.  1697.075652: sched_stat_runtime: comm=gvfs-afc-volume pid=895 runtime=56889 [ns] vruntime=97884502 [ns]
 gvfs-afc-volume-895     [003] d..2.  1697.075657: sched_switch: prev_comm=gvfs-afc-volume prev_pid=895 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1697.081298: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1697.081305: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNs5.  1697.081318: sched_wakeup: comm=brcmf_wdog/mmc1 pid=336 prio=120 target_cpu=000
          <idle>-0       [000] d..2.  1697.081344: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=336 next_prio=120
 brcmf_wdog/mmc1-336     [000] d.h1.  1697.081378: irq_handler_entry: irq=37 name=mmc1
 brcmf_wdog/mmc1-336     [000] d.h1.  1697.081382: irq_handler_exit: irq=37 ret=handled
 brcmf_wdog/mmc1-336     [000] d.h1.  1697.081383: irq_handler_entry: irq=37 name=mmc0
 brcmf_wdog/mmc1-336     [000] d.h1.  1697.081385: irq_handler_exit: irq=37 ret=unhandled
 brcmf_wdog/mmc1-336     [000] d.s3.  1697.081396: sched_wakeup: comm=brcmf_wdog/mmc1 pid=336 prio=120 target_cpu=000
 brcmf_wdog/mmc1-336     [000] d..2.  1697.081403: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=336 runtime=75630 [ns] vruntime=18693107988 [ns]
 brcmf_wdog/mmc1-336     [000] d..2.  1697.081419: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=336 runtime=16463 [ns] vruntime=18693124451 [ns]
 brcmf_wdog/mmc1-336     [000] d..2.  1697.081424: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=336 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [001] d.h1.  1697.141298: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1697.141308: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNs5.  1697.141323: sched_wakeup: comm=kworker/1:2 pid=1593 prio=120 target_cpu=001
          <idle>-0       [001] dNH2.  1697.141329: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.  1697.141333: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d..2.  1697.141364: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:2 next_pid=1593 next_prio=120
     kworker/1:2-1593    [001] d.h..  1697.141403: irq_handler_entry: irq=11 name=arch_timer
     kworker/1:2-1593    [001] d.h..  1697.141410: irq_handler_exit: irq=11 ret=handled
     kworker/1:2-1593    [001] d..4.  1697.141427: sched_stat_runtime: comm=kworker/1:2 pid=1593 runtime=87759 [ns] vruntime=20261182956 [ns]
          <idle>-0       [000] d.h1.  1697.141428: irq_handler_entry: irq=14 name=fe00b880.mailbox
     kworker/1:2-1593    [001] d..4.  1697.141432: sched_wakeup: comm=kworker/1:1 pid=1502 prio=120 target_cpu=001
          <idle>-0       [000] d.h5.  1697.141436: sched_wakeup: comm=kworker/1:2 pid=1593 prio=120 target_cpu=001
          <idle>-0       [000] d.h1.  1697.141438: irq_handler_exit: irq=14 ret=handled
     kworker/1:2-1593    [001] d..2.  1697.141438: sched_stat_runtime: comm=kworker/1:2 pid=1593 runtime=12167 [ns] vruntime=20261195123 [ns]
     kworker/1:2-1593    [001] d..2.  1697.141442: sched_switch: prev_comm=kworker/1:2 prev_pid=1593 prev_prio=120 prev_state=R ==> next_comm=kworker/1:1 next_pid=1502 next_prio=120
     kworker/1:1-1502    [001] d..2.  1697.141463: sched_stat_runtime: comm=kworker/1:1 pid=1502 runtime=24296 [ns] vruntime=20258681747 [ns]
     kworker/1:1-1502    [001] d..2.  1697.141467: sched_switch: prev_comm=kworker/1:1 prev_pid=1502 prev_prio=120 prev_state=I ==> next_comm=kworker/1:2 next_pid=1593 next_prio=120
     kworker/1:2-1593    [001] d..2.  1697.141491: sched_stat_runtime: comm=kworker/1:2 pid=1593 runtime=28759 [ns] vruntime=20261223882 [ns]
     kworker/1:2-1593    [001] d..2.  1697.141501: sched_switch: prev_comm=kworker/1:2 prev_pid=1593 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0       [002] d.h1.  1697.203600: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] dNh4.  1697.203611: sched_wakeup: comm=lxpanel pid=766 prio=120 target_cpu=002
          <idle>-0       [002] dNh1.  1697.203614: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d..2.  1697.203628: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=766 next_prio=120
         lxpanel-766     [002] d..2.  1697.203713: sched_stat_runtime: comm=lxpanel pid=766 runtime=106575 [ns] vruntime=2604701083 [ns]
         lxpanel-766     [002] d..2.  1697.203719: sched_switch: prev_comm=lxpanel prev_pid=766 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [002] d.h1.  1697.274771: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] dNh4.  1697.274781: sched_wakeup: comm=lxpanel pid=766 prio=120 target_cpu=002
          <idle>-0       [002] dNh1.  1697.274783: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] dNh1.  1697.274785: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh5.  1697.274792: sched_wakeup: comm=kworker/2:3 pid=168 prio=120 target_cpu=002
          <idle>-0       [002] dNh1.  1697.274794: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] d..2.  1697.274808: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:3 next_pid=168 next_prio=120
     kworker/2:3-168     [002] d..2.  1697.274825: sched_stat_runtime: comm=kworker/2:3 pid=168 runtime=34056 [ns] vruntime=19371254916 [ns]
     kworker/2:3-168     [002] d..2.  1697.274830: sched_switch: prev_comm=kworker/2:3 prev_pid=168 prev_prio=120 prev_state=I ==> next_comm=lxpanel next_pid=766 next_prio=120
         lxpanel-766     [002] d..2.  1697.275132: sched_stat_runtime: comm=lxpanel pid=766 runtime=305981 [ns] vruntime=2605007064 [ns]
         lxpanel-766     [002] d..2.  1697.275147: sched_switch: prev_comm=lxpanel prev_pid=766 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [002] d.h1.  1697.277299: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1697.277310: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1697.277332: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh2.  1697.277339: sched_wakeup: comm=rcu_preempt pid=15 prio=120 target_cpu=000
          <idle>-0       [000] dNh1.  1697.277341: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d..2.  1697.277354: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_preempt next_pid=15 next_prio=120
     rcu_preempt-15      [000] d..2.  1697.277383: sched_stat_runtime: comm=rcu_preempt pid=15 runtime=46963 [ns] vruntime=18693048709 [ns]
     rcu_preempt-15      [000] d..2.  1697.277387: sched_switch: prev_comm=rcu_preempt prev_pid=15 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [002] d.h1.  1697.281298: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1697.281309: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1697.285297: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1697.285301: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1697.285304: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1697.285309: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNs4.  1697.285322: sched_wakeup: comm=rcu_preempt pid=15 prio=120 target_cpu=000
          <idle>-0       [000] d..2.  1697.285351: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_preempt next_pid=15 next_prio=120
     rcu_preempt-15      [000] d..2.  1697.285384: sched_stat_runtime: comm=rcu_preempt pid=15 runtime=55370 [ns] vruntime=18693104079 [ns]
     rcu_preempt-15      [000] d..2.  1697.285388: sched_switch: prev_comm=rcu_preempt prev_pid=15 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [002] d.h1.  1697.289298: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1697.289308: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1697.301299: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1697.301308: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNs5.  1697.301321: sched_wakeup: comm=kworker/1:2 pid=1593 prio=120 target_cpu=001
          <idle>-0       [001] d..2.  1697.301348: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:2 next_pid=1593 next_prio=120
     kworker/1:2-1593    [001] d..2.  1697.301376: sched_stat_runtime: comm=kworker/1:2 pid=1593 runtime=49148 [ns] vruntime=20261273030 [ns]
     kworker/1:2-1593    [001] d..2.  1697.301380: sched_switch: prev_comm=kworker/1:2 prev_pid=1593 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1697.417784: irq_handler_entry: irq=37 name=mmc1
          <idle>-0       [000] dNh6.  1697.417798: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
          <idle>-0       [000] dNh1.  1697.417800: irq_handler_exit: irq=37 ret=handled
          <idle>-0       [000] dNh1.  1697.417801: irq_handler_entry: irq=37 name=mmc0
          <idle>-0       [000] dNh1.  1697.417803: irq_handler_exit: irq=37 ret=unhandled
          <idle>-0       [000] dNh1.  1697.417806: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.  1697.417809: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2.  1697.417823: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d.h1.  1697.417853: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1697.417857: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1697.417858: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1697.417860: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1697.417870: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1697.417878: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=84703 [ns] vruntime=18702086449 [ns]
     kworker/0:2-1499    [000] d.h1.  1697.417904: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1697.417910: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1697.417911: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1697.417913: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1697.417922: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1697.417931: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=51556 [ns] vruntime=18702138005 [ns]
     kworker/0:2-1499    [000] d.h1.  1697.417954: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1697.417958: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1697.417959: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1697.417961: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.h1.  1697.417963: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1697.417967: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1697.417968: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1697.417969: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1697.417979: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1697.417985: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=56259 [ns] vruntime=18702194264 [ns]
     kworker/0:2-1499    [000] d..4.  1697.417995: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=9630 [ns] vruntime=18702203894 [ns]
     kworker/0:2-1499    [000] dN.4.  1697.418000: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1697.418013: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d..2.  1697.418028: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=32870 [ns] vruntime=18693204273 [ns]
    kworker/u9:2-809     [000] d..2.  1697.418032: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=D ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d..4.  1697.418041: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=13222 [ns] vruntime=18702217116 [ns]
     kworker/0:2-1499    [000] dN.4.  1697.418044: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1697.418050: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d.h1.  1697.418074: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1697.418077: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1697.418078: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1697.418080: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1697.418090: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1697.418097: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=55963 [ns] vruntime=18693217761 [ns]
    kworker/u9:2-809     [000] d.h1.  1697.418113: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1697.418117: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1697.418118: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1697.418119: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1697.418129: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1697.418136: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=38723 [ns] vruntime=18693218207 [ns]
    kworker/u9:2-809     [000] d.h1.  1697.418182: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1697.418191: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1697.418193: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1697.418194: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1697.418204: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1697.418212: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=75777 [ns] vruntime=18693219081 [ns]
    kworker/u9:2-809     [000] d.h1.  1697.418241: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1697.418250: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1697.418251: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1697.418253: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1697.418263: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1697.418270: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=58612 [ns] vruntime=18693219757 [ns]
          <idle>-0       [002] d.h1.  1697.418335: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh2.  1697.418344: sched_wakeup: comm=sshd pid=1487 prio=120 target_cpu=002
          <idle>-0       [002] dNh1.  1697.418346: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d..2.  1697.418360: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1487 next_prio=120
    kworker/u9:2-809     [000] d.h1.  1697.418377: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1697.418387: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1697.418388: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1697.418390: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1697.418400: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1697.418408: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=137388 [ns] vruntime=18693221341 [ns]
    kworker/u9:2-809     [000] d..2.  1697.418427: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=19667 [ns] vruntime=18693221567 [ns]
    kworker/u9:2-809     [000] d..2.  1697.418432: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=I ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d..2.  1697.418450: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=22982 [ns] vruntime=18702240098 [ns]
     kworker/0:2-1499    [000] d..2.  1697.418462: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1697.418469: irq_handler_entry: irq=37 name=mmc1
          <idle>-0       [000] dNh6.  1697.418481: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
          <idle>-0       [000] dNh1.  1697.418482: irq_handler_exit: irq=37 ret=handled
          <idle>-0       [000] dNh1.  1697.418484: irq_handler_entry: irq=37 name=mmc0
          <idle>-0       [000] dNh1.  1697.418485: irq_handler_exit: irq=37 ret=unhandled
          <idle>-0       [000] d..2.  1697.418493: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d.h1.  1697.418522: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1697.418526: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1697.418527: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1697.418529: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1697.418539: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1697.418546: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=67815 [ns] vruntime=18702307913 [ns]
     kworker/0:2-1499    [000] d.h1.  1697.418570: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1697.418577: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1697.418578: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1697.418579: irq_handler_exit: irq=37 ret=unhandled
     kworker/0:2-1499    [000] d.s3.  1697.418589: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
          <idle>-0       [003] d.h1.  1697.418591: irq_handler_entry: irq=2 name=IPI
     kworker/0:2-1499    [000] d..2.  1697.418595: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=49741 [ns] vruntime=18702357654 [ns]
          <idle>-0       [003] dNh2.  1697.418597: sched_wakeup: comm=kworker/u8:3 pid=1583 prio=120 target_cpu=003
          <idle>-0       [003] dNh1.  1697.418598: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2.  1697.418611: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:3 next_pid=1583 next_prio=120
     kworker/0:2-1499    [000] d.h1.  1697.418619: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1697.418623: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1697.418624: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1697.418625: irq_handler_exit: irq=37 ret=unhandled
            sshd-1487    [002] d..2.  1697.418626: sched_stat_runtime: comm=sshd pid=1487 runtime=284796 [ns] vruntime=379788667 [ns]
     kworker/0:2-1499    [000] d.h1.  1697.418628: irq_handler_entry: irq=37 name=mmc1
     kworker/0:2-1499    [000] d.h1.  1697.418631: irq_handler_exit: irq=37 ret=handled
     kworker/0:2-1499    [000] d.h1.  1697.418632: irq_handler_entry: irq=37 name=mmc0
     kworker/0:2-1499    [000] d.h1.  1697.418634: irq_handler_exit: irq=37 ret=unhandled
            sshd-1487    [002] d..2.  1697.418635: sched_switch: prev_comm=sshd prev_pid=1487 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
    kworker/u8:3-1583    [003] d..4.  1697.418636: sched_stat_runtime: comm=kworker/u8:3 pid=1583 runtime=39278 [ns] vruntime=18827926519 [ns]
    kworker/u8:3-1583    [003] d..4.  1697.418642: sched_wakeup: comm=bash pid=1577 prio=120 target_cpu=003
     kworker/0:2-1499    [000] d.s3.  1697.418643: sched_wakeup: comm=kworker/0:2 pid=1499 prio=120 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1697.418650: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=54352 [ns] vruntime=18702412006 [ns]
    kworker/u8:3-1583    [003] d..2.  1697.418651: sched_stat_runtime: comm=kworker/u8:3 pid=1583 runtime=17796 [ns] vruntime=18827944315 [ns]
    kworker/u8:3-1583    [003] d..2.  1697.418657: sched_switch: prev_comm=kworker/u8:3 prev_pid=1583 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=1577 next_prio=120
     kworker/0:2-1499    [000] d..4.  1697.418659: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=9852 [ns] vruntime=18702421858 [ns]
     kworker/0:2-1499    [000] dN.4.  1697.418664: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1697.418677: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d..2.  1697.418692: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=32018 [ns] vruntime=18693422227 [ns]
    kworker/u9:2-809     [000] d..2.  1697.418695: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=D ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d..4.  1697.418704: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=12611 [ns] vruntime=18702434469 [ns]
     kworker/0:2-1499    [000] dN.4.  1697.418707: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
     kworker/0:2-1499    [000] d..2.  1697.418713: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
            bash-1577    [003] dN.4.  1697.418750: sched_wakeup: comm=kworker/u8:3 pid=1583 prio=120 target_cpu=003
            bash-1577    [003] dN.2.  1697.418762: sched_stat_runtime: comm=bash pid=1577 runtime=93315 [ns] vruntime=897189671 [ns]
    kworker/u9:2-809     [000] d.h1.  1697.418762: irq_handler_entry: irq=37 name=mmc1
            bash-1577    [003] d..2.  1697.418768: sched_switch: prev_comm=bash prev_pid=1577 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u8:3 next_pid=1583 next_prio=120
    kworker/u9:2-809     [000] d.h1.  1697.418771: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1697.418772: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1697.418774: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1697.418785: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
          <idle>-0       [002] d.h1.  1697.418788: irq_handler_entry: irq=2 name=IPI
    kworker/u8:3-1583    [003] d..2.  1697.418790: sched_stat_runtime: comm=kworker/u8:3 pid=1583 runtime=45833 [ns] vruntime=18827990148 [ns]
    kworker/u9:2-809     [000] d..2.  1697.418792: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=87611 [ns] vruntime=18693435479 [ns]
          <idle>-0       [002] dNh2.  1697.418796: sched_wakeup: comm=sshd pid=1487 prio=120 target_cpu=002
    kworker/u8:3-1583    [003] d..2.  1697.418796: sched_switch: prev_comm=kworker/u8:3 prev_pid=1583 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=1577 next_prio=120
          <idle>-0       [002] dNh1.  1697.418797: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d..2.  1697.418813: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1487 next_prio=120
    kworker/u9:2-809     [000] d.h1.  1697.418821: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1697.418838: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1697.418839: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1697.418841: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1697.418852: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1697.418859: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=67148 [ns] vruntime=18693436253 [ns]
            bash-1577    [003] dN.4.  1697.418875: sched_wakeup: comm=kworker/u8:3 pid=1583 prio=120 target_cpu=003
            bash-1577    [003] dN.2.  1697.418885: sched_stat_runtime: comm=bash pid=1577 runtime=80852 [ns] vruntime=897270523 [ns]
            bash-1577    [003] d..2.  1697.418889: sched_switch: prev_comm=bash prev_pid=1577 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u8:3 next_pid=1583 next_prio=120
    kworker/u8:3-1583    [003] d..2.  1697.418906: sched_stat_runtime: comm=kworker/u8:3 pid=1583 runtime=35223 [ns] vruntime=18828025371 [ns]
    kworker/u8:3-1583    [003] d..2.  1697.418911: sched_switch: prev_comm=kworker/u8:3 prev_pid=1583 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=1577 next_prio=120
          <idle>-0       [001] d.h1.  1697.418953: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh2.  1697.418960: sched_wakeup: comm=kworker/u9:0 pid=78 prio=100 target_cpu=001
          <idle>-0       [001] dNh1.  1697.418962: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d..2.  1697.418975: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u9:0 next_pid=78 next_prio=100
    kworker/u9:0-78      [001] d..2.  1697.418986: sched_stat_runtime: comm=kworker/u9:0 pid=78 runtime=28796 [ns] vruntime=20258619299 [ns]
    kworker/u9:2-809     [000] d.h1.  1697.418995: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:0-78      [001] d..2.  1697.419002: sched_switch: prev_comm=kworker/u9:0 prev_pid=78 prev_prio=100 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
    kworker/u9:2-809     [000] d.h1.  1697.419005: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1697.419007: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1697.419008: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d.s3.  1697.419019: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
    kworker/u9:2-809     [000] d..2.  1697.419027: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=167815 [ns] vruntime=18693438189 [ns]
    kworker/u9:2-809     [000] d.h1.  1697.419085: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1697.419115: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1697.419116: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1697.419118: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d..2.  1697.419124: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=97111 [ns] vruntime=18693439309 [ns]
    kworker/u9:2-809     [000] d..2.  1697.419130: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=D ==> next_comm=kworker/0:2 next_pid=1499 next_prio=120
     kworker/0:2-1499    [000] d..2.  1697.419142: sched_stat_runtime: comm=kworker/0:2 pid=1499 runtime=16649 [ns] vruntime=18702451118 [ns]
            sshd-1487    [002] d..2.  1697.419143: sched_stat_runtime: comm=sshd pid=1487 runtime=350241 [ns] vruntime=380138908 [ns]
     kworker/0:2-1499    [000] d..2.  1697.419152: sched_switch: prev_comm=kworker/0:2 prev_pid=1499 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1697.419159: irq_handler_entry: irq=37 name=mmc1
            sshd-1487    [002] d..2.  1697.419160: sched_switch: prev_comm=sshd prev_pid=1487 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1.  1697.419163: irq_handler_exit: irq=37 ret=handled
          <idle>-0       [000] d.h1.  1697.419164: irq_handler_entry: irq=37 name=mmc0
          <idle>-0       [000] d.h1.  1697.419165: irq_handler_exit: irq=37 ret=unhandled
          <idle>-0       [000] dNs5.  1697.419182: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
          <idle>-0       [000] d..2.  1697.419192: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d..3.  1697.419217: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=39037 [ns] vruntime=18693451568 [ns]
    kworker/u9:2-809     [000] d..3.  1697.419222: sched_wakeup: comm=ksoftirqd/0 pid=14 prio=120 target_cpu=000
    kworker/u9:2-809     [000] d.h1.  1697.419331: irq_handler_entry: irq=37 name=mmc1
    kworker/u9:2-809     [000] d.h1.  1697.419342: irq_handler_exit: irq=37 ret=handled
    kworker/u9:2-809     [000] d.h1.  1697.419344: irq_handler_entry: irq=37 name=mmc0
    kworker/u9:2-809     [000] d.h1.  1697.419345: irq_handler_exit: irq=37 ret=unhandled
    kworker/u9:2-809     [000] d..2.  1697.419353: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=135667 [ns] vruntime=18693453133 [ns]
    kworker/u9:2-809     [000] d..2.  1697.419359: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=D ==> next_comm=ksoftirqd/0 next_pid=14 next_prio=120
     ksoftirqd/0-14      [000] d.h1.  1697.419366: irq_handler_entry: irq=37 name=mmc1
     ksoftirqd/0-14      [000] d.h1.  1697.419370: irq_handler_exit: irq=37 ret=handled
     ksoftirqd/0-14      [000] d.h1.  1697.419371: irq_handler_entry: irq=37 name=mmc0
     ksoftirqd/0-14      [000] d.h1.  1697.419372: irq_handler_exit: irq=37 ret=unhandled
     ksoftirqd/0-14      [000] d.s5.  1697.419384: sched_stat_runtime: comm=ksoftirqd/0 pid=14 runtime=31592 [ns] vruntime=18693482710 [ns]
     ksoftirqd/0-14      [000] d.s5.  1697.419389: sched_wakeup: comm=kworker/u9:2 pid=809 prio=100 target_cpu=000
     ksoftirqd/0-14      [000] d..2.  1697.419399: sched_stat_runtime: comm=ksoftirqd/0 pid=14 runtime=14704 [ns] vruntime=18693497414 [ns]
     ksoftirqd/0-14      [000] d..2.  1697.419402: sched_switch: prev_comm=ksoftirqd/0 prev_pid=14 prev_prio=120 prev_state=S ==> next_comm=kworker/u9:2 next_pid=809 next_prio=100
    kworker/u9:2-809     [000] d..2.  1697.419431: sched_stat_runtime: comm=kworker/u9:2 pid=809 runtime=32019 [ns] vruntime=18693453502 [ns]
    kworker/u9:2-809     [000] d..2.  1697.419441: sched_switch: prev_comm=kworker/u9:2 prev_pid=809 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
            bash-1577    [003] d..2.  1697.419750: sched_stat_runtime: comm=bash pid=1577 runtime=842611 [ns] vruntime=898113134 [ns]
          <idle>-0       [001] dnh1.  1697.419800: irq_handler_entry: irq=1 name=IPI
          <idle>-0       [001] dNh1.  1697.419802: irq_handler_exit: irq=1 ret=handled
          <idle>-0       [001] d..2.  1697.419817: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=1607 next_prio=120
            bash-1577    [003] d..2.  1697.420215: sched_stat_runtime: comm=bash pid=1577 runtime=465111 [ns] vruntime=898578245 [ns]
            bash-1577    [003] d..2.  1697.420225: sched_switch: prev_comm=bash prev_pid=1577 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
   get_ftrace.sh-1607    [001] d.h..  1697.421304: irq_handler_entry: irq=11 name=arch_timer
   get_ftrace.sh-1607    [001] d.h1.  1697.421333: sched_stat_runtime: comm=bash pid=1607 runtime=1545703 [ns] vruntime=663464671 [ns]
   get_ftrace.sh-1607    [001] d.h..  1697.421351: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1697.421352: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.  1697.421356: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1697.421387: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh2.  1697.421396: sched_wakeup: comm=rcu_preempt pid=15 prio=120 target_cpu=000
          <idle>-0       [000] dNh1.  1697.421398: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d..2.  1697.421413: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_preempt next_pid=15 next_prio=120
     rcu_preempt-15      [000] d..2.  1697.421445: sched_stat_runtime: comm=rcu_preempt pid=15 runtime=53611 [ns] vruntime=18693504729 [ns]
     rcu_preempt-15      [000] d..2.  1697.421449: sched_switch: prev_comm=rcu_preempt prev_pid=15 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
