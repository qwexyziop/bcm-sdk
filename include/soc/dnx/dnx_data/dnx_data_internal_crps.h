/** \file dnx_data_internal_crps.h
 * 
 * MODULE DEVICE DATA - DNX_DATA
 * 
 * Device Data
 * SW component that maintains per device data
 * The data is static and won't be changed after device initialization.
 *     
 * Supported data types:
 *     - Define             - a 'uint32' number (a max value for all devices is maintained)
 *     - feature            - 1 bit per each feature (supported/not supported) - support soc properties 
 *     - table              - the data is accessed with keys and/or can maintain multiple values and/or set by soc property
 *     - numeric            - a 'uint32' number that support soc properties
 * 
 * User interface for DNX DATA component can be found in "dnx_data_if.h" and "dnx_data_if_#module#.h"
 * 
 * Adding the data is done via XMLs placed in "tools/autocoder/DeviceData/dnx/.." 
 * "How to" User Guide can be found in confluence. 
 *        
 *     
 * 
 * AUTO-GENERATED BY AUTOCODER!
 * DO NOT EDIT THIS FILE!
 */
/* *INDENT-OFF* */
/*
 * $Copyright: (c) 2016 Broadcom.
 * Broadcom Proprietary and Confidential. All rights reserved.$
 */
#ifndef _DNX_DATA_INTERNAL_CRPS_H_
/*{*/
#define _DNX_DATA_INTERNAL_CRPS_H_
/*
 * INCLUDE FILES:
 * {
 */
#include <soc/dnx/dnx_data/dnx_data_internal.h>
#include <soc/dnx/dnx_data/dnx_data_crps.h>
/*
 * }
 */

/*!
* \brief This file is only used by DNX (JR2 family). Including it by
* software that is not specific to DNX is an error.
*/
#ifndef BCM_DNX_SUPPORT
#error "This file is for use by DNX (JR2) family only!"
#endif

/*
 * TYPEDEFS:
 * {
 */
/**
 * \brief 
 * Submodule enum
 */
typedef enum
{
    dnx_data_crps_submodule_crps_engines,
    dnx_data_crps_submodule_eviction,

    /**
     * Must be last one!
     */
    dnx_data_crps_submodule_nof
} dnx_data_crps_submodule_e;

/*
 * }
 */

/*
 * SUBMODULE CRPS_ENGINES:
 * {
 */
/*
 * Features
 */
/* Feature enum - placed in if header (should be exposed to component user */
/* Get Data */
/**
 * \brief get submodule feauture - disabled/enabled
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - Unit #
 *   \param [in] feature - feature to get (see enum defintion for more details
 * \par INDIRECT INPUT:
 *   device data - module global data
 * \par DIRECT OUTPUT:
 *     is_supported - returns 1 iff supported and 0 otherwise
 * \par INDIRECT OUTPUT:
 * \remark
 *   * None
 * \see
 *   * None
 */
int dnx_data_crps_crps_engines_feature_get(
    int unit,
    dnx_data_crps_crps_engines_feature_e feature);

/*
 * Defines
 */
/**
 * \brief 
 * Define enum
 */
typedef enum
{
    dnx_data_crps_crps_engines_define_nof_engines,

    /**
     * Must be last one!
     */
    dnx_data_crps_crps_engines_define_nof
} dnx_data_crps_crps_engines_define_e;

/* Get Data */
/**
 * \brief returns define data of nof_engines
 * Module - 'crps', Submodule - 'crps_engines', data - 'nof_engines'
 * Number of counter engines
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - unit #
 * \par INDIRECT INPUT:
 *   _dnx_data[unit] - module global data
 * \par DIRECT OUTPUT:
 *     nof_engines - the required data value
 * \par INDIRECT OUTPUT:
 * \remark
 *   * None
 * \see
 *   * None
 */
uint32 dnx_data_crps_crps_engines_nof_engines_get(
    int unit);

/*
 * Tables
 */
/**
 * \brief 
 * Table enum
 */
typedef enum
{
    dnx_data_crps_crps_engines_table_engines_size,

    /**
     * Must be last one!
     */
    dnx_data_crps_crps_engines_table_nof
} dnx_data_crps_crps_engines_table_e;

/* Get Data */
/**
 * \brief get table engines_size info
 * size of each counter engine
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - unit #
 *   \param [in] engine_id - engine id {0..(nof_counter_engines-1)}
 * \par INDIRECT INPUT:
 *   _dnx_data[unit] - module global data
 * \par DIRECT OUTPUT:
 *     engines_size - returns the relevant entry values grouped in struct - see dnx_data_crps_crps_engines_engines_size_t
 * \par INDIRECT OUTPUT:
 * \remark
 *   * None
 * \see
 *   * None
 */
