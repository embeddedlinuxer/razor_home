#
_XDCBUILDCOUNT = 0
ifneq (,$(findstring path,$(_USEXDCENV_)))
override XDCPATH = C:/ti/uia_2_30_01_02/packages;C:/ti/ccs910/ccs/ccs_base;C:/ti/bios_6_75_02_00/packages;C:/ti/customPkg/packages;C:/ti/pdk_omap138_1_0_8/packages;C:/Users/sangb/workspace/PDI_Razor/.config
override XDCROOT = C:/ti/ccs910/xdctools_3_55_02_22_core
override XDCBUILDCFG = ./config.bld
endif
ifneq (,$(findstring args,$(_USEXDCENV_)))
override XDCARGS = 
override XDCTARGETS = 
endif
#
ifeq (0,1)
PKGPATH = C:/ti/uia_2_30_01_02/packages;C:/ti/ccs910/ccs/ccs_base;C:/ti/bios_6_75_02_00/packages;C:/ti/customPkg/packages;C:/ti/pdk_omap138_1_0_8/packages;C:/Users/sangb/workspace/PDI_Razor/.config;C:/ti/ccs910/xdctools_3_55_02_22_core/packages;..
HOSTOS = Windows
endif
