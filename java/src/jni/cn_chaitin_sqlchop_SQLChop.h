/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class cn_chaitin_sqlchop_SQLChop */

#ifndef _Included_cn_chaitin_sqlchop_SQLChop
#define _Included_cn_chaitin_sqlchop_SQLChop
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     cn_chaitin_sqlchop_SQLChop
 * Method:    init
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_cn_chaitin_sqlchop_SQLChop_init
  (JNIEnv *, jobject);

/*
 * Class:     cn_chaitin_sqlchop_SQLChop
 * Method:    release
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_cn_chaitin_sqlchop_SQLChop_release
  (JNIEnv *, jobject);

/*
 * Class:     cn_chaitin_sqlchop_SQLChop
 * Method:    score_sqli
 * Signature: (Ljava/lang/String;)F
 */
JNIEXPORT jfloat JNICALL Java_cn_chaitin_sqlchop_SQLChop_score_1sqli
  (JNIEnv *, jobject, jstring);

/*
 * Class:     cn_chaitin_sqlchop_SQLChop
 * Method:    classify_request
 * Signature: ([[BZ)I
 */
JNIEXPORT jint JNICALL Java_cn_chaitin_sqlchop_SQLChop_classify_1request
  (JNIEnv *, jobject, jobjectArray, jboolean);

#ifdef __cplusplus
}
#endif
#endif
