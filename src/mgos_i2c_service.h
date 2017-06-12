/*
 * Copyright (c) 2014-2016 Cesanta Software Limited
 * All rights reserved
 */

#ifndef CS_FW_SRC_MGOS_I2C_SERVICE_H_
#define CS_FW_SRC_MGOS_I2C_SERVICE_H_

#include "fw/src/mgos_features.h"

#if MGOS_ENABLE_I2C

#include "fw/src/mgos_init.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

bool mgos_rpc_service_i2c_init(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* MGOS_ENABLE_I2C */
#endif /* CS_FW_SRC_MGOS_I2C_SERVICE_H_ */
