#ifndef _LINUX_MMAP_LOCK_H
#define _LINUX_MMAP_LOCK_H

// partial port by alix

static inline void mmap_init_lock(struct mm_struct *mm)
{
	init_rwsem(&mm->mmap_sem);
}

static inline void mmap_read_lock(struct mm_struct *mm)
{
	down_read(&mm->mmap_sem);
}

static inline void mmap_read_unlock(struct mm_struct *mm)
{
	up_read(&mm->mmap_sem);
}

#endif

