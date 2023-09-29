/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_variant.h>
#include <libinit_utils.h>
#include <unistd.h>

#include "vendor_init.h"

static const variant_info_t eos_global_info = {
    .hwc_value = "",
    .sku_value = "eos",

    .brand = "Redmi",
    .device = "eos",
    .marketname = "Redmi 10",
    .model = "21061119DG",
    .build_fingerprint = "Redmi/eos_global/eos:13/TP1A.220624.014/V14.0.4.0.TKUMIXM:user/release-keys"
};

static const variant_info_t eos_u_global_info = {
    .hwc_value = "",
    .sku_value = "eos",

    .brand = "Redmi",
    .device = "eos",
    .marketname = "Redmi 10 2022",
    .model = "22011119UY",
    .build_fingerprint = "Redmi/eos_global/eos:13/TP1A.220624.014/V14.0.4.0.TKUMIXM:user/release-keys"
};

static const variant_info_t selene_global_info = {
    .hwc_value = "",
    .sku_value = "selene",

    .brand = "Redmi",
    .device = "selene",
    .marketname = "Redmi 10",
    .model = "21061119AG",
    .build_fingerprint = "Redmi/selene_global/selene:13/TP1A.220624.014/V14.0.4.0.TKUMIXM:user/release-keys"
};

static const variant_info_t selene_in_info = {
    .hwc_value = "",
    .sku_value = "selene",

    .brand = "Redmi",
    .device = "selene",
    .marketname = "Redmi 10 Prime",
    .model = "21061119BI",
    .build_fingerprint = "Redmi/selene_in/selene:13/TP1A.220624.014/V14.0.7.0.TKUINXM:user/release-keys"
};

static const variant_info_t selenes_info = {
    .hwc_value = "",
    .sku_value = "selenes",

    .brand = "Redmi",
    .device = "selenes",
    .marketname = "Redmi Note 11 4G",
    .model = "21121119SC",
    .build_fingerprint = "Redmi/selene/selene:13/TP1A.220624.014/V14.0.2.0.TKUCNXM:user/release-keys"
};

static const std::vector<variant_info_t> variants = {
    eos_global_info,
    eos_u_global_info,
    selene_global_info,
    selene_in_info,
    selenes_info
};

void vendor_load_properties() {
    if (access("/system/bin/recovery", F_OK) != 0) {
        search_variant(variants);
    }
}
