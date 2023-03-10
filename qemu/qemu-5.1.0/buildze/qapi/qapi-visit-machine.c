/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * Schema-defined QAPI visitors
 *
 * Copyright IBM, Corp. 2011
 * Copyright (C) 2014-2018 Red Hat, Inc.
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#include "qemu/osdep.h"
#include "qapi/error.h"
#include "qapi/qmp/qerror.h"
#include "qapi-visit-machine.h"

bool visit_type_SysEmuTarget(Visitor *v, const char *name, SysEmuTarget *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &SysEmuTarget_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_CpuInfoArch(Visitor *v, const char *name, CpuInfoArch *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &CpuInfoArch_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_q_obj_CpuInfo_base_members(Visitor *v, q_obj_CpuInfo_base *obj, Error **errp)
{
    if (!visit_type_int(v, "CPU", &obj->CPU, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "current", &obj->current, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "halted", &obj->halted, errp)) {
        return false;
    }
    if (!visit_type_str(v, "qom_path", &obj->qom_path, errp)) {
        return false;
    }
    if (!visit_type_int(v, "thread_id", &obj->thread_id, errp)) {
        return false;
    }
    if (visit_optional(v, "props", &obj->has_props)) {
        if (!visit_type_CpuInstanceProperties(v, "props", &obj->props, errp)) {
            return false;
        }
    }
    if (!visit_type_CpuInfoArch(v, "arch", &obj->arch, errp)) {
        return false;
    }
    return true;
}

bool visit_type_CpuInfo_members(Visitor *v, CpuInfo *obj, Error **errp)
{
    if (!visit_type_q_obj_CpuInfo_base_members(v, (q_obj_CpuInfo_base *)obj, errp)) {
        return false;
    }
    switch (obj->arch) {
    case CPU_INFO_ARCH_X86:
        return visit_type_CpuInfoX86_members(v, &obj->u.x86, errp);
    case CPU_INFO_ARCH_SPARC:
        return visit_type_CpuInfoSPARC_members(v, &obj->u.q_sparc, errp);
    case CPU_INFO_ARCH_PPC:
        return visit_type_CpuInfoPPC_members(v, &obj->u.ppc, errp);
    case CPU_INFO_ARCH_MIPS:
        return visit_type_CpuInfoMIPS_members(v, &obj->u.q_mips, errp);
    case CPU_INFO_ARCH_TRICORE:
        return visit_type_CpuInfoTricore_members(v, &obj->u.tricore, errp);
    case CPU_INFO_ARCH_S390:
        return visit_type_CpuInfoS390_members(v, &obj->u.s390, errp);
    case CPU_INFO_ARCH_RISCV:
        return visit_type_CpuInfoRISCV_members(v, &obj->u.riscv, errp);
    case CPU_INFO_ARCH_OTHER:
        break;
    default:
        abort();
    }
    return true;
}

bool visit_type_CpuInfo(Visitor *v, const char *name, CpuInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(CpuInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_CpuInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_CpuInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_CpuInfoX86_members(Visitor *v, CpuInfoX86 *obj, Error **errp)
{
    if (!visit_type_int(v, "pc", &obj->pc, errp)) {
        return false;
    }
    return true;
}

bool visit_type_CpuInfoX86(Visitor *v, const char *name, CpuInfoX86 **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(CpuInfoX86), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_CpuInfoX86_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_CpuInfoX86(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_CpuInfoSPARC_members(Visitor *v, CpuInfoSPARC *obj, Error **errp)
{
    if (!visit_type_int(v, "pc", &obj->pc, errp)) {
        return false;
    }
    if (!visit_type_int(v, "npc", &obj->npc, errp)) {
        return false;
    }
    return true;
}

bool visit_type_CpuInfoSPARC(Visitor *v, const char *name, CpuInfoSPARC **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(CpuInfoSPARC), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_CpuInfoSPARC_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_CpuInfoSPARC(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_CpuInfoPPC_members(Visitor *v, CpuInfoPPC *obj, Error **errp)
{
    if (!visit_type_int(v, "nip", &obj->nip, errp)) {
        return false;
    }
    return true;
}

bool visit_type_CpuInfoPPC(Visitor *v, const char *name, CpuInfoPPC **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(CpuInfoPPC), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_CpuInfoPPC_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_CpuInfoPPC(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_CpuInfoMIPS_members(Visitor *v, CpuInfoMIPS *obj, Error **errp)
{
    if (!visit_type_int(v, "PC", &obj->PC, errp)) {
        return false;
    }
    return true;
}

bool visit_type_CpuInfoMIPS(Visitor *v, const char *name, CpuInfoMIPS **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(CpuInfoMIPS), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_CpuInfoMIPS_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_CpuInfoMIPS(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_CpuInfoTricore_members(Visitor *v, CpuInfoTricore *obj, Error **errp)
{
    if (!visit_type_int(v, "PC", &obj->PC, errp)) {
        return false;
    }
    return true;
}

bool visit_type_CpuInfoTricore(Visitor *v, const char *name, CpuInfoTricore **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(CpuInfoTricore), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_CpuInfoTricore_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_CpuInfoTricore(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_CpuInfoRISCV_members(Visitor *v, CpuInfoRISCV *obj, Error **errp)
{
    if (!visit_type_int(v, "pc", &obj->pc, errp)) {
        return false;
    }
    return true;
}

bool visit_type_CpuInfoRISCV(Visitor *v, const char *name, CpuInfoRISCV **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(CpuInfoRISCV), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_CpuInfoRISCV_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_CpuInfoRISCV(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_CpuS390State(Visitor *v, const char *name, CpuS390State *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &CpuS390State_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_CpuInfoS390_members(Visitor *v, CpuInfoS390 *obj, Error **errp)
{
    if (!visit_type_CpuS390State(v, "cpu-state", &obj->cpu_state, errp)) {
        return false;
    }
    return true;
}

bool visit_type_CpuInfoS390(Visitor *v, const char *name, CpuInfoS390 **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(CpuInfoS390), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_CpuInfoS390_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_CpuInfoS390(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_CpuInfoList(Visitor *v, const char *name, CpuInfoList **obj, Error **errp)
{
    bool ok = false;
    CpuInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (CpuInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_CpuInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_CpuInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_CpuInfoFast_base_members(Visitor *v, q_obj_CpuInfoFast_base *obj, Error **errp)
{
    if (!visit_type_int(v, "cpu-index", &obj->cpu_index, errp)) {
        return false;
    }
    if (!visit_type_str(v, "qom-path", &obj->qom_path, errp)) {
        return false;
    }
    if (!visit_type_int(v, "thread-id", &obj->thread_id, errp)) {
        return false;
    }
    if (visit_optional(v, "props", &obj->has_props)) {
        if (!visit_type_CpuInstanceProperties(v, "props", &obj->props, errp)) {
            return false;
        }
    }
    if (!visit_type_CpuInfoArch(v, "arch", &obj->arch, errp)) {
        return false;
    }
    if (!visit_type_SysEmuTarget(v, "target", &obj->target, errp)) {
        return false;
    }
    return true;
}

bool visit_type_CpuInfoFast_members(Visitor *v, CpuInfoFast *obj, Error **errp)
{
    if (!visit_type_q_obj_CpuInfoFast_base_members(v, (q_obj_CpuInfoFast_base *)obj, errp)) {
        return false;
    }
    switch (obj->target) {
    case SYS_EMU_TARGET_S390X:
        return visit_type_CpuInfoS390_members(v, &obj->u.s390x, errp);
    case SYS_EMU_TARGET_AARCH64:
        break;
    case SYS_EMU_TARGET_ALPHA:
        break;
    case SYS_EMU_TARGET_ARM:
        break;
    case SYS_EMU_TARGET_AVR:
        break;
    case SYS_EMU_TARGET_CRIS:
        break;
    case SYS_EMU_TARGET_HPPA:
        break;
    case SYS_EMU_TARGET_I386:
        break;
    case SYS_EMU_TARGET_LM32:
        break;
    case SYS_EMU_TARGET_M68K:
        break;
    case SYS_EMU_TARGET_MICROBLAZE:
        break;
    case SYS_EMU_TARGET_MICROBLAZEEL:
        break;
    case SYS_EMU_TARGET_MIPS:
        break;
    case SYS_EMU_TARGET_MIPS64:
        break;
    case SYS_EMU_TARGET_MIPS64EL:
        break;
    case SYS_EMU_TARGET_MIPSEL:
        break;
    case SYS_EMU_TARGET_MOXIE:
        break;
    case SYS_EMU_TARGET_NIOS2:
        break;
    case SYS_EMU_TARGET_OR1K:
        break;
    case SYS_EMU_TARGET_PPC:
        break;
    case SYS_EMU_TARGET_PPC64:
        break;
    case SYS_EMU_TARGET_RISCV32:
        break;
    case SYS_EMU_TARGET_RISCV64:
        break;
    case SYS_EMU_TARGET_RX:
        break;
    case SYS_EMU_TARGET_SH4:
        break;
    case SYS_EMU_TARGET_SH4EB:
        break;
    case SYS_EMU_TARGET_SPARC:
        break;
    case SYS_EMU_TARGET_SPARC64:
        break;
    case SYS_EMU_TARGET_TRICORE:
        break;
    case SYS_EMU_TARGET_UNICORE32:
        break;
    case SYS_EMU_TARGET_X86_64:
        break;
    case SYS_EMU_TARGET_XTENSA:
        break;
    case SYS_EMU_TARGET_XTENSAEB:
        break;
    default:
        abort();
    }
    return true;
}

bool visit_type_CpuInfoFast(Visitor *v, const char *name, CpuInfoFast **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(CpuInfoFast), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_CpuInfoFast_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_CpuInfoFast(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_CpuInfoFastList(Visitor *v, const char *name, CpuInfoFastList **obj, Error **errp)
{
    bool ok = false;
    CpuInfoFastList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (CpuInfoFastList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_CpuInfoFast(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_CpuInfoFastList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_cpu_add_arg_members(Visitor *v, q_obj_cpu_add_arg *obj, Error **errp)
{
    if (!visit_type_int(v, "id", &obj->id, errp)) {
        return false;
    }
    return true;
}

bool visit_type_MachineInfo_members(Visitor *v, MachineInfo *obj, Error **errp)
{
    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    if (visit_optional(v, "alias", &obj->has_alias)) {
        if (!visit_type_str(v, "alias", &obj->alias, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "is-default", &obj->has_is_default)) {
        if (!visit_type_bool(v, "is-default", &obj->is_default, errp)) {
            return false;
        }
    }
    if (!visit_type_int(v, "cpu-max", &obj->cpu_max, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "hotpluggable-cpus", &obj->hotpluggable_cpus, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "numa-mem-supported", &obj->numa_mem_supported, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "deprecated", &obj->deprecated, errp)) {
        return false;
    }
    if (visit_optional(v, "default-cpu-type", &obj->has_default_cpu_type)) {
        if (!visit_type_str(v, "default-cpu-type", &obj->default_cpu_type, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_MachineInfo(Visitor *v, const char *name, MachineInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(MachineInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_MachineInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_MachineInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_MachineInfoList(Visitor *v, const char *name, MachineInfoList **obj, Error **errp)
{
    bool ok = false;
    MachineInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (MachineInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_MachineInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_MachineInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_CurrentMachineParams_members(Visitor *v, CurrentMachineParams *obj, Error **errp)
{
    if (!visit_type_bool(v, "wakeup-suspend-support", &obj->wakeup_suspend_support, errp)) {
        return false;
    }
    return true;
}

bool visit_type_CurrentMachineParams(Visitor *v, const char *name, CurrentMachineParams **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(CurrentMachineParams), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_CurrentMachineParams_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_CurrentMachineParams(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_TargetInfo_members(Visitor *v, TargetInfo *obj, Error **errp)
{
    if (!visit_type_SysEmuTarget(v, "arch", &obj->arch, errp)) {
        return false;
    }
    return true;
}

bool visit_type_TargetInfo(Visitor *v, const char *name, TargetInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(TargetInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_TargetInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_TargetInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_NumaOptionsType(Visitor *v, const char *name, NumaOptionsType *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &NumaOptionsType_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_q_obj_NumaOptions_base_members(Visitor *v, q_obj_NumaOptions_base *obj, Error **errp)
{
    if (!visit_type_NumaOptionsType(v, "type", &obj->type, errp)) {
        return false;
    }
    return true;
}

bool visit_type_NumaOptions_members(Visitor *v, NumaOptions *obj, Error **errp)
{
    if (!visit_type_q_obj_NumaOptions_base_members(v, (q_obj_NumaOptions_base *)obj, errp)) {
        return false;
    }
    switch (obj->type) {
    case NUMA_OPTIONS_TYPE_NODE:
        return visit_type_NumaNodeOptions_members(v, &obj->u.node, errp);
    case NUMA_OPTIONS_TYPE_DIST:
        return visit_type_NumaDistOptions_members(v, &obj->u.dist, errp);
    case NUMA_OPTIONS_TYPE_CPU:
        return visit_type_NumaCpuOptions_members(v, &obj->u.cpu, errp);
    case NUMA_OPTIONS_TYPE_HMAT_LB:
        return visit_type_NumaHmatLBOptions_members(v, &obj->u.hmat_lb, errp);
    case NUMA_OPTIONS_TYPE_HMAT_CACHE:
        return visit_type_NumaHmatCacheOptions_members(v, &obj->u.hmat_cache, errp);
    default:
        abort();
    }
    return true;
}

bool visit_type_NumaOptions(Visitor *v, const char *name, NumaOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(NumaOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_NumaOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_NumaOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_NumaNodeOptions_members(Visitor *v, NumaNodeOptions *obj, Error **errp)
{
    if (visit_optional(v, "nodeid", &obj->has_nodeid)) {
        if (!visit_type_uint16(v, "nodeid", &obj->nodeid, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "cpus", &obj->has_cpus)) {
        if (!visit_type_uint16List(v, "cpus", &obj->cpus, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "mem", &obj->has_mem)) {
        if (!visit_type_size(v, "mem", &obj->mem, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "memdev", &obj->has_memdev)) {
        if (!visit_type_str(v, "memdev", &obj->memdev, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "initiator", &obj->has_initiator)) {
        if (!visit_type_uint16(v, "initiator", &obj->initiator, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_NumaNodeOptions(Visitor *v, const char *name, NumaNodeOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(NumaNodeOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_NumaNodeOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_NumaNodeOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_NumaDistOptions_members(Visitor *v, NumaDistOptions *obj, Error **errp)
{
    if (!visit_type_uint16(v, "src", &obj->src, errp)) {
        return false;
    }
    if (!visit_type_uint16(v, "dst", &obj->dst, errp)) {
        return false;
    }
    if (!visit_type_uint8(v, "val", &obj->val, errp)) {
        return false;
    }
    return true;
}

bool visit_type_NumaDistOptions(Visitor *v, const char *name, NumaDistOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(NumaDistOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_NumaDistOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_NumaDistOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_X86CPURegister32(Visitor *v, const char *name, X86CPURegister32 *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &X86CPURegister32_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_X86CPUFeatureWordInfo_members(Visitor *v, X86CPUFeatureWordInfo *obj, Error **errp)
{
    if (!visit_type_int(v, "cpuid-input-eax", &obj->cpuid_input_eax, errp)) {
        return false;
    }
    if (visit_optional(v, "cpuid-input-ecx", &obj->has_cpuid_input_ecx)) {
        if (!visit_type_int(v, "cpuid-input-ecx", &obj->cpuid_input_ecx, errp)) {
            return false;
        }
    }
    if (!visit_type_X86CPURegister32(v, "cpuid-register", &obj->cpuid_register, errp)) {
        return false;
    }
    if (!visit_type_int(v, "features", &obj->features, errp)) {
        return false;
    }
    return true;
}

bool visit_type_X86CPUFeatureWordInfo(Visitor *v, const char *name, X86CPUFeatureWordInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(X86CPUFeatureWordInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_X86CPUFeatureWordInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_X86CPUFeatureWordInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_X86CPUFeatureWordInfoList(Visitor *v, const char *name, X86CPUFeatureWordInfoList **obj, Error **errp)
{
    bool ok = false;
    X86CPUFeatureWordInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (X86CPUFeatureWordInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_X86CPUFeatureWordInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_X86CPUFeatureWordInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_DummyForceArrays_members(Visitor *v, DummyForceArrays *obj, Error **errp)
{
    if (!visit_type_X86CPUFeatureWordInfoList(v, "unused", &obj->unused, errp)) {
        return false;
    }
    return true;
}

bool visit_type_DummyForceArrays(Visitor *v, const char *name, DummyForceArrays **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(DummyForceArrays), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_DummyForceArrays_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_DummyForceArrays(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_NumaCpuOptions_members(Visitor *v, NumaCpuOptions *obj, Error **errp)
{
    if (!visit_type_CpuInstanceProperties_members(v, (CpuInstanceProperties *)obj, errp)) {
        return false;
    }
    return true;
}

bool visit_type_NumaCpuOptions(Visitor *v, const char *name, NumaCpuOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(NumaCpuOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_NumaCpuOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_NumaCpuOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_HmatLBMemoryHierarchy(Visitor *v, const char *name, HmatLBMemoryHierarchy *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &HmatLBMemoryHierarchy_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_HmatLBDataType(Visitor *v, const char *name, HmatLBDataType *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &HmatLBDataType_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_NumaHmatLBOptions_members(Visitor *v, NumaHmatLBOptions *obj, Error **errp)
{
    if (!visit_type_uint16(v, "initiator", &obj->initiator, errp)) {
        return false;
    }
    if (!visit_type_uint16(v, "target", &obj->target, errp)) {
        return false;
    }
    if (!visit_type_HmatLBMemoryHierarchy(v, "hierarchy", &obj->hierarchy, errp)) {
        return false;
    }
    if (!visit_type_HmatLBDataType(v, "data-type", &obj->data_type, errp)) {
        return false;
    }
    if (visit_optional(v, "latency", &obj->has_latency)) {
        if (!visit_type_uint64(v, "latency", &obj->latency, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "bandwidth", &obj->has_bandwidth)) {
        if (!visit_type_size(v, "bandwidth", &obj->bandwidth, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_NumaHmatLBOptions(Visitor *v, const char *name, NumaHmatLBOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(NumaHmatLBOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_NumaHmatLBOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_NumaHmatLBOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_HmatCacheAssociativity(Visitor *v, const char *name, HmatCacheAssociativity *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &HmatCacheAssociativity_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_HmatCacheWritePolicy(Visitor *v, const char *name, HmatCacheWritePolicy *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &HmatCacheWritePolicy_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_NumaHmatCacheOptions_members(Visitor *v, NumaHmatCacheOptions *obj, Error **errp)
{
    if (!visit_type_uint32(v, "node-id", &obj->node_id, errp)) {
        return false;
    }
    if (!visit_type_size(v, "size", &obj->size, errp)) {
        return false;
    }
    if (!visit_type_uint8(v, "level", &obj->level, errp)) {
        return false;
    }
    if (!visit_type_HmatCacheAssociativity(v, "associativity", &obj->associativity, errp)) {
        return false;
    }
    if (!visit_type_HmatCacheWritePolicy(v, "policy", &obj->policy, errp)) {
        return false;
    }
    if (!visit_type_uint16(v, "line", &obj->line, errp)) {
        return false;
    }
    return true;
}

bool visit_type_NumaHmatCacheOptions(Visitor *v, const char *name, NumaHmatCacheOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(NumaHmatCacheOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_NumaHmatCacheOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_NumaHmatCacheOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_HostMemPolicy(Visitor *v, const char *name, HostMemPolicy *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &HostMemPolicy_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_Memdev_members(Visitor *v, Memdev *obj, Error **errp)
{
    if (visit_optional(v, "id", &obj->has_id)) {
        if (!visit_type_str(v, "id", &obj->id, errp)) {
            return false;
        }
    }
    if (!visit_type_size(v, "size", &obj->size, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "merge", &obj->merge, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "dump", &obj->dump, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "prealloc", &obj->prealloc, errp)) {
        return false;
    }
    if (!visit_type_uint16List(v, "host-nodes", &obj->host_nodes, errp)) {
        return false;
    }
    if (!visit_type_HostMemPolicy(v, "policy", &obj->policy, errp)) {
        return false;
    }
    return true;
}

bool visit_type_Memdev(Visitor *v, const char *name, Memdev **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(Memdev), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_Memdev_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_Memdev(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_MemdevList(Visitor *v, const char *name, MemdevList **obj, Error **errp)
{
    bool ok = false;
    MemdevList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (MemdevList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_Memdev(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_MemdevList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_CpuInstanceProperties_members(Visitor *v, CpuInstanceProperties *obj, Error **errp)
{
    if (visit_optional(v, "node-id", &obj->has_node_id)) {
        if (!visit_type_int(v, "node-id", &obj->node_id, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "socket-id", &obj->has_socket_id)) {
        if (!visit_type_int(v, "socket-id", &obj->socket_id, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "die-id", &obj->has_die_id)) {
        if (!visit_type_int(v, "die-id", &obj->die_id, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "core-id", &obj->has_core_id)) {
        if (!visit_type_int(v, "core-id", &obj->core_id, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "thread-id", &obj->has_thread_id)) {
        if (!visit_type_int(v, "thread-id", &obj->thread_id, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_CpuInstanceProperties(Visitor *v, const char *name, CpuInstanceProperties **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(CpuInstanceProperties), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_CpuInstanceProperties_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_CpuInstanceProperties(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_HotpluggableCPU_members(Visitor *v, HotpluggableCPU *obj, Error **errp)
{
    if (!visit_type_str(v, "type", &obj->type, errp)) {
        return false;
    }
    if (!visit_type_int(v, "vcpus-count", &obj->vcpus_count, errp)) {
        return false;
    }
    if (!visit_type_CpuInstanceProperties(v, "props", &obj->props, errp)) {
        return false;
    }
    if (visit_optional(v, "qom-path", &obj->has_qom_path)) {
        if (!visit_type_str(v, "qom-path", &obj->qom_path, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_HotpluggableCPU(Visitor *v, const char *name, HotpluggableCPU **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(HotpluggableCPU), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_HotpluggableCPU_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_HotpluggableCPU(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_HotpluggableCPUList(Visitor *v, const char *name, HotpluggableCPUList **obj, Error **errp)
{
    bool ok = false;
    HotpluggableCPUList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (HotpluggableCPUList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_HotpluggableCPU(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_HotpluggableCPUList(*obj);
        *obj = NULL;
    }
    return ok;
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_machine_c;
