//
// Created by 孙庆耀 on 2018/7/16.
//

#ifndef KERNOD_HTTP_BODY_OPEN_H
#define KERNOD_HTTP_BODY_OPEN_H

#include <sys/types.h> /* size_t, ssize_t */
#include <stdarg.h> /* va_list */
#include <stddef.h> /* NULL */
#include <stdint.h> /* int64_t */
#include <kcgi.h>


extern void http_body_open(struct kreq *req, enum khttp status);

#endif //KERNOD_HTTP_BODY_OPEN_H