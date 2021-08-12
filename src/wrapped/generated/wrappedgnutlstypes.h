/*****************************************************************
 * File automatically generated by rebuild_wrappers.py (v1.2.0.09)
 *****************************************************************/
#ifndef __wrappedgnutlsTYPES_H_
#define __wrappedgnutlsTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void (*vFp_t)(void*);
typedef void (*vFpp_t)(void*, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(gnutls_global_set_log_function, vFp_t) \
	GO(gnutls_transport_set_pull_function, vFpp_t) \
	GO(gnutls_transport_set_pull_timeout_function, vFpp_t) \
	GO(gnutls_transport_set_push_function, vFpp_t)

#endif // __wrappedgnutlsTYPES_H_
