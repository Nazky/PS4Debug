// golden
// 6/12/2018
//

/* functions */
KFUNC(0x000001C0, Xfast_syscall, void, (void));
KFUNC(0x0002F230, copyin, int, (const void *uaddr, void *kaddr, uint64_t len));
KFUNC(0x0002F140, copyout, int, (const void *kaddr, void *uaddr, uint64_t len));
KFUNC(0x000BC730, printf, int, (const char *fmt, ... ));
KFUNC(0x000BC7a0, vprintf, int, (const char *fmt, va_list arg));
KFUNC(0x00301840, malloc, void *, (uint64_t size, void *type, int flags));
KFUNC(0x00301A40, free, void, (void *addr, void *type));
KFUNC(0x0002F040, memcpy, void *, (void *dest, const void *src, uint64_t num));
KFUNC(0x002DFC20, memset, void *, (void *ptr, int value, uint64_t num));
KFUNC(0x00207500, memcmp, int, (const void *ptr1, const void *ptr2, uint64_t num));
KFUNC(0x001170F0, kmem_alloc, void *, (struct vm_map *map, uint64_t size));
KFUNC(0x00093FF0, strlen, uint64_t, (const char *str));
KFUNC(0x0016EEE0, pause, void, (const char *wmesg, int timo));
KFUNC(0x000C46D0, kthread_add, int, (void (*func)(void *), void *arg, struct proc *procp, struct thread **newtdpp, int flags, int pages, const char *fmt, ...));
KFUNC(0x000C49C0, kthread_exit, void, (void));
KFUNC(0x003281F0, sched_prio, void, (struct thread *td, uint16_t prio));
KFUNC(0x00328D50, sched_add, void, (struct thread *td, uint64_t cpuset));
KFUNC(0x0016F210, kern_yield, void, (uint64_t p));
KFUNC(0x004940A0, fill_regs, int, (struct thread *td, struct reg *rg));
KFUNC(0x004941D0, set_regs, int, (struct thread *td, struct reg *rg));
KFUNC(0x000842E0, create_thread, int, (struct thread * td, uint64_t ctx, void (*start_func)(void *), void *arg, char *stack_base, uint64_t stack_size, char *tls_base, long *child_tid, long *parent_tid, uint64_t flags, uint64_t rtp));
KFUNC(0x000C4170, kproc_create, int, (void (*func)(void *), void *arg, struct proc **newpp, int flags, int pages, const char *fmt, ...));
KFUNC(0x000C5030, kthread_set_affinity, void, (const char *tdname, uint64_t prio, uint64_t cpuset, uint64_t unknown)); // custom name
KFUNC(0x000C4DD0, kthread_suspend_check, void, (void));
KFUNC(0x000C4EE0, kproc_kthread_add, int, (void (*func)(void *), void *arg, struct proc **procptr, struct thread **tdptr, int flags, int pages, char * procname, const char *fmt, ...));
KFUNC(0x001ADDB0, sx_init_flags, void, (struct sx *sx, const char *description, int opts));
KFUNC(0x001AE030, sx_xlock, void, (struct sx *sx));
KFUNC(0x001AE1F0, sx_xunlock, void, (struct sx *sx));
KFUNC(0x000BBB10, mtx_init, void, (struct mtx *mutex, const char *name, const char *type, int opts));
KFUNC(0x000BB490, mtx_lock_spin_flags, void, (struct mtx *mutex, int flags));
KFUNC(0x000BB650, mtx_unlock_spin_flags, void, (struct mtx *mutex, int flags));
KFUNC(0x000BB060, mtx_lock_sleep, void, (struct mtx *mutex, int flags));
KFUNC(0x000BB330, mtx_unlock_sleep, void, (struct mtx *mutex, int flags));
KFUNC(0x002CD780, kern_reboot, int, (int magic));
KFUNC(0x0025FB90, vm_map_lock_read, void, (struct vm_map *map));
KFUNC(0x00260190, vm_map_lookup_entry, int, (struct vm_map *map, uint64_t address, struct vm_map_entry **entries));
KFUNC(0x0025FBE0, vm_map_unlock_read, void, (struct vm_map *map));
KFUNC(0x0025F9F0, vmspace_acquire_ref, struct vmspace *, (struct proc *p));
KFUNC(0x0025F820, vmspace_free, void, (struct vmspace *vm));
KFUNC(0x00262700, vm_map_delete, int, (struct vm_map *map, uint64_t start, uint64_t end));
KFUNC(0x00264A50, vm_map_protect, int, (struct vm_map * map, uint64_t start, uint64_t end, int new_prot, uint64_t set_max));
KFUNC(0x00262CC0, vm_map_findspace, int, (struct vm_map * map, uint64_t start, uint64_t length, uint64_t *addr));
KFUNC(0x00260D60, vm_map_insert, int, (struct vm_map * map, uint64_t object, uint64_t offset, uint64_t start, uint64_t end, int prot, int max, int cow));
KFUNC(0x0025FA50, vm_map_lock, void, (struct vm_map * map));
KFUNC(0x0025FAB0, vm_map_unlock, void, (struct vm_map * map));
KFUNC(0x00043E80, proc_rwmem, int, (struct proc *p, struct uio *uio));

/* data */
KDATA(0x01A6EAA0, disable_console_output, uint8_t);
KDATA(0x01A7AE50, M_TEMP, void);
KDATA(0x021C8EE0, kernel_map, void *);
KDATA(0x0113E398, prison0, void *);
KDATA(0x022C5750, rootvnode, void *);
KDATA(0x01B48318, allproc, struct proc *);
KDATA(0x01125660, sysents, struct sysent);
