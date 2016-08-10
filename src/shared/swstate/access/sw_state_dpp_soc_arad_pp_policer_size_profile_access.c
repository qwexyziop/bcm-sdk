/* $Id: $
 * 
 * $Copyright: (c) 2016 Broadcom.
 * Broadcom Proprietary and Confidential. All rights reserved.$
 * 
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 */

#include <sal/core/libc.h>
#include <shared/swstate/sw_state.h>
#include <shared/error.h>
#include <shared/swstate/sw_state_defs.h>
#include <shared/bsl.h>
#include <shared/swstate/access/sw_state_access.h>
#include <shared/swstate/access/sw_state_dpp_soc_arad_pp_policer_size_profile_access.h>

#ifdef _ERR_MSG_MODULE_NAME
    #error "_ERR_MSG_MODULE_NAME redefined"
#endif

#define _ERR_MSG_MODULE_NAME BSL_LS_SHARED_SWSTATE

extern shr_sw_state_t *sw_state[BCM_MAX_NUM_UNITS];

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_88675_A0)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_policer_size_profile_set(int unit, int policer_size_profile_idx_0, CONST JER_PP_SW_DB_POLICER_SIZE_PROFILE *policer_size_profile){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.soc.arad.pp.policer_size_profile.verify( unit, policer_size_profile_idx_0));
    SHR_SW_STATE_MEMSET(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->policer_size_profile[policer_size_profile_idx_0],
        policer_size_profile,
        JER_PP_SW_DB_POLICER_SIZE_PROFILE,
        SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
        "sw_state_dpp_soc_arad_pp_policer_size_profile_set");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_88675_A0)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_88675_A0)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_policer_size_profile_get(int unit, int policer_size_profile_idx_0, JER_PP_SW_DB_POLICER_SIZE_PROFILE *policer_size_profile){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.soc.arad.pp.policer_size_profile.verify( unit, policer_size_profile_idx_0));
    *policer_size_profile = sw_state[unit]->dpp.soc.arad.pp->policer_size_profile[policer_size_profile_idx_0];
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_88675_A0)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_88675_A0)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_policer_size_profile_alloc(int unit, int nof_instances_to_alloc){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_ALLOC(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->policer_size_profile,
        nof_instances_to_alloc * sizeof(JER_PP_SW_DB_POLICER_SIZE_PROFILE),
        SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
        "sw_state_dpp_soc_arad_pp_policer_size_profile_alloc");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_88675_A0)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_88675_A0)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_policer_size_profile_is_allocated(int unit, uint8 *is_allocated){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_IS_ALLOC(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->policer_size_profile,
        is_allocated,
        SW_STATE_NONE,
        "sw_state_dpp_soc_arad_pp_policer_size_profile_alloc");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_88675_A0)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_88675_A0)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_policer_size_profile_free(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_FREE(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->policer_size_profile,
        SW_STATE_NONE,
        "sw_state_dpp_soc_arad_pp_policer_size_profile_alloc");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_88675_A0)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_88675_A0)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_policer_size_profile_verify(int unit, int policer_size_profile_idx_0){
    uint32 allocated_size = 0;
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.verify( unit);
    _SOC_IF_ERR_EXIT(_rv);
    SW_STATE_NULL_ACCESS_CHECK(sw_state[unit]->dpp.soc.arad.pp->policer_size_profile);
    _SOC_IF_ERR_EXIT(shr_sw_state_allocated_size_get (unit, (uint8*)sw_state[unit]->dpp.soc.arad.pp->policer_size_profile, &allocated_size));
    SW_STATE_OUT_OF_BOUND_CHECK( policer_size_profile_idx_0, allocated_size /
        sizeof(*(sw_state[unit]->dpp.soc.arad.pp->policer_size_profile)) - 1, "policer_size_profile");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_88675_A0)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_88675_A0)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_policer_size_profile_policer_size_profile_multi_set_set(int unit, int policer_size_profile_idx_0, SOC_SAND_MULTI_SET_PTR policer_size_profile_multi_set){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.soc.arad.pp.policer_size_profile.policer_size_profile_multi_set.verify( unit, policer_size_profile_idx_0));
    SHR_SW_STATE_SET(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->policer_size_profile[policer_size_profile_idx_0].policer_size_profile_multi_set,
        policer_size_profile_multi_set,
        SOC_SAND_MULTI_SET_PTR,
        SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
        "sw_state_dpp_soc_arad_pp_policer_size_profile_policer_size_profile_multi_set_set");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_88675_A0)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_88675_A0)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_policer_size_profile_policer_size_profile_multi_set_get(int unit, int policer_size_profile_idx_0, SOC_SAND_MULTI_SET_PTR *policer_size_profile_multi_set){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.soc.arad.pp.policer_size_profile.policer_size_profile_multi_set.verify( unit, policer_size_profile_idx_0));
    *policer_size_profile_multi_set = sw_state[unit]->dpp.soc.arad.pp->policer_size_profile[policer_size_profile_idx_0].policer_size_profile_multi_set;
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_88675_A0)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_88675_A0)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_policer_size_profile_policer_size_profile_multi_set_verify(int unit, int policer_size_profile_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.policer_size_profile.verify( unit, policer_size_profile_idx_0);
    _SOC_IF_ERR_EXIT(_rv);
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_88675_A0)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 


