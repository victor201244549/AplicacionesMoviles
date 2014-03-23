#include <jni.h>
#include <stdio.h>
#include "Calculator.h"
 
// Implementation of native method sayHello() of HelloJNI class
JNIEXPORT jint JNICALL Java_Calculator_add(JNIEnv *env, jobject thisObj,jint number1,jint number2) {
     return number1+number2;
}

JNIEXPORT jint JNICALL Java_Calculator_rest(JNIEnv *env, jobject thisObj,jint number1,jint number2) {
     return number1-number2;
}

JNIEXPORT jint JNICALL Java_Calculator_divide(JNIEnv *env, jobject thisObj,jint number1,jint number2) {
     return number1/number2;
}

JNIEXPORT jint JNICALL Java_Calculator_multiply(JNIEnv *env, jobject thisObj,jint number1,jint number2) {
     return number1*number2;
}