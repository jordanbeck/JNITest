#include <string.h>
#include <jni.h>

#include "test.h"

JNIEXPORT jstring JNICALL
Java_ai_aktive_jnitest_MainActivity_stringFromJNI(JNIEnv* env,
                                                  jobject thiz )
{
    return (*env)->NewStringUTF(env, hello_world());
}