#define memory_unit_decr (  2 |   5 << 6 | 2 << 4)
#define memory_unit_decr64 (  2 |   5 << 6 | 2 << 4)
#define memory_unit_incr (  2 |   7 << 6 | 2 << 4)
#define memory_unit_incr64 (  2 |   7 << 6 | 2 << 4)
#define memory_unit_add (  7 |   7 << 6 | 0 << 4)
#define memory_unit_add32_var_sat_metering (  7 |   30 << 6 | 0 << 4)
#define memory_unit_add64 (  7 |   7 << 6 | 0 << 4)
#define memory_unit_add64_imm (  7 |   7 << 6 | 2 << 4)
#define memory_unit_add64_imm_sat (  7 |   8 << 6 | 2 << 4)
#define memory_unit_add64_sat (  7 |   8 << 6 | 0 << 4)
#define memory_unit_add64_var_sat_metering (  7 |   30 << 6 | 0 << 4)
#define memory_unit_add_imm (  7 |   7 << 6 | 2 << 4)
#define memory_unit_add_imm_sat (  7 |   8 << 6 | 2 << 4)
#define memory_unit_add_sat (  7 |   8 << 6 | 0 << 4)
#define memory_unit_add_tail (  7 |   19 << 6 | 0 << 4)
#define memory_unit_addsat (  7 |   8 << 6 | 0 << 4)
#define memory_unit_addsat64 (  7 |   8 << 6 | 0 << 4)
#define memory_unit_addsat64_imm (  7 |   8 << 6 | 2 << 4)
#define memory_unit_addsat_imm (  7 |   8 << 6 | 2 << 4)
#define memory_unit_atomic_read (  7 |   34 << 6 | 0 << 4)
#define memory_unit_atomic_write (  7 |   4 << 6 | 0 << 4)
#define memory_unit_atomic_write_imm (  7 |   4 << 6 | 2 << 4)
#define memory_unit_cam1024_lookup16_add_inc (  7 |   36 << 6 | 0 << 4)
#define memory_unit_cam1024_lookup16_inc_wo_add (  7 |   36 << 6 | 1 << 4)
#define memory_unit_cam1024_lookup18_add_inc (  7 |   36 << 6 | 2 << 4)
#define memory_unit_cam1024_lookup18_inc_wo_add (  7 |   36 << 6 | 3 << 4)
#define memory_unit_cam1024_lookup20_add_inc (  7 |   36 << 6 | 2 << 4)
#define memory_unit_cam1024_lookup20_inc_wo_add (  7 |   36 << 6 | 3 << 4)
#define memory_unit_cam1024_lookup24_add_inc (  7 |   36 << 6 | 0 << 4)
#define memory_unit_cam1024_lookup24_inc_wo_add (  7 |   36 << 6 | 1 << 4)
#define memory_unit_cam1024_lookup48_add_inc (  7 |   36 << 6 | 0 << 4)
#define memory_unit_cam1024_lookup48_inc_wo_add (  7 |   36 << 6 | 1 << 4)
#define memory_unit_cam128_lookup16 (  7 |   12 << 6 | 0 << 4)
#define memory_unit_cam128_lookup16_add (  7 |   12 << 6 | 2 << 4)
#define memory_unit_cam128_lookup16_add_inc (  7 |   36 << 6 | 0 << 4)
#define memory_unit_cam128_lookup16_inc_wo_add (  7 |   36 << 6 | 1 << 4)
#define memory_unit_cam128_lookup18_add_inc (  7 |   36 << 6 | 2 << 4)
#define memory_unit_cam128_lookup18_inc_wo_add (  7 |   36 << 6 | 3 << 4)
#define memory_unit_cam128_lookup20_add_inc (  7 |   36 << 6 | 2 << 4)
#define memory_unit_cam128_lookup20_inc_wo_add (  7 |   36 << 6 | 3 << 4)
#define memory_unit_cam128_lookup24 (  7 |   12 << 6 | 0 << 4)
#define memory_unit_cam128_lookup24_add (  7 |   12 << 6 | 2 << 4)
#define memory_unit_cam128_lookup24_add_inc (  7 |   36 << 6 | 0 << 4)
#define memory_unit_cam128_lookup24_inc_wo_add (  7 |   36 << 6 | 1 << 4)
#define memory_unit_cam128_lookup32 (  7 |   12 << 6 | 0 << 4)
#define memory_unit_cam128_lookup32_add (  7 |   12 << 6 | 2 << 4)
#define memory_unit_cam128_lookup48_add_inc (  7 |   36 << 6 | 0 << 4)
#define memory_unit_cam128_lookup48_inc_wo_add (  7 |   36 << 6 | 1 << 4)
#define memory_unit_cam128_lookup8 (  7 |   12 << 6 | 0 << 4)
#define memory_unit_cam128_lookup8_add (  7 |   12 << 6 | 2 << 4)
#define memory_unit_cam256_lookup16 (  7 |   12 << 6 | 0 << 4)
#define memory_unit_cam256_lookup16_add (  7 |   12 << 6 | 2 << 4)
#define memory_unit_cam256_lookup16_add_inc (  7 |   36 << 6 | 0 << 4)
#define memory_unit_cam256_lookup16_inc_wo_add (  7 |   36 << 6 | 1 << 4)
#define memory_unit_cam256_lookup18_add_inc (  7 |   36 << 6 | 2 << 4)
#define memory_unit_cam256_lookup18_inc_wo_add (  7 |   36 << 6 | 3 << 4)
#define memory_unit_cam256_lookup20_add_inc (  7 |   36 << 6 | 2 << 4)
#define memory_unit_cam256_lookup20_inc_wo_add (  7 |   36 << 6 | 3 << 4)
#define memory_unit_cam256_lookup24 (  7 |   12 << 6 | 0 << 4)
#define memory_unit_cam256_lookup24_add (  7 |   12 << 6 | 2 << 4)
#define memory_unit_cam256_lookup24_add_inc (  7 |   36 << 6 | 0 << 4)
#define memory_unit_cam256_lookup24_inc_wo_add (  7 |   36 << 6 | 1 << 4)
#define memory_unit_cam256_lookup32 (  7 |   12 << 6 | 0 << 4)
#define memory_unit_cam256_lookup32_add (  7 |   12 << 6 | 2 << 4)
#define memory_unit_cam256_lookup48_add_inc (  7 |   36 << 6 | 0 << 4)
#define memory_unit_cam256_lookup48_inc_wo_add (  7 |   36 << 6 | 1 << 4)
#define memory_unit_cam256_lookup8 (  7 |   12 << 6 | 0 << 4)
#define memory_unit_cam256_lookup8_add (  7 |   12 << 6 | 2 << 4)
#define memory_unit_cam384_lookup16 (  7 |   12 << 6 | 0 << 4)
#define memory_unit_cam384_lookup16_add (  7 |   12 << 6 | 2 << 4)
#define memory_unit_cam384_lookup16_add_inc (  7 |   36 << 6 | 0 << 4)
#define memory_unit_cam384_lookup16_inc_wo_add (  7 |   36 << 6 | 1 << 4)
#define memory_unit_cam384_lookup18_add_inc (  7 |   36 << 6 | 2 << 4)
#define memory_unit_cam384_lookup18_inc_wo_add (  7 |   36 << 6 | 3 << 4)
#define memory_unit_cam384_lookup20_add_inc (  7 |   36 << 6 | 2 << 4)
#define memory_unit_cam384_lookup20_inc_wo_add (  7 |   36 << 6 | 3 << 4)
#define memory_unit_cam384_lookup24 (  7 |   12 << 6 | 0 << 4)
#define memory_unit_cam384_lookup24_add (  7 |   12 << 6 | 2 << 4)
#define memory_unit_cam384_lookup24_add_inc (  7 |   36 << 6 | 0 << 4)
#define memory_unit_cam384_lookup24_inc_wo_add (  7 |   36 << 6 | 1 << 4)
#define memory_unit_cam384_lookup32 (  7 |   12 << 6 | 0 << 4)
#define memory_unit_cam384_lookup32_add (  7 |   12 << 6 | 2 << 4)
#define memory_unit_cam384_lookup48_add_inc (  7 |   36 << 6 | 0 << 4)
#define memory_unit_cam384_lookup48_inc_wo_add (  7 |   36 << 6 | 1 << 4)
#define memory_unit_cam384_lookup8 (  7 |   12 << 6 | 0 << 4)
#define memory_unit_cam384_lookup8_add (  7 |   12 << 6 | 2 << 4)
#define memory_unit_cam512_lookup16 (  7 |   12 << 6 | 0 << 4)
#define memory_unit_cam512_lookup16_add (  7 |   12 << 6 | 2 << 4)
#define memory_unit_cam512_lookup16_add_inc (  7 |   36 << 6 | 0 << 4)
#define memory_unit_cam512_lookup16_inc_wo_add (  7 |   36 << 6 | 1 << 4)
#define memory_unit_cam512_lookup18_add_inc (  7 |   36 << 6 | 2 << 4)
#define memory_unit_cam512_lookup18_inc_wo_add (  7 |   36 << 6 | 3 << 4)
#define memory_unit_cam512_lookup20_add_inc (  7 |   36 << 6 | 2 << 4)
#define memory_unit_cam512_lookup20_inc_wo_add (  7 |   36 << 6 | 3 << 4)
#define memory_unit_cam512_lookup24 (  7 |   12 << 6 | 0 << 4)
#define memory_unit_cam512_lookup24_add (  7 |   12 << 6 | 2 << 4)
#define memory_unit_cam512_lookup24_add_inc (  7 |   36 << 6 | 0 << 4)
#define memory_unit_cam512_lookup24_inc_wo_add (  7 |   36 << 6 | 1 << 4)
#define memory_unit_cam512_lookup32 (  7 |   12 << 6 | 0 << 4)
#define memory_unit_cam512_lookup32_add (  7 |   12 << 6 | 2 << 4)
#define memory_unit_cam512_lookup48_add_inc (  7 |   36 << 6 | 0 << 4)
#define memory_unit_cam512_lookup48_inc_wo_add (  7 |   36 << 6 | 1 << 4)
#define memory_unit_cam512_lookup8 (  7 |   12 << 6 | 0 << 4)
#define memory_unit_cam512_lookup8_add (  7 |   12 << 6 | 2 << 4)
#define memory_unit_cam640_lookup16_add_inc (  7 |   36 << 6 | 0 << 4)
#define memory_unit_cam640_lookup16_inc_wo_add (  7 |   36 << 6 | 1 << 4)
#define memory_unit_cam640_lookup18_add_inc (  7 |   36 << 6 | 2 << 4)
#define memory_unit_cam640_lookup18_inc_wo_add (  7 |   36 << 6 | 3 << 4)
#define memory_unit_cam640_lookup20_add_inc (  7 |   36 << 6 | 2 << 4)
#define memory_unit_cam640_lookup20_inc_wo_add (  7 |   36 << 6 | 3 << 4)
#define memory_unit_cam640_lookup24_add_inc (  7 |   36 << 6 | 0 << 4)
#define memory_unit_cam640_lookup24_inc_wo_add (  7 |   36 << 6 | 1 << 4)
#define memory_unit_cam640_lookup48_add_inc (  7 |   36 << 6 | 0 << 4)
#define memory_unit_cam640_lookup48_inc_wo_add (  7 |   36 << 6 | 1 << 4)
#define memory_unit_cam768_lookup16_add_inc (  7 |   36 << 6 | 0 << 4)
#define memory_unit_cam768_lookup16_inc_wo_add (  7 |   36 << 6 | 1 << 4)
#define memory_unit_cam768_lookup18_add_inc (  7 |   36 << 6 | 2 << 4)
#define memory_unit_cam768_lookup18_inc_wo_add (  7 |   36 << 6 | 3 << 4)
#define memory_unit_cam768_lookup20_add_inc (  7 |   36 << 6 | 2 << 4)
#define memory_unit_cam768_lookup20_inc_wo_add (  7 |   36 << 6 | 3 << 4)
#define memory_unit_cam768_lookup24_add_inc (  7 |   36 << 6 | 0 << 4)
#define memory_unit_cam768_lookup24_inc_wo_add (  7 |   36 << 6 | 1 << 4)
#define memory_unit_cam768_lookup48_add_inc (  7 |   36 << 6 | 0 << 4)
#define memory_unit_cam768_lookup48_inc_wo_add (  7 |   36 << 6 | 1 << 4)
#define memory_unit_cam896_lookup16_add_inc (  7 |   36 << 6 | 0 << 4)
#define memory_unit_cam896_lookup16_inc_wo_add (  7 |   36 << 6 | 1 << 4)
#define memory_unit_cam896_lookup18_add_inc (  7 |   36 << 6 | 2 << 4)
#define memory_unit_cam896_lookup18_inc_wo_add (  7 |   36 << 6 | 3 << 4)
#define memory_unit_cam896_lookup20_add_inc (  7 |   36 << 6 | 2 << 4)
#define memory_unit_cam896_lookup20_inc_wo_add (  7 |   36 << 6 | 3 << 4)
#define memory_unit_cam896_lookup24_add_inc (  7 |   36 << 6 | 0 << 4)
#define memory_unit_cam896_lookup24_inc_wo_add (  7 |   36 << 6 | 1 << 4)
#define memory_unit_cam896_lookup48_add_inc (  7 |   36 << 6 | 0 << 4)
#define memory_unit_cam896_lookup48_inc_wo_add (  7 |   36 << 6 | 1 << 4)
#define memory_unit_cam_lookup (  7 |   12 << 6 | 0 << 4)
#define memory_unit_cam_lookup_add (  7 |   12 << 6 | 2 << 4)
#define memory_unit_cam_lookup_add_extend (  7 |   29 << 6 | 2 << 4)
#define memory_unit_cam_lookup_add_lock (  7 |   29 << 6 | 1 << 4)
#define memory_unit_clr (  7 |   6 << 6 | 0 << 4)
#define memory_unit_clr_imm (  7 |   6 << 6 | 2 << 4)
#define memory_unit_compare_write (  7 |   34 << 6 | 2 << 4)
#define memory_unit_crc32 (  7 |   37 << 6 | 0 << 4)
#define memory_unit_crc32_imm (  7 |   37 << 6 | 1 << 4)
#define memory_unit_crc32c (  7 |   37 << 6 | 2 << 4)
#define memory_unit_crc32c_imm (  7 |   37 << 6 | 3 << 4)
#define memory_unit_csum16_inv (  7 |   27 << 6 | 0 << 4)
#define memory_unit_csum16_no_inv (  7 |   27 << 6 | 1 << 4)
#define memory_unit_dequeue (  7 |   17 << 6 | 2 << 4)
#define memory_unit_enqueue (  7 |   17 << 6 | 0 << 4)
#define memory_unit_enqueue_tail (  7 |   17 << 6 | 1 << 4)
#define memory_unit_fast_journal (  7 |   23 << 6 | 0 << 4)
#define memory_unit_fast_journal_sig (  7 |   23 << 6 | 1 << 4)
#define memory_unit_get (  7 |   21 << 6 | 0 << 4)
#define memory_unit_get_eop (  7 |   21 << 6 | 1 << 4)
#define memory_unit_get_freely (  7 |   21 << 6 | 2 << 4)
#define memory_unit_get_safe (  7 |   21 << 6 | 2 << 4)
#define memory_unit_journal (  7 |   20 << 6 | 2 << 4)
#define memory_unit_lock128 (  7 |   12 << 6 | 3 << 4)
#define memory_unit_lock256 (  7 |   12 << 6 | 3 << 4)
#define memory_unit_lock384 (  7 |   12 << 6 | 3 << 4)
#define memory_unit_lock512 (  7 |   12 << 6 | 3 << 4)
#define memory_unit_lookup (  7 |   26 << 6 | 0 << 4)
#define memory_unit_mask_compare_write18 (  7 |   35 << 6 | 2 << 4)
#define memory_unit_mask_compare_write20 (  7 |   35 << 6 | 2 << 4)
#define memory_unit_mask_compare_write32 (  7 |   35 << 6 | 0 << 4)
#define memory_unit_mask_compare_write64 (  7 |   35 << 6 | 0 << 4)
#define memory_unit_mask_compare_write_or_incr (  7 |   34 << 6 | 2 << 4)
#define memory_unit_memory_lock (  7 |   14 << 6 | 2 << 4)
#define memory_unit_meter (  7 |   30 << 6 | 2 << 4)
#define memory_unit_microq128_get (  7 |   13 << 6 | 0 << 4)
#define memory_unit_microq128_pop (  7 |   13 << 6 | 1 << 4)
#define memory_unit_microq128_put (  7 |   13 << 6 | 2 << 4)
#define memory_unit_microq256_get (  7 |   13 << 6 | 0 << 4)
#define memory_unit_microq256_pop (  7 |   13 << 6 | 1 << 4)
#define memory_unit_microq256_put (  7 |   13 << 6 | 2 << 4)
#define memory_unit_packet_add_packet (  7 |   38 << 6 | 2 << 4)
#define memory_unit_packet_add_thread (  7 |   39 << 6 | 3 << 4)
#define memory_unit_packet_alloc (  7 |   39 << 6 | 0 << 4)
#define memory_unit_packet_alloc_poll (  7 |   39 << 6 | 2 << 4)
#define memory_unit_packet_credit_get (  7 |   39 << 6 | 1 << 4)
#define memory_unit_packet_free (  7 |   40 << 6 | 0 << 4)
#define memory_unit_packet_free_and_return_pointer (  7 |   40 << 6 | 2 << 4)
#define memory_unit_packet_free_and_signal (  7 |   40 << 6 | 1 << 4)
#define memory_unit_packet_read_memory_status (  7 |   41 << 6 | 0 << 4)
#define memory_unit_packet_read_packet_queue (  7 |   41 << 6 | 2 << 4)
#define memory_unit_packet_read_packet_status (  7 |   38 << 6 | 1 << 4)
#define memory_unit_packet_read_work_queue (  7 |   41 << 6 | 1 << 4)
#define memory_unit_packet_return_pointer (  7 |   40 << 6 | 3 << 4)
#define memory_unit_packet_wait_packet_status (  7 |   38 << 6 | 0 << 4)
#define memory_unit_pe_dma_from_memory_buffer (  7 |   44 << 6 | 0 << 4)
#define memory_unit_pe_dma_from_memory_buffer_le (  7 |   44 << 6 | 1 << 4)
#define memory_unit_pe_dma_from_memory_buffer_le_swap (  7 |   44 << 6 | 3 << 4)
#define memory_unit_pe_dma_from_memory_buffer_swap (  7 |   44 << 6 | 2 << 4)
#define memory_unit_pe_dma_from_memory_indirect (  7 |   42 << 6 | 0 << 4)
#define memory_unit_pe_dma_from_memory_indirect_free (  7 |   42 << 6 | 2 << 4)
#define memory_unit_pe_dma_from_memory_indirect_free_swap (  7 |   42 << 6 | 3 << 4)
#define memory_unit_pe_dma_from_memory_indirect_swap (  7 |   42 << 6 | 1 << 4)
#define memory_unit_pe_dma_to_memory_buffer (  7 |   45 << 6 | 0 << 4)
#define memory_unit_pe_dma_to_memory_buffer_le (  7 |   45 << 6 | 1 << 4)
#define memory_unit_pe_dma_to_memory_buffer_le_swap (  7 |   45 << 6 | 3 << 4)
#define memory_unit_pe_dma_to_memory_buffer_swap (  7 |   45 << 6 | 2 << 4)
#define memory_unit_pe_dma_to_memory_indirect (  7 |   43 << 6 | 0 << 4)
#define memory_unit_pe_dma_to_memory_indirect_free (  7 |   43 << 6 | 2 << 4)
#define memory_unit_pe_dma_to_memory_indirect_free_swap (  7 |   43 << 6 | 3 << 4)
#define memory_unit_pe_dma_to_memory_indirect_swap (  7 |   43 << 6 | 1 << 4)
#define memory_unit_pe_nbi_queue_depth_read (  7 |   46 << 6 | 2 << 4)
#define memory_unit_pe_nbi_queue_depth_update (  7 |   46 << 6 | 0 << 4)
#define memory_unit_pe_nbi_squencer_status_read (  7 |   46 << 6 | 3 << 4)
#define memory_unit_pe_nbi_squencer_status_update (  7 |   46 << 6 | 1 << 4)
#define memory_unit_pop (  7 |   22 << 6 | 0 << 4)
#define memory_unit_pop_eop (  7 |   22 << 6 | 1 << 4)
#define memory_unit_pop_freely (  7 |   22 << 6 | 2 << 4)
#define memory_unit_pop_safe (  7 |   22 << 6 | 2 << 4)
#define memory_unit_push_qdesc (  7 |   16 << 6 | 2 << 4)
#define memory_unit_put (  7 |   20 << 6 | 0 << 4)
#define memory_unit_qadd_thread (  7 |   19 << 6 | 1 << 4)
#define memory_unit_qadd_work (  7 |   19 << 6 | 2 << 4)
#define memory_unit_qadd_work_imm (  7 |   19 << 6 | 3 << 4)
#define memory_unit_queue128_lock (  7 |   14 << 6 | 0 << 4)
#define memory_unit_queue128_unlock (  7 |   14 << 6 | 1 << 4)
#define memory_unit_queue256_lock (  7 |   14 << 6 | 0 << 4)
#define memory_unit_queue256_unlock (  7 |   14 << 6 | 1 << 4)
#define memory_unit_rd_qdesc (  7 |   16 << 6 | 0 << 4)
#define memory_unit_read (  7 |   0 << 6 | 0 << 4)
#define memory_unit_read128 (  7 |   32 << 6 | 0 << 4)
#define memory_unit_read128_be (  7 |   32 << 6 | 0 << 4)
#define memory_unit_read128_le (  7 |   32 << 6 | 1 << 4)
#define memory_unit_read128_swap (  7 |   32 << 6 | 2 << 4)
#define memory_unit_read128_swap_be (  7 |   32 << 6 | 2 << 4)
#define memory_unit_read128_swap_le (  7 |   32 << 6 | 3 << 4)
#define memory_unit_read32 (  7 |   28 << 6 | 0 << 4)
#define memory_unit_read32_be (  7 |   28 << 6 | 0 << 4)
#define memory_unit_read32_le (  7 |   28 << 6 | 1 << 4)
#define memory_unit_read32_swap (  7 |   28 << 6 | 2 << 4)
#define memory_unit_read32_swap_be (  7 |   28 << 6 | 2 << 4)
#define memory_unit_read32_swap_le (  7 |   28 << 6 | 3 << 4)
#define memory_unit_read8 (  7 |   3 << 6 | 1 << 4)
#define memory_unit_read8_be (  7 |   3 << 6 | 1 << 4)
#define memory_unit_read_atomic (  7 |   34 << 6 | 0 << 4)
#define memory_unit_read_be (  7 |   0 << 6 | 0 << 4)
#define memory_unit_read_le (  7 |   0 << 6 | 1 << 4)
#define memory_unit_read_queue (  7 |   18 << 6 | 0 << 4)
#define memory_unit_read_queue_ring (  7 |   18 << 6 | 1 << 4)
#define memory_unit_read_swap (  7 |   0 << 6 | 2 << 4)
#define memory_unit_read_swap_be (  7 |   0 << 6 | 2 << 4)
#define memory_unit_read_swap_le (  7 |   0 << 6 | 3 << 4)
#define memory_unit_release_ticket (  7 |   11 << 6 | 0 << 4)
#define memory_unit_release_ticket_ind (  7 |   11 << 6 | 1 << 4)
#define memory_unit_set (  7 |   5 << 6 | 0 << 4)
#define memory_unit_set_imm (  7 |   5 << 6 | 2 << 4)
#define memory_unit_stats_log (  7 |   24 << 6 | 0 << 4)
#define memory_unit_stats_log_event (  7 |   24 << 6 | 2 << 4)
#define memory_unit_stats_log_sat (  7 |   24 << 6 | 1 << 4)
#define memory_unit_stats_log_sat_event (  7 |   24 << 6 | 3 << 4)
#define memory_unit_stats_push (  7 |   25 << 6 | 0 << 4)
#define memory_unit_stats_push_clear (  7 |   25 << 6 | 1 << 4)
#define memory_unit_sub (  7 |   9 << 6 | 0 << 4)
#define memory_unit_sub64 (  7 |   9 << 6 | 0 << 4)
#define memory_unit_sub64_imm (  7 |   9 << 6 | 2 << 4)
#define memory_unit_sub64_imm_sat (  7 |   10 << 6 | 2 << 4)
#define memory_unit_sub64_sat (  7 |   10 << 6 | 0 << 4)
#define memory_unit_sub_imm (  7 |   9 << 6 | 2 << 4)
#define memory_unit_sub_imm_sat (  7 |   10 << 6 | 2 << 4)
#define memory_unit_sub_sat (  7 |   10 << 6 | 0 << 4)
#define memory_unit_subsat (  7 |   10 << 6 | 0 << 4)
#define memory_unit_subsat64 (  7 |   10 << 6 | 0 << 4)
#define memory_unit_subsat64_imm (  7 |   10 << 6 | 2 << 4)
#define memory_unit_subsat_imm (  7 |   10 << 6 | 2 << 4)
#define memory_unit_swap (  7 |   4 << 6 | 1 << 4)
#define memory_unit_swap_imm (  7 |   4 << 6 | 3 << 4)
#define memory_unit_tcam128_lookup16 (  7 |   12 << 6 | 1 << 4)
#define memory_unit_tcam128_lookup24 (  7 |   12 << 6 | 1 << 4)
#define memory_unit_tcam128_lookup32 (  7 |   12 << 6 | 1 << 4)
#define memory_unit_tcam128_lookup8 (  7 |   12 << 6 | 1 << 4)
#define memory_unit_tcam256_lookup16 (  7 |   12 << 6 | 1 << 4)
#define memory_unit_tcam256_lookup24 (  7 |   12 << 6 | 1 << 4)
#define memory_unit_tcam256_lookup32 (  7 |   12 << 6 | 1 << 4)
#define memory_unit_tcam256_lookup8 (  7 |   12 << 6 | 1 << 4)
#define memory_unit_tcam384_lookup16 (  7 |   12 << 6 | 1 << 4)
#define memory_unit_tcam384_lookup24 (  7 |   12 << 6 | 1 << 4)
#define memory_unit_tcam384_lookup32 (  7 |   12 << 6 | 1 << 4)
#define memory_unit_tcam384_lookup8 (  7 |   12 << 6 | 1 << 4)
#define memory_unit_tcam512_lookup16 (  7 |   12 << 6 | 1 << 4)
#define memory_unit_tcam512_lookup24 (  7 |   12 << 6 | 1 << 4)
#define memory_unit_tcam512_lookup32 (  7 |   12 << 6 | 1 << 4)
#define memory_unit_tcam512_lookup8 (  7 |   12 << 6 | 1 << 4)
#define memory_unit_tcam_lookup (  7 |   12 << 6 | 1 << 4)
#define memory_unit_test_add (  7 |   7 << 6 | 1 << 4)
#define memory_unit_test_add32_var_sat_metering (  7 |   30 << 6 | 1 << 4)
#define memory_unit_test_add64 (  7 |   7 << 6 | 1 << 4)
#define memory_unit_test_add64_imm (  7 |   7 << 6 | 3 << 4)
#define memory_unit_test_add64_var_sat_metering (  7 |   30 << 6 | 1 << 4)
#define memory_unit_test_add_imm (  7 |   7 << 6 | 3 << 4)
#define memory_unit_test_addsat (  7 |   8 << 6 | 1 << 4)
#define memory_unit_test_addsat64 (  7 |   8 << 6 | 1 << 4)
#define memory_unit_test_addsat64_imm (  7 |   8 << 6 | 3 << 4)
#define memory_unit_test_addsat_imm (  7 |   8 << 6 | 3 << 4)
#define memory_unit_test_and_add (  7 |   7 << 6 | 1 << 4)
#define memory_unit_test_and_add64 (  7 |   7 << 6 | 1 << 4)
#define memory_unit_test_and_add64_imm (  7 |   7 << 6 | 3 << 4)
#define memory_unit_test_and_add64_imm_sat (  7 |   8 << 6 | 3 << 4)
#define memory_unit_test_and_add64_sat (  7 |   8 << 6 | 1 << 4)
#define memory_unit_test_and_add_imm (  7 |   7 << 6 | 3 << 4)
#define memory_unit_test_and_add_imm_sat (  7 |   8 << 6 | 3 << 4)
#define memory_unit_test_and_add_sat (  7 |   8 << 6 | 1 << 4)
#define memory_unit_test_and_clr (  7 |   6 << 6 | 1 << 4)
#define memory_unit_test_and_clr_imm (  7 |   6 << 6 | 3 << 4)
#define memory_unit_test_and_compare_write (  7 |   34 << 6 | 3 << 4)
#define memory_unit_test_and_set (  7 |   5 << 6 | 1 << 4)
#define memory_unit_test_and_set_imm (  7 |   5 << 6 | 3 << 4)
#define memory_unit_test_and_sub (  7 |   9 << 6 | 1 << 4)
#define memory_unit_test_and_sub64 (  7 |   9 << 6 | 1 << 4)
#define memory_unit_test_and_sub64_imm (  7 |   9 << 6 | 3 << 4)
#define memory_unit_test_and_sub64_imm_sat (  7 |   10 << 6 | 3 << 4)
#define memory_unit_test_and_sub64_sat (  7 |   10 << 6 | 1 << 4)
#define memory_unit_test_and_sub_imm (  7 |   9 << 6 | 3 << 4)
#define memory_unit_test_and_sub_imm_sat (  7 |   10 << 6 | 3 << 4)
#define memory_unit_test_and_sub_sat (  7 |   10 << 6 | 1 << 4)
#define memory_unit_test_and_xor (  7 |   15 << 6 | 1 << 4)
#define memory_unit_test_and_xor_imm (  7 |   15 << 6 | 3 << 4)
#define memory_unit_test_clr (  7 |   6 << 6 | 1 << 4)
#define memory_unit_test_clr_imm (  7 |   6 << 6 | 3 << 4)
#define memory_unit_test_compare_write_or_incr (  7 |   34 << 6 | 3 << 4)
#define memory_unit_test_mask_compare_write18 (  7 |   35 << 6 | 3 << 4)
#define memory_unit_test_mask_compare_write20 (  7 |   35 << 6 | 3 << 4)
#define memory_unit_test_mask_compare_write32 (  7 |   35 << 6 | 1 << 4)
#define memory_unit_test_mask_compare_write64 (  7 |   35 << 6 | 1 << 4)
#define memory_unit_test_mask_compare_write_32_diff_swap (  7 |   34 << 6 | 1 << 4)
#define memory_unit_test_mask_compare_write_64_diff_swap (  7 |   34 << 6 | 1 << 4)
#define memory_unit_test_set (  7 |   5 << 6 | 1 << 4)
#define memory_unit_test_set_imm (  7 |   5 << 6 | 3 << 4)
#define memory_unit_test_sub (  7 |   9 << 6 | 1 << 4)
#define memory_unit_test_sub64 (  7 |   9 << 6 | 1 << 4)
#define memory_unit_test_sub64_imm (  7 |   9 << 6 | 3 << 4)
#define memory_unit_test_sub_imm (  7 |   9 << 6 | 3 << 4)
#define memory_unit_test_subsat (  7 |   10 << 6 | 1 << 4)
#define memory_unit_test_subsat64 (  7 |   10 << 6 | 1 << 4)
#define memory_unit_test_subsat64_imm (  7 |   10 << 6 | 3 << 4)
#define memory_unit_test_subsat_imm (  7 |   10 << 6 | 3 << 4)
#define memory_unit_test_xor (  7 |   15 << 6 | 1 << 4)
#define memory_unit_test_xor_imm (  7 |   15 << 6 | 3 << 4)
#define memory_unit_ticket_release (  7 |   11 << 6 | 0 << 4)
#define memory_unit_ticket_release_ind (  7 |   11 << 6 | 1 << 4)
#define memory_unit_wr_qdesc (  7 |   16 << 6 | 1 << 4)
#define memory_unit_write (  7 |   1 << 6 | 0 << 4)
#define memory_unit_write128 (  7 |   33 << 6 | 0 << 4)
#define memory_unit_write128_be (  7 |   33 << 6 | 0 << 4)
#define memory_unit_write128_le (  7 |   33 << 6 | 1 << 4)
#define memory_unit_write128_swap (  7 |   33 << 6 | 2 << 4)
#define memory_unit_write128_swap_be (  7 |   33 << 6 | 2 << 4)
#define memory_unit_write128_swap_le (  7 |   33 << 6 | 3 << 4)
#define memory_unit_write32 (  7 |   31 << 6 | 0 << 4)
#define memory_unit_write32_be (  7 |   31 << 6 | 0 << 4)
#define memory_unit_write32_le (  7 |   31 << 6 | 1 << 4)
#define memory_unit_write32_swap (  7 |   31 << 6 | 2 << 4)
#define memory_unit_write32_swap_be (  7 |   31 << 6 | 2 << 4)
#define memory_unit_write32_swap_le (  7 |   31 << 6 | 3 << 4)
#define memory_unit_write8 (  7 |   2 << 6 | 0 << 4)
#define memory_unit_write8_be (  7 |   2 << 6 | 0 << 4)
#define memory_unit_write8_le (  7 |   2 << 6 | 1 << 4)
#define memory_unit_write8_swap (  7 |   2 << 6 | 2 << 4)
#define memory_unit_write8_swap_be (  7 |   2 << 6 | 2 << 4)
#define memory_unit_write8_swap_le (  7 |   2 << 6 | 3 << 4)
#define memory_unit_write_atomic (  7 |   4 << 6 | 0 << 4)
#define memory_unit_write_atomic_imm (  7 |   4 << 6 | 2 << 4)
#define memory_unit_write_be (  7 |   1 << 6 | 0 << 4)
#define memory_unit_write_le (  7 |   1 << 6 | 1 << 4)
#define memory_unit_write_queue (  7 |   18 << 6 | 2 << 4)
#define memory_unit_write_queue_ring (  7 |   18 << 6 | 3 << 4)
#define memory_unit_write_swap (  7 |   1 << 6 | 2 << 4)
#define memory_unit_write_swap_be (  7 |   1 << 6 | 2 << 4)
#define memory_unit_write_swap_le (  7 |   1 << 6 | 3 << 4)
#define memory_unit_xor (  7 |   15 << 6 | 0 << 4)
#define memory_unit_xor_imm (  7 |   15 << 6 | 2 << 4)
#define cluster_scratch_decr (  15 |   7 << 6 | 0 << 4)
#define cluster_scratch_decr64 (  15 |   7 << 6 | 1 << 4)
#define cluster_scratch_incr (  15 |   5 << 6 | 0 << 4)
#define cluster_scratch_incr64 (  15 |   5 << 6 | 1 << 4)
#define cluster_scratch_add (  15 |   4 << 6 | 0 << 4)
#define cluster_scratch_add64 (  15 |   4 << 6 | 1 << 4)
#define cluster_scratch_add64_imm (  15 |   5 << 6 | 1 << 4)
#define cluster_scratch_add_imm (  15 |   5 << 6 | 0 << 4)
#define cluster_scratch_add_imm_sat (  15 |   5 << 6 | 2 << 4)
#define cluster_scratch_add_sat (  15 |   4 << 6 | 2 << 4)
#define cluster_scratch_add_tail (  15 |   10 << 6 | 3 << 4)
#define cluster_scratch_addsat (  15 |   4 << 6 | 2 << 4)
#define cluster_scratch_addsat_imm (  15 |   5 << 6 | 2 << 4)
#define cluster_scratch_cam_lookup16 (  15 |   12 << 6 | 2 << 4)
#define cluster_scratch_cam_lookup16_add (  15 |   12 << 6 | 3 << 4)
#define cluster_scratch_cam_lookup24 (  15 |   11 << 6 | 2 << 4)
#define cluster_scratch_cam_lookup24_add (  15 |   11 << 6 | 3 << 4)
#define cluster_scratch_cam_lookup24_add_inc (  15 |   16 << 6 | 2 << 4)
#define cluster_scratch_cam_lookup32 (  15 |   11 << 6 | 0 << 4)
#define cluster_scratch_cam_lookup32_add (  15 |   11 << 6 | 1 << 4)
#define cluster_scratch_cam_lookup32_add_extend (  15 |   16 << 6 | 3 << 4)
#define cluster_scratch_cam_lookup32_add_lock (  15 |   16 << 6 | 1 << 4)
#define cluster_scratch_cam_lookup8 (  15 |   12 << 6 | 0 << 4)
#define cluster_scratch_cam_lookup8_add (  15 |   12 << 6 | 1 << 4)
#define cluster_scratch_clr (  15 |   2 << 6 | 1 << 4)
#define cluster_scratch_clr_imm (  15 |   3 << 6 | 1 << 4)
#define cluster_scratch_cmp_rw (  15 |   0 << 6 | 2 << 4)
#define cluster_scratch_fast_journal (  15 |   25 << 6 | 3 << 4)
#define cluster_scratch_get (  15 |   9 << 6 | 0 << 4)
#define cluster_scratch_get_safe (  15 |   9 << 6 | 2 << 4)
#define cluster_scratch_hash_mask (  15 |   8 << 6 | 2 << 4)
#define cluster_scratch_hash_mask_clear (  15 |   8 << 6 | 3 << 4)
#define cluster_scratch_hash_with_push (  15 |   26 << 6 | 0 << 4)
#define cluster_scratch_journal (  15 |   10 << 6 | 2 << 4)
#define cluster_scratch_meter (  15 |   17 << 6 | 0 << 4)
#define cluster_scratch_pop (  15 |   9 << 6 | 1 << 4)
#define cluster_scratch_pop_safe (  15 |   9 << 6 | 3 << 4)
#define cluster_scratch_put (  15 |   10 << 6 | 0 << 4)
#define cluster_scratch_queue_lock (  15 |   8 << 6 | 0 << 4)
#define cluster_scratch_queue_unlock (  15 |   8 << 6 | 1 << 4)
#define cluster_scratch_read (  15 |   0 << 6 | 0 << 4)
#define cluster_scratch_read_be (  15 |   0 << 6 | 0 << 4)
#define cluster_scratch_read_le (  15 |   0 << 6 | 1 << 4)
#define cluster_scratch_reflect_from_sig_both (  15 |   14 << 6 | 2 << 4)
#define cluster_scratch_reflect_from_sig_dst (  15 |   14 << 6 | 1 << 4)
#define cluster_scratch_reflect_from_sig_src (  15 |   14 << 6 | 0 << 4)
#define cluster_scratch_reflect_read_sig_both (  15 |   15 << 6 | 2 << 4)
#define cluster_scratch_reflect_read_sig_local (  15 |   15 << 6 | 1 << 4)
#define cluster_scratch_reflect_read_sig_remote (  15 |   15 << 6 | 0 << 4)
#define cluster_scratch_reflect_to_sig_both (  15 |   15 << 6 | 2 << 4)
#define cluster_scratch_reflect_to_sig_dst (  15 |   15 << 6 | 1 << 4)
#define cluster_scratch_reflect_to_sig_src (  15 |   15 << 6 | 0 << 4)
#define cluster_scratch_reflect_write_sig_both (  15 |   14 << 6 | 2 << 4)
#define cluster_scratch_reflect_write_sig_local (  15 |   14 << 6 | 0 << 4)
#define cluster_scratch_reflect_write_sig_remote (  15 |   14 << 6 | 1 << 4)
#define cluster_scratch_ring_add_to_tail_ptr (  15 |   10 << 6 | 3 << 4)
#define cluster_scratch_ring_get (  15 |   9 << 6 | 0 << 4)
#define cluster_scratch_ring_get_freely (  15 |   9 << 6 | 2 << 4)
#define cluster_scratch_ring_journal (  15 |   10 << 6 | 2 << 4)
#define cluster_scratch_ring_ordered_lock (  15 |   24 << 6 | 2 << 4)
#define cluster_scratch_ring_ordered_unlock (  15 |   24 << 6 | 3 << 4)
#define cluster_scratch_ring_pop (  15 |   9 << 6 | 1 << 4)
#define cluster_scratch_ring_pop_freely (  15 |   9 << 6 | 3 << 4)
#define cluster_scratch_ring_put (  15 |   10 << 6 | 0 << 4)
#define cluster_scratch_ring_put_imm (  15 |   25 << 6 | 2 << 4)
#define cluster_scratch_ring_put_with_push (  15 |   10 << 6 | 1 << 4)
#define cluster_scratch_ring_read (  15 |   24 << 6 | 0 << 4)
#define cluster_scratch_ring_workq_add_thread (  15 |   25 << 6 | 0 << 4)
#define cluster_scratch_ring_workq_add_work (  15 |   25 << 6 | 1 << 4)
#define cluster_scratch_ring_workq_add_work_imm (  15 |   14 << 6 | 3 << 4)
#define cluster_scratch_ring_write (  15 |   24 << 6 | 1 << 4)
#define cluster_scratch_set (  15 |   2 << 6 | 0 << 4)
#define cluster_scratch_set_imm (  15 |   3 << 6 | 0 << 4)
#define cluster_scratch_statistic (  15 |   17 << 6 | 2 << 4)
#define cluster_scratch_statistic_imm (  15 |   17 << 6 | 3 << 4)
#define cluster_scratch_sub (  15 |   6 << 6 | 0 << 4)
#define cluster_scratch_sub64 (  15 |   6 << 6 | 1 << 4)
#define cluster_scratch_sub64_imm (  15 |   7 << 6 | 1 << 4)
#define cluster_scratch_sub_imm (  15 |   7 << 6 | 0 << 4)
#define cluster_scratch_sub_imm_sat (  15 |   7 << 6 | 2 << 4)
#define cluster_scratch_sub_sat (  15 |   6 << 6 | 2 << 4)
#define cluster_scratch_subsat (  15 |   6 << 6 | 2 << 4)
#define cluster_scratch_subsat_imm (  15 |   7 << 6 | 2 << 4)
#define cluster_scratch_swap (  15 |   0 << 6 | 2 << 4)
#define cluster_scratch_tcam_lookup (  15 |   13 << 6 | 0 << 4)
#define cluster_scratch_tcam_lookup16 (  15 |   13 << 6 | 2 << 4)
#define cluster_scratch_tcam_lookup24 (  15 |   13 << 6 | 1 << 4)
#define cluster_scratch_tcam_lookup32 (  15 |   13 << 6 | 0 << 4)
#define cluster_scratch_tcam_lookup8 (  15 |   13 << 6 | 3 << 4)
#define cluster_scratch_tcam_lookup_byte (  15 |   13 << 6 | 3 << 4)
#define cluster_scratch_test_add (  15 |   20 << 6 | 0 << 4)
#define cluster_scratch_test_add64 (  15 |   20 << 6 | 1 << 4)
#define cluster_scratch_test_add64_imm (  15 |   21 << 6 | 1 << 4)
#define cluster_scratch_test_add_imm (  15 |   21 << 6 | 0 << 4)
#define cluster_scratch_test_addsat (  15 |   20 << 6 | 2 << 4)
#define cluster_scratch_test_addsat_imm (  15 |   21 << 6 | 2 << 4)
#define cluster_scratch_test_and_add_imm_sat (  15 |   21 << 6 | 2 << 4)
#define cluster_scratch_test_and_add_sat (  15 |   20 << 6 | 2 << 4)
#define cluster_scratch_test_and_clr (  15 |   2 << 6 | 3 << 4)
#define cluster_scratch_test_and_clr_imm (  15 |   3 << 6 | 3 << 4)
#define cluster_scratch_test_and_compare_write (  15 |   0 << 6 | 2 << 4)
#define cluster_scratch_test_and_set (  15 |   2 << 6 | 2 << 4)
#define cluster_scratch_test_and_set_imm (  15 |   3 << 6 | 2 << 4)
#define cluster_scratch_test_and_sub_imm_sat (  15 |   23 << 6 | 2 << 4)
#define cluster_scratch_test_and_sub_sat (  15 |   22 << 6 | 2 << 4)
#define cluster_scratch_test_clr (  15 |   2 << 6 | 3 << 4)
#define cluster_scratch_test_clr_imm (  15 |   3 << 6 | 3 << 4)
#define cluster_scratch_test_compare_write (  15 |   0 << 6 | 2 << 4)
#define cluster_scratch_test_set (  15 |   2 << 6 | 2 << 4)
#define cluster_scratch_test_set_imm (  15 |   3 << 6 | 2 << 4)
#define cluster_scratch_test_sub (  15 |   22 << 6 | 0 << 4)
#define cluster_scratch_test_sub64 (  15 |   22 << 6 | 1 << 4)
#define cluster_scratch_test_sub64_imm (  15 |   23 << 6 | 1 << 4)
#define cluster_scratch_test_sub_imm (  15 |   23 << 6 | 0 << 4)
#define cluster_scratch_test_subsat (  15 |   22 << 6 | 2 << 4)
#define cluster_scratch_test_subsat_imm (  15 |   23 << 6 | 2 << 4)
#define cluster_scratch_write (  15 |   1 << 6 | 0 << 4)
#define cluster_scratch_write8 (  15 |   1 << 6 | 2 << 4)
#define cluster_scratch_write8_be (  15 |   1 << 6 | 2 << 4)
#define cluster_scratch_write8_le (  15 |   1 << 6 | 3 << 4)
#define cluster_scratch_write_be (  15 |   1 << 6 | 0 << 4)
#define cluster_scratch_write_le (  15 |   1 << 6 | 1 << 4)
#define cluster_scratch_xor (  15 |   0 << 6 | 3 << 4)
#define nbi_packet_ready_drop (  1 |   3 << 6 | 0 << 4)
#define nbi_packet_ready_multicast_dont_free (  1 |   3 << 6 | 2 << 4)
#define nbi_packet_ready_multicast_free_on_last (  1 |   3 << 6 | 3 << 4)
#define nbi_packet_ready_unicast (  1 |   3 << 6 | 1 << 4)
#define nbi_pcie_reorder (  1 |   4 << 6 | 0 << 4)
#define nbi_pcie_reorder_vm_qos (  1 |   4 << 6 | 1 << 4)
#define nbi_read (  1 |   0 << 6 | 0 << 4)
#define nbi_write (  1 |   1 << 6 | 0 << 4)
#define pcie_read (  9 |   0 << 6 | 0 << 4)
#define pcie_read_int (  9 |   2 << 6 | 0 << 4)
#define pcie_read_pci (  9 |   2 << 6 | 0 << 4)
#define pcie_read_rid (  9 |   0 << 6 | 1 << 4)
#define pcie_write (  9 |   1 << 6 | 0 << 4)
#define pcie_write_int (  9 |   3 << 6 | 0 << 4)
#define pcie_write_pci (  9 |   3 << 6 | 0 << 4)
#define pcie_write_rid (  9 |   1 << 6 | 1 << 4)
#define pcie_write_vdm (  9 |   1 << 6 | 2 << 4)
#define crypto_read (  12 |   0 << 6 | 0 << 4)
#define crypto_write (  12 |   1 << 6 | 0 << 4)
#define crypto_write_fifo (  12 |   2 << 6 | 0 << 4)
#define arm_read (  10 |   0 << 6 | 0 << 4)
#define arm_write (  10 |   1 << 6 | 0 << 4)
#define ct_ctnn_write (  14 |   1 << 6 | 2 << 4)
#define ct_interthread_signal (  14 |   0 << 6 | 2 << 4)
#define ct_reflect_read_none (  14 |   2 << 6 | 0 << 4)
#define ct_reflect_read_sig_both (  14 |   2 << 6 | 3 << 4)
#define ct_reflect_read_sig_init (  14 |   2 << 6 | 1 << 4)
#define ct_reflect_read_sig_remote (  14 |   2 << 6 | 2 << 4)
#define ct_reflect_write_none (  14 |   3 << 6 | 0 << 4)
#define ct_reflect_write_sig_both (  14 |   3 << 6 | 3 << 4)
#define ct_reflect_write_sig_init (  14 |   3 << 6 | 1 << 4)
#define ct_reflect_write_sig_remote (  14 |   3 << 6 | 2 << 4)
#define ct_xpb_read (  14 |   0 << 6 | 0 << 4)
#define ct_xpb_write (  14 |   1 << 6 | 0 << 4)
