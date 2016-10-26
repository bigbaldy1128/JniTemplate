//
// Created by wangjinzhao on 2016/10/18.
//
#include<jni.h>
#include<android\log.h>
#include<string.h>

#define LOGI(...) __android_log_print(ANDROID_LOG_INFO  , "ProjectName", __VA_ARGS__)

jstring JNICALL Java_bigbaldy_jnitest_MainActivity_getStr(JNIEnv * env, jclass thiz)
{
	LOGI("hello jni");
    return (*env)->NewStringUTF(env,"invoke jni success!");
}