int
sw_state_dpp_soc_arad_pp_policer_size_profile_access_cb_init(int unit){
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_88675_A0)
    sw_state_access[unit].dpp.soc.arad.pp.policer_size_profile.set = sw_state_dpp_soc_arad_pp_policer_size_profile_set;
#endif /* defined(BCM_88675_A0)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_88675_A0)
    sw_state_access[unit].dpp.soc.arad.pp.policer_size_profile.get = sw_state_dpp_soc_arad_pp_policer_size_profile_get;
#endif /* defined(BCM_88675_A0)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_88675_A0)
    sw_state_access[unit].dpp.soc.arad.pp.policer_size_profile.alloc = sw_state_dpp_soc_arad_pp_policer_size_profile_alloc;
#endif /* defined(BCM_88675_A0)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_88675_A0)
    sw_state_access[unit].dpp.soc.arad.pp.policer_size_profile.is_allocated = sw_state_dpp_soc_arad_pp_policer_size_profile_is_allocated;
#endif /* defined(BCM_88675_A0)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_88675_A0)
    sw_state_access[unit].dpp.soc.arad.pp.policer_size_profile.free = sw_state_dpp_soc_arad_pp_policer_size_profile_free;
#endif /* defined(BCM_88675_A0)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_88675_A0)
    sw_state_access[unit].dpp.soc.arad.pp.policer_size_profile.verify = sw_state_dpp_soc_arad_pp_policer_size_profile_verify;
#endif /* defined(BCM_88675_A0)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_88675_A0)
    sw_state_access[unit].dpp.soc.arad.pp.policer_size_profile.policer_size_profile_multi_set.set = sw_state_dpp_soc_arad_pp_policer_size_profile_policer_size_profile_multi_set_set;
#endif /* defined(BCM_88675_A0)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_88675_A0)
    sw_state_access[unit].dpp.soc.arad.pp.policer_size_profile.policer_size_profile_multi_set.get = sw_state_dpp_soc_arad_pp_policer_size_profile_policer_size_profile_multi_set_get;
#endif /* defined(BCM_88675_A0)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_88675_A0)
    sw_state_access[unit].dpp.soc.arad.pp.policer_size_profile.policer_size_profile_multi_set.verify = sw_state_dpp_soc_arad_pp_policer_size_profile_policer_size_profile_multi_set_verify;
#endif /* defined(BCM_88675_A0)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
    return _SHR_E_NONE;
}

#undef _ERR_MSG_MODULE_NAME