const dnx_data_crps_crps_engines_engines_size_t * dnx_data_crps_crps_engines_engines_size_get(
    int unit,
    int engine_id);

/* Get Value Str */
/**
 * \brief Get table value as string
 * Module - 'crps', Submodule - 'crps_engines', table - 'engines_size'
 * size of each counter engine
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - Unit #
 *   \param [in] key0 - key #0 index - 0 if not used
 *   \param [in] key1 - key #1 index - 0 if not used
 *   \param [in] value_index - value index to get - the index is alligned with values array in table structure
 * \par INDIRECT INPUT:
 *   _dnx_data[unit] - module global data
 * \par DIRECT OUTPUT:
 *     err - See shr_error_e
 * \par INDIRECT OUTPUT:
 *   \param [out] buffer - buffer for the value
 * \remark
 *   * None
 * \see
 *   * None
 */
shr_error_e dnx_data_crps_crps_engines_engines_size_entry_str_get(
    int unit,
    char *buffer,
    int key0,
    int key1,
    int value_index);

/*
 * SUBMODULE EVICTION:
 * {
 */
/*
 * Features
 */
/* Feature enum - placed in if header (should be exposed to component user */
/* Get Data */
/**
 * \brief get submodule feauture - disabled/enabled
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - Unit #
 *   \param [in] feature - feature to get (see enum defintion for more details
 * \par INDIRECT INPUT:
 *   device data - module global data
 * \par DIRECT OUTPUT:
 *     is_supported - returns 1 iff supported and 0 otherwise
 * \par INDIRECT OUTPUT:
 * \remark
 *   * None
 * \see
 *   * None
 */
int dnx_data_crps_eviction_feature_get(
    int unit,
    dnx_data_crps_eviction_feature_e feature);

/*
 * Defines
 */
/**
 * \brief 
 * Define enum
 */
typedef enum
{
    dnx_data_crps_eviction_define_nof_dma_fifo_per_core,
    dnx_data_crps_eviction_define_counters_fifo_depth,

    /**
     * Must be last one!
     */
    dnx_data_crps_eviction_define_nof
} dnx_data_crps_eviction_define_e;

/* Get Data */
/**
 * \brief returns define data of nof_dma_fifo_per_core
 * Module - 'crps', Submodule - 'eviction', data - 'nof_dma_fifo_per_core'
 * Number of DMA FIFO used for counter processor for each core
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - unit #
 * \par INDIRECT INPUT:
 *   _dnx_data[unit] - module global data
 * \par DIRECT OUTPUT:
 *     nof_dma_fifo_per_core - the required data value
 * \par INDIRECT OUTPUT:
 * \remark
 *   * None
 * \see
 *   * None
 */
uint32 dnx_data_crps_eviction_nof_dma_fifo_per_core_get(
    int unit);

/**
 * \brief returns define data of counters_fifo_depth
 * Module - 'crps', Submodule - 'eviction', data - 'counters_fifo_depth'
 * Indicates the FIFO depth in the host
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - unit #
 * \par INDIRECT INPUT:
 *   _dnx_data[unit] - module global data
 * \par DIRECT OUTPUT:
 *     counters_fifo_depth - the required data value
 * \par INDIRECT OUTPUT:
 * \remark
 *   * None
 * \see
 *   * None
 */
uint32 dnx_data_crps_eviction_counters_fifo_depth_get(
    int unit);

/*
 * Tables
 */
/**
 * \brief 
 * Table enum
 */
typedef enum
{

    /**
     * Must be last one!
     */
    dnx_data_crps_eviction_table_nof
} dnx_data_crps_eviction_table_e;

/* Get Data */
/* Get Value Str */
/*
 * FUNCTIONS:
 * {
 */
/**
 * \brief Init module
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - Unit #
 * \par INDIRECT INPUT:
 *   * None
 * \par DIRECT OUTPUT:
 *     rv - see 'shr_error_e
 * \par INDIRECT OUTPUT:
 *   \param [out] module_data - pointer to module data
 * \remark
 *   * None
 * \see
 *   * None
 */
shr_error_e dnx_data_crps_init(
    int unit,
    dnx_data_module_t *module_data);

/*
 * }
 */
/*}*/
#else     /*DNX_DATA_INTERNAL_CRPS_H_*/
/*{*/
#ifndef DNX_DATA_INTERNAL
/*{*/
#error "dnx_data_internal_crps file might include any header files, therfore header files must not include it.\nAny include to dnx_data_internal_crps must be from 'c' file"
/*}*/
#endif /*DNX_DATA_INTERNAL*/
/*}*/
#endif /*_DNX_DATA_INTERNAL_CRPS_H_*/
/* *INDENT-ON* */