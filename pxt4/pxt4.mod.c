#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x4142e96d, "module_layout" },
	{ 0x47a0cdcb, "mb_cache_entry_find_next" },
	{ 0x9121d184, "kobject_put" },
	{ 0x5a71cd69, "blkdev_issue_discard" },
	{ 0x31d7ffc5, "jbd3_inode_cache" },
	{ 0x73c384f, "d_path" },
	{ 0x4754d623, "kmem_cache_destroy" },
	{ 0x7b033ea, "fs_bio_set" },
	{ 0x84b2f789, "page_zero_new_buffers" },
	{ 0xefd85f91, "dquot_alloc" },
	{ 0xdc851d09, "fscrypt_symlink_getattr" },
	{ 0x95d80264, "iget_failed" },
	{ 0x6b0f566f, "dquot_destroy" },
	{ 0x38872b9c, "__blkdev_issue_discard" },
	{ 0xe7d7e16f, "kmalloc_caches" },
	{ 0xb3885eeb, "fscrypt_has_permitted_context" },
	{ 0x3fe2ccbe, "memweight" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1cf7dff3, "fscrypt_inherit_context" },
	{ 0xef47c705, "fscrypt_free_inode" },
	{ 0x5f482493, "iomap_seek_data" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xa74a6340, "drop_nlink" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0xe569f4be, "__bdevname" },
	{ 0x6131e4f1, "sb_min_blocksize" },
	{ 0x3b738157, "submit_bio_wait" },
	{ 0x60548a1b, "bio_devname" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x9fff7c4d, "mark_buffer_dirty_inode" },
	{ 0x53b954a2, "up_read" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x7410aba2, "strreplace" },
	{ 0x84502a47, "blk_status_to_errno" },
	{ 0x8bd43a4d, "bio_alloc_bioset" },
	{ 0xb705f1e4, "make_bad_inode" },
	{ 0x9de55848, "dquot_get_next_dqblk" },
	{ 0x1ade68b9, "__put_devmap_managed_page" },
	{ 0x5ce4a0c3, "__mark_inode_dirty" },
	{ 0x65edab1f, "d_invalidate" },
	{ 0xbfe1ebca, "dquot_writeback_dquots" },
	{ 0x80f16cf6, "__set_page_dirty_nobuffers" },
	{ 0x59741ad4, "crypto_alloc_shash" },
	{ 0x257913b7, "filemap_fault" },
	{ 0x349cba85, "strchr" },
	{ 0xc7ed23d, "dquot_quotactl_sysfile_ops" },
	{ 0x92c7daf7, "dqput" },
	{ 0xbcccdecf, "fscrypt_get_symlink" },
	{ 0xc97ce9b2, "fscrypt_encrypt_pagecache_blocks" },
	{ 0x9a58c889, "proc_create_seq_private" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xcf9c4643, "__cleancache_get_page" },
	{ 0xeb7fa636, "dqget" },
	{ 0x8cdd676e, "generic_write_checks" },
	{ 0xcd734817, "fsverity_ioctl_measure" },
	{ 0xac537ac2, "percpu_counter_destroy" },
	{ 0xe2ce9d45, "__page_symlink" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x754d539c, "strlen" },
	{ 0x4955ae74, "fsverity_cleanup_inode" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xf6a7b139, "generic_file_llseek_size" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x56d5d1bf, "dquot_acquire" },
	{ 0x4391238, "filemap_write_and_wait_range" },
	{ 0xaf01f462, "jbd3_journal_forget" },
	{ 0xdeaa0416, "jbd3_journal_stop" },
	{ 0x7c5043a0, "__generic_file_write_iter" },
	{ 0xf13b3503, "jbd3_journal_force_commit" },
	{ 0xf344a0e4, "__generic_file_fsync" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0x3dab81ed, "proc_create_single_data" },
	{ 0x36768483, "from_kuid_munged" },
	{ 0xa3269d0e, "dget_parent" },
	{ 0x64999478, "congestion_wait" },
	{ 0xec17f25e, "end_buffer_write_sync" },
	{ 0x440dc1aa, "bdev_read_only" },
	{ 0x64925270, "__dax_synchronous" },
	{ 0x619baa08, "block_invalidatepage" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xcd826d3b, "generic_fh_to_parent" },
	{ 0xc0c004a3, "seq_escape" },
	{ 0xc53d9070, "iomap_zero_range" },
	{ 0x233fdd90, "dquot_file_open" },
	{ 0xf2564c4e, "dquot_get_next_id" },
	{ 0xe0546907, "block_is_partially_uptodate" },
	{ 0x7242d92, "put_dax" },
	{ 0x170101ed, "dquot_mark_dquot_dirty" },
	{ 0x67870f17, "jbd3_journal_dirty_metadata" },
	{ 0x4e68e9be, "rb_next_postorder" },
	{ 0x7c6dfec4, "jbd3_journal_check_available_features" },
	{ 0x6a0a1478, "seq_puts" },
	{ 0xad87ca43, "is_bad_inode" },
	{ 0x95d9f7, "blkdev_issue_flush" },
	{ 0xbfe69c7e, "pagecache_get_page" },
	{ 0x224ed115, "dquot_quota_on_mount" },
	{ 0x6dffe5ca, "jbd3_journal_force_commit_nested" },
	{ 0x25820c64, "fs_overflowuid" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0xacf4d843, "match_strdup" },
	{ 0xf4ba557c, "posix_acl_update_mode" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xac8597d5, "mb_cache_entry_get" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x2e2d9b3e, "__lock_page" },
	{ 0xfaf6d87a, "ll_rw_block" },
	{ 0xe6f1a315, "tag_pages_for_writeback" },
	{ 0x28635a86, "filemap_write_and_wait" },
	{ 0xf072fa17, "__lock_buffer" },
	{ 0x32f5362f, "__percpu_down_read" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xb97ad83d, "touch_atime" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xfb71e312, "dput" },
	{ 0x18574a1, "mb_cache_entry_delete" },
	{ 0xbb749ffc, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xff5ef194, "dquot_quota_off" },
	{ 0x109cc216, "fscrypt_ioctl_get_policy" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xbebd6fae, "remove_proc_entry" },
	{ 0x92999373, "jbd3_journal_init_jbd_inode" },
	{ 0xee91879b, "rb_first_postorder" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x4829cf6b, "fscrypt_enqueue_decrypt_work" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0x44e9a829, "match_token" },
	{ 0x92e8e9ab, "fsverity_enqueue_verify_work" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x9826fd24, "buffer_migrate_page" },
	{ 0xc46d8c9b, "inc_nlink" },
	{ 0xa624ef00, "block_read_full_page" },
	{ 0x8ed49040, "fscrypt_fname_disk_to_usr" },
	{ 0xcba4abe3, "list_sort" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xe63169ff, "fscrypt_ioctl_add_key" },
	{ 0xa2cfd0b, "file_path" },
	{ 0x9225a082, "init_user_ns" },
	{ 0x53126ecc, "__percpu_counter_sum" },
	{ 0x747751c7, "pagevec_lookup_range" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf34178e, "find_inode_nowait" },
	{ 0xe138fb8c, "percpu_counter_add_batch" },
	{ 0x65378a2f, "add_to_page_cache_lru" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x200f2784, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0x3d56e7b3, "utf8_unload" },
	{ 0xe0d68fad, "__dquot_free_space" },
	{ 0x736d8fe1, "trace_event_buffer_reserve" },
	{ 0x54d76c09, "d_instantiate_new" },
	{ 0x6ccfece2, "kobject_del" },
	{ 0xe0df895e, "generic_read_dir" },
	{ 0xfd902db, "mb_cache_entry_create" },
	{ 0xdee365b0, "_raw_write_trylock" },
	{ 0x518ccdc7, "__getblk_gfp" },
	{ 0xb5730122, "igrab" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x15b20a6f, "unlock_buffer" },
	{ 0x59f32c88, "noop_direct_IO" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xa8a7556a, "fsverity_verify_bio" },
	{ 0x6b82cfc7, "__dquot_alloc_space" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa85e7ecd, "redirty_page_for_writepage" },
	{ 0x8a74031b, "fscrypt_free_bounce_page" },
	{ 0x99078b39, "trace_print_flags_seq" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x8ab2af2e, "pagevec_lookup_range_tag" },
	{ 0xcc366969, "bpf_trace_run3" },
	{ 0xa095e02e, "generic_check_addressable" },
	{ 0x4d79cff9, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x526349bd, "jbd3_journal_destroy" },
	{ 0x6ed14904, "kthread_create_on_node" },
	{ 0x78a37171, "dquot_get_dqblk" },
	{ 0xcad47ed9, "dax_finish_sync_fault" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xb01badb7, "try_to_release_page" },
	{ 0xc267960e, "utf8_validate" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcd356857, "kobject_create_and_add" },
	{ 0xe40c37ea, "down_write_trylock" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x105c1260, "end_page_writeback" },
	{ 0xfe1f184f, "from_kgid_munged" },
	{ 0x7933bcfb, "wbc_account_cgroup_owner" },
	{ 0xdcfc1b75, "fscrypt_drop_inode" },
	{ 0xece784c2, "rb_first" },
	{ 0x97d69557, "fscrypt_zeroout_range" },
	{ 0x928cc652, "invalidate_bdev" },
	{ 0x72b3a8bb, "make_kgid" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x63826a8, "PDE_DATA" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x76b2e52f, "jbd3_journal_revoke" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x23ee13fd, "mb_cache_entry_find_first" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x40bfcdbd, "inode_owner_or_capable" },
	{ 0x32525a0b, "noop_set_page_dirty" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xaade6e0, "trace_define_field" },
	{ 0x3c80c06c, "kstrtoull" },
	{ 0x16cf2446, "bio_associate_blkg_from_css" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xe6989274, "kern_path" },
	{ 0xfb578fc5, "memset" },
	{ 0xa5f3a1e8, "noop_invalidatepage" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x4fb16082, "from_kuid" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0x9ac53c12, "proc_mkdir" },
	{ 0x80843e40, "set_task_ioprio" },
	{ 0x55b58aab, "bpf_trace_run1" },
	{ 0x9b420478, "utf8_strncasecmp" },
	{ 0xa4942b1f, "dax_layout_busy_page" },
	{ 0x79aa2bb2, "dquot_alloc_inode" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x490e121d, "current_task" },
	{ 0xe6422a78, "__fscrypt_prepare_symlink" },
	{ 0xb6b2a2b7, "freezing_slow_path" },
	{ 0x82e54d40, "fscrypt_put_encryption_info" },
	{ 0x9ca133dd, "from_kprojid" },
	{ 0x72e216e2, "__bread_gfp" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xc73b6b0e, "jbd3_journal_extend" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0x82f23847, "kthread_stop" },
	{ 0x1cae09db, "posix_acl_chmod" },
	{ 0x4ec5baf, "d_obtain_alias" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x74c7206d, "dax_writeback_mapping_range" },
	{ 0x58b39ec3, "iov_iter_alignment" },
	{ 0xd55f1bb8, "__percpu_init_rwsem" },
	{ 0xf57d8f67, "crypto_shash_update" },
	{ 0xd9fd8f70, "bio_add_page" },
	{ 0x7e2716fd, "generic_writepages" },
	{ 0x8dac994d, "kobject_init_and_add" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0xf1e046cc, "panic" },
	{ 0x58c2bb90, "__fscrypt_prepare_link" },
	{ 0x7d4b9205, "file_remove_privs" },
	{ 0xe6a8c1fb, "blkdev_issue_zeroout" },
	{ 0x1a51f9eb, "jbd3_complete_transaction" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x6f997343, "jbd3_journal_load" },
	{ 0x9607ac8f, "__fscrypt_encrypt_symlink" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xdb35d71, "fscrypt_ioctl_remove_key" },
	{ 0xceec8abd, "__mb_cache_entry_free" },
	{ 0x9166fada, "strncpy" },
	{ 0xc56ed905, "trace_event_reg" },
	{ 0xd5263820, "mb_cache_destroy" },
	{ 0x3d10cb11, "__sync_dirty_buffer" },
	{ 0x88a0dfc, "from_kgid" },
	{ 0xbc11ede8, "jbd3_trans_will_send_data_barrier" },
	{ 0xbd6841d4, "crc16" },
	{ 0x16b14b55, "fscrypt_decrypt_bio" },
	{ 0x207da75d, "dquot_enable" },
	{ 0x4efd8c5b, "seq_putc" },
	{ 0x479183f7, "security_inode_init_security" },
	{ 0x5a921311, "strncmp" },
	{ 0xbee380ba, "posix_acl_alloc" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xd69d66fb, "kmem_cache_free" },
	{ 0xee9400cf, "set_nlink" },
	{ 0x207f0d6a, "fscrypt_ioctl_set_policy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xcbfffb25, "__wait_on_buffer" },
	{ 0xcfa7e21c, "file_update_time" },
	{ 0x5a245f6d, "_raw_write_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6fdc0ef7, "setattr_copy" },
	{ 0xdeeb745b, "bpf_trace_run5" },
	{ 0x8bbbfc05, "dquot_resume" },
	{ 0x3897c527, "__fscrypt_prepare_rename" },
	{ 0x47c09f52, "wait_on_page_writeback" },
	{ 0xa681fe88, "generate_random_uuid" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xf27e2530, "thaw_bdev" },
	{ 0x69b23db, "unlock_two_nondirectories" },
	{ 0xc64ab44e, "jbd3_journal_clear_features" },
	{ 0x42094c3e, "insert_inode_locked" },
	{ 0x7096eb25, "init_uts_ns" },
	{ 0xd37751d7, "sync_dirty_buffer" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x30450735, "truncate_pagecache" },
	{ 0x5240ee7, "percpu_counter_batch" },
	{ 0x5cce19ff, "kmem_cache_create_usercopy" },
	{ 0x213bc7c5, "blkdev_get_by_dev" },
	{ 0xf353d7da, "set_cached_acl" },
	{ 0xeb359cb4, "vfs_ioc_setflags_prepare" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x8cada4f2, "thp_get_unmapped_area" },
	{ 0x4e3567f7, "match_int" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xacb81c15, "unlock_page" },
	{ 0x4d63a27b, "generic_file_read_iter" },
	{ 0xe3a53f4c, "sort" },
	{ 0xce807a25, "up_write" },
	{ 0x2dc9c217, "jbd3_journal_restart" },
	{ 0x57bc19d2, "down_write" },
	{ 0x995b6b26, "fput" },
	{ 0x8921d88b, "perf_trace_run_bpf_submit" },
	{ 0xde006b01, "jbd3_journal_release_jbd_inode" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x39b2da47, "inode_nohighmem" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x2f603f4b, "posix_acl_create" },
	{ 0x321e153f, "__brelse" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9e756e09, "percpu_up_write" },
	{ 0x2ff04b61, "bio_put" },
	{ 0x7f326a31, "jbd3_journal_get_write_access" },
	{ 0x716c32a4, "dquot_set_dqblk" },
	{ 0x840aa7a7, "__task_pid_nr_ns" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0x2f41fe16, "dquot_claim_space_nodirty" },
	{ 0xf025a1eb, "jbd3_journal_lock_updates" },
	{ 0x57c7dee7, "file_write_and_wait_range" },
	{ 0xc83e55b7, "inode_init_once" },
	{ 0x1e4d66d6, "fsverity_verify_page" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x138ff626, "bh_submit_read" },
	{ 0x99bfd7fa, "jbd3_journal_clear_err" },
	{ 0x9c8c2529, "jbd3_journal_init_dev" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x5e332b52, "__var_waitqueue" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x866ba6d5, "mnt_drop_write_file" },
	{ 0x6471b2, "submit_bio" },
	{ 0xc6cbbc89, "capable" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0x2e73fea1, "block_commit_write" },
	{ 0x9d6d169a, "jbd3_journal_begin_ordered_truncate" },
	{ 0xec40b683, "invalidate_inode_buffers" },
	{ 0x5d49aabc, "init_wait_var_entry" },
	{ 0x33603c59, "jbd3_journal_flush" },
	{ 0xdcf3e61e, "dquot_reclaim_space_nodirty" },
	{ 0xbb9a7bd8, "kmem_cache_alloc" },
	{ 0x65ed3b56, "dquot_initialize_needed" },
	{ 0x640eded6, "jbd3_journal_invalidatepage" },
	{ 0xf35207e2, "blkdev_put" },
	{ 0x8d03736c, "unregister_shrinker" },
	{ 0x53c4d9a8, "dquot_quota_on" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xbdc9ef07, "fsverity_file_open" },
	{ 0x897b731a, "jbd3_journal_init_inode" },
	{ 0x9e54bc5, "dquot_initialize" },
	{ 0xdee72a37, "fscrypt_file_open" },
	{ 0x2432e25d, "sync_mapping_buffers" },
	{ 0x4163c2b6, "generic_block_fiemap" },
	{ 0xa916b694, "strnlen" },
	{ 0x6a019faf, "__filemap_set_wb_err" },
	{ 0x35f2e7e0, "pagecache_write_end" },
	{ 0xf99b8bf6, "wait_for_stable_page" },
	{ 0xc71662d1, "fs_kobj" },
	{ 0xdbbfa4c4, "bdevname" },
	{ 0xba250fab, "sync_blockdev" },
	{ 0xd420e9e9, "block_write_end" },
	{ 0x7540139d, "truncate_inode_pages_final" },
	{ 0xbc7a0a08, "create_empty_buffers" },
	{ 0x8adae2a1, "make_kuid" },
	{ 0x5587c5c0, "try_to_free_buffers" },
	{ 0xd482b1a, "trace_event_ignore_this_pid" },
	{ 0xf82ec573, "rb_prev" },
	{ 0xb6f7efe7, "jbd3__journal_start" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdecac6a3, "fscrypt_fname_alloc_buffer" },
	{ 0x1000e51, "schedule" },
	{ 0xdfdf9d34, "jbd3_journal_errno" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x6d334118, "__get_user_8" },
	{ 0xf7621ad8, "iomap_seek_hole" },
	{ 0x185978af, "make_kprojid" },
	{ 0x29fd2ed5, "generic_write_end" },
	{ 0x859dc9da, "dquot_quota_sync" },
	{ 0x8328f456, "jbd3_journal_update_sb_errno" },
	{ 0xce19729, "mb_cache_entry_touch" },
	{ 0x605790dc, "fiemap_fill_next_extent" },
	{ 0x1953c958, "mempool_create" },
	{ 0x6f6fea15, "unlock_new_inode" },
	{ 0x34ecab6d, "mnt_want_write_file" },
	{ 0x8b8059bd, "in_group_p" },
	{ 0xaf89d53a, "kill_block_super" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x7f024f1d, "lock_two_nondirectories" },
	{ 0xe7589150, "inode_newsize_ok" },
	{ 0xa263892b, "fscrypt_fname_free_buffer" },
	{ 0xd50a133d, "jbd3_journal_inode_ranged_write" },
	{ 0x1272181c, "page_cache_sync_readahead" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xcfbc1ae4, "crypto_destroy_tfm" },
	{ 0x3c7481d3, "jbd3_journal_abort" },
	{ 0x185de3e7, "fscrypt_setup_filename" },
	{ 0x5837f628, "trace_event_buffer_commit" },
	{ 0x31bd6524, "wake_up_process" },
	{ 0xe0955f76, "utf8_casefold" },
	{ 0xafae9644, "fscrypt_decrypt_pagecache_blocks" },
	{ 0x20cbb30a, "__percpu_counter_init" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa2347549, "simple_get_link" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0xc40dcffc, "vfs_setpos" },
	{ 0xe6b1031a, "clear_page_dirty_for_io" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xebc1275d, "submit_bh" },
	{ 0xc3ff38c2, "down_read_trylock" },
	{ 0x4153407b, "path_put" },
	{ 0xacdaef45, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x3846b50e, "dquot_drop" },
	{ 0x7d5cbea4, "fscrypt_ioctl_get_policy_ex" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x29033c07, "fsverity_prepare_setattr" },
	{ 0xb3a53e5c, "sync_inode_metadata" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xd37128a1, "kmem_cache_create" },
	{ 0x260ba838, "d_tmpfile" },
	{ 0xb852aae4, "dquot_transfer" },
	{ 0xa7441581, "register_filesystem" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x51833a1c, "jbd3_journal_inode_ranged_wait" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xa37793e0, "event_triggers_call" },
	{ 0x1c6bd81d, "vfs_ioc_fssetxattr_check" },
	{ 0x2255782, "dax_iomap_fault" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xfac63d2b, "__pagevec_release" },
	{ 0x91bb170c, "remove_proc_subtree" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xd1eafb45, "jbd3_log_wait_commit" },
	{ 0x60d6194c, "bpf_trace_run2" },
	{ 0x3e6a490c, "__test_set_page_writeback" },
	{ 0xee1fae43, "I_BDEV" },
	{ 0xf6e86034, "iter_file_splice_write" },
	{ 0x70918082, "blockdev_superblock" },
	{ 0x6b983660, "freeze_bdev" },
	{ 0xa5372f4f, "jbd3_journal_wipe" },
	{ 0xa7fb14cc, "iput" },
	{ 0x6bfa72d8, "dax_iomap_rw" },
	{ 0x7812c047, "__vmalloc" },
	{ 0xbec0fd53, "jbd3_journal_try_to_free_buffers" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x638c4497, "read_cache_page" },
	{ 0x37a0cba, "kfree" },
	{ 0xc0626558, "truncate_pagecache_range" },
	{ 0xe4ed65e8, "inode_dio_wait" },
	{ 0xb4ac5776, "page_get_link" },
	{ 0x70de5f4a, "d_find_any_alias" },
	{ 0xedac7b7e, "__percpu_up_read" },
	{ 0xac8a6810, "ihold" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6809b514, "__sb_end_write" },
	{ 0xeefe4059, "trace_event_raw_init" },
	{ 0xe89ce6fb, "current_time" },
	{ 0xa031af0, "jbd3_journal_set_features" },
	{ 0x9fce0960, "generic_error_remove_page" },
	{ 0x8629ba5e, "d_splice_alias" },
	{ 0xd0a91bab, "skip_spaces" },
	{ 0x6bcadd55, "register_shrinker" },
	{ 0xa95274da, "__breadahead_gfp" },
	{ 0xfc399557, "utf8_load" },
	{ 0x877e75f9, "end_buffer_read_sync" },
	{ 0x2eff599e, "block_page_mkwrite" },
	{ 0xbd24449d, "sync_filesystem" },
	{ 0x496225b6, "__set_page_dirty_buffers" },
	{ 0x47fa4798, "sb_set_blocksize" },
	{ 0x8ba638c8, "__sb_start_write" },
	{ 0x15af7f4, "system_state" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x30757c37, "__bforget" },
	{ 0x286a2a4, "d_make_root" },
	{ 0xf19874ec, "fscrypt_ioctl_get_key_status" },
	{ 0x289cd696, "__blockdev_direct_IO" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x6cdbe071, "inode_set_flags" },
	{ 0xdf95cabe, "inode_needs_sync" },
	{ 0xe7c89e42, "__block_write_begin" },
	{ 0x63b414af, "__find_get_block" },
	{ 0x6c0af865, "jbd3_journal_free_reserved" },
	{ 0xca9360b5, "rb_next" },
	{ 0xe80f03c2, "mark_buffer_dirty" },
	{ 0x93421518, "__fscrypt_prepare_lookup" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0xf49117cf, "bpf_trace_run6" },
	{ 0x2077a423, "fs_dax_get_by_bdev" },
	{ 0x4bed051, "unregister_filesystem" },
	{ 0xa1fca759, "init_special_inode" },
	{ 0x347e1a6a, "dquot_get_state" },
	{ 0x6a87c202, "jbd3_journal_start_commit" },
	{ 0x1c217534, "trace_raw_output_prep" },
	{ 0x8bbfdb7b, "try_to_writeback_inodes_sb" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x47335768, "jbd3_journal_start_reserved" },
	{ 0x3551e17f, "filemap_map_pages" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5e78d1ad, "fiemap_check_flags" },
	{ 0x86fe561f, "new_inode" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x2ad45050, "generic_file_splice_read" },
	{ 0xf656f848, "fscrypt_ioctl_remove_key_all_users" },
	{ 0x1e98d706, "__bdev_dax_supported" },
	{ 0xfa390e1a, "set_blocksize" },
	{ 0x4c38d4e0, "utf8_strncasecmp_folded" },
	{ 0xf7fc5adc, "dquot_free_inode" },
	{ 0x47ccdb6, "dquot_release" },
	{ 0x9c8bcfa8, "dquot_disable" },
	{ 0x6de41502, "generic_fh_to_dentry" },
	{ 0xa06ee112, "grab_cache_page_write_begin" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xc3d02594, "percpu_down_write" },
	{ 0x92fecd08, "dquot_commit_info" },
	{ 0xc461be0b, "dquot_set_dqinfo" },
	{ 0xd3fbdc5f, "__cleancache_init_fs" },
	{ 0xb3f9864d, "page_mapped" },
	{ 0x8e4d49fa, "bpf_trace_run4" },
	{ 0x85d7dae0, "clear_inode" },
	{ 0xdd2c169b, "mb_cache_create" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x962d8df0, "jbd3_journal_unlock_updates" },
	{ 0xdfc2b631, "pagecache_isize_extended" },
	{ 0xfe88d13, "fsverity_ioctl_enable" },
	{ 0x922bf842, "d_instantiate" },
	{ 0xc7b716d9, "pagecache_write_begin" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x906ec1c7, "__dquot_transfer" },
	{ 0xe60d6167, "jbd3_journal_get_create_access" },
	{ 0xb2fc2a8, "__put_page" },
	{ 0xe34a8a59, "filemap_flush" },
	{ 0x3952834d, "generic_block_bmap" },
	{ 0xe09c88d3, "file_check_and_advance_wb_err" },
	{ 0xab88d945, "clear_nlink" },
	{ 0x64850bdc, "fscrypt_get_encryption_info" },
	{ 0x407d62f5, "iget_locked" },
	{ 0x41a024d, "vfs_fsync_range" },
	{ 0x2b32907b, "setattr_prepare" },
	{ 0x2b9c0aed, "generic_fillattr" },
	{ 0x28ac75d1, "jbd3_journal_blocks_per_page" },
	{ 0xb2610b76, "jbd3_transaction_committed" },
	{ 0x46daf902, "inode_init_owner" },
	{ 0xdaf43051, "noop_backing_dev_info" },
	{ 0xd7a59af9, "bh_uptodate_or_lock" },
	{ 0x80d72907, "percpu_free_rwsem" },
	{ 0x49ced977, "truncate_inode_pages" },
	{ 0x67155151, "dquot_commit" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x884b695, "bio_associate_blkg" },
	{ 0xdf929370, "fs_overflowgid" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "jbd3");


MODULE_INFO(srcversion, "1B34E1CB510BFCAF0269CDD");
