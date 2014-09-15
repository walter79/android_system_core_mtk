// Stubs for xlog functions present in MTK liblog.so.

#include <log/xlog.h>


int xlogf_java_tag_is_on(const char *name, int level)
{
    return 1;
}

int xlogf_native_tag_is_on(const char *name, int level)
{
    return 1;
}

int xlogf_java_xtag_is_on(const char *name, int level)
{
    return 1;
}

int xlogf_native_xtag_is_on(const char *name, int level)
{
    return 1;
}


int __xlog_buf_printf(int bufid, const struct xlog_record *rec, ...)
{
    va_list ap;
    int ret;

    va_start(ap, rec);
    // XXX: bufid is unused!
	ret = __android_log_vprint(rec->prio, rec->tag_str, rec->fmt_str, ap);
    va_end(ap);

    return ret;
}


// vim:set ai et ts=4 sw=4 sts=4 fenc=utf-8:
