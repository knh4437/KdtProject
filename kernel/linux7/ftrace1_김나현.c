# tracer: nop
#
# entries-in-buffer/entries-written: 4641/4641   #P:4
#
#                                _-----=> irqs-off/BH-disabled
#                               / _----=> need-resched
#                              | / _---=> hardirq/softirq
#                              || / _--=> preempt-depth
#                              ||| / _-=> migrate-disable
#                              |||| /     delay
#           TASK-PID     CPU#  |||||  TIMESTAMP  FUNCTION
#              | |         |   |||||     |         |
          <idle>-0       [002] d.h..   460.750920: irq_handler_entry: irq=19 name=IPI
          <idle>-0       [002] dnh..   460.750941: sched_wakeup: comm=kworker/u8:2 pid=47 prio=120 target_cpu=002
          <idle>-0       [002] dnh..   460.750943: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [002] dnh..   460.750945: irq_handler_entry: irq=21 name=IPI
          <idle>-0       [001] d.h..   460.750962: irq_handler_entry: irq=19 name=IPI
          <idle>-0       [002] dnh..   460.750965: irq_handler_exit: irq=21 ret=handled
          <idle>-0       [000] d.h..   460.750967: irq_handler_entry: irq=19 name=IPI
          <idle>-0       [001] dnh..   460.750973: sched_wakeup: comm=in:imklog pid=467 prio=120 target_cpu=001
          <idle>-0       [001] dnh..   460.750975: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [000] dnh..   460.750976: sched_wakeup: comm=systemd-journal pid=136 prio=120 target_cpu=000
          <idle>-0       [002] d....   460.750976: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=47 next_prio=120
          <idle>-0       [000] dnh..   460.750978: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [001] d....   460.750985: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=in:imklog next_pid=467 next_prio=120
          <idle>-0       [000] d....   460.750985: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=systemd-journal next_pid=136 next_prio=120
    kworker/u8:2-47      [002] d....   460.750994: sched_stat_runtime: comm=kworker/u8:2 pid=47 runtime=65389 [ns] vruntime=9804362782 [ns]
    kworker/u8:2-47      [002] d....   460.751001: sched_wakeup: comm=sshd pid=729 prio=120 target_cpu=002
    kworker/u8:2-47      [002] d....   460.751007: sched_stat_runtime: comm=kworker/u8:2 pid=47 runtime=16259 [ns] vruntime=9804379041 [ns]
    kworker/u8:2-47      [002] d....   460.751012: sched_switch: prev_comm=kworker/u8:2 prev_pid=47 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=729 next_prio=120
 systemd-journal-136     [000] d.h..   460.751158: irq_handler_entry: irq=19 name=IPI
       in:imklog-467     [001] d....   460.751170: sched_stat_runtime: comm=in:imklog pid=467 runtime=202315 [ns] vruntime=16613854 [ns]
 systemd-journal-136     [000] d.h..   460.751171: sched_wakeup: comm=rs:main Q:Reg pid=469 prio=120 target_cpu=000
 systemd-journal-136     [000] d.h..   460.751173: irq_handler_exit: irq=19 ret=handled
       in:imklog-467     [001] d....   460.751205: sched_stat_runtime: comm=in:imklog pid=467 runtime=36130 [ns] vruntime=16649984 [ns]
       in:imklog-467     [001] d....   460.751218: sched_switch: prev_comm=in:imklog prev_pid=467 prev_prio=120 prev_state=S ==> next_comm=rs:main Q:Reg next_pid=469 next_prio=120
 systemd-journal-136     [000] d.h..   460.751277: irq_handler_entry: irq=19 name=IPI
 systemd-journal-136     [000] dnh..   460.751286: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
 systemd-journal-136     [000] dnh..   460.751287: irq_handler_exit: irq=19 ret=handled
 systemd-journal-136     [000] dn...   460.751292: sched_stat_runtime: comm=systemd-journal pid=136 runtime=308796 [ns] vruntime=354872180 [ns]
 systemd-journal-136     [000] d....   460.751299: sched_switch: prev_comm=systemd-journal prev_pid=136 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:1 next_pid=293 next_prio=100
            sshd-729     [002] d....   460.751317: sched_stat_runtime: comm=sshd pid=729 runtime=307704 [ns] vruntime=167629249 [ns]
    kworker/u9:1-293     [000] d.h..   460.751338: irq_handler_entry: irq=51 name=mmc1
            sshd-729     [002] d....   460.751340: sched_switch: prev_comm=sshd prev_pid=729 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
    kworker/u9:1-293     [000] d.h..   460.751344: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   460.751346: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   460.751350: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   460.751361: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   460.751367: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=86908 [ns] vruntime=13335298269 [ns]
    kworker/u9:1-293     [000] d.h..   460.751380: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   460.751384: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   460.751385: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   460.751387: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   460.751394: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   460.751398: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=31389 [ns] vruntime=13335298631 [ns]
    kworker/u9:1-293     [000] d.h..   460.751437: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   460.751450: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   460.751452: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   460.751453: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d....   460.751458: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=59574 [ns] vruntime=13335299318 [ns]
    kworker/u9:1-293     [000] d....   460.751464: sched_switch: prev_comm=kworker/u9:1 prev_pid=293 prev_prio=100 prev_state=D ==> next_comm=systemd-journal next_pid=136 next_prio=120
 systemd-journal-136     [000] d.h..   460.751468: irq_handler_entry: irq=51 name=mmc1
 systemd-journal-136     [000] d.h..   460.751472: irq_handler_exit: irq=51 ret=handled
 systemd-journal-136     [000] d.h..   460.751473: irq_handler_entry: irq=51 name=mmc0
 systemd-journal-136     [000] d.h..   460.751475: irq_handler_exit: irq=51 ret=unhandled
   rs:main Q:Reg-469     [001] d....   460.751482: sched_stat_runtime: comm=rs:main Q:Reg pid=469 runtime=276759 [ns] vruntime=25688298 [ns]
 systemd-journal-136     [000] dns..   460.751487: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
 systemd-journal-136     [000] dn...   460.751492: sched_stat_runtime: comm=systemd-journal pid=136 runtime=26259 [ns] vruntime=354898439 [ns]
 systemd-journal-136     [000] d....   460.751497: sched_switch: prev_comm=systemd-journal prev_pid=136 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:1 next_pid=293 next_prio=100
   rs:main Q:Reg-469     [001] d....   460.751503: sched_switch: prev_comm=rs:main Q:Reg prev_pid=469 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
    kworker/u9:1-293     [000] d....   460.751517: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=33444 [ns] vruntime=13335299703 [ns]
    kworker/u9:1-293     [000] d....   460.751521: sched_switch: prev_comm=kworker/u9:1 prev_pid=293 prev_prio=100 prev_state=I ==> next_comm=systemd-journal next_pid=136 next_prio=120
    nop_trace.sh-791     [003] d....   460.751823: sched_stat_runtime: comm=nop_trace.sh pid=791 runtime=1120444 [ns] vruntime=154777644 [ns]
          <idle>-0       [002] d.h..   460.751862: irq_handler_entry: irq=19 name=IPI
    nop_trace.sh-791     [003] dn...   460.751864: sched_stat_runtime: comm=nop_trace.sh pid=791 runtime=42370 [ns] vruntime=12232955111 [ns]
          <idle>-0       [002] dnh..   460.751872: sched_wakeup: comm=bash pid=755 prio=120 target_cpu=002
          <idle>-0       [002] dnh..   460.751874: irq_handler_exit: irq=19 ret=handled
    nop_trace.sh-791     [003] d....   460.751879: sched_switch: prev_comm=nop_trace.sh prev_pid=791 prev_prio=120 prev_state=Z ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [002] d....   460.751886: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=755 next_prio=120
          <idle>-0       [003] d.h..   460.752103: irq_handler_entry: irq=19 name=IPI
          <idle>-0       [003] dnh..   460.752113: sched_wakeup: comm=systemd pid=1 prio=120 target_cpu=003
          <idle>-0       [003] dnh..   460.752115: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [003] d....   460.752122: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=systemd next_pid=1 next_prio=120
 systemd-journal-136     [000] d....   460.752125: sched_stat_runtime: comm=systemd-journal pid=136 runtime=606556 [ns] vruntime=355504995 [ns]
 systemd-journal-136     [000] d....   460.752134: sched_switch: prev_comm=systemd-journal prev_pid=136 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
         systemd-1       [003] d....   460.752446: sched_stat_runtime: comm=systemd pid=1 runtime=338240 [ns] vruntime=666911747 [ns]
         systemd-1       [003] d....   460.752457: sched_switch: prev_comm=systemd prev_pid=1 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
            bash-755     [002] d....   460.752478: sched_wakeup: comm=kworker/u8:2 pid=47 prio=120 target_cpu=002
            bash-755     [002] d....   460.752590: sched_stat_runtime: comm=bash pid=755 runtime=723593 [ns] vruntime=78413365 [ns]
            bash-755     [002] d....   460.752598: sched_switch: prev_comm=bash prev_pid=755 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=47 next_prio=120
    kworker/u8:2-47      [002] d....   460.752613: sched_stat_runtime: comm=kworker/u8:2 pid=47 runtime=20981 [ns] vruntime=9804400022 [ns]
    kworker/u8:2-47      [002] d....   460.752618: sched_wakeup: comm=sshd pid=729 prio=120 target_cpu=002
    kworker/u8:2-47      [002] d....   460.752624: sched_stat_runtime: comm=kworker/u8:2 pid=47 runtime=14204 [ns] vruntime=9804414226 [ns]
    kworker/u8:2-47      [002] d....   460.752628: sched_switch: prev_comm=kworker/u8:2 prev_pid=47 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=729 next_prio=120
          <idle>-0       [000] d.h..   460.752806: irq_handler_entry: irq=19 name=IPI
          <idle>-0       [000] dnh..   460.752815: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
          <idle>-0       [000] dnh..   460.752817: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [000] d....   460.752824: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u9:1 next_pid=293 next_prio=100
            sshd-729     [002] d....   460.752836: sched_stat_runtime: comm=sshd pid=729 runtime=210333 [ns] vruntime=167839582 [ns]
            sshd-729     [002] d....   460.752856: sched_switch: prev_comm=sshd prev_pid=729 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
    kworker/u9:1-293     [000] d.h..   460.752874: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   460.752891: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   460.752892: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   460.752896: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.h..   460.752901: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   460.752905: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   460.752907: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   460.752908: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   460.752916: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   460.752921: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=111352 [ns] vruntime=13335300987 [ns]
    kworker/u9:1-293     [000] d....   460.752940: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=18685 [ns] vruntime=13335301202 [ns]
    kworker/u9:1-293     [000] d....   460.752944: sched_switch: prev_comm=kworker/u9:1 prev_pid=293 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   460.754327: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] dnh..   460.754341: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   460.754343: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   460.754345: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] dnh..   460.754346: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d....   460.754353: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d.h..   460.754373: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   460.754377: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   460.754378: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   460.754380: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   460.754387: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   460.754391: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=54241 [ns] vruntime=13335488063 [ns]
     kworker/0:4-452     [000] d.h..   460.754412: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   460.754420: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   460.754421: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   460.754423: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   460.754429: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   460.754433: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=42148 [ns] vruntime=13335530211 [ns]
     kworker/0:4-452     [000] d.h..   460.754452: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   460.754457: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   460.754458: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   460.754460: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.h..   460.754462: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   460.754466: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   460.754467: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   460.754468: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   460.754475: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   460.754479: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=45777 [ns] vruntime=13335575988 [ns]
     kworker/0:4-452     [000] d....   460.754486: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=6982 [ns] vruntime=13335582970 [ns]
     kworker/0:4-452     [000] dn...   460.754491: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
     kworker/0:4-452     [000] d....   460.754503: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:1 next_pid=293 next_prio=100
    kworker/u9:1-293     [000] d.h..   460.754540: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   460.754551: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   460.754552: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   460.754554: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   460.754561: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   460.754565: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=78685 [ns] vruntime=13335302109 [ns]
    kworker/u9:1-293     [000] d.h..   460.754589: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   460.754596: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   460.754598: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   460.754599: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   460.754606: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   460.754610: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=45111 [ns] vruntime=13335302629 [ns]
    kworker/u9:1-293     [000] d.h..   460.754694: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   460.754705: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   460.754706: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   460.754707: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   460.754714: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   460.754719: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=108852 [ns] vruntime=13335303884 [ns]
    kworker/u9:1-293     [000] d....   460.754731: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=12222 [ns] vruntime=13335304025 [ns]
    kworker/u9:1-293     [000] d....   460.754736: sched_switch: prev_comm=kworker/u9:1 prev_pid=293 prev_prio=100 prev_state=I ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   460.754741: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=10334 [ns] vruntime=13335593304 [ns]
     kworker/0:4-452     [000] d....   460.754753: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   460.755925: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [002] d.h..   460.755926: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [003] d.h..   460.755926: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   460.755945: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [003] d.h..   460.755945: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [002] d.h..   460.755945: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [003] dns..   460.755960: sched_wakeup: comm=kworker/3:0 pid=30 prio=120 target_cpu=003
          <idle>-0       [000] dns..   460.755965: sched_wakeup: comm=rcu_sched pid=14 prio=120 target_cpu=000
          <idle>-0       [002] dns..   460.755965: sched_wakeup: comm=kworker/2:1 pid=46 prio=120 target_cpu=002
          <idle>-0       [000] d....   460.755973: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=14 next_prio=120
          <idle>-0       [003] d....   460.755981: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:0 next_pid=30 next_prio=120
          <idle>-0       [002] d....   460.755986: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:1 next_pid=46 next_prio=120
       rcu_sched-14      [000] d....   460.755990: sched_stat_runtime: comm=rcu_sched pid=14 runtime=28463 [ns] vruntime=13335325730 [ns]
       rcu_sched-14      [000] d....   460.755997: sched_switch: prev_comm=rcu_sched prev_pid=14 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
     kworker/2:1-46      [002] d....   460.756000: sched_stat_runtime: comm=kworker/2:1 pid=46 runtime=30037 [ns] vruntime=9804656443 [ns]
     kworker/2:1-46      [002] d....   460.756004: sched_switch: prev_comm=kworker/2:1 prev_pid=46 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
     kworker/3:0-30      [003] d....   460.756011: sched_stat_runtime: comm=kworker/3:0 pid=30 runtime=47074 [ns] vruntime=12224002185 [ns]
     kworker/3:0-30      [003] d....   460.756016: sched_switch: prev_comm=kworker/3:0 prev_pid=30 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   460.765924: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [003] d.h..   460.765924: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [002] d.h..   460.765925: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   460.765934: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [002] d.h..   460.765934: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [003] d.h..   460.765938: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dns..   460.765944: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
          <idle>-0       [000] d....   460.765964: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=279 next_prio=120
 brcmf_wdog/mmc1-279     [000] d....   460.765973: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=21741 [ns] vruntime=13335319008 [ns]
 brcmf_wdog/mmc1-279     [000] d....   460.765977: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=279 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [002] d.h..   460.775924: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [003] d.h..   460.775924: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   460.775924: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [002] d.h..   460.775930: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d.h..   460.775931: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [003] d.h..   460.775933: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dns..   460.775940: sched_wakeup: comm=rcu_sched pid=14 prio=120 target_cpu=000
          <idle>-0       [000] d....   460.775954: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=14 next_prio=120
       rcu_sched-14      [000] d....   460.775972: sched_stat_runtime: comm=rcu_sched pid=14 runtime=27149 [ns] vruntime=13335352879 [ns]
       rcu_sched-14      [000] d....   460.775975: sched_switch: prev_comm=rcu_sched prev_pid=14 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [002] d.h..   460.785924: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   460.785924: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [003] d.h..   460.785924: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [002] d.h..   460.785930: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d.h..   460.785930: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [003] d.h..   460.785933: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dns..   460.785967: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] d....   460.785979: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   460.786002: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=37574 [ns] vruntime=13335630878 [ns]
     kworker/0:4-452     [000] d....   460.786006: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [003] d.h..   460.788392: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [003] d.h..   460.788402: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [003] d.h..   460.795923: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   460.795924: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   460.795931: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [003] d.h..   460.795933: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dns..   460.795940: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
          <idle>-0       [003] dns..   460.795954: sched_wakeup: comm=rcu_sched pid=14 prio=120 target_cpu=003
          <idle>-0       [000] d....   460.795961: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=279 next_prio=120
          <idle>-0       [003] d....   460.795963: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=14 next_prio=120
       rcu_sched-14      [003] d....   460.795978: sched_stat_runtime: comm=rcu_sched pid=14 runtime=27296 [ns] vruntime=12224038019 [ns]
       rcu_sched-14      [003] d....   460.795982: sched_switch: prev_comm=rcu_sched prev_pid=14 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
 brcmf_wdog/mmc1-279     [000] d.h..   460.795982: irq_handler_entry: irq=51 name=mmc1
 brcmf_wdog/mmc1-279     [000] d.h..   460.795987: irq_handler_exit: irq=51 ret=handled
 brcmf_wdog/mmc1-279     [000] d.h..   460.795988: irq_handler_entry: irq=51 name=mmc0
 brcmf_wdog/mmc1-279     [000] d.h..   460.795990: irq_handler_exit: irq=51 ret=unhandled
 brcmf_wdog/mmc1-279     [000] d.s..   460.795997: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
 brcmf_wdog/mmc1-279     [000] d....   460.796002: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=54740 [ns] vruntime=13335373748 [ns]
 brcmf_wdog/mmc1-279     [000] d....   460.796011: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=9278 [ns] vruntime=13335383026 [ns]
 brcmf_wdog/mmc1-279     [000] d....   460.796015: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=279 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   460.805924: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [003] d.h..   460.805924: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   460.805931: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [003] d.h..   460.805933: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dns..   460.805941: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] d....   460.805958: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   460.805987: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=41148 [ns] vruntime=13335672026 [ns]
     kworker/0:4-452     [000] d....   460.805991: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [003] d.h..   460.815923: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   460.815923: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   460.815930: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [003] d.h..   460.815932: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [003] dns..   460.815943: sched_wakeup: comm=rcu_sched pid=14 prio=120 target_cpu=003
          <idle>-0       [003] d....   460.815957: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=14 next_prio=120
       rcu_sched-14      [003] d....   460.815974: sched_stat_runtime: comm=rcu_sched pid=14 runtime=26408 [ns] vruntime=12224064427 [ns]
       rcu_sched-14      [003] d....   460.815977: sched_switch: prev_comm=rcu_sched prev_pid=14 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   460.825923: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [003] d.h..   460.825923: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   460.825929: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [003] d.h..   460.825933: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d.h..   460.828362: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] dnh..   460.828374: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   460.828376: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   460.828377: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] dnh..   460.828379: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d....   460.828386: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d.h..   460.828404: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   460.828408: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   460.828409: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   460.828411: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   460.828418: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   460.828423: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=51871 [ns] vruntime=13335723897 [ns]
     kworker/0:4-452     [000] d.h..   460.828443: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   460.828450: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   460.828452: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   460.828453: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   460.828460: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   460.828464: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=41685 [ns] vruntime=13335765582 [ns]
     kworker/0:4-452     [000] d.h..   460.828483: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   460.828488: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   460.828489: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   460.828491: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.h..   460.828493: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   460.828497: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   460.828498: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   460.828500: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   460.828506: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   460.828510: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=46407 [ns] vruntime=13335811989 [ns]
     kworker/0:4-452     [000] d....   460.828517: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=6704 [ns] vruntime=13335818693 [ns]
     kworker/0:4-452     [000] dn...   460.828522: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
     kworker/0:4-452     [000] d....   460.828534: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:1 next_pid=293 next_prio=100
    kworker/u9:1-293     [000] d.h..   460.828553: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   460.828557: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   460.828558: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   460.828560: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   460.828566: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   460.828571: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=53296 [ns] vruntime=13335304639 [ns]
    kworker/u9:1-293     [000] d.h..   460.828582: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   460.828586: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   460.828587: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   460.828589: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   460.828596: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   460.828600: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=29278 [ns] vruntime=13335304976 [ns]
    kworker/u9:1-293     [000] d.h..   460.828632: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   460.828642: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   460.828643: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   460.828645: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   460.828651: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   460.828656: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=55815 [ns] vruntime=13335305619 [ns]
    kworker/u9:1-293     [000] d.h..   460.828679: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   460.828687: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   460.828689: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   460.828690: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   460.828697: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   460.828701: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=45333 [ns] vruntime=13335306141 [ns]
    kworker/u9:1-293     [000] d.h..   460.828737: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   460.828748: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   460.828749: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   460.828750: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   460.828757: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   460.828761: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=60167 [ns] vruntime=13335306835 [ns]
    kworker/u9:1-293     [000] d....   460.828773: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=11500 [ns] vruntime=13335306967 [ns]
    kworker/u9:1-293     [000] d....   460.828778: sched_switch: prev_comm=kworker/u9:1 prev_pid=293 prev_prio=100 prev_state=I ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   460.828789: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=16389 [ns] vruntime=13335835082 [ns]
     kworker/0:4-452     [000] d....   460.828799: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   460.835924: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   460.835936: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dns..   460.835945: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] d....   460.835959: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   460.835976: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=24500 [ns] vruntime=13335859582 [ns]
     kworker/0:4-452     [000] d....   460.835980: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   460.845923: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   460.845933: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dns..   460.845943: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
          <idle>-0       [000] d....   460.845960: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=279 next_prio=120
 brcmf_wdog/mmc1-279     [000] d....   460.845967: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=17167 [ns] vruntime=13335400193 [ns]
 brcmf_wdog/mmc1-279     [000] d....   460.845970: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=279 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [002] d.h..   460.865924: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   460.865927: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [002] d.h..   460.865931: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d.h..   460.865933: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dns..   460.865944: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
          <idle>-0       [000] dnH..   460.865948: irq_handler_entry: irq=21 name=IPI
          <idle>-0       [000] dnH..   460.865953: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnH..   460.865956: irq_handler_exit: irq=21 ret=handled
          <idle>-0       [000] d....   460.865976: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=279 next_prio=120
 brcmf_wdog/mmc1-279     [000] d.h..   460.865997: irq_handler_entry: irq=51 name=mmc1
 brcmf_wdog/mmc1-279     [000] d.h..   460.866001: irq_handler_exit: irq=51 ret=handled
 brcmf_wdog/mmc1-279     [000] d.h..   460.866003: irq_handler_entry: irq=51 name=mmc0
 brcmf_wdog/mmc1-279     [000] d.h..   460.866005: irq_handler_exit: irq=51 ret=unhandled
 brcmf_wdog/mmc1-279     [000] d.s..   460.866012: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
 brcmf_wdog/mmc1-279     [000] d....   460.866016: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=54111 [ns] vruntime=13335454304 [ns]
 brcmf_wdog/mmc1-279     [000] d....   460.866026: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=9444 [ns] vruntime=13335463748 [ns]
 brcmf_wdog/mmc1-279     [000] d....   460.866030: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=279 prev_prio=120 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   460.866043: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=17778 [ns] vruntime=13335877360 [ns]
     kworker/0:4-452     [000] d....   460.866051: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   460.955928: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   460.955935: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dns..   460.955946: sched_wakeup: comm=kcompactd0 pid=40 prio=120 target_cpu=000
          <idle>-0       [000] d....   460.955963: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kcompactd0 next_pid=40 next_prio=120
      kcompactd0-40      [000] d....   460.955979: sched_stat_runtime: comm=kcompactd0 pid=40 runtime=27685 [ns] vruntime=13335348267 [ns]
      kcompactd0-40      [000] d....   460.955983: sched_switch: prev_comm=kcompactd0 prev_pid=40 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.193005: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   461.193018: sched_wakeup: comm=systemd-journal pid=136 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   461.193022: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dnh..   461.193024: irq_handler_entry: irq=21 name=IPI
          <idle>-0       [000] dnh..   461.193029: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   461.193031: irq_handler_exit: irq=21 ret=handled
          <idle>-0       [000] d....   461.193041: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.193052: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=24260 [ns] vruntime=13335901620 [ns]
     kworker/0:4-452     [000] d....   461.193057: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=I ==> next_comm=systemd-journal next_pid=136 next_prio=120
 systemd-journal-136     [000] d....   461.193238: sched_stat_runtime: comm=systemd-journal pid=136 runtime=185352 [ns] vruntime=355690347 [ns]
 systemd-journal-136     [000] d....   461.193253: sched_switch: prev_comm=systemd-journal prev_pid=136 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.345924: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [002] d.h..   461.345924: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [002] d.h..   461.345930: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d.h..   461.345931: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [002] dns..   461.345941: sched_wakeup: comm=kworker/2:1 pid=46 prio=120 target_cpu=002
          <idle>-0       [000] dns..   461.345943: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [002] dnH..   461.345945: irq_handler_entry: irq=21 name=IPI
          <idle>-0       [002] dnH..   461.345949: irq_handler_exit: irq=21 ret=handled
          <idle>-0       [000] d....   461.345966: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
          <idle>-0       [002] d....   461.345972: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:1 next_pid=46 next_prio=120
     kworker/2:1-46      [002] d....   461.345989: sched_stat_runtime: comm=kworker/2:1 pid=46 runtime=31834 [ns] vruntime=9804688277 [ns]
     kworker/0:4-452     [000] d.h..   461.345991: irq_handler_entry: irq=46 name=eth0
     kworker/2:1-46      [002] d....   461.345995: sched_wakeup: comm=kworker/2:2 pid=782 prio=120 target_cpu=002
     kworker/0:4-452     [000] d.h..   461.345999: sched_wakeup: comm=kworker/2:1 pid=46 prio=120 target_cpu=002
     kworker/0:4-452     [000] d.h..   461.346001: irq_handler_exit: irq=46 ret=handled
     kworker/2:1-46      [002] d....   461.346001: sched_stat_runtime: comm=kworker/2:1 pid=46 runtime=12333 [ns] vruntime=9804700610 [ns]
     kworker/2:1-46      [002] d....   461.346005: sched_switch: prev_comm=kworker/2:1 prev_pid=46 prev_prio=120 prev_state=R ==> next_comm=kworker/2:2 next_pid=782 next_prio=120
     kworker/2:2-782     [002] d....   461.346017: sched_stat_runtime: comm=kworker/2:2 pid=782 runtime=16241 [ns] vruntime=9804514855 [ns]
     kworker/2:2-782     [002] d....   461.346022: sched_switch: prev_comm=kworker/2:2 prev_pid=782 prev_prio=120 prev_state=I ==> next_comm=kworker/2:1 next_pid=46 next_prio=120
     kworker/2:1-46      [002] d....   461.346036: sched_stat_runtime: comm=kworker/2:1 pid=46 runtime=18722 [ns] vruntime=9804719332 [ns]
     kworker/0:4-452     [000] d.h..   461.346036: irq_handler_entry: irq=26 name=arch_timer
     kworker/0:4-452     [000] d.h..   461.346042: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/2:1-46      [002] d....   461.346044: sched_switch: prev_comm=kworker/2:1 prev_pid=46 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
     kworker/0:4-452     [000] d.h..   461.346045: irq_handler_exit: irq=26 ret=handled
     kworker/0:4-452     [000] d.h..   461.346047: irq_handler_entry: irq=46 name=eth0
     kworker/0:4-452     [000] d.h..   461.346051: irq_handler_exit: irq=46 ret=handled
          <idle>-0       [002] d.h..   461.346053: irq_handler_entry: irq=19 name=IPI
     kworker/0:4-452     [000] d....   461.346057: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=105593 [ns] vruntime=13336007213 [ns]
          <idle>-0       [002] dnh..   461.346058: sched_wakeup: comm=kworker/2:1 pid=46 prio=120 target_cpu=002
          <idle>-0       [002] dnh..   461.346060: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [002] d....   461.346065: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:1 next_pid=46 next_prio=120
     kworker/0:4-452     [000] d....   461.346067: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=10018 [ns] vruntime=13336017231 [ns]
     kworker/0:4-452     [000] d....   461.346073: sched_wakeup: comm=kworker/0:3 pid=162 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   461.346077: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=9611 [ns] vruntime=13336026842 [ns]
     kworker/2:1-46      [002] d....   461.346078: sched_stat_runtime: comm=kworker/2:1 pid=46 runtime=21908 [ns] vruntime=9804741240 [ns]
     kworker/0:4-452     [000] d....   461.346081: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=kworker/0:3 next_pid=162 next_prio=120
     kworker/0:3-162     [000] d.h..   461.346085: irq_handler_entry: irq=46 name=eth0
     kworker/2:1-46      [002] d....   461.346085: sched_switch: prev_comm=kworker/2:1 prev_pid=46 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
     kworker/0:3-162     [000] d.h..   461.346089: irq_handler_exit: irq=46 ret=handled
          <idle>-0       [002] d.h..   461.346090: irq_handler_entry: irq=19 name=IPI
          <idle>-0       [002] dnh..   461.346094: sched_wakeup: comm=kworker/2:1 pid=46 prio=120 target_cpu=002
          <idle>-0       [002] dnh..   461.346096: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [002] d....   461.346101: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:1 next_pid=46 next_prio=120
     kworker/2:1-46      [002] d....   461.346114: sched_stat_runtime: comm=kworker/2:1 pid=46 runtime=21185 [ns] vruntime=9804762425 [ns]
     kworker/2:1-46      [002] d....   461.346117: sched_switch: prev_comm=kworker/2:1 prev_pid=46 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
     kworker/0:3-162     [000] d.h..   461.346118: irq_handler_entry: irq=46 name=eth0
     kworker/0:3-162     [000] d.h..   461.346122: irq_handler_exit: irq=46 ret=handled
     kworker/0:3-162     [000] d....   461.346127: sched_stat_runtime: comm=kworker/0:3 pid=162 runtime=50408 [ns] vruntime=13344347675 [ns]
          <idle>-0       [002] d.h..   461.346128: irq_handler_entry: irq=19 name=IPI
     kworker/0:3-162     [000] d....   461.346132: sched_switch: prev_comm=kworker/0:3 prev_pid=162 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [002] dnh..   461.346132: sched_wakeup: comm=kworker/2:1 pid=46 prio=120 target_cpu=002
          <idle>-0       [002] dnh..   461.346134: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [002] d....   461.346142: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:1 next_pid=46 next_prio=120
     kworker/2:1-46      [002] d....   461.346156: sched_stat_runtime: comm=kworker/2:1 pid=46 runtime=25240 [ns] vruntime=9804787665 [ns]
     kworker/2:1-46      [002] d....   461.346159: sched_switch: prev_comm=kworker/2:1 prev_pid=46 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.346159: irq_handler_entry: irq=46 name=eth0
          <idle>-0       [000] d.h..   461.346163: irq_handler_exit: irq=46 ret=handled
          <idle>-0       [002] d.h..   461.346169: irq_handler_entry: irq=19 name=IPI
          <idle>-0       [002] dnh..   461.346173: sched_wakeup: comm=kworker/2:1 pid=46 prio=120 target_cpu=002
          <idle>-0       [002] dnh..   461.346174: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [002] d....   461.346182: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:1 next_pid=46 next_prio=120
     kworker/2:1-46      [002] d....   461.346195: sched_stat_runtime: comm=kworker/2:1 pid=46 runtime=24703 [ns] vruntime=9804812368 [ns]
     kworker/2:1-46      [002] d....   461.346200: sched_switch: prev_comm=kworker/2:1 prev_pid=46 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.346374: irq_handler_entry: irq=29 name=fe00b880.mailbox
          <idle>-0       [000] dnh..   461.346380: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   461.346382: irq_handler_exit: irq=29 ret=handled
          <idle>-0       [000] d....   461.346388: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.346512: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=134815 [ns] vruntime=13336161657 [ns]
     kworker/0:4-452     [000] d....   461.346516: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.352009: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   461.352016: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   461.352019: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   461.352024: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.352032: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=18963 [ns] vruntime=13336180620 [ns]
     kworker/0:4-452     [000] d....   461.352035: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.355918: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   461.355928: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d.h..   461.364530: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   461.364537: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   461.364540: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   461.364549: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.364616: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=81389 [ns] vruntime=13336262009 [ns]
     kworker/0:4-452     [000] d....   461.364619: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.377117: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   461.377123: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   461.377126: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   461.377135: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.377185: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=64963 [ns] vruntime=13336326972 [ns]
     kworker/0:4-452     [000] d....   461.377189: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.377469: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   461.377471: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   461.377472: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   461.377487: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   461.377507: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] dnh..   461.377511: irq_handler_entry: irq=21 name=IPI
          <idle>-0       [001] d.h..   461.377527: irq_handler_entry: irq=19 name=IPI
          <idle>-0       [000] dnh..   461.377531: sched_wakeup: comm=systemd-journal pid=136 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   461.377534: irq_handler_exit: irq=21 ret=handled
          <idle>-0       [001] dnh..   461.377537: sched_wakeup: comm=in:imklog pid=467 prio=120 target_cpu=001
          <idle>-0       [001] dnh..   461.377539: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [000] d....   461.377548: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
          <idle>-0       [001] d....   461.377550: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=in:imklog next_pid=467 next_prio=120
     irq/51-mmc0-94      [000] d....   461.377618: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   461.377626: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=98982 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   461.377634: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
       in:imklog-467     [001] d....   461.377647: sched_stat_runtime: comm=in:imklog pid=467 runtime=115463 [ns] vruntime=16803761 [ns]
       in:imklog-467     [001] d....   461.377654: sched_wakeup: comm=rs:main Q:Reg pid=469 prio=120 target_cpu=001
       in:imklog-467     [001] d....   461.377669: sched_stat_runtime: comm=in:imklog pid=467 runtime=22815 [ns] vruntime=16826576 [ns]
       in:imklog-467     [001] d....   461.377676: sched_switch: prev_comm=in:imklog prev_pid=467 prev_prio=120 prev_state=S ==> next_comm=rs:main Q:Reg next_pid=469 next_prio=120
     kworker/0:4-452     [000] d....   461.377680: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=54703 [ns] vruntime=13336381675 [ns]
     kworker/0:4-452     [000] d....   461.377685: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=systemd-journal next_pid=136 next_prio=120
   rs:main Q:Reg-469     [001] d....   461.377847: sched_stat_runtime: comm=rs:main Q:Reg pid=469 runtime=176500 [ns] vruntime=25864798 [ns]
   rs:main Q:Reg-469     [001] d....   461.377863: sched_switch: prev_comm=rs:main Q:Reg prev_pid=469 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
 systemd-journal-136     [000] d.h..   461.377965: irq_handler_entry: irq=51 name=mmc1
 systemd-journal-136     [000] d.h..   461.377968: irq_handler_exit: irq=51 ret=unhandled
 systemd-journal-136     [000] d.h..   461.377969: irq_handler_entry: irq=51 name=mmc0
 systemd-journal-136     [000] d.h..   461.377984: irq_handler_exit: irq=51 ret=handled
 systemd-journal-136     [000] dnh..   461.377992: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
 systemd-journal-136     [000] dn...   461.377998: sched_stat_runtime: comm=systemd-journal pid=136 runtime=307963 [ns] vruntime=355998310 [ns]
 systemd-journal-136     [000] d....   461.378004: sched_switch: prev_comm=systemd-journal prev_pid=136 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   461.378072: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   461.378079: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=91278 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   461.378086: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.378200: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=120778 [ns] vruntime=13336502453 [ns]
     kworker/0:4-452     [000] d....   461.378205: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=systemd-journal next_pid=136 next_prio=120
 systemd-journal-136     [000] d....   461.378305: sched_stat_runtime: comm=systemd-journal pid=136 runtime=104333 [ns] vruntime=356102643 [ns]
 systemd-journal-136     [000] d....   461.378318: sched_switch: prev_comm=systemd-journal prev_pid=136 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.379448: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   461.379456: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   461.379460: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   461.379466: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.379513: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=60186 [ns] vruntime=13336562639 [ns]
     kworker/0:4-452     [000] d....   461.379517: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.379635: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   461.379637: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   461.379638: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] dnh..   461.379668: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   461.379671: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] d....   461.379678: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.379687: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=20852 [ns] vruntime=13336583491 [ns]
     kworker/0:4-452     [000] d....   461.379690: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.380934: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   461.380940: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   461.380942: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   461.380948: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.381057: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=119963 [ns] vruntime=13336703454 [ns]
     kworker/0:4-452     [000] d....   461.381060: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.382305: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   461.382310: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   461.382313: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   461.382319: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.382363: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=54981 [ns] vruntime=13336758435 [ns]
     kworker/0:4-452     [000] d....   461.382366: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.382646: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   461.382648: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   461.382649: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   461.382663: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   461.382668: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   461.382676: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   461.382741: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   461.382748: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=82833 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   461.382754: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.382798: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=50185 [ns] vruntime=13336808620 [ns]
     kworker/0:4-452     [000] d....   461.382808: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.383084: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   461.383086: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   461.383087: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   461.383100: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   461.383105: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   461.383112: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   461.383164: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   461.383171: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=68260 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   461.383176: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.383207: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=35629 [ns] vruntime=13336844249 [ns]
     kworker/0:4-452     [000] d....   461.383214: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.383491: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   461.383493: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   461.383494: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   461.383508: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   461.383512: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   461.383519: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   461.383570: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   461.383577: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=66945 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   461.383581: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.383612: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=35000 [ns] vruntime=13336879249 [ns]
     kworker/0:4-452     [000] d....   461.383619: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.383896: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   461.383898: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   461.383899: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   461.383913: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   461.383917: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   461.383924: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   461.383976: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   461.383982: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=67519 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   461.383987: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.384018: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=35444 [ns] vruntime=13336914693 [ns]
     kworker/0:4-452     [000] d....   461.384026: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.384301: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   461.384303: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   461.384304: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   461.384319: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   461.384324: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   461.384330: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   461.384394: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   461.384401: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=79500 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   461.384406: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.384452: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=49814 [ns] vruntime=13336964507 [ns]
     kworker/0:4-452     [000] d....   461.384459: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.384736: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   461.384738: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   461.384739: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   461.384753: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   461.384757: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   461.384764: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   461.384828: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   461.384835: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=79685 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   461.384840: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.384884: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=48926 [ns] vruntime=13337013433 [ns]
     kworker/0:4-452     [000] d....   461.384892: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.385169: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   461.385171: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   461.385172: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   461.385185: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   461.385189: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   461.385196: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   461.385260: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   461.385267: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=79092 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   461.385271: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.385315: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=47945 [ns] vruntime=13337061378 [ns]
     kworker/0:4-452     [000] d....   461.385322: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.385599: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   461.385601: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   461.385602: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   461.385615: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   461.385619: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   461.385626: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   461.385690: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   461.385696: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=79037 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   461.385701: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.385745: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=47870 [ns] vruntime=13337109248 [ns]
     kworker/0:4-452     [000] d....   461.385752: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.385918: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   461.385929: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [003] d.h..   461.385946: irq_handler_entry: irq=19 name=IPI
          <idle>-0       [003] dnh..   461.385953: sched_wakeup: comm=rcu_sched pid=14 prio=120 target_cpu=003
          <idle>-0       [003] dnh..   461.385955: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [003] d....   461.385965: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=14 next_prio=120
       rcu_sched-14      [003] d....   461.385980: sched_stat_runtime: comm=rcu_sched pid=14 runtime=30334 [ns] vruntime=12224094761 [ns]
       rcu_sched-14      [003] d....   461.385984: sched_switch: prev_comm=rcu_sched prev_pid=14 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.386029: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   461.386031: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   461.386032: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   461.386046: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   461.386051: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   461.386057: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   461.386122: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   461.386129: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=80907 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   461.386134: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.386283: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=153537 [ns] vruntime=13337262785 [ns]
     kworker/0:4-452     [000] d....   461.386291: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.386568: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   461.386570: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   461.386571: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   461.386584: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   461.386589: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   461.386595: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   461.386659: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   461.386666: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=79592 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   461.386671: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d.h..   461.386763: irq_handler_entry: irq=26 name=arch_timer
     kworker/0:4-452     [000] d.h..   461.386769: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d.h..   461.386772: irq_handler_exit: irq=26 ret=handled
     kworker/0:4-452     [000] d....   461.386777: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=110371 [ns] vruntime=13337373156 [ns]
     kworker/0:4-452     [000] d....   461.386786: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=9611 [ns] vruntime=13337382767 [ns]
     kworker/0:4-452     [000] d....   461.386795: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.388555: irq_handler_entry: irq=29 name=fe00b880.mailbox
          <idle>-0       [000] dnh..   461.388562: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   461.388564: irq_handler_exit: irq=29 ret=handled
          <idle>-0       [000] d....   461.388571: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.388663: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=103648 [ns] vruntime=13337486415 [ns]
     kworker/0:4-452     [000] d....   461.388666: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.389909: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   461.389915: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   461.389918: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   461.389924: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d.h..   461.389955: irq_handler_entry: irq=26 name=arch_timer
     kworker/0:4-452     [000] d.h..   461.389960: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d.h..   461.389962: irq_handler_exit: irq=26 ret=handled
     kworker/0:4-452     [000] d....   461.389967: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=54241 [ns] vruntime=13337540656 [ns]
     kworker/0:4-452     [000] d....   461.389976: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=9055 [ns] vruntime=13337549711 [ns]
     kworker/0:4-452     [000] d....   461.389980: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.390278: irq_handler_entry: irq=29 name=fe00b880.mailbox
          <idle>-0       [000] dnh..   461.390284: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   461.390286: irq_handler_exit: irq=29 ret=handled
          <idle>-0       [000] d....   461.390292: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.390410: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=128000 [ns] vruntime=13337677711 [ns]
     kworker/0:4-452     [000] d....   461.390413: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.395907: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   461.395913: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   461.395930: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [001] d.h..   461.395931: irq_handler_entry: irq=19 name=IPI
          <idle>-0       [001] d.h..   461.395934: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [000] d....   461.395944: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.395954: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=19426 [ns] vruntime=13337697137 [ns]
     kworker/0:4-452     [000] d....   461.395958: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.405918: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [003] d.h..   461.405921: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   461.405926: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [003] d.h..   461.405929: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [003] dns..   461.405939: sched_wakeup: comm=rcu_sched pid=14 prio=120 target_cpu=003
          <idle>-0       [003] d....   461.405959: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=14 next_prio=120
       rcu_sched-14      [003] d....   461.405976: sched_stat_runtime: comm=rcu_sched pid=14 runtime=31963 [ns] vruntime=12224126724 [ns]
       rcu_sched-14      [003] d....   461.405979: sched_switch: prev_comm=rcu_sched prev_pid=14 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.408450: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   461.408457: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   461.408460: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   461.408465: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.408536: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=81982 [ns] vruntime=13337779119 [ns]
     kworker/0:4-452     [000] d....   461.408539: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.415917: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   461.415927: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d.h..   461.421034: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   461.421041: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   461.421044: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   461.421053: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.421111: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=73593 [ns] vruntime=13337852712 [ns]
     kworker/0:4-452     [000] d....   461.421115: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.421493: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   461.421495: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   461.421496: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   461.421514: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   461.421519: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   461.421530: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   461.421608: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   461.421615: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=98926 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   461.421621: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.421677: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=61685 [ns] vruntime=13337914397 [ns]
     kworker/0:4-452     [000] d....   461.421686: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.422058: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   461.422059: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   461.422061: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   461.422078: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   461.422082: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   461.422093: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   461.422169: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   461.422176: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=95871 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   461.422181: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.422326: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=149296 [ns] vruntime=13338063693 [ns]
     kworker/0:4-452     [000] d....   461.422334: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.423573: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   461.423580: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   461.423583: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   461.423592: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.423648: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=71093 [ns] vruntime=13338134786 [ns]
     kworker/0:4-452     [000] d....   461.423656: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.423814: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   461.423815: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   461.423817: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] dnh..   461.423855: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   461.423857: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] d....   461.423866: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.423875: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=22907 [ns] vruntime=13338157693 [ns]
     kworker/0:4-452     [000] d....   461.423878: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.425123: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   461.425129: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   461.425131: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   461.425140: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.425281: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=155519 [ns] vruntime=13338313212 [ns]
     kworker/0:4-452     [000] d....   461.425285: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [002] d.h..   461.425922: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [002] d.h..   461.425930: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [002] dns..   461.425940: sched_wakeup: comm=kworker/2:1 pid=46 prio=120 target_cpu=002
          <idle>-0       [002] d....   461.425959: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:1 next_pid=46 next_prio=120
     kworker/2:1-46      [002] d....   461.425976: sched_stat_runtime: comm=kworker/2:1 pid=46 runtime=31833 [ns] vruntime=9804844201 [ns]
     kworker/2:1-46      [002] d....   461.425980: sched_switch: prev_comm=kworker/2:1 prev_pid=46 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.426530: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   461.426535: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   461.426538: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   461.426547: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.426602: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=69519 [ns] vruntime=13338382731 [ns]
     kworker/0:4-452     [000] d....   461.426606: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.426981: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   461.426983: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   461.426985: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   461.427002: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   461.427006: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   461.427017: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   461.427094: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   461.427101: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=97037 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   461.427107: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.427163: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=61389 [ns] vruntime=13338444120 [ns]
     kworker/0:4-452     [000] d....   461.427172: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.427542: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   461.427544: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   461.427545: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   461.427563: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   461.427567: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   461.427577: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   461.427637: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   461.427644: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=78815 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   461.427649: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.427688: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=43593 [ns] vruntime=13338487713 [ns]
     kworker/0:4-452     [000] d....   461.427695: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.428067: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   461.428068: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   461.428070: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   461.428087: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   461.428091: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   461.428102: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   461.428162: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   461.428169: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=79834 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   461.428176: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.428215: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=45740 [ns] vruntime=13338533453 [ns]
     kworker/0:4-452     [000] d....   461.428224: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.428594: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   461.428596: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   461.428597: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   461.428615: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   461.428620: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   461.428629: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   461.428689: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   461.428696: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=78111 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   461.428701: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.428740: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=43592 [ns] vruntime=13338577045 [ns]
     kworker/0:4-452     [000] d....   461.428747: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.429119: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   461.429120: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   461.429122: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   461.429139: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   461.429143: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   461.429154: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   461.429231: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   461.429238: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=96445 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   461.429243: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.429300: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=61759 [ns] vruntime=13338638804 [ns]
     kworker/0:4-452     [000] d....   461.429308: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.429680: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   461.429682: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   461.429683: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   461.429700: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   461.429705: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   461.429715: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   461.429791: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   461.429798: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=95537 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   461.429803: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.429859: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=60760 [ns] vruntime=13338699564 [ns]
     kworker/0:4-452     [000] d....   461.429867: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.430241: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   461.430243: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   461.430244: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   461.430261: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   461.430266: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   461.430276: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   461.430353: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   461.430360: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=96371 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   461.430365: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.430421: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=60629 [ns] vruntime=13338760193 [ns]
     kworker/0:4-452     [000] d....   461.430429: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.430802: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   461.430804: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   461.430805: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   461.430822: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   461.430827: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   461.430837: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   461.430913: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   461.430920: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=95407 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   461.430925: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.430981: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=60519 [ns] vruntime=13338820712 [ns]
     kworker/0:4-452     [000] d....   461.430988: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.431360: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   461.431362: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   461.431363: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   461.431380: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   461.431384: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   461.431395: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   461.431472: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   461.431479: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=96815 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   461.431484: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.431676: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=196704 [ns] vruntime=13339017416 [ns]
     kworker/0:4-452     [000] d....   461.431685: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.432058: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   461.432059: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   461.432061: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   461.432078: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   461.432083: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   461.432093: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   461.432170: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   461.432177: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=96648 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   461.432183: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d.h..   461.432276: irq_handler_entry: irq=26 name=arch_timer
     kworker/0:4-452     [000] d.h..   461.432281: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d.h..   461.432284: irq_handler_exit: irq=26 ret=handled
     kworker/0:4-452     [000] d....   461.432289: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=111260 [ns] vruntime=13339128676 [ns]
     kworker/0:4-452     [000] d....   461.432298: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=9296 [ns] vruntime=13339137972 [ns]
     kworker/0:4-452     [000] d....   461.432307: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.432604: irq_handler_entry: irq=29 name=fe00b880.mailbox
          <idle>-0       [000] dnh..   461.432610: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   461.432612: irq_handler_exit: irq=29 ret=handled
          <idle>-0       [000] d....   461.432622: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.432712: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=104685 [ns] vruntime=13339242657 [ns]
     kworker/0:4-452     [000] d....   461.432716: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.433960: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   461.433966: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   461.433969: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   461.433977: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d.h..   461.434010: irq_handler_entry: irq=26 name=arch_timer
     kworker/0:4-452     [000] d.h..   461.434015: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d.h..   461.434018: irq_handler_exit: irq=26 ret=handled
     kworker/0:4-452     [000] d....   461.434022: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=59241 [ns] vruntime=13339301898 [ns]
     kworker/0:4-452     [000] d....   461.434032: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=9296 [ns] vruntime=13339311194 [ns]
     kworker/0:4-452     [000] d....   461.434035: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.434333: irq_handler_entry: irq=29 name=fe00b880.mailbox
          <idle>-0       [000] dnh..   461.434339: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   461.434342: irq_handler_exit: irq=29 ret=handled
          <idle>-0       [000] d....   461.434351: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.434466: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=129185 [ns] vruntime=13339440379 [ns]
     kworker/0:4-452     [000] d....   461.434469: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.439967: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   461.439974: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   461.439977: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   461.439986: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.439993: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=22575 [ns] vruntime=13339462954 [ns]
     kworker/0:4-452     [000] d....   461.439996: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.452494: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   461.452501: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   461.452504: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dnh..   461.452506: irq_handler_entry: irq=21 name=IPI
          <idle>-0       [000] dnh..   461.452512: sched_wakeup: comm=kworker/0:3 pid=162 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   461.452514: irq_handler_exit: irq=21 ret=handled
          <idle>-0       [000] d....   461.452523: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.452601: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=90685 [ns] vruntime=13339553639 [ns]
     kworker/0:4-452     [000] d....   461.452605: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=kworker/0:3 next_pid=162 next_prio=120
     kworker/0:3-162     [000] d.h..   461.452648: irq_handler_entry: irq=26 name=arch_timer
     kworker/0:3-162     [000] d.h..   461.452654: sched_wakeup: comm=kworker/0:3 pid=162 prio=120 target_cpu=000
     kworker/0:3-162     [000] d.h..   461.452656: irq_handler_exit: irq=26 ret=handled
     kworker/0:3-162     [000] d....   461.452662: sched_stat_runtime: comm=kworker/0:3 pid=162 runtime=60352 [ns] vruntime=13344408027 [ns]
     kworker/0:3-162     [000] d....   461.452671: sched_stat_runtime: comm=kworker/0:3 pid=162 runtime=9278 [ns] vruntime=13344417305 [ns]
     kworker/0:3-162     [000] d....   461.452681: sched_switch: prev_comm=kworker/0:3 prev_pid=162 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.455978: irq_handler_entry: irq=29 name=fe00b880.mailbox
          <idle>-0       [000] dnh..   461.455983: sched_wakeup: comm=kworker/0:3 pid=162 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   461.455985: irq_handler_exit: irq=29 ret=handled
          <idle>-0       [000] d....   461.455993: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:3 next_pid=162 next_prio=120
     kworker/0:3-162     [000] d.h..   461.456010: irq_handler_entry: irq=26 name=arch_timer
     kworker/0:3-162     [000] d.h..   461.456014: sched_wakeup: comm=kworker/0:3 pid=162 prio=120 target_cpu=000
     kworker/0:3-162     [000] d.h..   461.456017: irq_handler_exit: irq=26 ret=handled
     kworker/0:3-162     [000] d....   461.456021: sched_stat_runtime: comm=kworker/0:3 pid=162 runtime=39777 [ns] vruntime=13344457082 [ns]
     kworker/0:3-162     [000] d....   461.456028: sched_stat_runtime: comm=kworker/0:3 pid=162 runtime=8000 [ns] vruntime=13344465082 [ns]
     kworker/0:3-162     [000] d....   461.456032: sched_switch: prev_comm=kworker/0:3 prev_pid=162 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.456035: irq_handler_entry: irq=29 name=fe00b880.mailbox
          <idle>-0       [000] dnh..   461.456039: sched_wakeup: comm=kworker/0:3 pid=162 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   461.456041: irq_handler_exit: irq=29 ret=handled
          <idle>-0       [000] d....   461.456045: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:3 next_pid=162 next_prio=120
     kworker/0:3-162     [000] d....   461.456059: sched_stat_runtime: comm=kworker/0:3 pid=162 runtime=21852 [ns] vruntime=13344486934 [ns]
     kworker/0:3-162     [000] d....   461.456062: sched_switch: prev_comm=kworker/0:3 prev_pid=162 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.465098: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   461.465103: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   461.465106: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   461.465111: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.465184: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=82611 [ns] vruntime=13339636250 [ns]
     kworker/0:4-452     [000] d....   461.465187: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.465754: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   461.465756: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   461.465757: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   461.465780: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   461.465785: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   461.465791: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   461.465863: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   461.465869: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=86833 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   461.465874: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d.h..   461.465944: irq_handler_entry: irq=26 name=arch_timer
     kworker/0:4-452     [000] d.h..   461.465953: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=83167 [ns] vruntime=13339719417 [ns]
     kworker/0:4-452     [000] d.h..   461.465959: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [001] d.h..   461.465959: irq_handler_entry: irq=19 name=IPI
          <idle>-0       [001] d.h..   461.465960: irq_handler_exit: irq=19 ret=handled
     kworker/0:4-452     [000] d.s..   461.465965: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=12111 [ns] vruntime=13339731528 [ns]
     kworker/0:4-452     [000] dns..   461.465969: sched_wakeup: comm=kcompactd0 pid=40 prio=120 target_cpu=000
     kworker/0:4-452     [000] dn...   461.465978: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=8704 [ns] vruntime=13339740232 [ns]
     kworker/0:4-452     [000] d....   461.465982: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=R+ ==> next_comm=kcompactd0 next_pid=40 next_prio=120
      kcompactd0-40      [000] d....   461.465992: sched_stat_runtime: comm=kcompactd0 pid=40 runtime=18889 [ns] vruntime=13335505823 [ns]
      kcompactd0-40      [000] d....   461.465996: sched_switch: prev_comm=kcompactd0 prev_pid=40 prev_prio=120 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.466001: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=8555 [ns] vruntime=13339748787 [ns]
     kworker/0:4-452     [000] d....   461.466008: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.466515: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   461.466517: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   461.466518: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   461.466541: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   461.466545: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   461.466554: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   461.466627: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   461.466633: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=89963 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   461.466638: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.466818: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=185000 [ns] vruntime=13339933787 [ns]
     kworker/0:4-452     [000] d....   461.466826: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.468066: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   461.468072: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   461.468075: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   461.468082: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.468154: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=84796 [ns] vruntime=13340018583 [ns]
     kworker/0:4-452     [000] d....   461.468157: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.468400: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   461.468403: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   461.468404: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] dnh..   461.468453: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   461.468455: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] d....   461.468463: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.468470: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=19204 [ns] vruntime=13340037787 [ns]
     kworker/0:4-452     [000] d....   461.468473: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.469718: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   461.469723: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   461.469726: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   461.469733: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.469910: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=189315 [ns] vruntime=13340227102 [ns]
     kworker/0:4-452     [000] d....   461.469913: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.471158: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   461.471163: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   461.471166: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   461.471172: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.471244: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=83260 [ns] vruntime=13340310362 [ns]
     kworker/0:4-452     [000] d....   461.471247: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.471813: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   461.471815: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   461.471816: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   461.471839: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   461.471843: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   461.471851: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   461.471923: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   461.471929: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=88315 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   461.471934: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.472006: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=76481 [ns] vruntime=13340386843 [ns]
     kworker/0:4-452     [000] d....   461.472013: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.472578: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   461.472580: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   461.472584: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   461.472607: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   461.472611: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   461.472619: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   461.472668: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   461.472674: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=64926 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   461.472679: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.472728: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=53407 [ns] vruntime=13340440250 [ns]
     kworker/0:4-452     [000] d....   461.472734: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.473298: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   461.473300: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   461.473301: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   461.473324: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   461.473327: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   461.473336: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   461.473385: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   461.473391: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=65556 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   461.473396: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.473445: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=53481 [ns] vruntime=13340493731 [ns]
     kworker/0:4-452     [000] d....   461.473452: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.474018: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   461.474020: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   461.474021: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   461.474044: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   461.474048: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   461.474056: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   461.474105: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   461.474111: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=65371 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   461.474115: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.474165: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=53166 [ns] vruntime=13340546897 [ns]
     kworker/0:4-452     [000] d....   461.474171: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.474738: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   461.474740: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   461.474741: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   461.474764: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   461.474768: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   461.474776: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   461.474847: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   461.474853: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=87000 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   461.474857: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.474930: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=76796 [ns] vruntime=13340623693 [ns]
     kworker/0:4-452     [000] d....   461.474936: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.475503: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   461.475505: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   461.475506: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   461.475529: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   461.475532: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   461.475541: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   461.475613: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   461.475619: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=87944 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   461.475623: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.475695: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=76167 [ns] vruntime=13340699860 [ns]
     kworker/0:4-452     [000] d....   461.475702: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.476271: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   461.476272: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   461.476274: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   461.476297: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   461.476301: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   461.476309: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   461.476382: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   461.476387: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=88556 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   461.476392: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.476464: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=76685 [ns] vruntime=13340776545 [ns]
     kworker/0:4-452     [000] d....   461.476473: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.477033: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   461.477035: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   461.477036: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   461.477059: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   461.477063: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   461.477071: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   461.477143: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   461.477149: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=87741 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   461.477153: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.477225: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=76222 [ns] vruntime=13340852767 [ns]
     kworker/0:4-452     [000] d....   461.477232: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.477798: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   461.477800: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   461.477801: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   461.477824: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   461.477828: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   461.477836: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   461.477907: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   461.477913: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=86796 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   461.477917: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.478161: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=248371 [ns] vruntime=13341101138 [ns]
     kworker/0:4-452     [000] d....   461.478168: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.478734: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   461.478735: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   461.478736: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   461.478759: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   461.478763: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   461.478771: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   461.478843: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   461.478849: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=88000 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   461.478854: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d.h..   461.478945: irq_handler_entry: irq=26 name=arch_timer
     kworker/0:4-452     [000] d.h..   461.478949: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d.h..   461.478952: irq_handler_exit: irq=26 ret=handled
     kworker/0:4-452     [000] d....   461.478956: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=106556 [ns] vruntime=13341207694 [ns]
     kworker/0:4-452     [000] d....   461.478964: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=7889 [ns] vruntime=13341215583 [ns]
     kworker/0:4-452     [000] d....   461.478972: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.479274: irq_handler_entry: irq=29 name=fe00b880.mailbox
          <idle>-0       [000] dnh..   461.479279: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   461.479281: irq_handler_exit: irq=29 ret=handled
          <idle>-0       [000] d....   461.479289: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.479377: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=100315 [ns] vruntime=13341315898 [ns]
     kworker/0:4-452     [000] d....   461.479380: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.480625: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   461.480630: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   461.480632: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   461.480639: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.480650: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=22593 [ns] vruntime=13341338491 [ns]
     kworker/0:4-452     [000] d....   461.480653: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [003] d.h..   461.505920: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [003] d.h..   461.505926: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [003] dns..   461.505936: sched_wakeup: comm=kworker/3:0 pid=30 prio=120 target_cpu=003
          <idle>-0       [003] d....   461.505950: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:0 next_pid=30 next_prio=120
     kworker/3:0-30      [003] d.h..   461.505968: irq_handler_entry: irq=26 name=arch_timer
     kworker/3:0-30      [003] d.h..   461.505973: sched_wakeup: comm=kworker/3:0 pid=30 prio=120 target_cpu=003
     kworker/3:0-30      [003] d.h..   461.505975: irq_handler_exit: irq=26 ret=handled
     kworker/3:0-30      [003] d....   461.505980: sched_stat_runtime: comm=kworker/3:0 pid=30 runtime=40111 [ns] vruntime=12224042296 [ns]
          <idle>-0       [000] d.h..   461.505987: irq_handler_entry: irq=29 name=fe00b880.mailbox
     kworker/3:0-30      [003] d....   461.505988: sched_stat_runtime: comm=kworker/3:0 pid=30 runtime=8704 [ns] vruntime=12224051000 [ns]
          <idle>-0       [000] d.h..   461.505991: irq_handler_exit: irq=29 ret=handled
     kworker/3:0-30      [003] d....   461.505992: sched_switch: prev_comm=kworker/3:0 prev_pid=30 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h..   461.505996: irq_handler_entry: irq=19 name=IPI
          <idle>-0       [003] dnh..   461.506000: sched_wakeup: comm=kworker/3:0 pid=30 prio=120 target_cpu=003
          <idle>-0       [003] dnh..   461.506001: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [003] d....   461.506004: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:0 next_pid=30 next_prio=120
     kworker/3:0-30      [003] d....   461.506016: sched_stat_runtime: comm=kworker/3:0 pid=30 runtime=18314 [ns] vruntime=12224069314 [ns]
     kworker/3:0-30      [003] d....   461.506019: sched_switch: prev_comm=kworker/3:0 prev_pid=30 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h..   461.571168: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [003] dnh..   461.571178: sched_wakeup: comm=thd pid=393 prio=120 target_cpu=003
          <idle>-0       [003] dnh..   461.571181: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [003] dnh..   461.571182: irq_handler_entry: irq=21 name=IPI
          <idle>-0       [003] dnh..   461.571187: sched_wakeup: comm=kworker/3:0 pid=30 prio=120 target_cpu=003
          <idle>-0       [003] dnh..   461.571189: irq_handler_exit: irq=21 ret=handled
          <idle>-0       [003] d....   461.571198: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=thd next_pid=393 next_prio=120
             thd-393     [003] d....   461.571229: sched_stat_runtime: comm=thd pid=393 runtime=42500 [ns] vruntime=4955910 [ns]
             thd-393     [003] d....   461.571236: sched_switch: prev_comm=thd prev_pid=393 prev_prio=120 prev_state=S ==> next_comm=kworker/3:0 next_pid=30 next_prio=120
     kworker/3:0-30      [003] d.h..   461.571263: irq_handler_entry: irq=26 name=arch_timer
     kworker/3:0-30      [003] d.h..   461.571268: sched_wakeup: comm=kworker/3:0 pid=30 prio=120 target_cpu=003
     kworker/3:0-30      [003] d.h..   461.571270: irq_handler_exit: irq=26 ret=handled
     kworker/3:0-30      [003] d....   461.571275: sched_stat_runtime: comm=kworker/3:0 pid=30 runtime=46352 [ns] vruntime=12224115666 [ns]
     kworker/3:0-30      [003] d....   461.571283: sched_stat_runtime: comm=kworker/3:0 pid=30 runtime=8259 [ns] vruntime=12224123925 [ns]
     kworker/3:0-30      [003] d....   461.571292: sched_switch: prev_comm=kworker/3:0 prev_pid=30 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.574427: irq_handler_entry: irq=29 name=fe00b880.mailbox
          <idle>-0       [000] d.h..   461.574431: irq_handler_exit: irq=29 ret=handled
          <idle>-0       [003] d.h..   461.574433: irq_handler_entry: irq=19 name=IPI
          <idle>-0       [003] dnh..   461.574438: sched_wakeup: comm=kworker/3:0 pid=30 prio=120 target_cpu=003
          <idle>-0       [003] dnh..   461.574440: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [003] d....   461.574449: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:0 next_pid=30 next_prio=120
     kworker/3:0-30      [003] d.h..   461.574470: irq_handler_entry: irq=26 name=arch_timer
     kworker/3:0-30      [003] d.h..   461.574475: sched_wakeup: comm=kworker/3:0 pid=30 prio=120 target_cpu=003
     kworker/3:0-30      [003] d.h..   461.574477: irq_handler_exit: irq=26 ret=handled
     kworker/3:0-30      [003] d....   461.574482: sched_stat_runtime: comm=kworker/3:0 pid=30 runtime=46407 [ns] vruntime=12224170332 [ns]
     kworker/3:0-30      [003] d....   461.574491: sched_stat_runtime: comm=kworker/3:0 pid=30 runtime=9074 [ns] vruntime=12224179406 [ns]
          <idle>-0       [000] d.h..   461.574491: irq_handler_entry: irq=29 name=fe00b880.mailbox
          <idle>-0       [000] d.h..   461.574495: irq_handler_exit: irq=29 ret=handled
     kworker/3:0-30      [003] d....   461.574495: sched_switch: prev_comm=kworker/3:0 prev_pid=30 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h..   461.574499: irq_handler_entry: irq=19 name=IPI
          <idle>-0       [003] dnh..   461.574503: sched_wakeup: comm=kworker/3:0 pid=30 prio=120 target_cpu=003
          <idle>-0       [003] dnh..   461.574504: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [003] d....   461.574508: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:0 next_pid=30 next_prio=120
     kworker/3:0-30      [003] d....   461.574525: sched_stat_runtime: comm=kworker/3:0 pid=30 runtime=24056 [ns] vruntime=12224203462 [ns]
     kworker/3:0-30      [003] d....   461.574528: sched_switch: prev_comm=kworker/3:0 prev_pid=30 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.691611: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] dnh..   461.691623: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   461.691625: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   461.691627: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] dnh..   461.691629: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] dnh..   461.691631: irq_handler_entry: irq=21 name=IPI
          <idle>-0       [000] dnh..   461.691634: irq_handler_exit: irq=21 ret=handled
          <idle>-0       [000] d....   461.691643: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d.h..   461.691664: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   461.691668: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   461.691669: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   461.691671: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   461.691679: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   461.691684: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=64445 [ns] vruntime=13341402936 [ns]
     kworker/0:4-452     [000] d.h..   461.691707: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   461.691715: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   461.691716: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   461.691718: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   461.691724: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   461.691729: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=45259 [ns] vruntime=13341448195 [ns]
     kworker/0:4-452     [000] d.h..   461.691748: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   461.691753: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   461.691754: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   461.691756: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.h..   461.691758: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   461.691762: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   461.691763: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   461.691764: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   461.691771: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   461.691775: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=46370 [ns] vruntime=13341494565 [ns]
     kworker/0:4-452     [000] d....   461.691783: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=8297 [ns] vruntime=13341502862 [ns]
     kworker/0:4-452     [000] dn...   461.691789: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
     kworker/0:4-452     [000] d....   461.691801: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:1 next_pid=293 next_prio=100
    kworker/u9:1-293     [000] d.h..   461.691821: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   461.691826: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   461.691827: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   461.691829: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   461.691836: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   461.691840: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=56463 [ns] vruntime=13335487585 [ns]
    kworker/u9:1-293     [000] d.h..   461.691852: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   461.691856: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   461.691857: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   461.691859: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   461.691866: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   461.691870: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=30314 [ns] vruntime=13335487934 [ns]
    kworker/u9:1-293     [000] d.h..   461.691905: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   461.691916: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   461.691917: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   461.691919: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   461.691926: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   461.691930: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=60037 [ns] vruntime=13335488626 [ns]
    kworker/u9:1-293     [000] d.h..   461.691956: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   461.691965: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   461.691967: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   461.691968: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   461.691977: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   461.691981: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=51038 [ns] vruntime=13335489214 [ns]
          <idle>-0       [002] d.h..   461.692035: irq_handler_entry: irq=19 name=IPI
          <idle>-0       [002] dnh..   461.692043: sched_wakeup: comm=sshd pid=729 prio=120 target_cpu=002
          <idle>-0       [002] dnh..   461.692045: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [002] d....   461.692054: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=729 next_prio=120
    kworker/u9:1-293     [000] d.h..   461.692066: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   461.692077: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   461.692079: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   461.692080: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   461.692088: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   461.692092: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=110722 [ns] vruntime=13335490491 [ns]
    kworker/u9:1-293     [000] d....   461.692107: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=15074 [ns] vruntime=13335490664 [ns]
    kworker/u9:1-293     [000] d....   461.692113: sched_switch: prev_comm=kworker/u9:1 prev_pid=293 prev_prio=100 prev_state=I ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.692125: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=17944 [ns] vruntime=13341520806 [ns]
     kworker/0:4-452     [000] d....   461.692137: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
            sshd-729     [002] dn...   461.692199: sched_wakeup: comm=kworker/u8:2 pid=47 prio=120 target_cpu=002
            sshd-729     [002] dn...   461.692209: sched_stat_runtime: comm=sshd pid=729 runtime=155444 [ns] vruntime=167995026 [ns]
            sshd-729     [002] d....   461.692214: sched_switch: prev_comm=sshd prev_pid=729 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=47 next_prio=120
    kworker/u8:2-47      [002] d....   461.692229: sched_stat_runtime: comm=kworker/u8:2 pid=47 runtime=33630 [ns] vruntime=9804687688 [ns]
    kworker/u8:2-47      [002] d....   461.692234: sched_wakeup: comm=bash pid=755 prio=120 target_cpu=002
    kworker/u8:2-47      [002] d....   461.692240: sched_stat_runtime: comm=kworker/u8:2 pid=47 runtime=13426 [ns] vruntime=9804701114 [ns]
    kworker/u8:2-47      [002] d....   461.692247: sched_switch: prev_comm=kworker/u8:2 prev_pid=47 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=755 next_prio=120
            bash-755     [002] d....   461.692329: sched_wakeup: comm=kworker/u8:2 pid=47 prio=120 target_cpu=002
            bash-755     [002] d....   461.692347: sched_stat_runtime: comm=bash pid=755 runtime=106778 [ns] vruntime=78520143 [ns]
            bash-755     [002] d....   461.692354: sched_switch: prev_comm=bash prev_pid=755 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=47 next_prio=120
    kworker/u8:2-47      [002] d....   461.692364: sched_stat_runtime: comm=kworker/u8:2 pid=47 runtime=16815 [ns] vruntime=9804717929 [ns]
    kworker/u8:2-47      [002] d....   461.692368: sched_switch: prev_comm=kworker/u8:2 prev_pid=47 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=729 next_prio=120
          <idle>-0       [000] d.h..   461.692525: irq_handler_entry: irq=19 name=IPI
          <idle>-0       [000] dnh..   461.692532: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
          <idle>-0       [000] dnh..   461.692533: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [000] d....   461.692542: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u9:1 next_pid=293 next_prio=100
            sshd-729     [002] d....   461.692556: sched_stat_runtime: comm=sshd pid=729 runtime=191074 [ns] vruntime=168186100 [ns]
            sshd-729     [002] d....   461.692574: sched_switch: prev_comm=sshd prev_pid=729 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
    kworker/u9:1-293     [000] d.h..   461.692582: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   461.692593: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   461.692594: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   461.692596: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.h..   461.692601: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   461.692605: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   461.692606: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   461.692607: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   461.692615: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   461.692619: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=90629 [ns] vruntime=13335491709 [ns]
    kworker/u9:1-293     [000] d....   461.692637: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=17463 [ns] vruntime=13335491910 [ns]
    kworker/u9:1-293     [000] d....   461.692640: sched_switch: prev_comm=kworker/u9:1 prev_pid=293 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.692997: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   461.693009: sched_wakeup: comm=systemd-journal pid=136 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   461.693014: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   461.693024: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=systemd-journal next_pid=136 next_prio=120
 systemd-journal-136     [000] d....   461.693194: sched_stat_runtime: comm=systemd-journal pid=136 runtime=188704 [ns] vruntime=356291347 [ns]
 systemd-journal-136     [000] d....   461.693203: sched_switch: prev_comm=systemd-journal prev_pid=136 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.705920: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   461.705929: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dns..   461.705939: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
          <idle>-0       [000] d....   461.705962: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=279 next_prio=120
 brcmf_wdog/mmc1-279     [000] d....   461.705971: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=24074 [ns] vruntime=13335511008 [ns]
 brcmf_wdog/mmc1-279     [000] d....   461.705975: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=279 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.725917: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   461.725924: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dns..   461.725933: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
          <idle>-0       [000] d....   461.725952: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=279 next_prio=120
 brcmf_wdog/mmc1-279     [000] d.h..   461.725974: irq_handler_entry: irq=51 name=mmc1
 brcmf_wdog/mmc1-279     [000] d.h..   461.725979: irq_handler_exit: irq=51 ret=handled
 brcmf_wdog/mmc1-279     [000] d.h..   461.725980: irq_handler_entry: irq=51 name=mmc0
 brcmf_wdog/mmc1-279     [000] d.h..   461.725982: irq_handler_exit: irq=51 ret=unhandled
 brcmf_wdog/mmc1-279     [000] d.s..   461.725990: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
 brcmf_wdog/mmc1-279     [000] d....   461.725995: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=55444 [ns] vruntime=13335566452 [ns]
 brcmf_wdog/mmc1-279     [000] d....   461.726004: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=9297 [ns] vruntime=13335575749 [ns]
 brcmf_wdog/mmc1-279     [000] d....   461.726008: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=279 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.735914: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   461.735924: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d.h..   461.737396: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] dnh..   461.737408: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   461.737410: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   461.737411: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] dnh..   461.737413: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d....   461.737423: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d.h..   461.737442: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   461.737446: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   461.737447: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   461.737449: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   461.737456: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   461.737461: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=56203 [ns] vruntime=13341577009 [ns]
     kworker/0:4-452     [000] d.h..   461.737481: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   461.737489: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   461.737490: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   461.737492: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   461.737498: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   461.737502: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=41593 [ns] vruntime=13341618602 [ns]
     kworker/0:4-452     [000] d.h..   461.737521: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   461.737526: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   461.737527: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   461.737529: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.h..   461.737531: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   461.737535: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   461.737536: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   461.737538: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   461.737544: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   461.737549: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=47074 [ns] vruntime=13341665676 [ns]
     kworker/0:4-452     [000] d....   461.737556: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=6908 [ns] vruntime=13341672584 [ns]
     kworker/0:4-452     [000] dn...   461.737562: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
     kworker/0:4-452     [000] d....   461.737574: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:1 next_pid=293 next_prio=100
    kworker/u9:1-293     [000] d.h..   461.737592: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   461.737596: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   461.737598: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   461.737599: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   461.737606: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   461.737610: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=53907 [ns] vruntime=13335492531 [ns]
    kworker/u9:1-293     [000] d.h..   461.737622: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   461.737626: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   461.737627: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   461.737629: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   461.737635: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   461.737640: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=29259 [ns] vruntime=13335492868 [ns]
    kworker/u9:1-293     [000] d.h..   461.737672: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   461.737683: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   461.737684: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   461.737685: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   461.737692: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   461.737696: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=56685 [ns] vruntime=13335493521 [ns]
    kworker/u9:1-293     [000] d.h..   461.737720: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   461.737730: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   461.737731: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   461.737732: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   461.737739: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   461.737743: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=46889 [ns] vruntime=13335494061 [ns]
          <idle>-0       [002] d.h..   461.737796: irq_handler_entry: irq=19 name=IPI
          <idle>-0       [002] dnh..   461.737804: sched_wakeup: comm=sshd pid=729 prio=120 target_cpu=002
          <idle>-0       [002] dnh..   461.737806: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [002] d....   461.737816: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=729 next_prio=120
    kworker/u9:1-293     [000] d.h..   461.737822: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   461.737834: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   461.737835: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   461.737837: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   461.737844: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   461.737848: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=104982 [ns] vruntime=13335495272 [ns]
    kworker/u9:1-293     [000] d....   461.737863: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=12592 [ns] vruntime=13335495417 [ns]
    kworker/u9:1-293     [000] d....   461.737868: sched_switch: prev_comm=kworker/u9:1 prev_pid=293 prev_prio=100 prev_state=I ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.737874: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=13037 [ns] vruntime=13341685621 [ns]
     kworker/0:4-452     [000] d....   461.737884: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
            sshd-729     [002] dn...   461.737922: sched_wakeup: comm=kworker/u8:2 pid=47 prio=120 target_cpu=002
            sshd-729     [002] dn...   461.737931: sched_stat_runtime: comm=sshd pid=729 runtime=117703 [ns] vruntime=168303803 [ns]
            sshd-729     [002] d....   461.737935: sched_switch: prev_comm=sshd prev_pid=729 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=47 next_prio=120
    kworker/u8:2-47      [002] d....   461.737948: sched_stat_runtime: comm=kworker/u8:2 pid=47 runtime=28945 [ns] vruntime=9804991780 [ns]
    kworker/u8:2-47      [002] d....   461.737952: sched_wakeup: comm=bash pid=755 prio=120 target_cpu=002
    kworker/u8:2-47      [002] d....   461.737957: sched_stat_runtime: comm=kworker/u8:2 pid=47 runtime=11722 [ns] vruntime=9805003502 [ns]
    kworker/u8:2-47      [002] d....   461.737962: sched_switch: prev_comm=kworker/u8:2 prev_pid=47 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=755 next_prio=120
            bash-755     [002] d....   461.738022: sched_wakeup: comm=kworker/u8:2 pid=47 prio=120 target_cpu=002
            bash-755     [002] d....   461.738039: sched_stat_runtime: comm=bash pid=755 runtime=81333 [ns] vruntime=78601476 [ns]
            bash-755     [002] d....   461.738045: sched_switch: prev_comm=bash prev_pid=755 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=47 next_prio=120
    kworker/u8:2-47      [002] d....   461.738055: sched_stat_runtime: comm=kworker/u8:2 pid=47 runtime=16074 [ns] vruntime=9805019576 [ns]
    kworker/u8:2-47      [002] d....   461.738059: sched_switch: prev_comm=kworker/u8:2 prev_pid=47 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=729 next_prio=120
          <idle>-0       [000] d.h..   461.738190: irq_handler_entry: irq=19 name=IPI
          <idle>-0       [000] dnh..   461.738196: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
          <idle>-0       [000] dnh..   461.738198: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [000] d....   461.738207: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u9:1 next_pid=293 next_prio=100
            sshd-729     [002] d....   461.738218: sched_stat_runtime: comm=sshd pid=729 runtime=162686 [ns] vruntime=168466489 [ns]
            sshd-729     [002] d....   461.738234: sched_switch: prev_comm=sshd prev_pid=729 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
    kworker/u9:1-293     [000] d.h..   461.738246: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   461.738257: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   461.738258: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   461.738260: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d....   461.738265: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=71277 [ns] vruntime=13335496239 [ns]
    kworker/u9:1-293     [000] d....   461.738269: sched_switch: prev_comm=kworker/u9:1 prev_pid=293 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.738272: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   461.738276: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] d.h..   461.738278: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   461.738279: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] dns..   461.738289: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
          <idle>-0       [000] d....   461.738295: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u9:1 next_pid=293 next_prio=100
    kworker/u9:1-293     [000] d....   461.738311: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=23871 [ns] vruntime=13335496514 [ns]
    kworker/u9:1-293     [000] d....   461.738315: sched_switch: prev_comm=kworker/u9:1 prev_pid=293 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.755918: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   461.755925: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dns..   461.755935: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
          <idle>-0       [000] d....   461.755955: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=279 next_prio=120
 brcmf_wdog/mmc1-279     [000] d....   461.755963: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=20834 [ns] vruntime=13335596583 [ns]
 brcmf_wdog/mmc1-279     [000] d....   461.755966: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=279 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.775917: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   461.775923: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dns..   461.775932: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
          <idle>-0       [000] d....   461.775951: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=279 next_prio=120
 brcmf_wdog/mmc1-279     [000] d.h..   461.775976: irq_handler_entry: irq=51 name=mmc1
 brcmf_wdog/mmc1-279     [000] d.h..   461.775980: irq_handler_exit: irq=51 ret=handled
 brcmf_wdog/mmc1-279     [000] d.h..   461.775982: irq_handler_entry: irq=51 name=mmc0
 brcmf_wdog/mmc1-279     [000] d.h..   461.775985: irq_handler_exit: irq=51 ret=unhandled
 brcmf_wdog/mmc1-279     [000] d.s..   461.775992: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
 brcmf_wdog/mmc1-279     [000] d....   461.775997: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=58130 [ns] vruntime=13335654713 [ns]
 brcmf_wdog/mmc1-279     [000] d....   461.776006: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=8926 [ns] vruntime=13335663639 [ns]
 brcmf_wdog/mmc1-279     [000] d....   461.776010: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=279 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.785914: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   461.785924: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d.h..   461.787454: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] dnh..   461.787465: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   461.787467: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   461.787468: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] dnh..   461.787470: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d....   461.787479: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d.h..   461.787498: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   461.787502: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   461.787503: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   461.787505: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   461.787512: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   461.787516: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=54425 [ns] vruntime=13341740046 [ns]
     kworker/0:4-452     [000] d.h..   461.787536: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   461.787543: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   461.787544: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   461.787546: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   461.787552: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   461.787556: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=40371 [ns] vruntime=13341780417 [ns]
     kworker/0:4-452     [000] d.h..   461.787575: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   461.787579: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   461.787581: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   461.787582: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.h..   461.787584: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   461.787588: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   461.787589: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   461.787591: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   461.787598: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   461.787602: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=45389 [ns] vruntime=13341825806 [ns]
     kworker/0:4-452     [000] d....   461.787608: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=6555 [ns] vruntime=13341832361 [ns]
     kworker/0:4-452     [000] dn...   461.787613: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
     kworker/0:4-452     [000] d....   461.787625: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:1 next_pid=293 next_prio=100
    kworker/u9:1-293     [000] d.h..   461.787643: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   461.787647: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   461.787649: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   461.787650: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   461.787657: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   461.787661: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=53019 [ns] vruntime=13335497125 [ns]
    kworker/u9:1-293     [000] d.h..   461.787673: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   461.787677: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   461.787678: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   461.787680: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   461.787686: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   461.787690: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=29204 [ns] vruntime=13335497461 [ns]
    kworker/u9:1-293     [000] d.h..   461.787721: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   461.787732: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   461.787733: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   461.787734: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   461.787741: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   461.787745: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=54611 [ns] vruntime=13335498091 [ns]
    kworker/u9:1-293     [000] d.h..   461.787769: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   461.787776: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   461.787777: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   461.787779: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   461.787785: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   461.787789: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=44389 [ns] vruntime=13335498603 [ns]
    kworker/u9:1-293     [000] d.h..   461.787852: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   461.787863: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   461.787864: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   461.787866: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   461.787873: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   461.787878: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=87740 [ns] vruntime=13335499615 [ns]
    kworker/u9:1-293     [000] d....   461.787889: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=11815 [ns] vruntime=13335499751 [ns]
    kworker/u9:1-293     [000] d....   461.787894: sched_switch: prev_comm=kworker/u9:1 prev_pid=293 prev_prio=100 prev_state=I ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.787899: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=10500 [ns] vruntime=13341842861 [ns]
     kworker/0:4-452     [000] d....   461.787909: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.788382: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   461.788390: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d.h..   461.805917: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   461.805924: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dns..   461.805936: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
          <idle>-0       [000] dnH..   461.805940: irq_handler_entry: irq=21 name=IPI
          <idle>-0       [000] dnH..   461.805947: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnH..   461.805949: irq_handler_exit: irq=21 ret=handled
          <idle>-0       [000] d....   461.805969: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=279 next_prio=120
 brcmf_wdog/mmc1-279     [000] d....   461.805977: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=20574 [ns] vruntime=13335684213 [ns]
 brcmf_wdog/mmc1-279     [000] d....   461.805981: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=279 prev_prio=120 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.805993: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=16315 [ns] vruntime=13341859176 [ns]
     kworker/0:4-452     [000] d....   461.806000: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.825917: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   461.825923: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dns..   461.825933: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
          <idle>-0       [000] d....   461.825952: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=279 next_prio=120
 brcmf_wdog/mmc1-279     [000] d.h..   461.825972: irq_handler_entry: irq=51 name=mmc1
 brcmf_wdog/mmc1-279     [000] d.h..   461.825977: irq_handler_exit: irq=51 ret=handled
 brcmf_wdog/mmc1-279     [000] d.h..   461.825978: irq_handler_entry: irq=51 name=mmc0
 brcmf_wdog/mmc1-279     [000] d.h..   461.825980: irq_handler_exit: irq=51 ret=unhandled
 brcmf_wdog/mmc1-279     [000] d.s..   461.825987: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
 brcmf_wdog/mmc1-279     [000] d....   461.825992: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=51592 [ns] vruntime=13335735805 [ns]
 brcmf_wdog/mmc1-279     [000] d....   461.826001: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=9093 [ns] vruntime=13335744898 [ns]
 brcmf_wdog/mmc1-279     [000] d....   461.826005: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=279 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   461.975918: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   461.975925: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dns..   461.975935: sched_wakeup: comm=kcompactd0 pid=40 prio=120 target_cpu=000
          <idle>-0       [000] dnH..   461.975939: irq_handler_entry: irq=21 name=IPI
          <idle>-0       [000] dnH..   461.975944: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnH..   461.975946: irq_handler_exit: irq=21 ret=handled
          <idle>-0       [000] d....   461.975963: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kcompactd0 next_pid=40 next_prio=120
      kcompactd0-40      [000] d....   461.975977: sched_stat_runtime: comm=kcompactd0 pid=40 runtime=25888 [ns] vruntime=13335531711 [ns]
      kcompactd0-40      [000] d....   461.975981: sched_switch: prev_comm=kcompactd0 prev_pid=40 prev_prio=120 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   461.975991: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=15037 [ns] vruntime=13341874213 [ns]
     kworker/0:4-452     [000] d....   461.975998: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [002] d.h..   461.985919: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [002] d.h..   461.985928: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [002] d.h..   462.145914: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [002] d.h..   462.145921: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [002] dns..   462.145932: sched_wakeup: comm=kworker/2:1 pid=46 prio=120 target_cpu=002
          <idle>-0       [002] dnH..   462.145936: irq_handler_entry: irq=21 name=IPI
          <idle>-0       [002] dnH..   462.145940: irq_handler_exit: irq=21 ret=handled
          <idle>-0       [002] d....   462.145961: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:1 next_pid=46 next_prio=120
     kworker/2:1-46      [002] d....   462.145993: sched_stat_runtime: comm=kworker/2:1 pid=46 runtime=44926 [ns] vruntime=9805170447 [ns]
     kworker/2:1-46      [002] d....   462.145999: sched_wakeup: comm=usb-storage pid=98 prio=120 target_cpu=002
     kworker/2:1-46      [002] d....   462.146009: sched_stat_runtime: comm=kworker/2:1 pid=46 runtime=16815 [ns] vruntime=9805187262 [ns]
     kworker/2:1-46      [002] d....   462.146013: sched_wakeup: comm=kworker/2:2 pid=782 prio=120 target_cpu=002
     kworker/2:1-46      [002] d....   462.146016: sched_stat_runtime: comm=kworker/2:1 pid=46 runtime=7055 [ns] vruntime=9805194317 [ns]
     kworker/2:1-46      [002] d....   462.146021: sched_switch: prev_comm=kworker/2:1 prev_pid=46 prev_prio=120 prev_state=D ==> next_comm=usb-storage next_pid=98 next_prio=120
     usb-storage-98      [002] d....   462.146075: sched_stat_runtime: comm=usb-storage pid=98 runtime=58704 [ns] vruntime=9805184225 [ns]
     usb-storage-98      [002] d....   462.146079: sched_switch: prev_comm=usb-storage prev_pid=98 prev_prio=120 prev_state=S ==> next_comm=kworker/2:2 next_pid=782 next_prio=120
     kworker/2:2-782     [002] d....   462.146091: sched_stat_runtime: comm=kworker/2:2 pid=782 runtime=16000 [ns] vruntime=9805141521 [ns]
          <idle>-0       [000] d.h..   462.146092: irq_handler_entry: irq=48 name=xhci_hcd
     kworker/2:2-782     [002] d....   462.146101: sched_switch: prev_comm=kworker/2:2 prev_pid=782 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.146108: irq_handler_exit: irq=48 ret=handled
          <idle>-0       [002] d.h..   462.146123: irq_handler_entry: irq=19 name=IPI
          <idle>-0       [002] dnh..   462.146128: sched_wakeup: comm=usb-storage pid=98 prio=120 target_cpu=002
          <idle>-0       [002] dnh..   462.146130: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [002] d....   462.146139: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=usb-storage next_pid=98 next_prio=120
     usb-storage-98      [002] d....   462.146154: sched_stat_runtime: comm=usb-storage pid=98 runtime=28019 [ns] vruntime=9805212244 [ns]
     usb-storage-98      [002] d....   462.146158: sched_switch: prev_comm=usb-storage prev_pid=98 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.146162: irq_handler_entry: irq=48 name=xhci_hcd
          <idle>-0       [000] d.h..   462.146170: irq_handler_exit: irq=48 ret=handled
          <idle>-0       [002] d.h..   462.146180: irq_handler_entry: irq=19 name=IPI
          <idle>-0       [002] dnh..   462.146184: sched_wakeup: comm=usb-storage pid=98 prio=120 target_cpu=002
          <idle>-0       [002] dnh..   462.146186: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [002] d....   462.146195: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=usb-storage next_pid=98 next_prio=120
     usb-storage-98      [002] d....   462.146212: sched_stat_runtime: comm=usb-storage pid=98 runtime=28852 [ns] vruntime=9805241096 [ns]
     usb-storage-98      [002] d....   462.146216: sched_wakeup: comm=kworker/2:1 pid=46 prio=120 target_cpu=002
     usb-storage-98      [002] d....   462.146221: sched_stat_runtime: comm=usb-storage pid=98 runtime=9648 [ns] vruntime=9805250744 [ns]
     usb-storage-98      [002] d....   462.146225: sched_switch: prev_comm=usb-storage prev_pid=98 prev_prio=120 prev_state=S ==> next_comm=kworker/2:1 next_pid=46 next_prio=120
     kworker/2:1-46      [002] d....   462.146239: sched_stat_runtime: comm=kworker/2:1 pid=46 runtime=17630 [ns] vruntime=9805211947 [ns]
     kworker/2:1-46      [002] d....   462.146247: sched_switch: prev_comm=kworker/2:1 prev_pid=46 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.166049: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   462.166060: sched_wakeup: comm=wpa_supplicant pid=395 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   462.166063: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   462.166073: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=wpa_supplicant next_pid=395 next_prio=120
  wpa_supplicant-395     [000] d....   462.166119: sched_stat_runtime: comm=wpa_supplicant pid=395 runtime=65537 [ns] vruntime=29162960 [ns]
  wpa_supplicant-395     [000] d....   462.166127: sched_switch: prev_comm=wpa_supplicant prev_pid=395 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [001] d.h..   462.197741: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [001] dnh..   462.197753: sched_wakeup: comm=wpa_supplicant pid=537 prio=120 target_cpu=001
          <idle>-0       [001] dnh..   462.197757: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [001] d....   462.197768: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=wpa_supplicant next_pid=537 next_prio=120
  wpa_supplicant-537     [001] d....   462.197869: sched_stat_runtime: comm=wpa_supplicant pid=537 runtime=121371 [ns] vruntime=10410577 [ns]
  wpa_supplicant-537     [001] d....   462.197877: sched_switch: prev_comm=wpa_supplicant prev_pid=537 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0       [002] d.h..   462.385914: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [002] d.h..   462.385922: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [002] dns..   462.385932: sched_wakeup: comm=kworker/2:1 pid=46 prio=120 target_cpu=002
          <idle>-0       [002] dnH..   462.385936: irq_handler_entry: irq=21 name=IPI
          <idle>-0       [002] dnH..   462.385939: irq_handler_exit: irq=21 ret=handled
          <idle>-0       [002] dns..   462.385950: sched_wakeup: comm=kworker/u8:2 pid=47 prio=120 target_cpu=002
          <idle>-0       [002] d....   462.385969: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=47 next_prio=120
    kworker/u8:2-47      [002] d....   462.386003: sched_stat_runtime: comm=kworker/u8:2 pid=47 runtime=49223 [ns] vruntime=9805174744 [ns]
    kworker/u8:2-47      [002] d....   462.386007: sched_switch: prev_comm=kworker/u8:2 prev_pid=47 prev_prio=120 prev_state=I ==> next_comm=kworker/2:1 next_pid=46 next_prio=120
     kworker/2:1-46      [002] d....   462.386021: sched_stat_runtime: comm=kworker/2:1 pid=46 runtime=18166 [ns] vruntime=9805230113 [ns]
          <idle>-0       [000] d.h..   462.386026: irq_handler_entry: irq=46 name=eth0
     kworker/2:1-46      [002] d....   462.386026: sched_wakeup: comm=kworker/2:2 pid=782 prio=120 target_cpu=002
     kworker/2:1-46      [002] d....   462.386029: sched_stat_runtime: comm=kworker/2:1 pid=46 runtime=7760 [ns] vruntime=9805237873 [ns]
          <idle>-0       [000] d.h..   462.386030: irq_handler_exit: irq=46 ret=handled
     kworker/2:1-46      [002] d....   462.386032: sched_switch: prev_comm=kworker/2:1 prev_pid=46 prev_prio=120 prev_state=D ==> next_comm=kworker/2:2 next_pid=782 next_prio=120
     kworker/2:2-782     [002] d.h..   462.386036: irq_handler_entry: irq=19 name=IPI
     kworker/2:2-782     [002] d.h..   462.386039: sched_stat_runtime: comm=kworker/2:2 pid=782 runtime=9833 [ns] vruntime=9805151354 [ns]
     kworker/2:2-782     [002] d.h..   462.386042: sched_wakeup: comm=kworker/2:1 pid=46 prio=120 target_cpu=002
     kworker/2:2-782     [002] d.h..   462.386043: irq_handler_exit: irq=19 ret=handled
     kworker/2:2-782     [002] d....   462.386054: sched_stat_runtime: comm=kworker/2:2 pid=782 runtime=15352 [ns] vruntime=9805166706 [ns]
     kworker/2:2-782     [002] d....   462.386057: sched_switch: prev_comm=kworker/2:2 prev_pid=782 prev_prio=120 prev_state=I ==> next_comm=kworker/2:1 next_pid=46 next_prio=120
     kworker/2:1-46      [002] d....   462.386071: sched_stat_runtime: comm=kworker/2:1 pid=46 runtime=16611 [ns] vruntime=9805254484 [ns]
          <idle>-0       [000] d.h..   462.386074: irq_handler_entry: irq=46 name=eth0
          <idle>-0       [000] d.h..   462.386078: irq_handler_exit: irq=46 ret=handled
     kworker/2:1-46      [002] d....   462.386078: sched_switch: prev_comm=kworker/2:1 prev_pid=46 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [002] d.h..   462.386083: irq_handler_entry: irq=19 name=IPI
          <idle>-0       [002] dnh..   462.386087: sched_wakeup: comm=kworker/2:1 pid=46 prio=120 target_cpu=002
          <idle>-0       [002] dnh..   462.386088: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [002] d....   462.386092: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:1 next_pid=46 next_prio=120
     kworker/2:1-46      [002] d....   462.386105: sched_stat_runtime: comm=kworker/2:1 pid=46 runtime=20445 [ns] vruntime=9805274929 [ns]
          <idle>-0       [000] d.h..   462.386109: irq_handler_entry: irq=46 name=eth0
     kworker/2:1-46      [002] d....   462.386110: sched_switch: prev_comm=kworker/2:1 prev_pid=46 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.386112: irq_handler_exit: irq=46 ret=handled
          <idle>-0       [002] d.h..   462.386114: irq_handler_entry: irq=19 name=IPI
          <idle>-0       [002] dnh..   462.386118: sched_wakeup: comm=kworker/2:1 pid=46 prio=120 target_cpu=002
          <idle>-0       [002] dnh..   462.386119: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [002] d....   462.386123: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:1 next_pid=46 next_prio=120
     kworker/2:1-46      [002] d....   462.386136: sched_stat_runtime: comm=kworker/2:1 pid=46 runtime=19926 [ns] vruntime=9805294855 [ns]
     kworker/2:1-46      [002] d....   462.386139: sched_switch: prev_comm=kworker/2:1 prev_pid=46 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.386140: irq_handler_entry: irq=46 name=eth0
          <idle>-0       [000] d.h..   462.386143: irq_handler_exit: irq=46 ret=handled
          <idle>-0       [002] d.h..   462.386145: irq_handler_entry: irq=19 name=IPI
          <idle>-0       [002] dnh..   462.386149: sched_wakeup: comm=kworker/2:1 pid=46 prio=120 target_cpu=002
          <idle>-0       [002] dnh..   462.386150: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [002] d....   462.386156: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:1 next_pid=46 next_prio=120
     kworker/2:1-46      [002] d....   462.386169: sched_stat_runtime: comm=kworker/2:1 pid=46 runtime=21851 [ns] vruntime=9805316706 [ns]
     kworker/2:1-46      [002] d....   462.386172: sched_switch: prev_comm=kworker/2:1 prev_pid=46 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.386172: irq_handler_entry: irq=46 name=eth0
          <idle>-0       [000] d.h..   462.386176: irq_handler_exit: irq=46 ret=handled
          <idle>-0       [002] d.h..   462.386177: irq_handler_entry: irq=19 name=IPI
          <idle>-0       [002] dnh..   462.386181: sched_wakeup: comm=kworker/2:1 pid=46 prio=120 target_cpu=002
          <idle>-0       [002] dnh..   462.386182: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [002] d....   462.386188: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:1 next_pid=46 next_prio=120
     kworker/2:1-46      [002] d....   462.386200: sched_stat_runtime: comm=kworker/2:1 pid=46 runtime=21074 [ns] vruntime=9805337780 [ns]
     kworker/2:1-46      [002] d....   462.386203: sched_switch: prev_comm=kworker/2:1 prev_pid=46 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.395911: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   462.395918: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [002] d.h..   462.465912: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [002] d.h..   462.465923: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [002] dns..   462.465935: sched_wakeup: comm=kworker/2:1 pid=46 prio=120 target_cpu=002
          <idle>-0       [002] d....   462.465955: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:1 next_pid=46 next_prio=120
     kworker/2:1-46      [002] d....   462.465971: sched_stat_runtime: comm=kworker/2:1 pid=46 runtime=27796 [ns] vruntime=9805365576 [ns]
     kworker/2:1-46      [002] d....   462.465975: sched_switch: prev_comm=kworker/2:1 prev_pid=46 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.485911: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   462.485917: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dns..   462.485926: sched_wakeup: comm=kcompactd0 pid=40 prio=120 target_cpu=000
          <idle>-0       [000] dnH..   462.485935: irq_handler_entry: irq=21 name=IPI
          <idle>-0       [000] dnH..   462.485941: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnH..   462.485943: irq_handler_exit: irq=21 ret=handled
          <idle>-0       [000] d....   462.485955: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kcompactd0 next_pid=40 next_prio=120
      kcompactd0-40      [000] d....   462.485967: sched_stat_runtime: comm=kcompactd0 pid=40 runtime=27500 [ns] vruntime=13335559211 [ns]
      kcompactd0-40      [000] d....   462.485971: sched_switch: prev_comm=kcompactd0 prev_pid=40 prev_prio=120 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.485982: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=15259 [ns] vruntime=13341889472 [ns]
     kworker/0:4-452     [000] d....   462.485989: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.545910: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   462.545916: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dns..   462.545927: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] d....   462.545943: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d.h..   462.545993: irq_handler_entry: irq=26 name=arch_timer
     kworker/0:4-452     [000] d.h..   462.545999: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d.h..   462.546002: irq_handler_exit: irq=26 ret=handled
     kworker/0:4-452     [000] d....   462.546007: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=76314 [ns] vruntime=13341965786 [ns]
     kworker/0:4-452     [000] d....   462.546016: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=9538 [ns] vruntime=13341975324 [ns]
     kworker/0:4-452     [000] d....   462.546020: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.546330: irq_handler_entry: irq=29 name=fe00b880.mailbox
          <idle>-0       [000] dnh..   462.546335: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   462.546338: irq_handler_exit: irq=29 ret=handled
          <idle>-0       [000] d....   462.546348: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.546471: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=137556 [ns] vruntime=13342112880 [ns]
     kworker/0:4-452     [000] d....   462.546475: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.549679: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] dnh..   462.549691: sched_wakeup: comm=kworker/0:3 pid=162 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   462.549693: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   462.549694: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] dnh..   462.549696: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d....   462.549705: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:3 next_pid=162 next_prio=120
     kworker/0:3-162     [000] d.h..   462.549725: irq_handler_entry: irq=51 name=mmc1
     kworker/0:3-162     [000] d.h..   462.549729: irq_handler_exit: irq=51 ret=handled
     kworker/0:3-162     [000] d.h..   462.549730: irq_handler_entry: irq=51 name=mmc0
     kworker/0:3-162     [000] d.h..   462.549732: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:3-162     [000] d.s..   462.549739: sched_wakeup: comm=kworker/0:3 pid=162 prio=120 target_cpu=000
     kworker/0:3-162     [000] d....   462.549745: sched_stat_runtime: comm=kworker/0:3 pid=162 runtime=57592 [ns] vruntime=13344544526 [ns]
     kworker/0:3-162     [000] d.h..   462.549766: irq_handler_entry: irq=51 name=mmc1
     kworker/0:3-162     [000] d.h..   462.549774: irq_handler_exit: irq=51 ret=handled
     kworker/0:3-162     [000] d.h..   462.549775: irq_handler_entry: irq=51 name=mmc0
     kworker/0:3-162     [000] d.h..   462.549777: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:3-162     [000] d.s..   462.549784: sched_wakeup: comm=kworker/0:3 pid=162 prio=120 target_cpu=000
     kworker/0:3-162     [000] d....   462.549788: sched_stat_runtime: comm=kworker/0:3 pid=162 runtime=42852 [ns] vruntime=13344587378 [ns]
     kworker/0:3-162     [000] d.h..   462.549807: irq_handler_entry: irq=51 name=mmc1
     kworker/0:3-162     [000] d.h..   462.549812: irq_handler_exit: irq=51 ret=handled
     kworker/0:3-162     [000] d.h..   462.549813: irq_handler_entry: irq=51 name=mmc0
     kworker/0:3-162     [000] d.h..   462.549814: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:3-162     [000] d.h..   462.549817: irq_handler_entry: irq=51 name=mmc1
     kworker/0:3-162     [000] d.h..   462.549820: irq_handler_exit: irq=51 ret=handled
     kworker/0:3-162     [000] d.h..   462.549822: irq_handler_entry: irq=51 name=mmc0
     kworker/0:3-162     [000] d.h..   462.549823: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:3-162     [000] d.s..   462.549830: sched_wakeup: comm=kworker/0:3 pid=162 prio=120 target_cpu=000
     kworker/0:3-162     [000] d....   462.549834: sched_stat_runtime: comm=kworker/0:3 pid=162 runtime=46148 [ns] vruntime=13344633526 [ns]
     kworker/0:3-162     [000] d....   462.549841: sched_stat_runtime: comm=kworker/0:3 pid=162 runtime=6945 [ns] vruntime=13344640471 [ns]
     kworker/0:3-162     [000] dn...   462.549848: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
     kworker/0:3-162     [000] d....   462.549860: sched_switch: prev_comm=kworker/0:3 prev_pid=162 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:1 next_pid=293 next_prio=100
    kworker/u9:1-293     [000] d.h..   462.549879: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   462.549884: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   462.549885: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   462.549887: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   462.549894: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   462.549898: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=56981 [ns] vruntime=13335641128 [ns]
    kworker/u9:1-293     [000] d.h..   462.549910: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   462.549914: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   462.549915: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   462.549916: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   462.549923: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   462.549927: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=29186 [ns] vruntime=13335641464 [ns]
    kworker/u9:1-293     [000] d.h..   462.549959: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   462.549969: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   462.549970: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   462.549972: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   462.549979: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   462.549983: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=55759 [ns] vruntime=13335642107 [ns]
    kworker/u9:1-293     [000] d.h..   462.550007: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   462.550016: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   462.550017: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   462.550019: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   462.550025: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   462.550029: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=46426 [ns] vruntime=13335642642 [ns]
          <idle>-0       [002] d.h..   462.550067: irq_handler_entry: irq=19 name=IPI
          <idle>-0       [002] dnh..   462.550075: sched_wakeup: comm=sshd pid=729 prio=120 target_cpu=002
          <idle>-0       [002] dnh..   462.550076: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [002] d....   462.550086: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=729 next_prio=120
    kworker/u9:1-293     [000] d.h..   462.550096: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   462.550106: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   462.550107: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   462.550109: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   462.550116: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   462.550121: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=91241 [ns] vruntime=13335643694 [ns]
    kworker/u9:1-293     [000] d....   462.550133: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=12555 [ns] vruntime=13335643838 [ns]
    kworker/u9:1-293     [000] d....   462.550141: sched_switch: prev_comm=kworker/u9:1 prev_pid=293 prev_prio=100 prev_state=I ==> next_comm=kworker/0:3 next_pid=162 next_prio=120
     kworker/0:3-162     [000] d....   462.550146: sched_stat_runtime: comm=kworker/0:3 pid=162 runtime=12926 [ns] vruntime=13344653397 [ns]
     kworker/0:3-162     [000] d....   462.550156: sched_switch: prev_comm=kworker/0:3 prev_pid=162 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
            sshd-729     [002] dn...   462.550202: sched_wakeup: comm=kworker/u8:2 pid=47 prio=120 target_cpu=002
            sshd-729     [002] dn...   462.550211: sched_stat_runtime: comm=sshd pid=729 runtime=127481 [ns] vruntime=168593970 [ns]
            sshd-729     [002] d....   462.550216: sched_switch: prev_comm=sshd prev_pid=729 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=47 next_prio=120
    kworker/u8:2-47      [002] d....   462.550229: sched_stat_runtime: comm=kworker/u8:2 pid=47 runtime=29797 [ns] vruntime=9805282799 [ns]
    kworker/u8:2-47      [002] d....   462.550233: sched_wakeup: comm=bash pid=755 prio=120 target_cpu=002
    kworker/u8:2-47      [002] d....   462.550239: sched_stat_runtime: comm=kworker/u8:2 pid=47 runtime=12296 [ns] vruntime=9805295095 [ns]
    kworker/u8:2-47      [002] d....   462.550243: sched_switch: prev_comm=kworker/u8:2 prev_pid=47 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=755 next_prio=120
            bash-755     [002] d....   462.550312: sched_wakeup: comm=kworker/u8:2 pid=47 prio=120 target_cpu=002
            bash-755     [002] d....   462.550329: sched_stat_runtime: comm=bash pid=755 runtime=89722 [ns] vruntime=78691198 [ns]
            bash-755     [002] d....   462.550336: sched_switch: prev_comm=bash prev_pid=755 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=47 next_prio=120
    kworker/u8:2-47      [002] d....   462.550345: sched_stat_runtime: comm=kworker/u8:2 pid=47 runtime=16260 [ns] vruntime=9805311355 [ns]
    kworker/u8:2-47      [002] d....   462.550349: sched_switch: prev_comm=kworker/u8:2 prev_pid=47 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=729 next_prio=120
          <idle>-0       [000] d.h..   462.550489: irq_handler_entry: irq=19 name=IPI
          <idle>-0       [000] dnh..   462.550495: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
          <idle>-0       [000] dnh..   462.550497: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [000] d....   462.550504: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u9:1 next_pid=293 next_prio=100
            sshd-729     [002] d....   462.550519: sched_stat_runtime: comm=sshd pid=729 runtime=173277 [ns] vruntime=168767247 [ns]
            sshd-729     [002] d....   462.550534: sched_switch: prev_comm=sshd prev_pid=729 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
    kworker/u9:1-293     [000] d.h..   462.550543: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   462.550554: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   462.550555: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   462.550557: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.h..   462.550562: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   462.550566: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   462.550567: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   462.550569: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   462.550576: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   462.550580: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=87500 [ns] vruntime=13335654406 [ns]
    kworker/u9:1-293     [000] d....   462.550596: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=16130 [ns] vruntime=13335654592 [ns]
    kworker/u9:1-293     [000] d....   462.550600: sched_switch: prev_comm=kworker/u9:1 prev_pid=293 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.551968: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   462.551976: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   462.551979: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   462.551988: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.551996: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=23814 [ns] vruntime=13342136694 [ns]
     kworker/0:4-452     [000] d....   462.552000: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.564498: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   462.564504: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   462.564507: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   462.564516: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.564584: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=82445 [ns] vruntime=13342219139 [ns]
     kworker/0:4-452     [000] d....   462.564587: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.565906: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   462.565914: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dns..   462.565923: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
          <idle>-0       [000] d....   462.565941: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=279 next_prio=120
 brcmf_wdog/mmc1-279     [000] d....   462.565949: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=19037 [ns] vruntime=13335763935 [ns]
 brcmf_wdog/mmc1-279     [000] d....   462.565952: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=279 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.577085: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   462.577091: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   462.577094: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   462.577103: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.577153: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=64629 [ns] vruntime=13342283768 [ns]
     kworker/0:4-452     [000] d....   462.577156: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.577437: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   462.577439: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   462.577440: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   462.577454: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   462.577463: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   462.577473: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   462.577539: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   462.577548: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=89926 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   462.577554: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.577599: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=51778 [ns] vruntime=13342335546 [ns]
     kworker/0:4-452     [000] d....   462.577608: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.577885: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   462.577886: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   462.577888: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   462.577901: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   462.577905: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   462.577912: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   462.577976: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   462.577984: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=80334 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   462.577988: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.578100: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=116148 [ns] vruntime=13342451694 [ns]
     kworker/0:4-452     [000] d....   462.578108: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.579347: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   462.579354: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   462.579357: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   462.579362: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.579406: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=54926 [ns] vruntime=13342506620 [ns]
     kworker/0:4-452     [000] d....   462.579411: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.579528: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   462.579530: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   462.579531: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] dnh..   462.579561: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   462.579563: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] d....   462.579569: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.579578: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=19167 [ns] vruntime=13342525787 [ns]
     kworker/0:4-452     [000] d....   462.579581: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.580825: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   462.580831: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   462.580834: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   462.580839: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.580947: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=119037 [ns] vruntime=13342644824 [ns]
     kworker/0:4-452     [000] d....   462.580951: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.582195: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   462.582201: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   462.582203: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   462.582209: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.582252: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=53741 [ns] vruntime=13342698565 [ns]
     kworker/0:4-452     [000] d....   462.582255: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.582536: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   462.582538: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   462.582539: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   462.582552: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   462.582557: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   462.582564: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   462.582629: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   462.582636: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=81426 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   462.582641: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.582686: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=49278 [ns] vruntime=13342747843 [ns]
     kworker/0:4-452     [000] d....   462.582695: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.582971: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   462.582973: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   462.582974: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   462.582988: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   462.582992: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   462.582999: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   462.583051: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   462.583057: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=67555 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   462.583062: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.583093: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=35333 [ns] vruntime=13342783176 [ns]
     kworker/0:4-452     [000] d....   462.583100: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.583379: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   462.583380: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   462.583381: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   462.583395: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   462.583399: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   462.583406: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   462.583458: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   462.583465: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=67796 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   462.583469: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.583500: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=34945 [ns] vruntime=13342818121 [ns]
     kworker/0:4-452     [000] d....   462.583508: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.583784: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   462.583785: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   462.583787: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   462.583800: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   462.583804: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   462.583811: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   462.583862: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   462.583869: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=66445 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   462.583873: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.583904: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=34926 [ns] vruntime=13342853047 [ns]
     kworker/0:4-452     [000] d....   462.583911: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.584189: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   462.584190: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   462.584191: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   462.584205: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   462.584209: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   462.584215: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   462.584279: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   462.584286: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=79148 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   462.584291: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.584336: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=49426 [ns] vruntime=13342902473 [ns]
     kworker/0:4-452     [000] d....   462.584343: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.584621: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   462.584623: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   462.584624: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   462.584637: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   462.584641: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   462.584649: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   462.584713: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   462.584720: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=80500 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   462.584725: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.584769: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=48259 [ns] vruntime=13342950732 [ns]
     kworker/0:4-452     [000] d....   462.584777: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.585054: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   462.585055: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   462.585057: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   462.585070: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   462.585074: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   462.585081: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   462.585145: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   462.585152: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=79944 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   462.585159: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.585203: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=50389 [ns] vruntime=13343001121 [ns]
     kworker/0:4-452     [000] d....   462.585210: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.585486: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   462.585488: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   462.585489: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   462.585503: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   462.585507: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   462.585514: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   462.585578: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   462.585585: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=80112 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   462.585590: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.585633: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=48185 [ns] vruntime=13343049306 [ns]
     kworker/0:4-452     [000] d....   462.585641: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.585906: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   462.585914: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d.H..   462.585918: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.H..   462.585920: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.H..   462.585921: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.H..   462.585935: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnH..   462.585940: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] dnH..   462.585943: irq_handler_entry: irq=21 name=IPI
          <idle>-0       [000] dnH..   462.585950: sched_wakeup: comm=kworker/0:3 pid=162 prio=120 target_cpu=000
          <idle>-0       [000] dnH..   462.585952: irq_handler_exit: irq=21 ret=handled
          <idle>-0       [000] dns..   462.585959: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
          <idle>-0       [000] d....   462.585974: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   462.586038: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   462.586045: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=80611 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   462.586051: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=brcmf_wdog/mmc1 next_pid=279 next_prio=120
 brcmf_wdog/mmc1-279     [000] d.h..   462.586071: irq_handler_entry: irq=51 name=mmc1
 brcmf_wdog/mmc1-279     [000] d.h..   462.586075: irq_handler_exit: irq=51 ret=handled
 brcmf_wdog/mmc1-279     [000] d.h..   462.586077: irq_handler_entry: irq=51 name=mmc0
 brcmf_wdog/mmc1-279     [000] d.h..   462.586078: irq_handler_exit: irq=51 ret=unhandled
 brcmf_wdog/mmc1-279     [000] d.s..   462.586085: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
 brcmf_wdog/mmc1-279     [000] d....   462.586090: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=43926 [ns] vruntime=13335807861 [ns]
 brcmf_wdog/mmc1-279     [000] d....   462.586099: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=9352 [ns] vruntime=13335817213 [ns]
 brcmf_wdog/mmc1-279     [000] d....   462.586103: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=279 prev_prio=120 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.586251: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=152648 [ns] vruntime=13343201954 [ns]
     kworker/0:4-452     [000] d....   462.586255: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=kworker/0:3 next_pid=162 next_prio=120
     kworker/0:3-162     [000] d....   462.586267: sched_stat_runtime: comm=kworker/0:3 pid=162 runtime=15630 [ns] vruntime=13344669027 [ns]
     kworker/0:3-162     [000] d....   462.586274: sched_switch: prev_comm=kworker/0:3 prev_pid=162 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.586535: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   462.586537: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   462.586538: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   462.586551: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   462.586557: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   462.586564: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   462.586629: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   462.586636: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=82111 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   462.586642: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d.h..   462.586730: irq_handler_entry: irq=26 name=arch_timer
     kworker/0:4-452     [000] d.h..   462.586736: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d.h..   462.586739: irq_handler_exit: irq=26 ret=handled
     kworker/0:4-452     [000] d....   462.586744: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=107444 [ns] vruntime=13343309398 [ns]
     kworker/0:4-452     [000] d....   462.586753: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=9297 [ns] vruntime=13343318695 [ns]
     kworker/0:4-452     [000] d....   462.586762: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.587058: irq_handler_entry: irq=29 name=fe00b880.mailbox
          <idle>-0       [000] dnh..   462.587063: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   462.587066: irq_handler_exit: irq=29 ret=handled
          <idle>-0       [000] d....   462.587072: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.587163: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=101463 [ns] vruntime=13343420158 [ns]
     kworker/0:4-452     [000] d....   462.587166: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.588410: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   462.588416: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   462.588419: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   462.588424: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d.h..   462.588455: irq_handler_entry: irq=26 name=arch_timer
     kworker/0:4-452     [000] d.h..   462.588460: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d.h..   462.588463: irq_handler_exit: irq=26 ret=handled
     kworker/0:4-452     [000] d....   462.588468: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=54167 [ns] vruntime=13343474325 [ns]
     kworker/0:4-452     [000] d....   462.588477: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=9240 [ns] vruntime=13343483565 [ns]
     kworker/0:4-452     [000] d....   462.588480: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.588782: irq_handler_entry: irq=29 name=fe00b880.mailbox
          <idle>-0       [000] dnh..   462.588788: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   462.588790: irq_handler_exit: irq=29 ret=handled
          <idle>-0       [000] d....   462.588796: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.588913: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=127092 [ns] vruntime=13343610657 [ns]
     kworker/0:4-452     [000] d....   462.588917: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.594410: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   462.594416: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   462.594419: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   462.594424: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.594432: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=18740 [ns] vruntime=13343629397 [ns]
     kworker/0:4-452     [000] d....   462.594435: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.595905: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   462.595916: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d.h..   462.606932: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   462.606939: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   462.606942: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   462.606951: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d.h..   462.606958: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   462.606966: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   462.606967: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   462.606969: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d....   462.607028: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=91593 [ns] vruntime=13343720990 [ns]
     kworker/0:4-452     [000] d....   462.607033: sched_wakeup: comm=kworker/0:3 pid=162 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   462.607036: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=8629 [ns] vruntime=13343729619 [ns]
     kworker/0:4-452     [000] d....   462.607043: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=kworker/0:3 next_pid=162 next_prio=120
     kworker/0:3-162     [000] d.h..   462.607061: irq_handler_entry: irq=51 name=mmc1
     kworker/0:3-162     [000] d.h..   462.607066: irq_handler_exit: irq=51 ret=handled
     kworker/0:3-162     [000] d.h..   462.607067: irq_handler_entry: irq=51 name=mmc0
     kworker/0:3-162     [000] d.h..   462.607069: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:3-162     [000] d.s..   462.607076: sched_wakeup: comm=kworker/0:3 pid=162 prio=120 target_cpu=000
     kworker/0:3-162     [000] d....   462.607080: sched_stat_runtime: comm=kworker/0:3 pid=162 runtime=43704 [ns] vruntime=13344712731 [ns]
     kworker/0:3-162     [000] d.h..   462.607101: irq_handler_entry: irq=51 name=mmc1
     kworker/0:3-162     [000] d.h..   462.607108: irq_handler_exit: irq=51 ret=handled
     kworker/0:3-162     [000] d.h..   462.607109: irq_handler_entry: irq=51 name=mmc0
     kworker/0:3-162     [000] d.h..   462.607111: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:3-162     [000] d.s..   462.607117: sched_wakeup: comm=kworker/0:3 pid=162 prio=120 target_cpu=000
     kworker/0:3-162     [000] d....   462.607122: sched_stat_runtime: comm=kworker/0:3 pid=162 runtime=41556 [ns] vruntime=13344754287 [ns]
     kworker/0:3-162     [000] d.h..   462.607141: irq_handler_entry: irq=51 name=mmc1
     kworker/0:3-162     [000] d.h..   462.607145: irq_handler_exit: irq=51 ret=handled
     kworker/0:3-162     [000] d.h..   462.607146: irq_handler_entry: irq=51 name=mmc0
     kworker/0:3-162     [000] d.h..   462.607148: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:3-162     [000] d.h..   462.607150: irq_handler_entry: irq=51 name=mmc1
     kworker/0:3-162     [000] d.h..   462.607154: irq_handler_exit: irq=51 ret=handled
     kworker/0:3-162     [000] d.h..   462.607155: irq_handler_entry: irq=51 name=mmc0
     kworker/0:3-162     [000] d.h..   462.607157: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:3-162     [000] d.s..   462.607164: sched_wakeup: comm=kworker/0:3 pid=162 prio=120 target_cpu=000
     kworker/0:3-162     [000] d....   462.607168: sched_stat_runtime: comm=kworker/0:3 pid=162 runtime=46055 [ns] vruntime=13344800342 [ns]
     kworker/0:3-162     [000] d....   462.607175: sched_stat_runtime: comm=kworker/0:3 pid=162 runtime=6982 [ns] vruntime=13344807324 [ns]
     kworker/0:3-162     [000] dn...   462.607180: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
     kworker/0:3-162     [000] d....   462.607192: sched_switch: prev_comm=kworker/0:3 prev_pid=162 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:1 next_pid=293 next_prio=100
    kworker/u9:1-293     [000] d.h..   462.607210: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   462.607215: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   462.607216: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   462.607217: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   462.607224: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   462.607228: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=53574 [ns] vruntime=13335807942 [ns]
    kworker/u9:1-293     [000] d.h..   462.607240: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   462.607244: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   462.607245: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   462.607247: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   462.607253: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   462.607257: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=29148 [ns] vruntime=13335808278 [ns]
    kworker/u9:1-293     [000] d.h..   462.607290: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   462.607300: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   462.607301: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   462.607303: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   462.607310: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   462.607314: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=56889 [ns] vruntime=13335808934 [ns]
    kworker/u9:1-293     [000] d.h..   462.607338: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   462.607346: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   462.607347: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   462.607349: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   462.607355: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   462.607360: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=45277 [ns] vruntime=13335809456 [ns]
    kworker/u9:1-293     [000] d.h..   462.607429: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   462.607440: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   462.607441: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   462.607443: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   462.607450: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   462.607454: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=94408 [ns] vruntime=13335810545 [ns]
    kworker/u9:1-293     [000] d....   462.607466: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=11889 [ns] vruntime=13335810682 [ns]
    kworker/u9:1-293     [000] d....   462.607471: sched_switch: prev_comm=kworker/u9:1 prev_pid=293 prev_prio=100 prev_state=I ==> next_comm=kworker/0:3 next_pid=162 next_prio=120
     kworker/0:3-162     [000] d....   462.607476: sched_stat_runtime: comm=kworker/0:3 pid=162 runtime=10055 [ns] vruntime=13344817379 [ns]
     kworker/0:3-162     [000] d....   462.607485: sched_switch: prev_comm=kworker/0:3 prev_pid=162 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.619530: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   462.619537: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   462.619540: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   462.619549: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.619607: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=73574 [ns] vruntime=13343803193 [ns]
     kworker/0:4-452     [000] d....   462.619611: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.619985: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   462.619987: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   462.619988: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   462.620006: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   462.620011: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   462.620019: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   462.620097: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   462.620104: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=95222 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   462.620109: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.620165: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=61296 [ns] vruntime=13343864489 [ns]
     kworker/0:4-452     [000] d....   462.620173: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.620547: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   462.620549: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   462.620550: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   462.620567: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   462.620571: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   462.620578: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   462.620655: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   462.620662: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=92352 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   462.620666: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.620811: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=148963 [ns] vruntime=13344013452 [ns]
     kworker/0:4-452     [000] d....   462.620819: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.622058: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   462.622065: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   462.622068: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   462.622073: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.622129: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=67259 [ns] vruntime=13344080711 [ns]
     kworker/0:4-452     [000] d....   462.622132: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.622293: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   462.622294: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   462.622296: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] dnh..   462.622334: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   462.622336: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] d....   462.622342: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.622351: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=20037 [ns] vruntime=13344100748 [ns]
     kworker/0:4-452     [000] d....   462.622354: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.623598: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   462.623604: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   462.623607: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   462.623612: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.623754: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=151963 [ns] vruntime=13344252711 [ns]
     kworker/0:4-452     [000] d....   462.623759: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.624920: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] dnh..   462.624931: sched_wakeup: comm=kworker/0:3 pid=162 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   462.624934: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   462.624935: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] dnh..   462.624936: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d....   462.624943: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:3 next_pid=162 next_prio=120
     kworker/0:3-162     [000] d.h..   462.624961: irq_handler_entry: irq=51 name=mmc1
     kworker/0:3-162     [000] d.h..   462.624965: irq_handler_exit: irq=51 ret=handled
     kworker/0:3-162     [000] d.h..   462.624966: irq_handler_entry: irq=51 name=mmc0
     kworker/0:3-162     [000] d.h..   462.624968: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:3-162     [000] d.s..   462.624975: sched_wakeup: comm=kworker/0:3 pid=162 prio=120 target_cpu=000
     kworker/0:3-162     [000] d....   462.624979: sched_stat_runtime: comm=kworker/0:3 pid=162 runtime=50630 [ns] vruntime=13344868009 [ns]
     kworker/0:3-162     [000] d.h..   462.624999: irq_handler_entry: irq=51 name=mmc1
     kworker/0:3-162     [000] d.h..   462.625007: irq_handler_exit: irq=51 ret=handled
     kworker/0:3-162     [000] d.h..   462.625008: irq_handler_entry: irq=51 name=mmc0
     kworker/0:3-162     [000] d.h..   462.625010: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:3-162     [000] d.h..   462.625012: irq_handler_entry: irq=26 name=arch_timer
     kworker/0:3-162     [000] d.h..   462.625016: sched_stat_runtime: comm=kworker/0:3 pid=162 runtime=36833 [ns] vruntime=13344904842 [ns]
     kworker/0:3-162     [000] d.h..   462.625020: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:3-162     [000] d.h..   462.625023: irq_handler_exit: irq=26 ret=handled
     kworker/0:3-162     [000] d.s..   462.625029: sched_wakeup: comm=kworker/0:3 pid=162 prio=120 target_cpu=000
     kworker/0:3-162     [000] d....   462.625034: sched_stat_runtime: comm=kworker/0:3 pid=162 runtime=18148 [ns] vruntime=13344922990 [ns]
     kworker/0:3-162     [000] d....   462.625037: sched_switch: prev_comm=kworker/0:3 prev_pid=162 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.625094: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=59889 [ns] vruntime=13344312600 [ns]
     kworker/0:4-452     [000] d....   462.625097: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=kworker/0:3 next_pid=162 next_prio=120
     kworker/0:3-162     [000] d.h..   462.625117: irq_handler_entry: irq=51 name=mmc1
     kworker/0:3-162     [000] d.h..   462.625122: irq_handler_exit: irq=51 ret=handled
     kworker/0:3-162     [000] d.h..   462.625123: irq_handler_entry: irq=51 name=mmc0
     kworker/0:3-162     [000] d.h..   462.625125: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:3-162     [000] d.h..   462.625127: irq_handler_entry: irq=51 name=mmc1
     kworker/0:3-162     [000] d.h..   462.625131: irq_handler_exit: irq=51 ret=handled
     kworker/0:3-162     [000] d.h..   462.625132: irq_handler_entry: irq=51 name=mmc0
     kworker/0:3-162     [000] d.h..   462.625134: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:3-162     [000] d.s..   462.625141: sched_wakeup: comm=kworker/0:3 pid=162 prio=120 target_cpu=000
     kworker/0:3-162     [000] d....   462.625145: sched_stat_runtime: comm=kworker/0:3 pid=162 runtime=50963 [ns] vruntime=13344973953 [ns]
     kworker/0:3-162     [000] d....   462.625152: sched_stat_runtime: comm=kworker/0:3 pid=162 runtime=7111 [ns] vruntime=13344981064 [ns]
     kworker/0:3-162     [000] dn...   462.625157: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
     kworker/0:3-162     [000] d....   462.625168: sched_switch: prev_comm=kworker/0:3 prev_pid=162 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:1 next_pid=293 next_prio=100
    kworker/u9:1-293     [000] d.h..   462.625205: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   462.625215: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   462.625216: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   462.625218: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   462.625225: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   462.625229: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=77296 [ns] vruntime=13335981955 [ns]
    kworker/u9:1-293     [000] d.h..   462.625253: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   462.625262: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   462.625263: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   462.625265: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   462.625271: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   462.625275: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=46297 [ns] vruntime=13335982489 [ns]
          <idle>-0       [002] d.h..   462.625306: irq_handler_entry: irq=19 name=IPI
          <idle>-0       [002] dnh..   462.625314: sched_wakeup: comm=sshd pid=729 prio=120 target_cpu=002
          <idle>-0       [002] dnh..   462.625316: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [002] d....   462.625326: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=729 next_prio=120
    kworker/u9:1-293     [000] d.h..   462.625337: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   462.625348: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   462.625349: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   462.625351: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   462.625358: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   462.625363: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=87370 [ns] vruntime=13335983496 [ns]
    kworker/u9:1-293     [000] d....   462.625375: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=12000 [ns] vruntime=13335983634 [ns]
    kworker/u9:1-293     [000] d....   462.625380: sched_switch: prev_comm=kworker/u9:1 prev_pid=293 prev_prio=100 prev_state=I ==> next_comm=kworker/0:3 next_pid=162 next_prio=120
     kworker/0:3-162     [000] d....   462.625385: sched_stat_runtime: comm=kworker/0:3 pid=162 runtime=9926 [ns] vruntime=13344990990 [ns]
     kworker/0:3-162     [000] d....   462.625394: sched_switch: prev_comm=kworker/0:3 prev_pid=162 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
            sshd-729     [002] dn...   462.625430: sched_wakeup: comm=kworker/u8:2 pid=47 prio=120 target_cpu=002
            sshd-729     [002] dn...   462.625439: sched_stat_runtime: comm=sshd pid=729 runtime=115945 [ns] vruntime=168883192 [ns]
            sshd-729     [002] d....   462.625444: sched_switch: prev_comm=sshd prev_pid=729 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=47 next_prio=120
    kworker/u8:2-47      [002] d....   462.625455: sched_stat_runtime: comm=kworker/u8:2 pid=47 runtime=27870 [ns] vruntime=9805570094 [ns]
    kworker/u8:2-47      [002] d....   462.625458: sched_wakeup: comm=bash pid=755 prio=120 target_cpu=002
    kworker/u8:2-47      [002] d....   462.625464: sched_stat_runtime: comm=kworker/u8:2 pid=47 runtime=11667 [ns] vruntime=9805581761 [ns]
    kworker/u8:2-47      [002] d....   462.625469: sched_switch: prev_comm=kworker/u8:2 prev_pid=47 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=755 next_prio=120
          <idle>-0       [000] d.h..   462.625474: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   462.625476: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   462.625477: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   462.625495: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   462.625501: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   462.625512: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
            bash-755     [002] d....   462.625529: sched_wakeup: comm=kworker/u8:2 pid=47 prio=120 target_cpu=002
            bash-755     [002] d....   462.625545: sched_stat_runtime: comm=bash pid=755 runtime=80537 [ns] vruntime=78771735 [ns]
            bash-755     [002] d....   462.625552: sched_switch: prev_comm=bash prev_pid=755 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=47 next_prio=120
    kworker/u8:2-47      [002] d....   462.625562: sched_stat_runtime: comm=kworker/u8:2 pid=47 runtime=16574 [ns] vruntime=9805598335 [ns]
    kworker/u8:2-47      [002] d....   462.625565: sched_switch: prev_comm=kworker/u8:2 prev_pid=47 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=729 next_prio=120
     irq/51-mmc0-94      [000] d....   462.625592: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   462.625599: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=101130 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   462.625605: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.625663: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=63370 [ns] vruntime=13344375970 [ns]
     kworker/0:4-452     [000] d....   462.625671: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.625694: irq_handler_entry: irq=19 name=IPI
          <idle>-0       [000] dnh..   462.625700: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
          <idle>-0       [000] dnh..   462.625701: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [000] d....   462.625710: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u9:1 next_pid=293 next_prio=100
            sshd-729     [002] d....   462.625722: sched_stat_runtime: comm=sshd pid=729 runtime=159741 [ns] vruntime=169042933 [ns]
            sshd-729     [002] d....   462.625732: sched_switch: prev_comm=sshd prev_pid=729 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
    kworker/u9:1-293     [000] d.h..   462.625749: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   462.625760: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   462.625761: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   462.625763: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.h..   462.625768: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   462.625771: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   462.625773: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   462.625774: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   462.625781: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   462.625786: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=88444 [ns] vruntime=13335992010 [ns]
    kworker/u9:1-293     [000] d....   462.625801: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=15445 [ns] vruntime=13335992188 [ns]
    kworker/u9:1-293     [000] d....   462.625805: sched_switch: prev_comm=kworker/u9:1 prev_pid=293 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.626043: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   462.626045: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   462.626046: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   462.626064: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   462.626069: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   462.626080: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   462.626141: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   462.626148: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=81037 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   462.626153: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.626192: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=44240 [ns] vruntime=13344420210 [ns]
     kworker/0:4-452     [000] d....   462.626200: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.626573: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   462.626575: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   462.626576: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   462.626593: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   462.626597: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   462.626605: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   462.626665: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   462.626672: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=76518 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   462.626677: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.626718: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=43519 [ns] vruntime=13344463729 [ns]
     kworker/0:4-452     [000] d....   462.626726: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.627097: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   462.627099: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   462.627100: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   462.627117: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   462.627122: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   462.627128: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   462.627188: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   462.627195: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=74908 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   462.627199: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.627238: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=43537 [ns] vruntime=13344507266 [ns]
     kworker/0:4-452     [000] d....   462.627246: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.627618: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   462.627620: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   462.627621: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   462.627638: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   462.627642: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   462.627649: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   462.627726: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   462.627733: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=92760 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   462.627738: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.627795: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=61740 [ns] vruntime=13344569006 [ns]
     kworker/0:4-452     [000] d....   462.627803: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.628176: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   462.628178: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   462.628179: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   462.628196: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   462.628200: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   462.628207: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   462.628283: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   462.628290: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=91389 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   462.628294: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.628351: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=60500 [ns] vruntime=13344629506 [ns]
     kworker/0:4-452     [000] d....   462.628358: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.628730: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   462.628732: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   462.628733: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   462.628750: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   462.628755: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   462.628762: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   462.628838: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   462.628845: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=92333 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   462.628850: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.628905: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=60186 [ns] vruntime=13344689692 [ns]
     kworker/0:4-452     [000] d....   462.628913: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.629285: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   462.629286: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   462.629288: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   462.629305: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   462.629309: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   462.629316: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   462.629392: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   462.629399: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=91426 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   462.629403: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.629459: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=60148 [ns] vruntime=13344749840 [ns]
     kworker/0:4-452     [000] d....   462.629466: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.629839: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   462.629841: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   462.629842: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   462.629859: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   462.629863: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   462.629870: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   462.629947: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   462.629954: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=92852 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   462.629959: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.630152: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=196852 [ns] vruntime=13344946692 [ns]
     kworker/0:4-452     [000] d....   462.630160: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.630530: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   462.630532: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   462.630533: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   462.630551: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   462.630555: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   462.630562: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   462.630639: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   462.630646: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=92741 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   462.630651: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d.h..   462.630745: irq_handler_entry: irq=26 name=arch_timer
     kworker/0:4-452     [000] d.h..   462.630751: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d.h..   462.630753: irq_handler_exit: irq=26 ret=handled
     kworker/0:4-452     [000] d....   462.630759: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=112796 [ns] vruntime=13345059488 [ns]
     kworker/0:4-452     [000] d....   462.630768: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=9352 [ns] vruntime=13345068840 [ns]
     kworker/0:4-452     [000] d....   462.630776: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.631076: irq_handler_entry: irq=29 name=fe00b880.mailbox
          <idle>-0       [000] dnh..   462.631082: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   462.631084: irq_handler_exit: irq=29 ret=handled
          <idle>-0       [000] d....   462.631091: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.631182: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=101592 [ns] vruntime=13345170432 [ns]
     kworker/0:4-452     [000] d....   462.631185: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.632429: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   462.632435: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   462.632438: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   462.632443: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d.h..   462.632474: irq_handler_entry: irq=26 name=arch_timer
     kworker/0:4-452     [000] d.h..   462.632478: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d.h..   462.632483: irq_handler_exit: irq=26 ret=handled
     kworker/0:4-452     [000] d....   462.632488: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=55722 [ns] vruntime=13345226154 [ns]
     kworker/0:4-452     [000] d....   462.632497: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=9074 [ns] vruntime=13345235228 [ns]
     kworker/0:4-452     [000] d....   462.632500: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.632800: irq_handler_entry: irq=29 name=fe00b880.mailbox
          <idle>-0       [000] dnh..   462.632806: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   462.632808: irq_handler_exit: irq=29 ret=handled
          <idle>-0       [000] d....   462.632814: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.632930: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=126296 [ns] vruntime=13345361524 [ns]
     kworker/0:4-452     [000] d....   462.632933: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.635905: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   462.635917: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dns..   462.635927: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
          <idle>-0       [000] d....   462.635944: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=279 next_prio=120
 brcmf_wdog/mmc1-279     [000] d....   462.635951: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=17352 [ns] vruntime=13336378876 [ns]
 brcmf_wdog/mmc1-279     [000] d....   462.635955: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=279 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.638428: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   462.638434: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   462.638437: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   462.638445: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.638453: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=21667 [ns] vruntime=13345383191 [ns]
     kworker/0:4-452     [000] d....   462.638456: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.650954: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   462.650960: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   462.650963: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   462.650971: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.651049: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=91630 [ns] vruntime=13345474821 [ns]
     kworker/0:4-452     [000] d....   462.651052: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.655905: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   462.655913: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dns..   462.655921: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
          <idle>-0       [000] d....   462.655937: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=279 next_prio=120
 brcmf_wdog/mmc1-279     [000] d.h..   462.655958: irq_handler_entry: irq=51 name=mmc1
 brcmf_wdog/mmc1-279     [000] d.h..   462.655962: irq_handler_exit: irq=51 ret=handled
 brcmf_wdog/mmc1-279     [000] d.h..   462.655963: irq_handler_entry: irq=51 name=mmc0
 brcmf_wdog/mmc1-279     [000] d.h..   462.655965: irq_handler_exit: irq=51 ret=unhandled
 brcmf_wdog/mmc1-279     [000] d.s..   462.655973: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
 brcmf_wdog/mmc1-279     [000] d....   462.655977: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=49463 [ns] vruntime=13336524284 [ns]
 brcmf_wdog/mmc1-279     [000] d....   462.655986: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=9056 [ns] vruntime=13336533340 [ns]
 brcmf_wdog/mmc1-279     [000] d....   462.655989: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=279 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.663547: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   462.663553: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   462.663556: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   462.663562: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.663637: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=86278 [ns] vruntime=13345561099 [ns]
     kworker/0:4-452     [000] d....   462.663640: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.664208: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   462.664209: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   462.664211: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   462.664234: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   462.664239: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   462.664246: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   462.664321: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   462.664328: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=91481 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   462.664333: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.664407: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=79334 [ns] vruntime=13345640433 [ns]
     kworker/0:4-452     [000] d....   462.664415: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.664978: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   462.664979: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   462.664981: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   462.665004: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   462.665008: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   462.665015: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   462.665088: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   462.665094: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=88222 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   462.665099: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.665281: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=186556 [ns] vruntime=13345826989 [ns]
     kworker/0:4-452     [000] d....   462.665291: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.665905: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   462.665915: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d.h..   462.666529: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   462.666536: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   462.666539: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   462.666547: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.666622: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=88944 [ns] vruntime=13345915933 [ns]
     kworker/0:4-452     [000] d....   462.666626: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.666869: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   462.666870: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   462.666872: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] dnh..   462.666922: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   462.666924: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] d....   462.666933: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.666943: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=22778 [ns] vruntime=13345938711 [ns]
     kworker/0:4-452     [000] d....   462.666946: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.667331: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] dnh..   462.667342: sched_wakeup: comm=kworker/0:3 pid=162 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   462.667344: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   462.667346: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] dnh..   462.667347: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d....   462.667356: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:3 next_pid=162 next_prio=120
     kworker/0:3-162     [000] d.h..   462.667374: irq_handler_entry: irq=51 name=mmc1
     kworker/0:3-162     [000] d.h..   462.667378: irq_handler_exit: irq=51 ret=handled
     kworker/0:3-162     [000] d.h..   462.667379: irq_handler_entry: irq=51 name=mmc0
     kworker/0:3-162     [000] d.h..   462.667381: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:3-162     [000] d.s..   462.667387: sched_wakeup: comm=kworker/0:3 pid=162 prio=120 target_cpu=000
     kworker/0:3-162     [000] d....   462.667392: sched_stat_runtime: comm=kworker/0:3 pid=162 runtime=52370 [ns] vruntime=13345043360 [ns]
     kworker/0:3-162     [000] d.h..   462.667411: irq_handler_entry: irq=51 name=mmc1
     kworker/0:3-162     [000] d.h..   462.667419: irq_handler_exit: irq=51 ret=handled
     kworker/0:3-162     [000] d.h..   462.667420: irq_handler_entry: irq=51 name=mmc0
     kworker/0:3-162     [000] d.h..   462.667421: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:3-162     [000] d.s..   462.667430: sched_wakeup: comm=kworker/0:3 pid=162 prio=120 target_cpu=000
     kworker/0:3-162     [000] d....   462.667434: sched_stat_runtime: comm=kworker/0:3 pid=162 runtime=42426 [ns] vruntime=13345085786 [ns]
     kworker/0:3-162     [000] d.h..   462.667453: irq_handler_entry: irq=51 name=mmc1
     kworker/0:3-162     [000] d.h..   462.667458: irq_handler_exit: irq=51 ret=handled
     kworker/0:3-162     [000] d.h..   462.667459: irq_handler_entry: irq=51 name=mmc0
     kworker/0:3-162     [000] d.h..   462.667461: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:3-162     [000] d.h..   462.667463: irq_handler_entry: irq=51 name=mmc1
     kworker/0:3-162     [000] d.h..   462.667467: irq_handler_exit: irq=51 ret=handled
     kworker/0:3-162     [000] d.h..   462.667468: irq_handler_entry: irq=51 name=mmc0
     kworker/0:3-162     [000] d.h..   462.667469: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:3-162     [000] d.s..   462.667476: sched_wakeup: comm=kworker/0:3 pid=162 prio=120 target_cpu=000
     kworker/0:3-162     [000] d....   462.667480: sched_stat_runtime: comm=kworker/0:3 pid=162 runtime=46000 [ns] vruntime=13345131786 [ns]
     kworker/0:3-162     [000] d....   462.667487: sched_stat_runtime: comm=kworker/0:3 pid=162 runtime=6778 [ns] vruntime=13345138564 [ns]
     kworker/0:3-162     [000] dn...   462.667492: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
     kworker/0:3-162     [000] d....   462.667504: sched_switch: prev_comm=kworker/0:3 prev_pid=162 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:1 next_pid=293 next_prio=100
    kworker/u9:1-293     [000] d.h..   462.667522: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   462.667526: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   462.667528: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   462.667529: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   462.667536: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   462.667540: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=53426 [ns] vruntime=13336939327 [ns]
    kworker/u9:1-293     [000] d.h..   462.667552: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   462.667556: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   462.667557: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   462.667559: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   462.667565: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   462.667569: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=29074 [ns] vruntime=13336939662 [ns]
    kworker/u9:1-293     [000] d.h..   462.667601: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   462.667611: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   462.667612: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   462.667614: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   462.667620: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   462.667625: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=55259 [ns] vruntime=13336940299 [ns]
    kworker/u9:1-293     [000] d.h..   462.667649: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   462.667656: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   462.667657: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   462.667659: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   462.667666: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   462.667670: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=45130 [ns] vruntime=13336940819 [ns]
    kworker/u9:1-293     [000] d.h..   462.667733: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   462.667744: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   462.667745: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   462.667748: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   462.667755: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   462.667759: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=89037 [ns] vruntime=13336941846 [ns]
    kworker/u9:1-293     [000] d....   462.667771: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=11759 [ns] vruntime=13336941981 [ns]
    kworker/u9:1-293     [000] d....   462.667776: sched_switch: prev_comm=kworker/u9:1 prev_pid=293 prev_prio=100 prev_state=I ==> next_comm=kworker/0:3 next_pid=162 next_prio=120
     kworker/0:3-162     [000] d....   462.667781: sched_stat_runtime: comm=kworker/0:3 pid=162 runtime=10408 [ns] vruntime=13345148972 [ns]
     kworker/0:3-162     [000] d....   462.667790: sched_switch: prev_comm=kworker/0:3 prev_pid=162 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.668190: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   462.668197: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   462.668200: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   462.668209: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.668390: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=196074 [ns] vruntime=13346134785 [ns]
     kworker/0:4-452     [000] d....   462.668395: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.669638: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   462.669643: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   462.669646: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   462.669655: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.669729: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=88315 [ns] vruntime=13346223100 [ns]
     kworker/0:4-452     [000] d....   462.669733: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.670299: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   462.670301: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   462.670302: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   462.670326: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   462.670330: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   462.670341: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   462.670416: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   462.670423: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=94648 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   462.670428: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.670502: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=79260 [ns] vruntime=13346302360 [ns]
     kworker/0:4-452     [000] d....   462.670510: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.671074: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   462.671076: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   462.671077: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   462.671100: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   462.671105: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   462.671115: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   462.671166: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   462.671173: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=69926 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   462.671178: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.671229: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=55704 [ns] vruntime=13346358064 [ns]
     kworker/0:4-452     [000] d....   462.671236: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.671799: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   462.671801: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   462.671802: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   462.671825: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   462.671830: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   462.671840: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   462.671891: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   462.671898: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=70667 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   462.671903: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.671954: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=55463 [ns] vruntime=13346413527 [ns]
     kworker/0:4-452     [000] d....   462.671962: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.672524: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   462.672526: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   462.672527: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   462.672550: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   462.672555: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   462.672565: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   462.672616: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   462.672623: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=70167 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   462.672628: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.672679: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=55666 [ns] vruntime=13346469193 [ns]
     kworker/0:4-452     [000] d....   462.672689: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.673249: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   462.673251: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   462.673252: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   462.673275: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   462.673280: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   462.673290: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   462.673363: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   462.673370: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=92130 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   462.673375: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.673450: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=79296 [ns] vruntime=13346548489 [ns]
     kworker/0:4-452     [000] d....   462.673457: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.674019: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   462.674021: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   462.674022: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   462.674045: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   462.674050: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   462.674060: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   462.674134: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   462.674141: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=93185 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   462.674146: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.674220: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=78777 [ns] vruntime=13346627266 [ns]
     kworker/0:4-452     [000] d....   462.674228: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.674789: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   462.674791: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   462.674792: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   462.674815: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   462.674820: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   462.674830: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   462.674904: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   462.674911: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=92907 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   462.674916: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.674990: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=78648 [ns] vruntime=13346705914 [ns]
     kworker/0:4-452     [000] d....   462.674998: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.675559: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   462.675561: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   462.675562: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   462.675585: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   462.675590: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   462.675600: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   462.675674: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   462.675681: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=93019 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   462.675686: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.675760: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=78537 [ns] vruntime=13346784451 [ns]
     kworker/0:4-452     [000] d....   462.675767: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.676332: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   462.676336: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   462.676337: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   462.676361: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   462.676365: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   462.676376: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   462.676449: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   462.676456: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=92666 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   462.676461: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.676709: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=252908 [ns] vruntime=13347037359 [ns]
     kworker/0:4-452     [000] d....   462.676717: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.677279: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   462.677281: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   462.677282: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   462.677306: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   462.677310: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   462.677317: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   462.677392: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   462.677398: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=90445 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   462.677403: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d.h..   462.677498: irq_handler_entry: irq=26 name=arch_timer
     kworker/0:4-452     [000] d.h..   462.677503: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d.h..   462.677506: irq_handler_exit: irq=26 ret=handled
     kworker/0:4-452     [000] d....   462.677511: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=112259 [ns] vruntime=13347149618 [ns]
     kworker/0:4-452     [000] d....   462.677520: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=9204 [ns] vruntime=13347158822 [ns]
     kworker/0:4-452     [000] d....   462.677528: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.677826: irq_handler_entry: irq=29 name=fe00b880.mailbox
          <idle>-0       [000] dnh..   462.677833: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   462.677835: irq_handler_exit: irq=29 ret=handled
          <idle>-0       [000] d....   462.677841: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.677931: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=101666 [ns] vruntime=13347260488 [ns]
     kworker/0:4-452     [000] d....   462.677935: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.679179: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   462.679185: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   462.679187: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   462.679193: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.679204: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=22481 [ns] vruntime=13347282969 [ns]
     kworker/0:4-452     [000] d....   462.679207: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.685905: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   462.685915: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dns..   462.685925: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
          <idle>-0       [000] d....   462.685941: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=279 next_prio=120
 brcmf_wdog/mmc1-279     [000] d....   462.685948: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=17259 [ns] vruntime=13338300228 [ns]
 brcmf_wdog/mmc1-279     [000] d....   462.685952: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=279 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.705907: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   462.705914: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dns..   462.705925: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
          <idle>-0       [000] dnH..   462.705928: irq_handler_entry: irq=21 name=IPI
          <idle>-0       [000] dnH..   462.705934: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnH..   462.705936: irq_handler_exit: irq=21 ret=handled
          <idle>-0       [000] d....   462.705956: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=279 next_prio=120
 brcmf_wdog/mmc1-279     [000] d.h..   462.705977: irq_handler_entry: irq=51 name=mmc1
 brcmf_wdog/mmc1-279     [000] d.h..   462.705981: irq_handler_exit: irq=51 ret=handled
 brcmf_wdog/mmc1-279     [000] d.h..   462.705983: irq_handler_entry: irq=51 name=mmc0
 brcmf_wdog/mmc1-279     [000] d.h..   462.705985: irq_handler_exit: irq=51 ret=unhandled
 brcmf_wdog/mmc1-279     [000] d.s..   462.705992: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
 brcmf_wdog/mmc1-279     [000] d....   462.705996: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=53667 [ns] vruntime=13338353895 [ns]
 brcmf_wdog/mmc1-279     [000] d....   462.706005: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=9259 [ns] vruntime=13338363154 [ns]
 brcmf_wdog/mmc1-279     [000] d....   462.706010: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=279 prev_prio=120 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d.h..   462.706049: irq_handler_entry: irq=26 name=arch_timer
     kworker/0:4-452     [000] d.h..   462.706054: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d.h..   462.706057: irq_handler_exit: irq=26 ret=handled
     kworker/0:4-452     [000] d....   462.706062: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=56500 [ns] vruntime=13347339469 [ns]
     kworker/0:4-452     [000] d....   462.706071: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=9130 [ns] vruntime=13347348599 [ns]
     kworker/0:4-452     [000] d....   462.706081: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.709355: irq_handler_entry: irq=29 name=fe00b880.mailbox
          <idle>-0       [000] dnh..   462.709360: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   462.709362: irq_handler_exit: irq=29 ret=handled
          <idle>-0       [000] d....   462.709370: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d.h..   462.709387: irq_handler_entry: irq=26 name=arch_timer
     kworker/0:4-452     [000] d.h..   462.709392: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d.h..   462.709394: irq_handler_exit: irq=26 ret=handled
     kworker/0:4-452     [000] d....   462.709398: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=40371 [ns] vruntime=13347388970 [ns]
     kworker/0:4-452     [000] d....   462.709406: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=7870 [ns] vruntime=13347396840 [ns]
     kworker/0:4-452     [000] d....   462.709409: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.709412: irq_handler_entry: irq=29 name=fe00b880.mailbox
          <idle>-0       [000] dnh..   462.709417: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   462.709418: irq_handler_exit: irq=29 ret=handled
          <idle>-0       [000] d....   462.709422: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.709437: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=21722 [ns] vruntime=13347418562 [ns]
     kworker/0:4-452     [000] d....   462.709439: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.740371: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] dnh..   462.740381: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   462.740383: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   462.740384: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] dnh..   462.740386: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d....   462.740394: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d.h..   462.740411: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   462.740415: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   462.740416: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   462.740417: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   462.740423: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   462.740427: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=48389 [ns] vruntime=13347466951 [ns]
     kworker/0:4-452     [000] d.h..   462.740445: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   462.740452: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   462.740453: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   462.740454: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   462.740460: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   462.740464: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=37371 [ns] vruntime=13347504322 [ns]
     kworker/0:4-452     [000] d.h..   462.740482: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   462.740486: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   462.740487: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   462.740489: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.h..   462.740491: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   462.740494: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   462.740495: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   462.740497: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   462.740502: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   462.740506: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=41833 [ns] vruntime=13347546155 [ns]
     kworker/0:4-452     [000] d....   462.740512: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=5926 [ns] vruntime=13347552081 [ns]
     kworker/0:4-452     [000] dn...   462.740516: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
     kworker/0:4-452     [000] d....   462.740527: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:1 next_pid=293 next_prio=100
    kworker/u9:1-293     [000] d....   462.740543: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=30407 [ns] vruntime=13338552431 [ns]
    kworker/u9:1-293     [000] d....   462.740546: sched_switch: prev_comm=kworker/u9:1 prev_pid=293 prev_prio=100 prev_state=D ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d.h..   462.740549: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   462.740553: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   462.740554: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   462.740555: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   462.740562: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=19556 [ns] vruntime=13347571637 [ns]
     kworker/0:4-452     [000] dns..   462.740565: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
     kworker/0:4-452     [000] d....   462.740571: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:1 next_pid=293 next_prio=100
    kworker/u9:1-293     [000] d.h..   462.740582: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   462.740586: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   462.740587: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   462.740588: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   462.740594: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   462.740597: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=35407 [ns] vruntime=13338572045 [ns]
    kworker/u9:1-293     [000] d.h..   462.740626: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   462.740635: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   462.740636: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   462.740638: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   462.740643: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   462.740647: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=49593 [ns] vruntime=13338572617 [ns]
    kworker/u9:1-293     [000] d.h..   462.740669: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   462.740677: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   462.740678: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   462.740679: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   462.740685: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   462.740688: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=41611 [ns] vruntime=13338573097 [ns]
          <idle>-0       [002] d.h..   462.740716: irq_handler_entry: irq=19 name=IPI
          <idle>-0       [002] dnh..   462.740723: sched_wakeup: comm=sshd pid=729 prio=120 target_cpu=002
          <idle>-0       [002] dnh..   462.740724: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [002] d....   462.740733: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=729 next_prio=120
    kworker/u9:1-293     [000] d....   462.740741: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=51722 [ns] vruntime=13338573693 [ns]
    kworker/u9:1-293     [000] d....   462.740746: sched_switch: prev_comm=kworker/u9:1 prev_pid=293 prev_prio=100 prev_state=D ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d.h..   462.740750: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   462.740759: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   462.740760: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   462.740762: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   462.740769: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=28797 [ns] vruntime=13347600434 [ns]
     kworker/0:4-452     [000] dns..   462.740773: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
     kworker/0:4-452     [000] d....   462.740779: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:1 next_pid=293 next_prio=100
    kworker/u9:1-293     [000] d....   462.740789: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=20148 [ns] vruntime=13338600666 [ns]
    kworker/u9:1-293     [000] d....   462.740792: sched_switch: prev_comm=kworker/u9:1 prev_pid=293 prev_prio=100 prev_state=I ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.740797: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=7426 [ns] vruntime=13347607860 [ns]
     kworker/0:4-452     [000] d....   462.740805: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
            sshd-729     [002] dn...   462.740822: sched_wakeup: comm=kworker/u8:2 pid=47 prio=120 target_cpu=002
            sshd-729     [002] dn...   462.740829: sched_stat_runtime: comm=sshd pid=729 runtime=98704 [ns] vruntime=169141637 [ns]
            sshd-729     [002] d....   462.740833: sched_switch: prev_comm=sshd prev_pid=729 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=47 next_prio=120
    kworker/u8:2-47      [002] d....   462.740842: sched_stat_runtime: comm=kworker/u8:2 pid=47 runtime=23500 [ns] vruntime=9805824169 [ns]
    kworker/u8:2-47      [002] d....   462.740845: sched_wakeup: comm=bash pid=755 prio=120 target_cpu=002
    kworker/u8:2-47      [002] d....   462.740850: sched_stat_runtime: comm=kworker/u8:2 pid=47 runtime=9667 [ns] vruntime=9805833836 [ns]
    kworker/u8:2-47      [002] d....   462.740854: sched_switch: prev_comm=kworker/u8:2 prev_pid=47 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=755 next_prio=120
            bash-755     [002] d....   462.740905: sched_wakeup: comm=kworker/u8:2 pid=47 prio=120 target_cpu=002
            bash-755     [002] d....   462.740919: sched_stat_runtime: comm=bash pid=755 runtime=68204 [ns] vruntime=78839939 [ns]
            bash-755     [002] d....   462.740925: sched_switch: prev_comm=bash prev_pid=755 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=47 next_prio=120
    kworker/u8:2-47      [002] d....   462.740933: sched_stat_runtime: comm=kworker/u8:2 pid=47 runtime=14481 [ns] vruntime=9805848317 [ns]
    kworker/u8:2-47      [002] d....   462.740937: sched_switch: prev_comm=kworker/u8:2 prev_pid=47 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=729 next_prio=120
          <idle>-0       [000] d.h..   462.741048: irq_handler_entry: irq=19 name=IPI
          <idle>-0       [000] dnh..   462.741053: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
          <idle>-0       [000] dnh..   462.741055: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [000] d....   462.741062: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u9:1 next_pid=293 next_prio=100
            sshd-729     [002] d....   462.741072: sched_stat_runtime: comm=sshd pid=729 runtime=137630 [ns] vruntime=169279267 [ns]
            sshd-729     [002] d....   462.741085: sched_switch: prev_comm=sshd prev_pid=729 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
    kworker/u9:1-293     [000] d....   462.741096: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=45648 [ns] vruntime=13338608386 [ns]
    kworker/u9:1-293     [000] d....   462.741101: sched_switch: prev_comm=kworker/u9:1 prev_pid=293 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.741105: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   462.741115: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] d.h..   462.741116: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   462.741117: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   462.741127: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   462.741131: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] d.h..   462.741132: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   462.741133: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] dns..   462.741142: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
          <idle>-0       [000] d....   462.741151: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u9:1 next_pid=293 next_prio=100
    kworker/u9:1-293     [000] d....   462.741165: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=24444 [ns] vruntime=13338608668 [ns]
    kworker/u9:1-293     [000] d....   462.741168: sched_switch: prev_comm=kworker/u9:1 prev_pid=293 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.755907: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   462.755913: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dns..   462.755922: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
          <idle>-0       [000] d....   462.755939: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=279 next_prio=120
 brcmf_wdog/mmc1-279     [000] d....   462.755945: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=17222 [ns] vruntime=13338625082 [ns]
 brcmf_wdog/mmc1-279     [000] d....   462.755947: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=279 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.775906: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   462.775911: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dns..   462.775919: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
          <idle>-0       [000] d....   462.775934: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=279 next_prio=120
 brcmf_wdog/mmc1-279     [000] d.h..   462.775952: irq_handler_entry: irq=51 name=mmc1
 brcmf_wdog/mmc1-279     [000] d.h..   462.775956: irq_handler_exit: irq=51 ret=handled
 brcmf_wdog/mmc1-279     [000] d.h..   462.775957: irq_handler_entry: irq=51 name=mmc0
 brcmf_wdog/mmc1-279     [000] d.h..   462.775959: irq_handler_exit: irq=51 ret=unhandled
 brcmf_wdog/mmc1-279     [000] d.s..   462.775965: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
 brcmf_wdog/mmc1-279     [000] d....   462.775969: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=44648 [ns] vruntime=13338669730 [ns]
 brcmf_wdog/mmc1-279     [000] d....   462.775977: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=7704 [ns] vruntime=13338677434 [ns]
 brcmf_wdog/mmc1-279     [000] d....   462.775980: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=279 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.785903: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   462.785912: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d.h..   462.788340: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] dnh..   462.788350: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   462.788352: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   462.788353: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] dnh..   462.788355: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d....   462.788362: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d.h..   462.788372: irq_handler_entry: irq=26 name=arch_timer
     kworker/0:4-452     [000] d.h..   462.788378: irq_handler_exit: irq=26 ret=handled
     kworker/0:4-452     [000] d.h..   462.788389: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   462.788392: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   462.788393: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   462.788395: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   462.788401: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   462.788405: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=56889 [ns] vruntime=13347664749 [ns]
     kworker/0:4-452     [000] d.h..   462.788424: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   462.788430: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   462.788431: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   462.788433: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   462.788438: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   462.788441: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=37074 [ns] vruntime=13347701823 [ns]
     kworker/0:4-452     [000] d.h..   462.788460: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   462.788464: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   462.788465: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   462.788466: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.h..   462.788468: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   462.788471: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   462.788472: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   462.788474: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   462.788479: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   462.788482: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=40908 [ns] vruntime=13347742731 [ns]
     kworker/0:4-452     [000] d....   462.788488: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=5815 [ns] vruntime=13347748546 [ns]
     kworker/0:4-452     [000] dn...   462.788493: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
     kworker/0:4-452     [000] d....   462.788503: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:1 next_pid=293 next_prio=100
    kworker/u9:1-293     [000] d....   462.788518: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=29888 [ns] vruntime=13338748890 [ns]
    kworker/u9:1-293     [000] d....   462.788522: sched_switch: prev_comm=kworker/u9:1 prev_pid=293 prev_prio=100 prev_state=D ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d.h..   462.788525: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   462.788529: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   462.788530: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   462.788531: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   462.788538: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=19649 [ns] vruntime=13347768195 [ns]
     kworker/0:4-452     [000] dns..   462.788541: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
     kworker/0:4-452     [000] d....   462.788547: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:1 next_pid=293 next_prio=100
    kworker/u9:1-293     [000] d.h..   462.788557: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   462.788561: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   462.788562: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   462.788564: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   462.788569: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   462.788573: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=34796 [ns] vruntime=13338768596 [ns]
    kworker/u9:1-293     [000] d.h..   462.788601: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   462.788610: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   462.788611: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   462.788613: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   462.788618: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   462.788622: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=48926 [ns] vruntime=13338769160 [ns]
    kworker/u9:1-293     [000] d.h..   462.788643: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   462.788649: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   462.788650: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   462.788652: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   462.788657: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   462.788661: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=39222 [ns] vruntime=13338769612 [ns]
    kworker/u9:1-293     [000] d.h..   462.788715: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   462.788725: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   462.788726: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   462.788728: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   462.788734: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   462.788738: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=76574 [ns] vruntime=13338770495 [ns]
    kworker/u9:1-293     [000] d....   462.788748: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=10074 [ns] vruntime=13338770611 [ns]
    kworker/u9:1-293     [000] d....   462.788752: sched_switch: prev_comm=kworker/u9:1 prev_pid=293 prev_prio=100 prev_state=I ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.788756: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=8796 [ns] vruntime=13347776991 [ns]
     kworker/0:4-452     [000] d....   462.788764: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.805906: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   462.805912: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dns..   462.805922: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
          <idle>-0       [000] dnH..   462.805931: irq_handler_entry: irq=21 name=IPI
          <idle>-0       [000] dnH..   462.805935: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnH..   462.805937: irq_handler_exit: irq=21 ret=handled
          <idle>-0       [000] d....   462.805948: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=279 next_prio=120
 brcmf_wdog/mmc1-279     [000] d....   462.805954: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=20222 [ns] vruntime=13338797213 [ns]
 brcmf_wdog/mmc1-279     [000] d....   462.805958: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=279 prev_prio=120 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d.h..   462.805985: irq_handler_entry: irq=26 name=arch_timer
     kworker/0:4-452     [000] d.h..   462.805991: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d.h..   462.805994: irq_handler_exit: irq=26 ret=handled
     kworker/0:4-452     [000] d....   462.805998: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=43797 [ns] vruntime=13347820788 [ns]
     kworker/0:4-452     [000] d....   462.806006: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=8037 [ns] vruntime=13347828825 [ns]
     kworker/0:4-452     [000] d....   462.806013: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.809181: irq_handler_entry: irq=29 name=fe00b880.mailbox
          <idle>-0       [000] dnh..   462.809187: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   462.809189: irq_handler_exit: irq=29 ret=handled
          <idle>-0       [000] d....   462.809200: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d.h..   462.809220: irq_handler_entry: irq=26 name=arch_timer
     kworker/0:4-452     [000] d.h..   462.809225: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d.h..   462.809227: irq_handler_exit: irq=26 ret=handled
     kworker/0:4-452     [000] d....   462.809232: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=47907 [ns] vruntime=13347876732 [ns]
     kworker/0:4-452     [000] d.h..   462.809241: irq_handler_entry: irq=29 name=fe00b880.mailbox
     kworker/0:4-452     [000] d.h..   462.809243: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d.h..   462.809245: irq_handler_exit: irq=29 ret=handled
     kworker/0:4-452     [000] d....   462.809250: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=17796 [ns] vruntime=13347894528 [ns]
     kworker/0:4-452     [000] d....   462.809266: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=15871 [ns] vruntime=13347910399 [ns]
     kworker/0:4-452     [000] d....   462.809270: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.825907: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   462.825913: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dns..   462.825924: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
          <idle>-0       [000] d....   462.825943: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=279 next_prio=120
 brcmf_wdog/mmc1-279     [000] d.h..   462.825963: irq_handler_entry: irq=51 name=mmc1
 brcmf_wdog/mmc1-279     [000] d.h..   462.825968: irq_handler_exit: irq=51 ret=handled
 brcmf_wdog/mmc1-279     [000] d.h..   462.825969: irq_handler_entry: irq=51 name=mmc0
 brcmf_wdog/mmc1-279     [000] d.h..   462.825971: irq_handler_exit: irq=51 ret=unhandled
 brcmf_wdog/mmc1-279     [000] d.s..   462.825978: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
 brcmf_wdog/mmc1-279     [000] d....   462.825982: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=52445 [ns] vruntime=13338962844 [ns]
 brcmf_wdog/mmc1-279     [000] d....   462.825991: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=8944 [ns] vruntime=13338971788 [ns]
 brcmf_wdog/mmc1-279     [000] d....   462.825995: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=279 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.949306: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] dnh..   462.949319: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   462.949321: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   462.949322: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] dnh..   462.949324: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] dnh..   462.949327: irq_handler_entry: irq=21 name=IPI
          <idle>-0       [000] dnh..   462.949330: irq_handler_exit: irq=21 ret=handled
          <idle>-0       [000] d....   462.949339: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d.h..   462.949358: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   462.949362: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   462.949363: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   462.949365: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   462.949372: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   462.949377: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=62611 [ns] vruntime=13347973010 [ns]
     kworker/0:4-452     [000] d....   462.949382: sched_wakeup: comm=kworker/0:3 pid=162 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   462.949385: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=8519 [ns] vruntime=13347981529 [ns]
     kworker/0:4-452     [000] d....   462.949389: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=R ==> next_comm=kworker/0:3 next_pid=162 next_prio=120
     kworker/0:3-162     [000] d....   462.949400: sched_stat_runtime: comm=kworker/0:3 pid=162 runtime=14296 [ns] vruntime=13345163268 [ns]
     kworker/0:3-162     [000] d....   462.949403: sched_switch: prev_comm=kworker/0:3 prev_pid=162 prev_prio=120 prev_state=I ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d.h..   462.949425: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   462.949432: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   462.949433: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   462.949435: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   462.949442: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   462.949446: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=46074 [ns] vruntime=13348027603 [ns]
     kworker/0:4-452     [000] d.h..   462.949465: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   462.949470: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   462.949471: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   462.949472: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.h..   462.949475: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   462.949478: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   462.949480: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   462.949481: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   462.949488: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   462.949492: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=46093 [ns] vruntime=13348073696 [ns]
     kworker/0:4-452     [000] d....   462.949499: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=6963 [ns] vruntime=13348080659 [ns]
     kworker/0:4-452     [000] dn...   462.949504: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
     kworker/0:4-452     [000] d....   462.949515: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:1 next_pid=293 next_prio=100
    kworker/u9:1-293     [000] d.h..   462.949533: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   462.949537: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   462.949539: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   462.949540: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   462.949547: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   462.949551: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=52389 [ns] vruntime=13339081263 [ns]
    kworker/u9:1-293     [000] d.h..   462.949563: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   462.949567: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   462.949568: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   462.949570: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   462.949577: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   462.949581: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=29463 [ns] vruntime=13339081602 [ns]
    kworker/u9:1-293     [000] d.h..   462.949612: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   462.949622: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   462.949623: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   462.949625: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   462.949631: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   462.949635: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=54703 [ns] vruntime=13339082233 [ns]
    kworker/u9:1-293     [000] d.h..   462.949659: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   462.949668: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   462.949670: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   462.949671: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   462.949678: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   462.949682: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=46723 [ns] vruntime=13339082772 [ns]
          <idle>-0       [002] d.h..   462.949712: irq_handler_entry: irq=19 name=IPI
          <idle>-0       [002] dnh..   462.949721: sched_wakeup: comm=sshd pid=729 prio=120 target_cpu=002
          <idle>-0       [002] dnh..   462.949723: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [002] d....   462.949732: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=729 next_prio=120
    kworker/u9:1-293     [000] d.h..   462.949740: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   462.949751: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   462.949752: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   462.949754: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   462.949761: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   462.949766: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=83833 [ns] vruntime=13339083739 [ns]
    kworker/u9:1-293     [000] d....   462.949778: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=12000 [ns] vruntime=13339083877 [ns]
    kworker/u9:1-293     [000] d....   462.949783: sched_switch: prev_comm=kworker/u9:1 prev_pid=293 prev_prio=100 prev_state=I ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   462.949788: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=10204 [ns] vruntime=13348090863 [ns]
     kworker/0:4-452     [000] d....   462.949798: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
            sshd-729     [002] dn...   462.949832: sched_wakeup: comm=kworker/u8:2 pid=47 prio=120 target_cpu=002
            sshd-729     [002] dn...   462.949840: sched_stat_runtime: comm=sshd pid=729 runtime=110685 [ns] vruntime=169389952 [ns]
            sshd-729     [002] d....   462.949847: sched_switch: prev_comm=sshd prev_pid=729 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=47 next_prio=120
    kworker/u8:2-47      [002] d....   462.949857: sched_stat_runtime: comm=kworker/u8:2 pid=47 runtime=29297 [ns] vruntime=9806078281 [ns]
    kworker/u8:2-47      [002] d....   462.949861: sched_wakeup: comm=bash pid=755 prio=120 target_cpu=002
    kworker/u8:2-47      [002] d....   462.949867: sched_stat_runtime: comm=kworker/u8:2 pid=47 runtime=11148 [ns] vruntime=9806089429 [ns]
    kworker/u8:2-47      [002] d....   462.949871: sched_switch: prev_comm=kworker/u8:2 prev_pid=47 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=755 next_prio=120
            bash-755     [002] d....   462.949926: sched_wakeup: comm=kworker/u8:2 pid=47 prio=120 target_cpu=002
            bash-755     [002] d....   462.949943: sched_stat_runtime: comm=bash pid=755 runtime=75648 [ns] vruntime=78915587 [ns]
            bash-755     [002] d....   462.949949: sched_switch: prev_comm=bash prev_pid=755 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=47 next_prio=120
    kworker/u8:2-47      [002] d....   462.949958: sched_stat_runtime: comm=kworker/u8:2 pid=47 runtime=15907 [ns] vruntime=9806105336 [ns]
    kworker/u8:2-47      [002] d....   462.949962: sched_switch: prev_comm=kworker/u8:2 prev_pid=47 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=729 next_prio=120
          <idle>-0       [000] d.h..   462.950088: irq_handler_entry: irq=19 name=IPI
          <idle>-0       [000] dnh..   462.950094: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
          <idle>-0       [000] dnh..   462.950095: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [000] d....   462.950104: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u9:1 next_pid=293 next_prio=100
            sshd-729     [002] d....   462.950116: sched_stat_runtime: comm=sshd pid=729 runtime=156519 [ns] vruntime=169546471 [ns]
            sshd-729     [002] d....   462.950130: sched_switch: prev_comm=sshd prev_pid=729 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
    kworker/u9:1-293     [000] d.h..   462.950142: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   462.950153: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   462.950154: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   462.950156: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d....   462.950161: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=69667 [ns] vruntime=13339091666 [ns]
    kworker/u9:1-293     [000] d....   462.950167: sched_switch: prev_comm=kworker/u9:1 prev_pid=293 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.950171: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   462.950175: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] d.h..   462.950176: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   462.950177: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] dns..   462.950188: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
          <idle>-0       [000] d....   462.950194: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u9:1 next_pid=293 next_prio=100
    kworker/u9:1-293     [000] d....   462.950209: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=22685 [ns] vruntime=13339091927 [ns]
    kworker/u9:1-293     [000] d....   462.950212: sched_switch: prev_comm=kworker/u9:1 prev_pid=293 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.965906: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   462.965913: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dns..   462.965922: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
          <idle>-0       [000] d....   462.965942: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=279 next_prio=120
 brcmf_wdog/mmc1-279     [000] d....   462.965949: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=19648 [ns] vruntime=13339110511 [ns]
 brcmf_wdog/mmc1-279     [000] d....   462.965952: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=279 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.985905: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   462.985911: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dns..   462.985920: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
          <idle>-0       [000] d....   462.985937: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=279 next_prio=120
 brcmf_wdog/mmc1-279     [000] d.h..   462.985958: irq_handler_entry: irq=51 name=mmc1
 brcmf_wdog/mmc1-279     [000] d.h..   462.985962: irq_handler_exit: irq=51 ret=handled
 brcmf_wdog/mmc1-279     [000] d.h..   462.985963: irq_handler_entry: irq=51 name=mmc0
 brcmf_wdog/mmc1-279     [000] d.h..   462.985965: irq_handler_exit: irq=51 ret=unhandled
 brcmf_wdog/mmc1-279     [000] d.s..   462.985972: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
 brcmf_wdog/mmc1-279     [000] d....   462.985977: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=50741 [ns] vruntime=13339161252 [ns]
 brcmf_wdog/mmc1-279     [000] d....   462.985986: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=8963 [ns] vruntime=13339170215 [ns]
 brcmf_wdog/mmc1-279     [000] d....   462.985989: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=279 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   462.995902: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   462.995912: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dns..   462.995923: sched_wakeup: comm=kcompactd0 pid=40 prio=120 target_cpu=000
          <idle>-0       [000] d....   462.995937: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kcompactd0 next_pid=40 next_prio=120
      kcompactd0-40      [000] d....   462.995951: sched_stat_runtime: comm=kcompactd0 pid=40 runtime=22815 [ns] vruntime=13339113678 [ns]
      kcompactd0-40      [000] d....   462.995955: sched_switch: prev_comm=kcompactd0 prev_pid=40 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.000882: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] dnh..   463.000893: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   463.000895: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   463.000897: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] dnh..   463.000898: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d....   463.000908: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d.h..   463.000926: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   463.000930: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   463.000931: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   463.000933: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   463.000940: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   463.000945: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=55019 [ns] vruntime=13348145882 [ns]
     kworker/0:4-452     [000] d.h..   463.000965: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   463.000972: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   463.000973: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   463.000975: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   463.000982: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   463.000986: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=40741 [ns] vruntime=13348186623 [ns]
     kworker/0:4-452     [000] d.h..   463.001005: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   463.001009: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   463.001010: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   463.001012: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.h..   463.001014: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   463.001018: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   463.001019: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   463.001021: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   463.001028: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   463.001032: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=45851 [ns] vruntime=13348232474 [ns]
     kworker/0:4-452     [000] d....   463.001038: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=6667 [ns] vruntime=13348239141 [ns]
     kworker/0:4-452     [000] dn...   463.001043: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
     kworker/0:4-452     [000] d....   463.001055: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:1 next_pid=293 next_prio=100
    kworker/u9:1-293     [000] d.h..   463.001073: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   463.001077: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   463.001078: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   463.001080: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   463.001087: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   463.001091: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=52704 [ns] vruntime=13339239749 [ns]
    kworker/u9:1-293     [000] d.h..   463.001103: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   463.001107: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   463.001108: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   463.001109: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   463.001116: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   463.001120: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=29241 [ns] vruntime=13339240086 [ns]
    kworker/u9:1-293     [000] d.h..   463.001151: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   463.001162: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   463.001163: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   463.001165: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   463.001171: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   463.001176: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=55333 [ns] vruntime=13339240724 [ns]
    kworker/u9:1-293     [000] d.h..   463.001199: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   463.001206: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   463.001208: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   463.001209: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   463.001216: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   463.001220: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=44518 [ns] vruntime=13339241237 [ns]
    kworker/u9:1-293     [000] d.h..   463.001281: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   463.001292: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   463.001293: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   463.001295: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   463.001302: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   463.001307: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=86241 [ns] vruntime=13339242231 [ns]
    kworker/u9:1-293     [000] d....   463.001318: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=11630 [ns] vruntime=13339242365 [ns]
    kworker/u9:1-293     [000] d....   463.001323: sched_switch: prev_comm=kworker/u9:1 prev_pid=293 prev_prio=100 prev_state=I ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.001328: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=10241 [ns] vruntime=13348249382 [ns]
     kworker/0:4-452     [000] d....   463.001337: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.015905: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   463.015912: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dns..   463.015923: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
          <idle>-0       [000] d....   463.015942: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=279 next_prio=120
 brcmf_wdog/mmc1-279     [000] d....   463.015949: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=19259 [ns] vruntime=13339268641 [ns]
 brcmf_wdog/mmc1-279     [000] d....   463.015952: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=279 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.035904: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   463.035910: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dns..   463.035920: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
          <idle>-0       [000] dns..   463.035930: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] d....   463.035946: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=279 next_prio=120
 brcmf_wdog/mmc1-279     [000] d.h..   463.035966: irq_handler_entry: irq=51 name=mmc1
 brcmf_wdog/mmc1-279     [000] d.h..   463.035972: irq_handler_exit: irq=51 ret=handled
 brcmf_wdog/mmc1-279     [000] d.h..   463.035973: irq_handler_entry: irq=51 name=mmc0
 brcmf_wdog/mmc1-279     [000] d.h..   463.035975: irq_handler_exit: irq=51 ret=unhandled
 brcmf_wdog/mmc1-279     [000] d.s..   463.035982: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
 brcmf_wdog/mmc1-279     [000] d....   463.035987: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=52592 [ns] vruntime=13339321233 [ns]
 brcmf_wdog/mmc1-279     [000] d....   463.035996: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=9222 [ns] vruntime=13339330455 [ns]
 brcmf_wdog/mmc1-279     [000] d....   463.036000: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=279 prev_prio=120 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.036036: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=39926 [ns] vruntime=13348289308 [ns]
     kworker/0:4-452     [000] d....   463.036043: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.123442: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] dnh..   463.123454: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   463.123456: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   463.123458: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] dnh..   463.123459: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] dnh..   463.123462: irq_handler_entry: irq=21 name=IPI
          <idle>-0       [000] dnh..   463.123465: irq_handler_exit: irq=21 ret=handled
          <idle>-0       [000] d....   463.123475: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d.h..   463.123493: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   463.123497: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   463.123498: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   463.123500: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   463.123507: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   463.123511: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=61352 [ns] vruntime=13348350660 [ns]
     kworker/0:4-452     [000] d.h..   463.123531: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   463.123538: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   463.123539: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   463.123541: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   463.123547: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   463.123551: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=40185 [ns] vruntime=13348390845 [ns]
     kworker/0:4-452     [000] d.h..   463.123570: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   463.123575: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   463.123576: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   463.123578: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.h..   463.123580: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   463.123584: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   463.123585: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   463.123587: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   463.123593: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   463.123597: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=46000 [ns] vruntime=13348436845 [ns]
     kworker/0:4-452     [000] d....   463.123604: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=6759 [ns] vruntime=13348443604 [ns]
     kworker/0:4-452     [000] dn...   463.123609: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
     kworker/0:4-452     [000] d....   463.123621: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:1 next_pid=293 next_prio=100
    kworker/u9:1-293     [000] d.h..   463.123639: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   463.123643: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   463.123644: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   463.123646: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   463.123653: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   463.123657: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=52797 [ns] vruntime=13339444213 [ns]
    kworker/u9:1-293     [000] d.h..   463.123669: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   463.123673: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   463.123674: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   463.123675: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   463.123682: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   463.123686: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=29537 [ns] vruntime=13339444553 [ns]
    kworker/u9:1-293     [000] d.h..   463.123717: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   463.123727: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   463.123729: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   463.123730: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   463.123737: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   463.123741: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=54592 [ns] vruntime=13339445182 [ns]
    kworker/u9:1-293     [000] d.h..   463.123764: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   463.123774: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   463.123775: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   463.123776: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   463.123783: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   463.123787: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=46223 [ns] vruntime=13339445715 [ns]
          <idle>-0       [002] d.h..   463.123817: irq_handler_entry: irq=19 name=IPI
          <idle>-0       [002] dnh..   463.123825: sched_wakeup: comm=sshd pid=729 prio=120 target_cpu=002
          <idle>-0       [002] dnh..   463.123827: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [002] d....   463.123838: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=729 next_prio=120
    kworker/u9:1-293     [000] d.h..   463.123844: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   463.123855: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   463.123856: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   463.123858: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   463.123864: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   463.123869: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=81388 [ns] vruntime=13339446653 [ns]
    kworker/u9:1-293     [000] d....   463.123881: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=12038 [ns] vruntime=13339446791 [ns]
    kworker/u9:1-293     [000] d....   463.123886: sched_switch: prev_comm=kworker/u9:1 prev_pid=293 prev_prio=100 prev_state=I ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.123898: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=17000 [ns] vruntime=13348460604 [ns]
     kworker/0:4-452     [000] d....   463.123907: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
            sshd-729     [002] dn...   463.123935: sched_wakeup: comm=kworker/u8:2 pid=47 prio=120 target_cpu=002
            sshd-729     [002] dn...   463.123944: sched_stat_runtime: comm=sshd pid=729 runtime=110000 [ns] vruntime=169656471 [ns]
            sshd-729     [002] d....   463.123948: sched_switch: prev_comm=sshd prev_pid=729 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=47 next_prio=120
    kworker/u8:2-47      [002] d....   463.123958: sched_stat_runtime: comm=kworker/u8:2 pid=47 runtime=26500 [ns] vruntime=9806342003 [ns]
    kworker/u8:2-47      [002] d....   463.123962: sched_wakeup: comm=bash pid=755 prio=120 target_cpu=002
    kworker/u8:2-47      [002] d....   463.123967: sched_stat_runtime: comm=kworker/u8:2 pid=47 runtime=10796 [ns] vruntime=9806352799 [ns]
    kworker/u8:2-47      [002] d....   463.123972: sched_switch: prev_comm=kworker/u8:2 prev_pid=47 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=755 next_prio=120
            bash-755     [002] d....   463.124026: sched_wakeup: comm=kworker/u8:2 pid=47 prio=120 target_cpu=002
            bash-755     [002] d....   463.124042: sched_stat_runtime: comm=bash pid=755 runtime=74334 [ns] vruntime=78989921 [ns]
            bash-755     [002] d....   463.124048: sched_switch: prev_comm=bash prev_pid=755 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=47 next_prio=120
    kworker/u8:2-47      [002] d....   463.124058: sched_stat_runtime: comm=kworker/u8:2 pid=47 runtime=16092 [ns] vruntime=9806368891 [ns]
    kworker/u8:2-47      [002] d....   463.124062: sched_switch: prev_comm=kworker/u8:2 prev_pid=47 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=729 next_prio=120
          <idle>-0       [000] d.h..   463.124185: irq_handler_entry: irq=19 name=IPI
          <idle>-0       [000] dnh..   463.124190: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
          <idle>-0       [000] dnh..   463.124192: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [000] d....   463.124201: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u9:1 next_pid=293 next_prio=100
            sshd-729     [002] d....   463.124212: sched_stat_runtime: comm=sshd pid=729 runtime=153463 [ns] vruntime=169809934 [ns]
            sshd-729     [002] d....   463.124227: sched_switch: prev_comm=sshd prev_pid=729 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
    kworker/u9:1-293     [000] d.h..   463.124238: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   463.124249: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   463.124250: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   463.124252: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d....   463.124256: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=68870 [ns] vruntime=13339461398 [ns]
    kworker/u9:1-293     [000] d....   463.124261: sched_switch: prev_comm=kworker/u9:1 prev_pid=293 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.124264: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   463.124268: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] d.h..   463.124269: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   463.124271: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] dns..   463.124282: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
          <idle>-0       [000] d....   463.124288: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u9:1 next_pid=293 next_prio=100
    kworker/u9:1-293     [000] d....   463.124303: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=22981 [ns] vruntime=13339461663 [ns]
    kworker/u9:1-293     [000] d....   463.124306: sched_switch: prev_comm=kworker/u9:1 prev_pid=293 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.135904: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   463.135911: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dns..   463.135921: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
          <idle>-0       [000] d....   463.135941: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=279 next_prio=120
 brcmf_wdog/mmc1-279     [000] d....   463.135948: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=20167 [ns] vruntime=13339480771 [ns]
 brcmf_wdog/mmc1-279     [000] d....   463.135952: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=279 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.155903: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   463.155914: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dns..   463.155923: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
          <idle>-0       [000] d....   463.155940: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=279 next_prio=120
 brcmf_wdog/mmc1-279     [000] d.h..   463.155960: irq_handler_entry: irq=51 name=mmc1
 brcmf_wdog/mmc1-279     [000] d.h..   463.155965: irq_handler_exit: irq=51 ret=handled
 brcmf_wdog/mmc1-279     [000] d.h..   463.155966: irq_handler_entry: irq=51 name=mmc0
 brcmf_wdog/mmc1-279     [000] d.h..   463.155968: irq_handler_exit: irq=51 ret=unhandled
 brcmf_wdog/mmc1-279     [000] d.s..   463.155975: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
 brcmf_wdog/mmc1-279     [000] d....   463.155979: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=50686 [ns] vruntime=13339531457 [ns]
 brcmf_wdog/mmc1-279     [000] d....   463.155988: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=8963 [ns] vruntime=13339540420 [ns]
 brcmf_wdog/mmc1-279     [000] d....   463.155992: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=279 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.165900: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   463.165910: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d.h..   463.167424: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] dnh..   463.167436: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   463.167438: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   463.167439: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] dnh..   463.167441: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d....   463.167451: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d.h..   463.167470: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   463.167474: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   463.167475: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   463.167476: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   463.167483: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   463.167488: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=55093 [ns] vruntime=13348515697 [ns]
     kworker/0:4-452     [000] d.h..   463.167508: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   463.167515: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   463.167516: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   463.167518: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   463.167524: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   463.167528: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=40740 [ns] vruntime=13348556437 [ns]
     kworker/0:4-452     [000] d.h..   463.167547: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   463.167551: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   463.167553: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   463.167554: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.h..   463.167556: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   463.167560: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   463.167561: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   463.167563: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   463.167569: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   463.167573: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=45315 [ns] vruntime=13348601752 [ns]
     kworker/0:4-452     [000] d....   463.167580: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=6760 [ns] vruntime=13348608512 [ns]
     kworker/0:4-452     [000] dn...   463.167585: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
     kworker/0:4-452     [000] d....   463.167597: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:1 next_pid=293 next_prio=100
    kworker/u9:1-293     [000] d.h..   463.167615: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   463.167619: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   463.167620: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   463.167622: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   463.167629: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   463.167633: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=52555 [ns] vruntime=13339609118 [ns]
    kworker/u9:1-293     [000] d.h..   463.167644: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   463.167648: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   463.167650: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   463.167651: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   463.167658: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   463.167662: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=28963 [ns] vruntime=13339609452 [ns]
    kworker/u9:1-293     [000] d.h..   463.167692: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   463.167702: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   463.167704: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   463.167705: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   463.167712: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   463.167716: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=54093 [ns] vruntime=13339610076 [ns]
    kworker/u9:1-293     [000] d.h..   463.167739: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   463.167746: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   463.167748: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   463.167749: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   463.167756: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   463.167760: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=43926 [ns] vruntime=13339610582 [ns]
    kworker/u9:1-293     [000] d.h..   463.167820: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   463.167831: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   463.167832: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   463.167834: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   463.167841: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   463.167846: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=85537 [ns] vruntime=13339611568 [ns]
    kworker/u9:1-293     [000] d....   463.167857: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=11611 [ns] vruntime=13339611701 [ns]
    kworker/u9:1-293     [000] d....   463.167862: sched_switch: prev_comm=kworker/u9:1 prev_pid=293 prev_prio=100 prev_state=I ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.167867: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=10240 [ns] vruntime=13348618752 [ns]
     kworker/0:4-452     [000] d....   463.167876: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.185903: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   463.185910: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dns..   463.185920: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
          <idle>-0       [000] d....   463.185939: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=279 next_prio=120
 brcmf_wdog/mmc1-279     [000] d....   463.185946: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=19333 [ns] vruntime=13339638085 [ns]
 brcmf_wdog/mmc1-279     [000] d....   463.185949: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=279 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.205902: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   463.205909: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dns..   463.205918: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
          <idle>-0       [000] d....   463.205935: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=279 next_prio=120
 brcmf_wdog/mmc1-279     [000] d.h..   463.205955: irq_handler_entry: irq=51 name=mmc1
 brcmf_wdog/mmc1-279     [000] d.h..   463.205960: irq_handler_exit: irq=51 ret=handled
 brcmf_wdog/mmc1-279     [000] d.h..   463.205961: irq_handler_entry: irq=51 name=mmc0
 brcmf_wdog/mmc1-279     [000] d.h..   463.205963: irq_handler_exit: irq=51 ret=unhandled
 brcmf_wdog/mmc1-279     [000] d.s..   463.205970: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
 brcmf_wdog/mmc1-279     [000] d....   463.205974: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=50833 [ns] vruntime=13339688918 [ns]
 brcmf_wdog/mmc1-279     [000] d....   463.205983: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=8926 [ns] vruntime=13339697844 [ns]
 brcmf_wdog/mmc1-279     [000] d....   463.205987: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=279 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.303682: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] dnh..   463.303694: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   463.303696: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   463.303698: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] dnh..   463.303699: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] dnh..   463.303702: irq_handler_entry: irq=21 name=IPI
          <idle>-0       [000] dnh..   463.303705: irq_handler_exit: irq=21 ret=handled
          <idle>-0       [000] d....   463.303714: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d.h..   463.303732: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   463.303737: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   463.303738: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   463.303740: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   463.303746: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   463.303751: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=60648 [ns] vruntime=13348679400 [ns]
     kworker/0:4-452     [000] d.h..   463.303770: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   463.303777: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   463.303779: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   463.303780: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   463.303787: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   463.303791: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=40296 [ns] vruntime=13348719696 [ns]
     kworker/0:4-452     [000] d.h..   463.303810: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   463.303814: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   463.303815: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   463.303817: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.h..   463.303819: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   463.303823: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   463.303824: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   463.303826: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   463.303833: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   463.303837: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=45833 [ns] vruntime=13348765529 [ns]
     kworker/0:4-452     [000] d....   463.303843: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=6760 [ns] vruntime=13348772289 [ns]
     kworker/0:4-452     [000] dn...   463.303848: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
     kworker/0:4-452     [000] d....   463.303860: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:1 next_pid=293 next_prio=100
    kworker/u9:1-293     [000] d.h..   463.303878: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   463.303882: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   463.303883: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   463.303885: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   463.303894: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   463.303898: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=54500 [ns] vruntime=13339772917 [ns]
    kworker/u9:1-293     [000] d.h..   463.303910: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   463.303914: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   463.303915: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   463.303917: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   463.303923: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   463.303927: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=29259 [ns] vruntime=13339773254 [ns]
    kworker/u9:1-293     [000] d.h..   463.303958: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   463.303968: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   463.303969: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   463.303971: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   463.303978: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   463.303982: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=54630 [ns] vruntime=13339773884 [ns]
    kworker/u9:1-293     [000] d.h..   463.304005: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   463.304014: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   463.304016: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   463.304017: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   463.304024: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   463.304028: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=46185 [ns] vruntime=13339774416 [ns]
          <idle>-0       [002] d.h..   463.304057: irq_handler_entry: irq=19 name=IPI
          <idle>-0       [002] dnh..   463.304065: sched_wakeup: comm=sshd pid=729 prio=120 target_cpu=002
          <idle>-0       [002] dnh..   463.304067: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [002] d....   463.304077: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=729 next_prio=120
    kworker/u9:1-293     [000] d.h..   463.304084: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   463.304095: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   463.304096: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   463.304098: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   463.304105: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   463.304109: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=80907 [ns] vruntime=13339775349 [ns]
    kworker/u9:1-293     [000] d....   463.304121: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=12093 [ns] vruntime=13339775488 [ns]
    kworker/u9:1-293     [000] d....   463.304126: sched_switch: prev_comm=kworker/u9:1 prev_pid=293 prev_prio=100 prev_state=I ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.304137: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=16574 [ns] vruntime=13348788863 [ns]
     kworker/0:4-452     [000] d....   463.304147: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
            sshd-729     [002] dn...   463.304174: sched_wakeup: comm=kworker/u8:2 pid=47 prio=120 target_cpu=002
            sshd-729     [002] dn...   463.304183: sched_stat_runtime: comm=sshd pid=729 runtime=109166 [ns] vruntime=169919100 [ns]
            sshd-729     [002] d....   463.304187: sched_switch: prev_comm=sshd prev_pid=729 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=47 next_prio=120
    kworker/u8:2-47      [002] d....   463.304197: sched_stat_runtime: comm=kworker/u8:2 pid=47 runtime=26537 [ns] vruntime=9806604669 [ns]
    kworker/u8:2-47      [002] d....   463.304201: sched_wakeup: comm=bash pid=755 prio=120 target_cpu=002
    kworker/u8:2-47      [002] d....   463.304207: sched_stat_runtime: comm=kworker/u8:2 pid=47 runtime=11037 [ns] vruntime=9806615706 [ns]
    kworker/u8:2-47      [002] d....   463.304211: sched_switch: prev_comm=kworker/u8:2 prev_pid=47 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=755 next_prio=120
            bash-755     [002] d....   463.304690: sched_wakeup: comm=kworker/u8:2 pid=47 prio=120 target_cpu=002
            bash-755     [002] d....   463.304711: sched_stat_runtime: comm=bash pid=755 runtime=503241 [ns] vruntime=79493162 [ns]
            bash-755     [002] d....   463.304718: sched_switch: prev_comm=bash prev_pid=755 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=47 next_prio=120
    kworker/u8:2-47      [002] d....   463.304729: sched_stat_runtime: comm=kworker/u8:2 pid=47 runtime=18593 [ns] vruntime=9806634299 [ns]
    kworker/u8:2-47      [002] d....   463.304733: sched_switch: prev_comm=kworker/u8:2 prev_pid=47 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=729 next_prio=120
          <idle>-0       [000] d.h..   463.304877: irq_handler_entry: irq=19 name=IPI
          <idle>-0       [000] dnh..   463.304884: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
          <idle>-0       [000] dnh..   463.304886: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [000] d....   463.304895: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u9:1 next_pid=293 next_prio=100
            sshd-729     [002] d....   463.304905: sched_stat_runtime: comm=sshd pid=729 runtime=175444 [ns] vruntime=170094544 [ns]
            sshd-729     [002] d....   463.304922: sched_switch: prev_comm=sshd prev_pid=729 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
    kworker/u9:1-293     [000] d.h..   463.304934: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   463.304945: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   463.304947: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   463.304949: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d....   463.304953: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=73186 [ns] vruntime=13339789707 [ns]
    kworker/u9:1-293     [000] d....   463.304958: sched_switch: prev_comm=kworker/u9:1 prev_pid=293 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.304961: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   463.304966: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] d.h..   463.304967: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   463.304968: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] dns..   463.304979: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
          <idle>-0       [000] d....   463.304985: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u9:1 next_pid=293 next_prio=100
    kworker/u9:1-293     [000] d....   463.305001: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=23981 [ns] vruntime=13339789983 [ns]
    kworker/u9:1-293     [000] d....   463.305004: sched_switch: prev_comm=kworker/u9:1 prev_pid=293 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [002] d.h..   463.305900: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [002] d.h..   463.305912: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [002] dns..   463.305929: sched_wakeup: comm=kworker/2:1 pid=46 prio=120 target_cpu=002
          <idle>-0       [003] d.h..   463.305952: irq_handler_entry: irq=19 name=IPI
          <idle>-0       [002] d....   463.305954: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:1 next_pid=46 next_prio=120
          <idle>-0       [003] dnh..   463.305959: sched_wakeup: comm=rcu_sched pid=14 prio=120 target_cpu=003
          <idle>-0       [003] dnh..   463.305961: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [003] d....   463.305970: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=14 next_prio=120
     kworker/2:1-46      [002] d....   463.305975: sched_stat_runtime: comm=kworker/2:1 pid=46 runtime=39722 [ns] vruntime=9806793298 [ns]
     kworker/2:1-46      [002] d....   463.305980: sched_switch: prev_comm=kworker/2:1 prev_pid=46 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
       rcu_sched-14      [003] d....   463.305986: sched_stat_runtime: comm=rcu_sched pid=14 runtime=31056 [ns] vruntime=12224157780 [ns]
       rcu_sched-14      [003] d....   463.305990: sched_switch: prev_comm=rcu_sched prev_pid=14 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [002] d.h..   463.315899: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   463.315903: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [002] d.h..   463.315908: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d.h..   463.315911: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dns..   463.315921: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
          <idle>-0       [000] d....   463.315943: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=279 next_prio=120
 brcmf_wdog/mmc1-279     [000] d....   463.315951: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=22722 [ns] vruntime=13339811585 [ns]
 brcmf_wdog/mmc1-279     [000] d....   463.315955: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=279 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [002] d.h..   463.325898: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [003] d.h..   463.325902: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [002] d.h..   463.325906: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [003] d.h..   463.325911: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [003] dns..   463.325921: sched_wakeup: comm=rcu_sched pid=14 prio=120 target_cpu=003
          <idle>-0       [003] dns..   463.325930: sched_wakeup: comm=kworker/3:0 pid=30 prio=120 target_cpu=003
          <idle>-0       [003] d....   463.325951: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=14 next_prio=120
       rcu_sched-14      [003] d....   463.325968: sched_stat_runtime: comm=rcu_sched pid=14 runtime=34000 [ns] vruntime=12224191780 [ns]
       rcu_sched-14      [003] d....   463.325972: sched_switch: prev_comm=rcu_sched prev_pid=14 prev_prio=120 prev_state=I ==> next_comm=kworker/3:0 next_pid=30 next_prio=120
     kworker/3:0-30      [003] d....   463.325996: sched_stat_runtime: comm=kworker/3:0 pid=30 runtime=28056 [ns] vruntime=12224231518 [ns]
     kworker/3:0-30      [003] d....   463.326003: sched_switch: prev_comm=kworker/3:0 prev_pid=30 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [002] d.h..   463.335898: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   463.335902: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [002] d.h..   463.335906: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d.h..   463.335909: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dns..   463.335918: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
          <idle>-0       [000] d....   463.335939: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=279 next_prio=120
 brcmf_wdog/mmc1-279     [000] d.h..   463.335960: irq_handler_entry: irq=51 name=mmc1
 brcmf_wdog/mmc1-279     [000] d.h..   463.335964: irq_handler_exit: irq=51 ret=handled
 brcmf_wdog/mmc1-279     [000] d.h..   463.335965: irq_handler_entry: irq=51 name=mmc0
 brcmf_wdog/mmc1-279     [000] d.h..   463.335968: irq_handler_exit: irq=51 ret=unhandled
 brcmf_wdog/mmc1-279     [000] d.s..   463.335975: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
 brcmf_wdog/mmc1-279     [000] d....   463.335979: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=54685 [ns] vruntime=13339866270 [ns]
 brcmf_wdog/mmc1-279     [000] d....   463.335988: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=9055 [ns] vruntime=13339875325 [ns]
 brcmf_wdog/mmc1-279     [000] d....   463.335992: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=279 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.345898: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   463.345909: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d.h..   463.348664: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] dnh..   463.348676: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   463.348678: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   463.348679: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] dnh..   463.348681: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d....   463.348691: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d.h..   463.348709: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   463.348713: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   463.348714: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   463.348716: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   463.348723: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   463.348727: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=54796 [ns] vruntime=13348843659 [ns]
     kworker/0:4-452     [000] d.h..   463.348747: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   463.348754: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   463.348755: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   463.348756: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   463.348763: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   463.348767: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=40130 [ns] vruntime=13348883789 [ns]
     kworker/0:4-452     [000] d.h..   463.348786: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   463.348791: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   463.348792: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   463.348793: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.h..   463.348796: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   463.348800: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   463.348801: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   463.348803: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   463.348809: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   463.348813: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=45926 [ns] vruntime=13348929715 [ns]
     kworker/0:4-452     [000] d....   463.348819: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=6426 [ns] vruntime=13348936141 [ns]
     kworker/0:4-452     [000] dn...   463.348824: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
     kworker/0:4-452     [000] d....   463.348836: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:1 next_pid=293 next_prio=100
    kworker/u9:1-293     [000] d.h..   463.348854: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   463.348858: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   463.348859: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   463.348861: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   463.348868: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   463.348872: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=52296 [ns] vruntime=13339936744 [ns]
    kworker/u9:1-293     [000] d.h..   463.348883: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   463.348887: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   463.348888: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   463.348890: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   463.348897: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   463.348901: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=29056 [ns] vruntime=13339937079 [ns]
    kworker/u9:1-293     [000] d.h..   463.348931: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   463.348942: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   463.348943: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   463.348945: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   463.348951: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   463.348957: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=54555 [ns] vruntime=13339937708 [ns]
    kworker/u9:1-293     [000] d.h..   463.348981: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   463.348989: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   463.348990: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   463.348991: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   463.348998: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   463.349002: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=46741 [ns] vruntime=13339938247 [ns]
    kworker/u9:1-293     [000] d.h..   463.349066: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   463.349076: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   463.349078: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   463.349079: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   463.349086: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   463.349091: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=88278 [ns] vruntime=13339939265 [ns]
    kworker/u9:1-293     [000] d....   463.349102: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=11759 [ns] vruntime=13339939400 [ns]
    kworker/u9:1-293     [000] d....   463.349109: sched_switch: prev_comm=kworker/u9:1 prev_pid=293 prev_prio=100 prev_state=I ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.349114: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=11982 [ns] vruntime=13348948123 [ns]
     kworker/0:4-452     [000] d....   463.349122: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.365902: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   463.365909: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dns..   463.365919: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
          <idle>-0       [000] d....   463.365938: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=279 next_prio=120
 brcmf_wdog/mmc1-279     [000] d....   463.365945: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=19500 [ns] vruntime=13339967623 [ns]
 brcmf_wdog/mmc1-279     [000] d....   463.365948: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=279 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.385901: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   463.385907: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dns..   463.385916: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
          <idle>-0       [000] d....   463.385934: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=279 next_prio=120
 brcmf_wdog/mmc1-279     [000] d.h..   463.385954: irq_handler_entry: irq=51 name=mmc1
 brcmf_wdog/mmc1-279     [000] d.h..   463.385958: irq_handler_exit: irq=51 ret=handled
 brcmf_wdog/mmc1-279     [000] d.h..   463.385959: irq_handler_entry: irq=51 name=mmc0
 brcmf_wdog/mmc1-279     [000] d.h..   463.385961: irq_handler_exit: irq=51 ret=unhandled
 brcmf_wdog/mmc1-279     [000] d.s..   463.385968: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
 brcmf_wdog/mmc1-279     [000] d....   463.385972: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=50278 [ns] vruntime=13340017901 [ns]
 brcmf_wdog/mmc1-279     [000] d....   463.385981: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=9148 [ns] vruntime=13340027049 [ns]
 brcmf_wdog/mmc1-279     [000] d....   463.385985: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=279 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [002] d.h..   463.425902: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [002] d.h..   463.425909: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [002] dns..   463.425919: sched_wakeup: comm=kworker/2:1 pid=46 prio=120 target_cpu=002
          <idle>-0       [002] dnH..   463.425923: irq_handler_entry: irq=21 name=IPI
          <idle>-0       [002] dnH..   463.425927: irq_handler_exit: irq=21 ret=handled
          <idle>-0       [002] d....   463.425950: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:1 next_pid=46 next_prio=120
     kworker/2:1-46      [002] d....   463.425965: sched_stat_runtime: comm=kworker/2:1 pid=46 runtime=29092 [ns] vruntime=9806822390 [ns]
          <idle>-0       [000] d.h..   463.425969: irq_handler_entry: irq=46 name=eth0
     kworker/2:1-46      [002] d....   463.425970: sched_wakeup: comm=kworker/2:2 pid=782 prio=120 target_cpu=002
          <idle>-0       [000] d.h..   463.425974: sched_wakeup: comm=kworker/2:1 pid=46 prio=120 target_cpu=002
          <idle>-0       [000] d.h..   463.425976: irq_handler_exit: irq=46 ret=handled
     kworker/2:1-46      [002] d....   463.425976: sched_stat_runtime: comm=kworker/2:1 pid=46 runtime=11575 [ns] vruntime=9806833965 [ns]
     kworker/2:1-46      [002] d....   463.425980: sched_switch: prev_comm=kworker/2:1 prev_pid=46 prev_prio=120 prev_state=R ==> next_comm=kworker/2:2 next_pid=782 next_prio=120
     kworker/2:2-782     [002] d....   463.425992: sched_stat_runtime: comm=kworker/2:2 pid=782 runtime=15629 [ns] vruntime=9806769205 [ns]
     kworker/2:2-782     [002] d....   463.425996: sched_switch: prev_comm=kworker/2:2 prev_pid=782 prev_prio=120 prev_state=I ==> next_comm=kworker/2:1 next_pid=46 next_prio=120
     kworker/2:1-46      [002] d....   463.426010: sched_stat_runtime: comm=kworker/2:1 pid=46 runtime=17908 [ns] vruntime=9806851873 [ns]
          <idle>-0       [000] d.h..   463.426013: irq_handler_entry: irq=46 name=eth0
          <idle>-0       [000] d.h..   463.426017: irq_handler_exit: irq=46 ret=handled
     kworker/2:1-46      [002] d....   463.426018: sched_switch: prev_comm=kworker/2:1 prev_pid=46 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [002] d.h..   463.426022: irq_handler_entry: irq=19 name=IPI
          <idle>-0       [002] dnh..   463.426026: sched_wakeup: comm=kworker/2:1 pid=46 prio=120 target_cpu=002
          <idle>-0       [002] dnh..   463.426028: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [002] d....   463.426032: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:1 next_pid=46 next_prio=120
     kworker/2:1-46      [002] d....   463.426045: sched_stat_runtime: comm=kworker/2:1 pid=46 runtime=20426 [ns] vruntime=9806872299 [ns]
     kworker/2:1-46      [002] d....   463.426048: sched_switch: prev_comm=kworker/2:1 prev_pid=46 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.426048: irq_handler_entry: irq=46 name=eth0
          <idle>-0       [000] d.h..   463.426052: irq_handler_exit: irq=46 ret=handled
          <idle>-0       [002] d.h..   463.426053: irq_handler_entry: irq=19 name=IPI
          <idle>-0       [002] dnh..   463.426057: sched_wakeup: comm=kworker/2:1 pid=46 prio=120 target_cpu=002
          <idle>-0       [002] dnh..   463.426059: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [002] d....   463.426065: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:1 next_pid=46 next_prio=120
     kworker/2:1-46      [002] d....   463.426079: sched_stat_runtime: comm=kworker/2:1 pid=46 runtime=22963 [ns] vruntime=9806895262 [ns]
     kworker/2:1-46      [002] d....   463.426082: sched_switch: prev_comm=kworker/2:1 prev_pid=46 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.426082: irq_handler_entry: irq=46 name=eth0
          <idle>-0       [000] d.h..   463.426086: irq_handler_exit: irq=46 ret=handled
          <idle>-0       [002] d.h..   463.426089: irq_handler_entry: irq=19 name=IPI
          <idle>-0       [002] dnh..   463.426093: sched_wakeup: comm=kworker/2:1 pid=46 prio=120 target_cpu=002
          <idle>-0       [002] dnh..   463.426094: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [002] d....   463.426101: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:1 next_pid=46 next_prio=120
     kworker/2:1-46      [002] d....   463.426114: sched_stat_runtime: comm=kworker/2:1 pid=46 runtime=22166 [ns] vruntime=9806917428 [ns]
     kworker/2:1-46      [002] d....   463.426117: sched_switch: prev_comm=kworker/2:1 prev_pid=46 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.426117: irq_handler_entry: irq=46 name=eth0
          <idle>-0       [000] d.h..   463.426121: irq_handler_exit: irq=46 ret=handled
          <idle>-0       [002] d.h..   463.426122: irq_handler_entry: irq=19 name=IPI
          <idle>-0       [002] dnh..   463.426126: sched_wakeup: comm=kworker/2:1 pid=46 prio=120 target_cpu=002
          <idle>-0       [002] dnh..   463.426127: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [002] d....   463.426133: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:1 next_pid=46 next_prio=120
     kworker/2:1-46      [002] d....   463.426145: sched_stat_runtime: comm=kworker/2:1 pid=46 runtime=21185 [ns] vruntime=9806938613 [ns]
     kworker/2:1-46      [002] d....   463.426148: sched_switch: prev_comm=kworker/2:1 prev_pid=46 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.435901: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   463.435908: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [002] d.h..   463.505898: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   463.505900: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [002] d.h..   463.505905: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d.h..   463.505906: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [002] dns..   463.505914: sched_wakeup: comm=kworker/2:1 pid=46 prio=120 target_cpu=002
          <idle>-0       [000] dns..   463.505916: sched_wakeup: comm=kcompactd0 pid=40 prio=120 target_cpu=000
          <idle>-0       [002] d....   463.505931: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:1 next_pid=46 next_prio=120
          <idle>-0       [000] d....   463.505933: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kcompactd0 next_pid=40 next_prio=120
      kcompactd0-40      [000] d....   463.505946: sched_stat_runtime: comm=kcompactd0 pid=40 runtime=24852 [ns] vruntime=13339972975 [ns]
     kworker/2:1-46      [002] d....   463.505947: sched_stat_runtime: comm=kworker/2:1 pid=46 runtime=28574 [ns] vruntime=9806967187 [ns]
      kcompactd0-40      [000] d....   463.505949: sched_switch: prev_comm=kcompactd0 prev_pid=40 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
     kworker/2:1-46      [002] d....   463.505950: sched_switch: prev_comm=kworker/2:1 prev_pid=46 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [002] d.h..   463.555900: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [002] d.h..   463.555907: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [002] d.H..   463.555925: irq_handler_entry: irq=21 name=IPI
          <idle>-0       [002] dnH..   463.555931: sched_wakeup: comm=kworker/2:1 pid=46 prio=120 target_cpu=002
          <idle>-0       [002] dnH..   463.555934: irq_handler_exit: irq=21 ret=handled
          <idle>-0       [002] d....   463.555946: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:1 next_pid=46 next_prio=120
     kworker/2:1-46      [002] d....   463.555957: sched_stat_runtime: comm=kworker/2:1 pid=46 runtime=28259 [ns] vruntime=9806995446 [ns]
     kworker/2:1-46      [002] d....   463.555961: sched_switch: prev_comm=kworker/2:1 prev_pid=46 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [003] d.h..   463.585902: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [003] d.h..   463.585909: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [003] dns..   463.585920: sched_wakeup: comm=kworker/3:0 pid=30 prio=120 target_cpu=003
          <idle>-0       [003] d....   463.585936: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:0 next_pid=30 next_prio=120
     kworker/3:0-30      [003] d.h..   463.585957: irq_handler_entry: irq=26 name=arch_timer
     kworker/3:0-30      [003] d.h..   463.585962: sched_wakeup: comm=kworker/3:0 pid=30 prio=120 target_cpu=003
     kworker/3:0-30      [003] d.h..   463.585965: irq_handler_exit: irq=26 ret=handled
     kworker/3:0-30      [003] d....   463.585970: sched_stat_runtime: comm=kworker/3:0 pid=30 runtime=45704 [ns] vruntime=12224277222 [ns]
     kworker/3:0-30      [003] d....   463.585979: sched_stat_runtime: comm=kworker/3:0 pid=30 runtime=9870 [ns] vruntime=12224287092 [ns]
          <idle>-0       [000] d.h..   463.585983: irq_handler_entry: irq=29 name=fe00b880.mailbox
     kworker/3:0-30      [003] d....   463.585983: sched_switch: prev_comm=kworker/3:0 prev_pid=30 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.585988: irq_handler_exit: irq=29 ret=handled
          <idle>-0       [003] d.h..   463.585989: irq_handler_entry: irq=19 name=IPI
          <idle>-0       [003] dnh..   463.585993: sched_wakeup: comm=kworker/3:0 pid=30 prio=120 target_cpu=003
          <idle>-0       [003] dnh..   463.585995: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [003] d....   463.586000: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:0 next_pid=30 next_prio=120
     kworker/3:0-30      [003] d....   463.586013: sched_stat_runtime: comm=kworker/3:0 pid=30 runtime=21611 [ns] vruntime=12224308703 [ns]
     kworker/3:0-30      [003] d....   463.586016: sched_switch: prev_comm=kworker/3:0 prev_pid=30 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.745900: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   463.745907: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dns..   463.745917: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnH..   463.745922: irq_handler_entry: irq=21 name=IPI
          <idle>-0       [000] dnH..   463.745925: irq_handler_exit: irq=21 ret=handled
          <idle>-0       [000] d....   463.745941: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d.h..   463.745988: irq_handler_entry: irq=26 name=arch_timer
     kworker/0:4-452     [000] d.h..   463.745994: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d.h..   463.745996: irq_handler_exit: irq=26 ret=handled
     kworker/0:4-452     [000] d....   463.746001: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=72944 [ns] vruntime=13349021067 [ns]
     kworker/0:4-452     [000] d....   463.746011: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=10204 [ns] vruntime=13349031271 [ns]
     kworker/0:4-452     [000] dn...   463.746017: sched_wakeup: comm=kworker/0:3 pid=162 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   463.746023: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=kworker/0:3 next_pid=162 next_prio=120
     kworker/0:3-162     [000] d....   463.746035: sched_stat_runtime: comm=kworker/0:3 pid=162 runtime=23611 [ns] vruntime=13345186879 [ns]
     kworker/0:3-162     [000] d....   463.746042: sched_switch: prev_comm=kworker/0:3 prev_pid=162 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.746325: irq_handler_entry: irq=29 name=fe00b880.mailbox
          <idle>-0       [000] dnh..   463.746331: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   463.746333: irq_handler_exit: irq=29 ret=handled
          <idle>-0       [000] d....   463.746343: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.746464: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=135537 [ns] vruntime=13349166808 [ns]
     kworker/0:4-452     [000] d....   463.746468: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.751961: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   463.751967: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   463.751970: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   463.751979: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.751986: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=22167 [ns] vruntime=13349188975 [ns]
     kworker/0:4-452     [000] d....   463.751990: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.764487: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   463.764494: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   463.764496: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   463.764505: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.764570: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=79592 [ns] vruntime=13349268567 [ns]
     kworker/0:4-452     [000] d....   463.764574: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.777071: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   463.777077: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   463.777080: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   463.777089: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.777137: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=62629 [ns] vruntime=13349331196 [ns]
     kworker/0:4-452     [000] d....   463.777140: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.777421: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   463.777423: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   463.777425: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   463.777439: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   463.777449: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   463.777461: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   463.777528: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   463.777536: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=92797 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   463.777544: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.777589: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=53370 [ns] vruntime=13349384566 [ns]
     kworker/0:4-452     [000] d....   463.777597: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.777874: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   463.777876: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   463.777877: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   463.777890: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   463.777895: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   463.777905: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   463.777971: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   463.777979: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=85519 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   463.777984: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.778095: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=116018 [ns] vruntime=13349500584 [ns]
     kworker/0:4-452     [000] d....   463.778103: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.779343: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   463.779349: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   463.779352: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   463.779360: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.779404: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=58000 [ns] vruntime=13349558584 [ns]
     kworker/0:4-452     [000] d....   463.779408: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.779526: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   463.779528: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   463.779529: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] dnh..   463.779559: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   463.779561: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] d....   463.779570: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.779579: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=21963 [ns] vruntime=13349580547 [ns]
     kworker/0:4-452     [000] d....   463.779582: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.780827: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   463.780833: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   463.780836: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   463.780843: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.780952: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=121649 [ns] vruntime=13349702196 [ns]
     kworker/0:4-452     [000] d....   463.780955: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.782200: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   463.782205: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   463.782208: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   463.782216: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.782267: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=64500 [ns] vruntime=13349766696 [ns]
     kworker/0:4-452     [000] d....   463.782271: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.782553: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   463.782555: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   463.782556: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   463.782569: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   463.782574: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   463.782584: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   463.782648: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   463.782655: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=83297 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   463.782661: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.782705: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=49703 [ns] vruntime=13349816399 [ns]
     kworker/0:4-452     [000] d....   463.782713: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.782991: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   463.782992: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   463.782993: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   463.783007: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   463.783011: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   463.783021: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   463.783074: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   463.783081: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=71463 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   463.783086: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.783117: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=35796 [ns] vruntime=13349852195 [ns]
     kworker/0:4-452     [000] d....   463.783124: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.783400: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   463.783402: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   463.783403: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   463.783417: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   463.783421: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   463.783431: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   463.783482: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   463.783489: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=69834 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   463.783494: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.783525: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=35388 [ns] vruntime=13349887583 [ns]
     kworker/0:4-452     [000] d....   463.783532: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.783811: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   463.783812: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   463.783813: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   463.783827: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   463.783831: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   463.783840: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   463.783892: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   463.783899: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=69648 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   463.783904: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.783935: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=35445 [ns] vruntime=13349923028 [ns]
     kworker/0:4-452     [000] d....   463.783942: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.784218: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   463.784220: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   463.784221: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   463.784235: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   463.784239: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   463.784249: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   463.784314: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   463.784320: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=83537 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   463.784325: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.784370: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=49593 [ns] vruntime=13349972621 [ns]
     kworker/0:4-452     [000] d....   463.784380: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.784656: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   463.784657: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   463.784658: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   463.784672: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   463.784676: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   463.784686: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   463.784750: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   463.784757: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=82630 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   463.784762: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.784806: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=48759 [ns] vruntime=13350021380 [ns]
     kworker/0:4-452     [000] d....   463.784813: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.785091: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   463.785092: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   463.785094: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   463.785107: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   463.785111: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   463.785121: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   463.785186: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   463.785193: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=83315 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   463.785198: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.785241: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=48240 [ns] vruntime=13350069620 [ns]
     kworker/0:4-452     [000] d....   463.785249: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.785526: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   463.785527: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   463.785529: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   463.785542: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   463.785546: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   463.785556: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   463.785620: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   463.785626: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=82019 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   463.785631: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.785675: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=48463 [ns] vruntime=13350118083 [ns]
     kworker/0:4-452     [000] d....   463.785682: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.785962: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   463.785963: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   463.785964: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   463.785978: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   463.785982: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   463.785991: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   463.786055: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   463.786062: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=81963 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   463.786067: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.786215: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=152111 [ns] vruntime=13350270194 [ns]
     kworker/0:4-452     [000] d....   463.786225: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.786500: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   463.786501: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   463.786503: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   463.786516: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   463.786520: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   463.786529: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   463.786594: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   463.786600: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=81908 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   463.786606: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d.h..   463.786691: irq_handler_entry: irq=26 name=arch_timer
     kworker/0:4-452     [000] d.h..   463.786696: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d.h..   463.786698: irq_handler_exit: irq=26 ret=handled
     kworker/0:4-452     [000] d....   463.786703: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=102833 [ns] vruntime=13350373027 [ns]
     kworker/0:4-452     [000] d....   463.786713: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=9259 [ns] vruntime=13350382286 [ns]
     kworker/0:4-452     [000] d....   463.786720: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.787023: irq_handler_entry: irq=29 name=fe00b880.mailbox
          <idle>-0       [000] dnh..   463.787028: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   463.787031: irq_handler_exit: irq=29 ret=handled
          <idle>-0       [000] d....   463.787039: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.787129: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=102945 [ns] vruntime=13350485231 [ns]
     kworker/0:4-452     [000] d....   463.787137: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.788362: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   463.788372: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   463.788375: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   463.788384: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d.h..   463.788415: irq_handler_entry: irq=26 name=arch_timer
     kworker/0:4-452     [000] d.h..   463.788419: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d.h..   463.788422: irq_handler_exit: irq=26 ret=handled
     kworker/0:4-452     [000] d....   463.788427: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=57130 [ns] vruntime=13350542361 [ns]
     kworker/0:4-452     [000] d....   463.788436: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=9055 [ns] vruntime=13350551416 [ns]
     kworker/0:4-452     [000] d....   463.788439: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.788737: irq_handler_entry: irq=29 name=fe00b880.mailbox
          <idle>-0       [000] dnh..   463.788742: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   463.788744: irq_handler_exit: irq=29 ret=handled
          <idle>-0       [000] d....   463.788754: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.788869: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=128370 [ns] vruntime=13350679786 [ns]
     kworker/0:4-452     [000] d....   463.788872: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.794366: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   463.794372: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   463.794375: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   463.794384: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.794391: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=21834 [ns] vruntime=13350701620 [ns]
     kworker/0:4-452     [000] d....   463.794395: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.806892: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   463.806898: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   463.806901: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   463.806910: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.806979: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=83723 [ns] vruntime=13350785343 [ns]
     kworker/0:4-452     [000] d....   463.806985: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.819480: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   463.819486: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   463.819489: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   463.819498: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.819554: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=70796 [ns] vruntime=13350856139 [ns]
     kworker/0:4-452     [000] d....   463.819558: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.819933: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   463.819935: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   463.819936: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   463.819954: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   463.819960: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   463.819971: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   463.820048: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   463.820055: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=99148 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   463.820061: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.820117: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=61611 [ns] vruntime=13350917750 [ns]
     kworker/0:4-452     [000] d....   463.820126: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.820498: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   463.820500: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   463.820501: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   463.820518: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   463.820523: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   463.820533: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   463.820610: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   463.820617: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=96000 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   463.820622: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.820766: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=148723 [ns] vruntime=13351066473 [ns]
     kworker/0:4-452     [000] d....   463.820774: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.822014: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   463.822020: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   463.822023: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   463.822031: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.822087: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=70204 [ns] vruntime=13351136677 [ns]
     kworker/0:4-452     [000] d....   463.822091: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.822251: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   463.822252: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   463.822254: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] dnh..   463.822291: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   463.822293: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] d....   463.822303: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.822311: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=22444 [ns] vruntime=13351159121 [ns]
     kworker/0:4-452     [000] d....   463.822315: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.823559: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   463.823565: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   463.823568: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   463.823576: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.823717: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=155130 [ns] vruntime=13351314251 [ns]
     kworker/0:4-452     [000] d....   463.823721: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.824965: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   463.824971: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   463.824974: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   463.824982: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.825037: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=69129 [ns] vruntime=13351383380 [ns]
     kworker/0:4-452     [000] d....   463.825041: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.825417: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   463.825418: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   463.825420: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   463.825437: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   463.825442: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   463.825452: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   463.825529: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   463.825536: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=96574 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   463.825541: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.825597: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=61204 [ns] vruntime=13351444584 [ns]
     kworker/0:4-452     [000] d....   463.825605: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [002] d.h..   463.825898: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [002] d.h..   463.825905: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [002] dns..   463.825915: sched_wakeup: comm=hwrng pid=58 prio=120 target_cpu=002
          <idle>-0       [002] d....   463.825938: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=hwrng next_pid=58 next_prio=120
           hwrng-58      [002] d....   463.825961: sched_stat_runtime: comm=hwrng pid=58 runtime=35537 [ns] vruntime=9806789113 [ns]
           hwrng-58      [002] d....   463.825965: sched_switch: prev_comm=hwrng prev_pid=58 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.825978: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   463.825980: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   463.825981: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   463.825999: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   463.826003: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   463.826014: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   463.826074: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   463.826081: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=80222 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   463.826087: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.826126: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=44352 [ns] vruntime=13351488936 [ns]
     kworker/0:4-452     [000] d....   463.826134: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.826505: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   463.826507: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   463.826508: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   463.826526: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   463.826530: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   463.826540: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   463.826600: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   463.826607: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=78519 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   463.826612: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.826651: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=43740 [ns] vruntime=13351532676 [ns]
     kworker/0:4-452     [000] d....   463.826658: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.827030: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   463.827032: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   463.827033: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   463.827050: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   463.827055: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   463.827065: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   463.827126: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   463.827134: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=79871 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   463.827139: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.827179: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=46037 [ns] vruntime=13351578713 [ns]
     kworker/0:4-452     [000] d....   463.827187: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.827558: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   463.827559: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   463.827561: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   463.827578: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   463.827583: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   463.827593: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   463.827670: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   463.827676: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=95685 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   463.827681: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.827738: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=61259 [ns] vruntime=13351639972 [ns]
     kworker/0:4-452     [000] d....   463.827745: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.828119: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   463.828120: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   463.828122: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   463.828139: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   463.828143: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   463.828154: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   463.828231: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   463.828238: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=96315 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   463.828243: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.828299: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=60963 [ns] vruntime=13351700935 [ns]
     kworker/0:4-452     [000] d....   463.828307: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.828680: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   463.828682: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   463.828683: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   463.828700: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   463.828705: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   463.828715: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   463.828791: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   463.828798: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=95055 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   463.828803: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.828859: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=60722 [ns] vruntime=13351761657 [ns]
     kworker/0:4-452     [000] d....   463.828866: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.829238: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   463.829239: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   463.829241: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   463.829258: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   463.829262: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   463.829273: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   463.829350: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   463.829357: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=96166 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   463.829361: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.829417: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=60574 [ns] vruntime=13351822231 [ns]
     kworker/0:4-452     [000] d....   463.829425: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.829799: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   463.829801: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   463.829802: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   463.829819: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   463.829824: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   463.829834: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   463.829910: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   463.829917: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=94963 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   463.829921: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.830113: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=196130 [ns] vruntime=13352018361 [ns]
     kworker/0:4-452     [000] d....   463.830121: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.830495: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   463.830496: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   463.830498: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   463.830515: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   463.830519: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   463.830530: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   463.830607: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   463.830614: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=96500 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   463.830619: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d.h..   463.830712: irq_handler_entry: irq=26 name=arch_timer
     kworker/0:4-452     [000] d.h..   463.830717: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d.h..   463.830720: irq_handler_exit: irq=26 ret=handled
     kworker/0:4-452     [000] d....   463.830725: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=110389 [ns] vruntime=13352128750 [ns]
     kworker/0:4-452     [000] d....   463.830734: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=9055 [ns] vruntime=13352137805 [ns]
     kworker/0:4-452     [000] d....   463.830742: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.831042: irq_handler_entry: irq=29 name=fe00b880.mailbox
          <idle>-0       [000] dnh..   463.831048: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   463.831050: irq_handler_exit: irq=29 ret=handled
          <idle>-0       [000] d....   463.831059: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.831149: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=103759 [ns] vruntime=13352241564 [ns]
     kworker/0:4-452     [000] d....   463.831155: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.832397: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   463.832403: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   463.832406: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   463.832414: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d.h..   463.832445: irq_handler_entry: irq=26 name=arch_timer
     kworker/0:4-452     [000] d.h..   463.832449: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d.h..   463.832452: irq_handler_exit: irq=26 ret=handled
     kworker/0:4-452     [000] d....   463.832456: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=55871 [ns] vruntime=13352297435 [ns]
     kworker/0:4-452     [000] d....   463.832465: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=8796 [ns] vruntime=13352306231 [ns]
     kworker/0:4-452     [000] d....   463.832469: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.832767: irq_handler_entry: irq=29 name=fe00b880.mailbox
          <idle>-0       [000] dnh..   463.832772: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   463.832774: irq_handler_exit: irq=29 ret=handled
          <idle>-0       [000] d....   463.832783: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.832899: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=127167 [ns] vruntime=13352433398 [ns]
     kworker/0:4-452     [000] d....   463.832903: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.838398: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   463.838405: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   463.838408: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   463.838417: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.838424: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=22333 [ns] vruntime=13352455731 [ns]
     kworker/0:4-452     [000] d....   463.838428: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.850925: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   463.850931: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   463.850934: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dnh..   463.850936: irq_handler_entry: irq=21 name=IPI
          <idle>-0       [000] dnh..   463.850941: sched_wakeup: comm=kworker/0:3 pid=162 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   463.850943: irq_handler_exit: irq=21 ret=handled
          <idle>-0       [000] d....   463.850952: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:3 next_pid=162 next_prio=120
     kworker/0:3-162     [000] d.h..   463.850988: irq_handler_entry: irq=26 name=arch_timer
     kworker/0:3-162     [000] d.h..   463.850993: sched_wakeup: comm=kworker/0:3 pid=162 prio=120 target_cpu=000
     kworker/0:3-162     [000] d.h..   463.850996: irq_handler_exit: irq=26 ret=handled
     kworker/0:3-162     [000] d....   463.851001: sched_stat_runtime: comm=kworker/0:3 pid=162 runtime=60944 [ns] vruntime=13345247823 [ns]
     kworker/0:3-162     [000] d....   463.851010: sched_stat_runtime: comm=kworker/0:3 pid=162 runtime=9297 [ns] vruntime=13345257120 [ns]
     kworker/0:3-162     [000] d....   463.851014: sched_switch: prev_comm=kworker/0:3 prev_pid=162 prev_prio=120 prev_state=D ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.851092: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=81963 [ns] vruntime=13352537694 [ns]
     kworker/0:4-452     [000] d....   463.851101: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.854354: irq_handler_entry: irq=29 name=fe00b880.mailbox
          <idle>-0       [000] dnh..   463.854359: sched_wakeup: comm=kworker/0:3 pid=162 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   463.854361: irq_handler_exit: irq=29 ret=handled
          <idle>-0       [000] d....   463.854370: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:3 next_pid=162 next_prio=120
     kworker/0:3-162     [000] d.h..   463.854388: irq_handler_entry: irq=26 name=arch_timer
     kworker/0:3-162     [000] d.h..   463.854392: sched_wakeup: comm=kworker/0:3 pid=162 prio=120 target_cpu=000
     kworker/0:3-162     [000] d.h..   463.854394: irq_handler_exit: irq=26 ret=handled
     kworker/0:3-162     [000] d....   463.854398: sched_stat_runtime: comm=kworker/0:3 pid=162 runtime=41352 [ns] vruntime=13345298472 [ns]
     kworker/0:3-162     [000] d....   463.854406: sched_stat_runtime: comm=kworker/0:3 pid=162 runtime=7760 [ns] vruntime=13345306232 [ns]
     kworker/0:3-162     [000] d....   463.854409: sched_switch: prev_comm=kworker/0:3 prev_pid=162 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.856918: irq_handler_entry: irq=29 name=fe00b880.mailbox
          <idle>-0       [000] dnh..   463.856924: sched_wakeup: comm=kworker/0:3 pid=162 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   463.856925: irq_handler_exit: irq=29 ret=handled
          <idle>-0       [000] d....   463.856933: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:3 next_pid=162 next_prio=120
     kworker/0:3-162     [000] d....   463.856947: sched_stat_runtime: comm=kworker/0:3 pid=162 runtime=25926 [ns] vruntime=13345332158 [ns]
     kworker/0:3-162     [000] d....   463.856950: sched_switch: prev_comm=kworker/0:3 prev_pid=162 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.863590: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   463.863595: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   463.863597: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   463.863605: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.863678: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=85315 [ns] vruntime=13352623009 [ns]
     kworker/0:4-452     [000] d....   463.863682: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.864250: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   463.864251: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   463.864252: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   463.864275: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   463.864280: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   463.864289: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   463.864360: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   463.864366: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=88778 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   463.864371: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.864443: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=76759 [ns] vruntime=13352699768 [ns]
     kworker/0:4-452     [000] d....   463.864450: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.865015: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   463.865016: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   463.865017: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   463.865040: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   463.865044: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   463.865054: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   463.865126: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   463.865132: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=89519 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   463.865136: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.865315: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=182796 [ns] vruntime=13352882564 [ns]
     kworker/0:4-452     [000] d....   463.865322: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.866566: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   463.866572: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   463.866574: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   463.866582: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.866654: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=85092 [ns] vruntime=13352967656 [ns]
     kworker/0:4-452     [000] d....   463.866657: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.866898: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   463.866899: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   463.866900: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] dnh..   463.866949: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   463.866951: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] d....   463.866960: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.866967: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=20241 [ns] vruntime=13352987897 [ns]
     kworker/0:4-452     [000] d....   463.866970: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.868215: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   463.868220: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   463.868223: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   463.868230: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.868407: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=189222 [ns] vruntime=13353177119 [ns]
     kworker/0:4-452     [000] d....   463.868410: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.869547: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] dnh..   463.869557: sched_wakeup: comm=kworker/0:3 pid=162 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   463.869559: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   463.869560: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] dnh..   463.869562: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d....   463.869569: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:3 next_pid=162 next_prio=120
     kworker/0:3-162     [000] d.h..   463.869586: irq_handler_entry: irq=51 name=mmc1
     kworker/0:3-162     [000] d.h..   463.869589: irq_handler_exit: irq=51 ret=handled
     kworker/0:3-162     [000] d.h..   463.869590: irq_handler_entry: irq=51 name=mmc0
     kworker/0:3-162     [000] d.h..   463.869592: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:3-162     [000] d.s..   463.869600: sched_wakeup: comm=kworker/0:3 pid=162 prio=120 target_cpu=000
     kworker/0:3-162     [000] d....   463.869603: sched_stat_runtime: comm=kworker/0:3 pid=162 runtime=48611 [ns] vruntime=13345380769 [ns]
     kworker/0:3-162     [000] d.h..   463.869623: irq_handler_entry: irq=51 name=mmc1
     kworker/0:3-162     [000] d.h..   463.869629: irq_handler_exit: irq=51 ret=handled
     kworker/0:3-162     [000] d.h..   463.869630: irq_handler_entry: irq=51 name=mmc0
     kworker/0:3-162     [000] d.h..   463.869632: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:3-162     [000] d.s..   463.869638: sched_wakeup: comm=kworker/0:3 pid=162 prio=120 target_cpu=000
     kworker/0:3-162     [000] d....   463.869641: sched_stat_runtime: comm=kworker/0:3 pid=162 runtime=37815 [ns] vruntime=13345418584 [ns]
     kworker/0:3-162     [000] d.h..   463.869657: irq_handler_entry: irq=26 name=arch_timer
     kworker/0:3-162     [000] d.h..   463.869661: sched_stat_runtime: comm=kworker/0:3 pid=162 runtime=19463 [ns] vruntime=13345438047 [ns]
     kworker/0:3-162     [000] d.h..   463.869664: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:3-162     [000] d.h..   463.869667: irq_handler_exit: irq=26 ret=handled
     kworker/0:3-162     [000] d.h..   463.869669: irq_handler_entry: irq=51 name=mmc1
     kworker/0:3-162     [000] d.h..   463.869673: irq_handler_exit: irq=51 ret=handled
     kworker/0:3-162     [000] d.h..   463.869674: irq_handler_entry: irq=51 name=mmc0
     kworker/0:3-162     [000] d.h..   463.869675: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:3-162     [000] d.h..   463.869677: irq_handler_entry: irq=51 name=mmc1
     kworker/0:3-162     [000] d.h..   463.869681: irq_handler_exit: irq=51 ret=handled
     kworker/0:3-162     [000] d.h..   463.869682: irq_handler_entry: irq=51 name=mmc0
     kworker/0:3-162     [000] d.h..   463.869683: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:3-162     [000] d....   463.869694: sched_stat_runtime: comm=kworker/0:3 pid=162 runtime=33648 [ns] vruntime=13345471695 [ns]
     kworker/0:3-162     [000] dn...   463.869698: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
     kworker/0:3-162     [000] d....   463.869709: sched_switch: prev_comm=kworker/0:3 prev_pid=162 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:1 next_pid=293 next_prio=100
    kworker/u9:1-293     [000] d.h..   463.869726: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   463.869729: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   463.869730: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   463.869732: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   463.869738: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   463.869742: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=47463 [ns] vruntime=13344177666 [ns]
    kworker/u9:1-293     [000] d....   463.869752: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=10260 [ns] vruntime=13344177784 [ns]
    kworker/u9:1-293     [000] d....   463.869756: sched_switch: prev_comm=kworker/u9:1 prev_pid=293 prev_prio=100 prev_state=D ==> next_comm=kworker/0:3 next_pid=162 next_prio=120
     kworker/0:3-162     [000] d.h..   463.869759: irq_handler_entry: irq=51 name=mmc1
     kworker/0:3-162     [000] d.h..   463.869763: irq_handler_exit: irq=51 ret=handled
     kworker/0:3-162     [000] d.h..   463.869764: irq_handler_entry: irq=51 name=mmc0
     kworker/0:3-162     [000] d.h..   463.869765: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:3-162     [000] d.s..   463.869772: sched_stat_runtime: comm=kworker/0:3 pid=162 runtime=19666 [ns] vruntime=13345491361 [ns]
     kworker/0:3-162     [000] dns..   463.869775: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
     kworker/0:3-162     [000] d....   463.869780: sched_switch: prev_comm=kworker/0:3 prev_pid=162 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:1 next_pid=293 next_prio=100
    kworker/u9:1-293     [000] d....   463.869810: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=37963 [ns] vruntime=13344178221 [ns]
    kworker/u9:1-293     [000] d....   463.869813: sched_switch: prev_comm=kworker/u9:1 prev_pid=293 prev_prio=100 prev_state=D ==> next_comm=kworker/0:3 next_pid=162 next_prio=120
     kworker/0:3-162     [000] d.h..   463.869816: irq_handler_entry: irq=51 name=mmc1
     kworker/0:3-162     [000] d.h..   463.869826: irq_handler_exit: irq=51 ret=handled
     kworker/0:3-162     [000] d.h..   463.869827: irq_handler_entry: irq=51 name=mmc0
     kworker/0:3-162     [000] d.h..   463.869828: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:3-162     [000] d.s..   463.869835: sched_stat_runtime: comm=kworker/0:3 pid=162 runtime=25259 [ns] vruntime=13345516620 [ns]
     kworker/0:3-162     [000] dns..   463.869838: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
     kworker/0:3-162     [000] d....   463.869844: sched_switch: prev_comm=kworker/0:3 prev_pid=162 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:1 next_pid=293 next_prio=100
    kworker/u9:1-293     [000] d....   463.869866: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=31019 [ns] vruntime=13344178578 [ns]
    kworker/u9:1-293     [000] d....   463.869869: sched_switch: prev_comm=kworker/u9:1 prev_pid=293 prev_prio=100 prev_state=D ==> next_comm=kworker/0:3 next_pid=162 next_prio=120
     kworker/0:3-162     [000] d.h..   463.869872: irq_handler_entry: irq=51 name=mmc1
     kworker/0:3-162     [000] d.h..   463.869881: irq_handler_exit: irq=51 ret=handled
     kworker/0:3-162     [000] d.h..   463.869882: irq_handler_entry: irq=51 name=mmc0
     kworker/0:3-162     [000] d.h..   463.869883: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:3-162     [000] d.s..   463.869890: sched_stat_runtime: comm=kworker/0:3 pid=162 runtime=23648 [ns] vruntime=13345540268 [ns]
     kworker/0:3-162     [000] dns..   463.869893: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
     kworker/0:3-162     [000] d....   463.869898: sched_switch: prev_comm=kworker/0:3 prev_pid=162 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:1 next_pid=293 next_prio=100
          <idle>-0       [002] d.h..   463.869929: irq_handler_entry: irq=19 name=IPI
          <idle>-0       [002] dnh..   463.869936: sched_wakeup: comm=sshd pid=729 prio=120 target_cpu=002
          <idle>-0       [002] dnh..   463.869938: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [002] d....   463.869946: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=729 next_prio=120
    kworker/u9:1-293     [000] d.h..   463.869956: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   463.869966: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   463.869967: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   463.869968: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   463.869974: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   463.869978: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=88333 [ns] vruntime=13344179597 [ns]
    kworker/u9:1-293     [000] d....   463.869989: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=11241 [ns] vruntime=13344179726 [ns]
    kworker/u9:1-293     [000] d....   463.869993: sched_switch: prev_comm=kworker/u9:1 prev_pid=293 prev_prio=100 prev_state=I ==> next_comm=kworker/0:3 next_pid=162 next_prio=120
     kworker/0:3-162     [000] d....   463.869998: sched_stat_runtime: comm=kworker/0:3 pid=162 runtime=8648 [ns] vruntime=13345548916 [ns]
     kworker/0:3-162     [000] d....   463.870000: sched_switch: prev_comm=kworker/0:3 prev_pid=162 prev_prio=120 prev_state=I ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
            sshd-729     [002] dn...   463.870048: sched_wakeup: comm=kworker/u8:2 pid=47 prio=120 target_cpu=002
            sshd-729     [002] dn...   463.870056: sched_stat_runtime: comm=sshd pid=729 runtime=111278 [ns] vruntime=170205822 [ns]
            sshd-729     [002] d....   463.870060: sched_switch: prev_comm=sshd prev_pid=729 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=47 next_prio=120
    kworker/u8:2-47      [002] d....   463.870072: sched_stat_runtime: comm=kworker/u8:2 pid=47 runtime=27074 [ns] vruntime=9806891928 [ns]
     kworker/0:4-452     [000] d....   463.870074: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=75963 [ns] vruntime=13353253082 [ns]
    kworker/u8:2-47      [002] d....   463.870076: sched_wakeup: comm=bash pid=755 prio=120 target_cpu=002
    kworker/u8:2-47      [002] d....   463.870081: sched_stat_runtime: comm=kworker/u8:2 pid=47 runtime=10740 [ns] vruntime=9806902668 [ns]
    kworker/u8:2-47      [002] d....   463.870085: sched_switch: prev_comm=kworker/u8:2 prev_pid=47 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=755 next_prio=120
     kworker/0:4-452     [000] d....   463.870092: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
            bash-755     [002] d....   463.870149: sched_wakeup: comm=kworker/u8:2 pid=47 prio=120 target_cpu=002
            bash-755     [002] d....   463.870164: sched_stat_runtime: comm=bash pid=755 runtime=82945 [ns] vruntime=79576107 [ns]
            bash-755     [002] d....   463.870170: sched_switch: prev_comm=bash prev_pid=755 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=47 next_prio=120
    kworker/u8:2-47      [002] d....   463.870178: sched_stat_runtime: comm=kworker/u8:2 pid=47 runtime=14222 [ns] vruntime=9806916890 [ns]
    kworker/u8:2-47      [002] d....   463.870181: sched_switch: prev_comm=kworker/u8:2 prev_pid=47 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=729 next_prio=120
          <idle>-0       [000] d.h..   463.870344: irq_handler_entry: irq=19 name=IPI
          <idle>-0       [000] dnh..   463.870350: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
          <idle>-0       [000] dnh..   463.870352: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [000] d....   463.870359: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u9:1 next_pid=293 next_prio=100
            sshd-729     [002] d....   463.870368: sched_stat_runtime: comm=sshd pid=729 runtime=188944 [ns] vruntime=170394766 [ns]
            sshd-729     [002] d....   463.870383: sched_switch: prev_comm=sshd prev_pid=729 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
    kworker/u9:1-293     [000] d....   463.870395: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=47685 [ns] vruntime=13344253632 [ns]
    kworker/u9:1-293     [000] d....   463.870398: sched_switch: prev_comm=kworker/u9:1 prev_pid=293 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.870401: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   463.870411: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] d.h..   463.870412: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   463.870414: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   463.870424: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   463.870428: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] d.h..   463.870429: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   463.870430: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] dns..   463.870439: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
          <idle>-0       [000] d....   463.870448: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u9:1 next_pid=293 next_prio=100
    kworker/u9:1-293     [000] d....   463.870462: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=24537 [ns] vruntime=13344253915 [ns]
    kworker/u9:1-293     [000] d....   463.870465: sched_switch: prev_comm=kworker/u9:1 prev_pid=293 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.870646: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   463.870647: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   463.870648: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   463.870671: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   463.870676: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   463.870687: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   463.870759: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   463.870766: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=91629 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   463.870771: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.870844: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=78186 [ns] vruntime=13353331268 [ns]
     kworker/0:4-452     [000] d....   463.870851: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.871416: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   463.871417: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   463.871418: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   463.871442: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   463.871445: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   463.871455: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   463.871505: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   463.871510: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=66981 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   463.871516: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.871566: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=55185 [ns] vruntime=13353386453 [ns]
     kworker/0:4-452     [000] d....   463.871573: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.872136: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   463.872138: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   463.872139: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   463.872162: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   463.872165: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   463.872174: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   463.872224: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   463.872230: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=66000 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   463.872234: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.872284: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=53592 [ns] vruntime=13353440045 [ns]
     kworker/0:4-452     [000] d....   463.872290: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.872856: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   463.872857: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   463.872858: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   463.872881: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   463.872885: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   463.872894: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   463.872942: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   463.872948: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=64667 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   463.872952: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.873002: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=53463 [ns] vruntime=13353493508 [ns]
     kworker/0:4-452     [000] d....   463.873008: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.873571: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   463.873572: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   463.873574: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   463.873597: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   463.873600: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   463.873609: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   463.873681: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   463.873687: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=88555 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   463.873691: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.873764: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=76834 [ns] vruntime=13353570342 [ns]
     kworker/0:4-452     [000] d....   463.873771: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.874336: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   463.874338: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   463.874339: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   463.874362: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   463.874365: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   463.874374: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   463.874446: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   463.874452: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=88352 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   463.874456: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.874529: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=76389 [ns] vruntime=13353646731 [ns]
     kworker/0:4-452     [000] d....   463.874535: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.875101: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   463.875102: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   463.875104: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   463.875126: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   463.875130: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   463.875139: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   463.875211: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   463.875218: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=89648 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   463.875223: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.875295: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=76907 [ns] vruntime=13353723638 [ns]
     kworker/0:4-452     [000] d....   463.875302: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.875866: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   463.875867: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   463.875869: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   463.875892: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   463.875895: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   463.875908: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   463.875979: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   463.875986: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=92018 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   463.875990: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.876062: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=76648 [ns] vruntime=13353800286 [ns]
     kworker/0:4-452     [000] d....   463.876069: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.876636: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   463.876637: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   463.876638: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   463.876661: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   463.876665: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   463.876671: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   463.876743: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   463.876749: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=85407 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   463.876753: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.876999: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=250204 [ns] vruntime=13354050490 [ns]
     kworker/0:4-452     [000] d....   463.877006: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.877572: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] d.h..   463.877573: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d.h..   463.877574: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] d.h..   463.877597: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   463.877601: sched_wakeup: comm=irq/51-mmc0 pid=94 prio=49 target_cpu=000
          <idle>-0       [000] d....   463.877607: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/51-mmc0 next_pid=94 next_prio=49
     irq/51-mmc0-94      [000] d....   463.877678: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     irq/51-mmc0-94      [000] d....   463.877684: sched_stat_runtime: comm=irq/51-mmc0 pid=94 runtime=85389 [ns] vruntime=0 [ns]
     irq/51-mmc0-94      [000] d....   463.877689: sched_switch: prev_comm=irq/51-mmc0 prev_pid=94 prev_prio=49 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d.h..   463.877782: irq_handler_entry: irq=26 name=arch_timer
     kworker/0:4-452     [000] d.h..   463.877786: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d.h..   463.877789: irq_handler_exit: irq=26 ret=handled
     kworker/0:4-452     [000] d....   463.877793: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=108556 [ns] vruntime=13354159046 [ns]
     kworker/0:4-452     [000] d....   463.877801: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=7981 [ns] vruntime=13354167027 [ns]
     kworker/0:4-452     [000] d....   463.877810: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.878108: irq_handler_entry: irq=29 name=fe00b880.mailbox
          <idle>-0       [000] dnh..   463.878113: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   463.878115: irq_handler_exit: irq=29 ret=handled
          <idle>-0       [000] d....   463.878120: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.878209: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=97389 [ns] vruntime=13354264416 [ns]
     kworker/0:4-452     [000] d....   463.878211: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.879456: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] dnh..   463.879461: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   463.879464: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d....   463.879468: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.879479: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=19852 [ns] vruntime=13354284268 [ns]
     kworker/0:4-452     [000] d....   463.879482: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.885892: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   463.885902: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dns..   463.885911: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
          <idle>-0       [000] d....   463.885926: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=279 next_prio=120
 brcmf_wdog/mmc1-279     [000] d....   463.885933: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=15630 [ns] vruntime=13345299898 [ns]
 brcmf_wdog/mmc1-279     [000] d....   463.885936: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=279 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [002] d.h..   463.905893: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   463.905895: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [002] d.h..   463.905900: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d.h..   463.905900: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dns..   463.905908: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
          <idle>-0       [002] dns..   463.905909: sched_wakeup: comm=kworker/u8:2 pid=47 prio=120 target_cpu=002
          <idle>-0       [000] d....   463.905925: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=279 next_prio=120
          <idle>-0       [002] d....   463.905926: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=47 next_prio=120
 brcmf_wdog/mmc1-279     [000] d.h..   463.905944: irq_handler_entry: irq=51 name=mmc1
 brcmf_wdog/mmc1-279     [000] d.h..   463.905948: irq_handler_exit: irq=51 ret=handled
 brcmf_wdog/mmc1-279     [000] d.h..   463.905949: irq_handler_entry: irq=51 name=mmc0
    kworker/u8:2-47      [002] d....   463.905950: sched_stat_runtime: comm=kworker/u8:2 pid=47 runtime=37204 [ns] vruntime=9807091002 [ns]
 brcmf_wdog/mmc1-279     [000] d.h..   463.905950: irq_handler_exit: irq=51 ret=unhandled
    kworker/u8:2-47      [002] d....   463.905954: sched_switch: prev_comm=kworker/u8:2 prev_pid=47 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
 brcmf_wdog/mmc1-279     [000] d.s..   463.905957: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
 brcmf_wdog/mmc1-279     [000] d....   463.905961: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=47111 [ns] vruntime=13345347009 [ns]
 brcmf_wdog/mmc1-279     [000] d....   463.905969: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=8018 [ns] vruntime=13345355027 [ns]
 brcmf_wdog/mmc1-279     [000] d....   463.905972: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=279 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.915892: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   463.915901: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d.h..   463.924661: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] dnh..   463.924672: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   463.924674: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   463.924675: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] dnh..   463.924676: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d....   463.924684: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d.h..   463.924701: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   463.924705: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   463.924706: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   463.924708: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   463.924713: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   463.924717: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=48370 [ns] vruntime=13354332638 [ns]
     kworker/0:4-452     [000] d.h..   463.924736: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   463.924743: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   463.924744: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   463.924745: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   463.924751: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   463.924754: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=37223 [ns] vruntime=13354369861 [ns]
     kworker/0:4-452     [000] d.h..   463.924772: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   463.924776: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   463.924777: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   463.924778: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.h..   463.924780: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   463.924784: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   463.924785: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   463.924787: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   463.924792: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   463.924795: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=41333 [ns] vruntime=13354411194 [ns]
     kworker/0:4-452     [000] d....   463.924802: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=6074 [ns] vruntime=13354417268 [ns]
     kworker/0:4-452     [000] dn...   463.924806: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
     kworker/0:4-452     [000] d....   463.924817: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:1 next_pid=293 next_prio=100
    kworker/u9:1-293     [000] d.h..   463.924833: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   463.924836: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   463.924837: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   463.924839: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   463.924845: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   463.924848: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=46500 [ns] vruntime=13345417804 [ns]
    kworker/u9:1-293     [000] d.h..   463.924859: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   463.924862: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   463.924863: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   463.924865: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   463.924870: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   463.924874: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=25574 [ns] vruntime=13345418099 [ns]
    kworker/u9:1-293     [000] d....   463.924901: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=27685 [ns] vruntime=13345418418 [ns]
    kworker/u9:1-293     [000] d....   463.924905: sched_switch: prev_comm=kworker/u9:1 prev_pid=293 prev_prio=100 prev_state=D ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d.h..   463.924909: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   463.924918: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   463.924919: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   463.924921: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   463.924927: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=25926 [ns] vruntime=13354443194 [ns]
     kworker/0:4-452     [000] dns..   463.924931: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
     kworker/0:4-452     [000] d....   463.924937: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:1 next_pid=293 next_prio=100
    kworker/u9:1-293     [000] d.h..   463.924959: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   463.924967: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   463.924968: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   463.924969: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   463.924975: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   463.924979: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=51315 [ns] vruntime=13345443786 [ns]
    kworker/u9:1-293     [000] d.h..   463.925037: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   463.925047: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   463.925048: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   463.925049: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   463.925055: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   463.925059: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=80389 [ns] vruntime=13345444713 [ns]
    kworker/u9:1-293     [000] d....   463.925069: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=9759 [ns] vruntime=13345444825 [ns]
    kworker/u9:1-293     [000] d....   463.925073: sched_switch: prev_comm=kworker/u9:1 prev_pid=293 prev_prio=100 prev_state=I ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.925077: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=8704 [ns] vruntime=13354451898 [ns]
     kworker/0:4-452     [000] d....   463.925085: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.935897: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   463.935903: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dns..   463.935912: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
          <idle>-0       [000] d....   463.935928: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=279 next_prio=120
 brcmf_wdog/mmc1-279     [000] d....   463.935935: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=16852 [ns] vruntime=13345468750 [ns]
 brcmf_wdog/mmc1-279     [000] d....   463.935938: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=279 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.955895: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   463.955901: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dns..   463.955911: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
          <idle>-0       [000] dnH..   463.955914: irq_handler_entry: irq=21 name=IPI
          <idle>-0       [000] dnH..   463.955919: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnH..   463.955921: irq_handler_exit: irq=21 ret=handled
          <idle>-0       [000] d....   463.955936: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=279 next_prio=120
 brcmf_wdog/mmc1-279     [000] d....   463.955953: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=27426 [ns] vruntime=13345496176 [ns]
 brcmf_wdog/mmc1-279     [000] d....   463.955957: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=279 prev_prio=120 prev_state=D ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d.h..   463.955960: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   463.955964: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   463.955965: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   463.955967: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   463.955974: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=21074 [ns] vruntime=13354472972 [ns]
     kworker/0:4-452     [000] dns..   463.955978: sched_wakeup: comm=brcmf_wdog/mmc1 pid=279 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   463.955984: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=279 next_prio=120
 brcmf_wdog/mmc1-279     [000] d....   463.955992: sched_stat_runtime: comm=brcmf_wdog/mmc1 pid=279 runtime=17482 [ns] vruntime=13345513658 [ns]
 brcmf_wdog/mmc1-279     [000] d....   463.955994: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=279 prev_prio=120 prev_state=S ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d.h..   463.956023: irq_handler_entry: irq=26 name=arch_timer
     kworker/0:4-452     [000] d.h..   463.956028: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d.h..   463.956031: irq_handler_exit: irq=26 ret=handled
     kworker/0:4-452     [000] d....   463.956035: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=42963 [ns] vruntime=13354515935 [ns]
     kworker/0:4-452     [000] d....   463.956043: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=7888 [ns] vruntime=13354523823 [ns]
     kworker/0:4-452     [000] d....   463.956050: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.959225: irq_handler_entry: irq=29 name=fe00b880.mailbox
          <idle>-0       [000] dnh..   463.959231: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   463.959234: irq_handler_exit: irq=29 ret=handled
          <idle>-0       [000] d....   463.959243: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d.h..   463.959264: irq_handler_entry: irq=26 name=arch_timer
     kworker/0:4-452     [000] d.h..   463.959269: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d.h..   463.959271: irq_handler_exit: irq=26 ret=handled
     kworker/0:4-452     [000] d....   463.959276: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=47092 [ns] vruntime=13354570915 [ns]
     kworker/0:4-452     [000] d....   463.959284: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=8815 [ns] vruntime=13354579730 [ns]
     kworker/0:4-452     [000] d....   463.959288: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   463.962049: irq_handler_entry: irq=29 name=fe00b880.mailbox
          <idle>-0       [000] dnh..   463.962055: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   463.962057: irq_handler_exit: irq=29 ret=handled
          <idle>-0       [000] d....   463.962066: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   463.962083: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=31296 [ns] vruntime=13354611026 [ns]
     kworker/0:4-452     [000] d....   463.962087: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   464.015895: irq_handler_entry: irq=26 name=arch_timer
          <idle>-0       [000] d.h..   464.015902: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] dns..   464.015912: sched_wakeup: comm=kcompactd0 pid=40 prio=120 target_cpu=000
          <idle>-0       [000] d....   464.015929: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kcompactd0 next_pid=40 next_prio=120
      kcompactd0-40      [000] d....   464.015942: sched_stat_runtime: comm=kcompactd0 pid=40 runtime=25518 [ns] vruntime=13345636544 [ns]
      kcompactd0-40      [000] d....   464.015946: sched_switch: prev_comm=kcompactd0 prev_pid=40 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h..   464.044695: irq_handler_entry: irq=51 name=mmc1
          <idle>-0       [000] dnh..   464.044706: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
          <idle>-0       [000] dnh..   464.044709: irq_handler_exit: irq=51 ret=handled
          <idle>-0       [000] dnh..   464.044710: irq_handler_entry: irq=51 name=mmc0
          <idle>-0       [000] dnh..   464.044712: irq_handler_exit: irq=51 ret=unhandled
          <idle>-0       [000] d....   464.044722: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d.h..   464.044740: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   464.044744: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   464.044746: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   464.044747: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   464.044754: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   464.044759: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=55500 [ns] vruntime=13354666526 [ns]
     kworker/0:4-452     [000] d.h..   464.044779: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   464.044786: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   464.044787: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   464.044789: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   464.044796: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   464.044800: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=41148 [ns] vruntime=13354707674 [ns]
     kworker/0:4-452     [000] d.h..   464.044818: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   464.044823: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   464.044824: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   464.044826: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.h..   464.044828: irq_handler_entry: irq=51 name=mmc1
     kworker/0:4-452     [000] d.h..   464.044832: irq_handler_exit: irq=51 ret=handled
     kworker/0:4-452     [000] d.h..   464.044833: irq_handler_entry: irq=51 name=mmc0
     kworker/0:4-452     [000] d.h..   464.044835: irq_handler_exit: irq=51 ret=unhandled
     kworker/0:4-452     [000] d.s..   464.044841: sched_wakeup: comm=kworker/0:4 pid=452 prio=120 target_cpu=000
     kworker/0:4-452     [000] d....   464.044845: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=45704 [ns] vruntime=13354753378 [ns]
     kworker/0:4-452     [000] d....   464.044852: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=7093 [ns] vruntime=13354760471 [ns]
     kworker/0:4-452     [000] dn...   464.044857: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
     kworker/0:4-452     [000] d....   464.044869: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u9:1 next_pid=293 next_prio=100
    kworker/u9:1-293     [000] d.h..   464.044887: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   464.044892: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   464.044893: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   464.044894: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   464.044901: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   464.044905: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=52722 [ns] vruntime=13345761079 [ns]
    kworker/u9:1-293     [000] d.h..   464.044917: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   464.044921: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   464.044922: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   464.044923: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   464.044930: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   464.044934: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=28926 [ns] vruntime=13345761412 [ns]
    kworker/u9:1-293     [000] d.h..   464.044965: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   464.044975: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   464.044977: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   464.044978: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   464.044985: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   464.044989: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=54981 [ns] vruntime=13345762046 [ns]
    kworker/u9:1-293     [000] d.h..   464.045012: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   464.045022: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   464.045023: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   464.045025: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   464.045031: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   464.045035: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=46278 [ns] vruntime=13345762579 [ns]
          <idle>-0       [002] d.h..   464.045066: irq_handler_entry: irq=19 name=IPI
          <idle>-0       [002] dnh..   464.045074: sched_wakeup: comm=sshd pid=729 prio=120 target_cpu=002
          <idle>-0       [002] dnh..   464.045076: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [002] d....   464.045086: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=729 next_prio=120
    kworker/u9:1-293     [000] d.h..   464.045094: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   464.045104: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   464.045106: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   464.045107: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   464.045114: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   464.045119: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=83352 [ns] vruntime=13345763540 [ns]
    kworker/u9:1-293     [000] d....   464.045131: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=12019 [ns] vruntime=13345763678 [ns]
    kworker/u9:1-293     [000] d....   464.045136: sched_switch: prev_comm=kworker/u9:1 prev_pid=293 prev_prio=100 prev_state=I ==> next_comm=kworker/0:4 next_pid=452 next_prio=120
     kworker/0:4-452     [000] d....   464.045141: sched_stat_runtime: comm=kworker/0:4 pid=452 runtime=10481 [ns] vruntime=13354770952 [ns]
     kworker/0:4-452     [000] d....   464.045153: sched_switch: prev_comm=kworker/0:4 prev_pid=452 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
            sshd-729     [002] dn...   464.045192: sched_wakeup: comm=kworker/u8:2 pid=47 prio=120 target_cpu=002
            sshd-729     [002] dn...   464.045201: sched_stat_runtime: comm=sshd pid=729 runtime=117129 [ns] vruntime=170511895 [ns]
            sshd-729     [002] d....   464.045205: sched_switch: prev_comm=sshd prev_pid=729 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=47 next_prio=120
    kworker/u8:2-47      [002] d....   464.045217: sched_stat_runtime: comm=kworker/u8:2 pid=47 runtime=28648 [ns] vruntime=9807199575 [ns]
    kworker/u8:2-47      [002] d....   464.045221: sched_wakeup: comm=bash pid=755 prio=120 target_cpu=002
    kworker/u8:2-47      [002] d....   464.045227: sched_stat_runtime: comm=kworker/u8:2 pid=47 runtime=11760 [ns] vruntime=9807211335 [ns]
    kworker/u8:2-47      [002] d....   464.045231: sched_switch: prev_comm=kworker/u8:2 prev_pid=47 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=755 next_prio=120
            bash-755     [002] d....   464.045265: sched_wakeup: comm=kworker/u8:2 pid=47 prio=120 target_cpu=002
            bash-755     [002] d.h.1   464.045894: irq_handler_entry: irq=26 name=arch_timer
            bash-755     [002] d.h.1   464.045906: sched_stat_runtime: comm=bash pid=755 runtime=678518 [ns] vruntime=80254625 [ns]
          <idle>-0       [000] d.h..   464.045919: irq_handler_entry: irq=19 name=IPI
            bash-755     [002] d.h.1   464.045920: irq_handler_exit: irq=26 ret=handled
          <idle>-0       [000] d.h..   464.045922: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [001] dnh..   464.045954: irq_handler_entry: irq=18 name=IPI
          <idle>-0       [001] dnh..   464.045956: irq_handler_exit: irq=18 ret=handled
          <idle>-0       [003] dnh..   464.045965: irq_handler_entry: irq=18 name=IPI
          <idle>-0       [003] dnh..   464.045967: irq_handler_exit: irq=18 ret=handled
          <idle>-0       [001] d....   464.045967: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=729 next_prio=120
          <idle>-0       [003] d....   464.045976: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=47 next_prio=120
    kworker/u8:2-47      [003] d....   464.045989: sched_stat_runtime: comm=kworker/u8:2 pid=47 runtime=28574 [ns] vruntime=12224024093 [ns]
    kworker/u8:2-47      [003] d....   464.045993: sched_switch: prev_comm=kworker/u8:2 prev_pid=47 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
            bash-755     [002] d....   464.046053: sched_stat_runtime: comm=bash pid=755 runtime=147537 [ns] vruntime=80402162 [ns]
          <idle>-0       [003] dnh..   464.046087: irq_handler_entry: irq=18 name=IPI
          <idle>-0       [003] dnh..   464.046088: irq_handler_exit: irq=18 ret=handled
          <idle>-0       [003] d....   464.046098: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=795 next_prio=120
          <idle>-0       [000] d.h..   464.046162: irq_handler_entry: irq=19 name=IPI
          <idle>-0       [000] dnh..   464.046175: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
          <idle>-0       [000] dnh..   464.046178: irq_handler_exit: irq=19 ret=handled
          <idle>-0       [000] d....   464.046197: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u9:1 next_pid=293 next_prio=100
            sshd-729     [001] d....   464.046205: sched_stat_runtime: comm=sshd pid=729 runtime=259704 [ns] vruntime=437582137 [ns]
            sshd-729     [001] d....   464.046216: sched_switch: prev_comm=sshd prev_pid=729 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
    kworker/u9:1-293     [000] d.h..   464.046247: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   464.046262: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   464.046265: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   464.046270: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.h..   464.046276: irq_handler_entry: irq=51 name=mmc1
    kworker/u9:1-293     [000] d.h..   464.046282: irq_handler_exit: irq=51 ret=handled
    kworker/u9:1-293     [000] d.h..   464.046284: irq_handler_entry: irq=51 name=mmc0
    kworker/u9:1-293     [000] d.h..   464.046286: irq_handler_exit: irq=51 ret=unhandled
    kworker/u9:1-293     [000] d.s..   464.046294: sched_wakeup: comm=kworker/u9:1 pid=293 prio=100 target_cpu=000
    kworker/u9:1-293     [000] d....   464.046299: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=132592 [ns] vruntime=13345772481 [ns]
    kworker/u9:1-293     [000] d....   464.046322: sched_stat_runtime: comm=kworker/u9:1 pid=293 runtime=21667 [ns] vruntime=13345772730 [ns]
    kworker/u9:1-293     [000] d....   464.046331: sched_switch: prev_comm=kworker/u9:1 prev_pid=293 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
            bash-755     [002] d....   464.046629: sched_stat_runtime: comm=bash pid=755 runtime=574815 [ns] vruntime=80976977 [ns]
            bash-755     [002] d....   464.046637: sched_switch: prev_comm=bash prev_pid=755 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
