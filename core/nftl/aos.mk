NAME := nftl

$(NAME)_MBINS_TYPE := kernel
$(NAME)_VERSION    := 1.0.0
$(NAME)_SUMMARY    := NAND Flash Translation Layer module

$(NAME)_SOURCES := nftl.c nftl_util.c nftl_partition.c
GLOBAL_INCLUDES += .

GLOBAL_DEFINES += AOS_COMP_NFTL
GLOBAL_DEFINES += NFTL_NO_DEBUG
#GLOBAL_DEFINES += NFTL_GC_NOTIFY
#GLOBAL_DEFINES += NFTL_GC_IN_THREAD
