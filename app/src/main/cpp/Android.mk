LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_SRC_FILES := \
native-lib.c\
test.c\

LOCAL_SRC_INCLUDES := \
test.h\

LOCAL_MODULE := native-lib

include $(BUILD_EXECUTABLE)