/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "../../../libacars.asn1/fans-cpdlc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_FANSRemainingFuel_H_
#define	_FANSRemainingFuel_H_


#include "asn_application.h"

/* Including external dependencies */
#include "FANSTimehours.h"
#include "FANSTimeminutes.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* FANSRemainingFuel */
typedef struct FANSRemainingFuel {
	FANSTimehours_t	 hours;
	FANSTimeminutes_t	 minutes;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FANSRemainingFuel_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSRemainingFuel;

#ifdef __cplusplus
}
#endif

#endif	/* _FANSRemainingFuel_H_ */
#include "asn_internal.h"
