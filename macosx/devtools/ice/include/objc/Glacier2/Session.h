//
// Copyright (c) ZeroC, Inc. All rights reserved.
//

// Ice version 3.7.2
// Generated from file `Session.ice'

#import <objc/Ice/Config.h>
#import <objc/Ice/Proxy.h>
#import <objc/Ice/Current.h>
#import <objc/Ice/Object.h>
#import <objc/Ice/Stream.h>
#import <objc/Ice/LocalObject.h>
#import <objc/Ice/Exception.h>
#import <objc/Ice/SlicedData.h>
#import <objc/Ice/BuiltinSequences.h>
#import <objc/Ice/Identity.h>
#import <objc/Glacier2/SSLInfo.h>

#ifndef GLACIER2_API
#   if defined(ICE_STATIC_LIBS)
#       define GLACIER2_API /**/
#   elif defined(GLACIER2_API_EXPORTS)
#       define GLACIER2_API ICE_DECLSPEC_EXPORT
#   else
#       define GLACIER2_API ICE_DECLSPEC_IMPORT
#   endif
#endif

@class GLACIER2Session;
@protocol GLACIER2Session;

@class GLACIER2StringSet;
@protocol GLACIER2StringSet;

@class GLACIER2IdentitySet;
@protocol GLACIER2IdentitySet;

@class GLACIER2SessionControl;
@protocol GLACIER2SessionControl;

@class GLACIER2SessionManager;
@protocol GLACIER2SessionManager;

@class GLACIER2SSLSessionManager;
@protocol GLACIER2SSLSessionManager;

@class GLACIER2SessionPrx;
@protocol GLACIER2SessionPrx;

@class GLACIER2StringSetPrx;
@protocol GLACIER2StringSetPrx;

@class GLACIER2IdentitySetPrx;
@protocol GLACIER2IdentitySetPrx;

@class GLACIER2SessionControlPrx;
@protocol GLACIER2SessionControlPrx;

@class GLACIER2SessionManagerPrx;
@protocol GLACIER2SessionManagerPrx;

@class GLACIER2SSLSessionManagerPrx;
@protocol GLACIER2SSLSessionManagerPrx;

GLACIER2_API @interface GLACIER2CannotCreateSessionException : ICEUserException
{
    NSString *reason_;
    id<ICESlicedData> slicedData_;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *reason_;

-(NSString *) ice_id;

-(id) init;
-(id) init:(NSString*)reason;
+(id) cannotCreateSessionException;
+(id) cannotCreateSessionException:(NSString*)reason;
// This class also overrides copyWithZone:
// This class also overrides dealloc
@end

GLACIER2_API @protocol GLACIER2Session <NSObject>
-(void) destroy:(ICECurrent *)current;
@end

GLACIER2_API @interface GLACIER2Session : ICEServant
+(id) session;
+(void) iceD_destroy:(id<GLACIER2Session>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
@end

GLACIER2_API @protocol GLACIER2StringSet <NSObject>
-(void) add:(ICEMutableStringSeq*)additions current:(ICECurrent *)current;
-(void) remove:(ICEMutableStringSeq*)deletions current:(ICECurrent *)current;
-(ICEStringSeq*) get:(ICECurrent *)current;
@end

GLACIER2_API @interface GLACIER2StringSet : ICEServant
+(id) stringSet;
+(void) iceD_add:(id<GLACIER2StringSet>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_remove:(id<GLACIER2StringSet>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_get:(id<GLACIER2StringSet>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
@end

GLACIER2_API @protocol GLACIER2IdentitySet <NSObject>
-(void) add:(ICEMutableIdentitySeq*)additions current:(ICECurrent *)current;
-(void) remove:(ICEMutableIdentitySeq*)deletions current:(ICECurrent *)current;
-(ICEIdentitySeq*) get:(ICECurrent *)current;
@end

GLACIER2_API @interface GLACIER2IdentitySet : ICEServant
+(id) identitySet;
+(void) iceD_add:(id<GLACIER2IdentitySet>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_remove:(id<GLACIER2IdentitySet>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_get:(id<GLACIER2IdentitySet>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
@end

GLACIER2_API @protocol GLACIER2SessionControl <NSObject>
-(id<GLACIER2StringSetPrx>) categories:(ICECurrent *)current;
-(id<GLACIER2StringSetPrx>) adapterIds:(ICECurrent *)current;
-(id<GLACIER2IdentitySetPrx>) identities:(ICECurrent *)current;
-(ICEInt) getSessionTimeout:(ICECurrent *)current;
-(void) destroy:(ICECurrent *)current;
@end

GLACIER2_API @interface GLACIER2SessionControl : ICEServant
+(id) sessionControl;
+(void) iceD_categories:(id<GLACIER2SessionControl>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_adapterIds:(id<GLACIER2SessionControl>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_identities:(id<GLACIER2SessionControl>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_getSessionTimeout:(id<GLACIER2SessionControl>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_destroy:(id<GLACIER2SessionControl>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
@end

GLACIER2_API @protocol GLACIER2SessionManager <NSObject>
-(id<GLACIER2SessionPrx>) create:(NSMutableString*)userId control:(id<GLACIER2SessionControlPrx>)control current:(ICECurrent *)current;
@end

GLACIER2_API @interface GLACIER2SessionManager : ICEServant
+(id) sessionManager;
+(void) iceD_create:(id<GLACIER2SessionManager>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
@end

GLACIER2_API @protocol GLACIER2SSLSessionManager <NSObject>
-(id<GLACIER2SessionPrx>) create:(GLACIER2SSLInfo*)info control:(id<GLACIER2SessionControlPrx>)control current:(ICECurrent *)current;
@end

GLACIER2_API @interface GLACIER2SSLSessionManager : ICEServant
+(id) sslSessionManager;
+(id) sSLSessionManager ICE_DEPRECATED_API("use sslSessionManager instead");
+(void) iceD_create:(id<GLACIER2SSLSessionManager>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
@end

GLACIER2_API @protocol GLACIER2SessionPrx <ICEObjectPrx>
-(void) destroy;
-(void) destroy:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_destroy;
-(id<ICEAsyncResult>) begin_destroy:(ICEContext *)context;
-(void) end_destroy:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_destroy:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_destroy:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_destroy:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_destroy:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
@end

GLACIER2_API @protocol GLACIER2StringSetPrx <ICEObjectPrx>
-(void) add:(ICEStringSeq*)additions;
-(void) add:(ICEStringSeq*)additions context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_add:(ICEStringSeq*)additions;
-(id<ICEAsyncResult>) begin_add:(ICEStringSeq*)additions context:(ICEContext *)context;
-(void) end_add:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_add:(ICEStringSeq*)additions response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_add:(ICEStringSeq*)additions context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_add:(ICEStringSeq*)additions response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_add:(ICEStringSeq*)additions context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) remove:(ICEStringSeq*)deletions;
-(void) remove:(ICEStringSeq*)deletions context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_remove:(ICEStringSeq*)deletions;
-(id<ICEAsyncResult>) begin_remove:(ICEStringSeq*)deletions context:(ICEContext *)context;
-(void) end_remove:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_remove:(ICEStringSeq*)deletions response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_remove:(ICEStringSeq*)deletions context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_remove:(ICEStringSeq*)deletions response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_remove:(ICEStringSeq*)deletions context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(ICEMutableStringSeq*) get;
-(ICEMutableStringSeq*) get:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_get;
-(id<ICEAsyncResult>) begin_get:(ICEContext *)context;
-(ICEMutableStringSeq*) end_get:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_get:(void(^)(ICEMutableStringSeq*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_get:(ICEContext *)context response:(void(^)(ICEMutableStringSeq*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_get:(void(^)(ICEMutableStringSeq*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_get:(ICEContext *)context response:(void(^)(ICEMutableStringSeq*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
@end

GLACIER2_API @protocol GLACIER2IdentitySetPrx <ICEObjectPrx>
-(void) add:(ICEIdentitySeq*)additions;
-(void) add:(ICEIdentitySeq*)additions context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_add:(ICEIdentitySeq*)additions;
-(id<ICEAsyncResult>) begin_add:(ICEIdentitySeq*)additions context:(ICEContext *)context;
-(void) end_add:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_add:(ICEIdentitySeq*)additions response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_add:(ICEIdentitySeq*)additions context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_add:(ICEIdentitySeq*)additions response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_add:(ICEIdentitySeq*)additions context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) remove:(ICEIdentitySeq*)deletions;
-(void) remove:(ICEIdentitySeq*)deletions context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_remove:(ICEIdentitySeq*)deletions;
-(id<ICEAsyncResult>) begin_remove:(ICEIdentitySeq*)deletions context:(ICEContext *)context;
-(void) end_remove:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_remove:(ICEIdentitySeq*)deletions response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_remove:(ICEIdentitySeq*)deletions context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_remove:(ICEIdentitySeq*)deletions response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_remove:(ICEIdentitySeq*)deletions context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(ICEMutableIdentitySeq*) get;
-(ICEMutableIdentitySeq*) get:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_get;
-(id<ICEAsyncResult>) begin_get:(ICEContext *)context;
-(ICEMutableIdentitySeq*) end_get:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_get:(void(^)(ICEMutableIdentitySeq*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_get:(ICEContext *)context response:(void(^)(ICEMutableIdentitySeq*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_get:(void(^)(ICEMutableIdentitySeq*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_get:(ICEContext *)context response:(void(^)(ICEMutableIdentitySeq*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
@end

GLACIER2_API @protocol GLACIER2SessionControlPrx <ICEObjectPrx>
-(id<GLACIER2StringSetPrx>) categories;
-(id<GLACIER2StringSetPrx>) categories:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_categories;
-(id<ICEAsyncResult>) begin_categories:(ICEContext *)context;
-(id<GLACIER2StringSetPrx>) end_categories:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_categories:(void(^)(id<GLACIER2StringSetPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_categories:(ICEContext *)context response:(void(^)(id<GLACIER2StringSetPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_categories:(void(^)(id<GLACIER2StringSetPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_categories:(ICEContext *)context response:(void(^)(id<GLACIER2StringSetPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<GLACIER2StringSetPrx>) adapterIds;
-(id<GLACIER2StringSetPrx>) adapterIds:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_adapterIds;
-(id<ICEAsyncResult>) begin_adapterIds:(ICEContext *)context;
-(id<GLACIER2StringSetPrx>) end_adapterIds:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_adapterIds:(void(^)(id<GLACIER2StringSetPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_adapterIds:(ICEContext *)context response:(void(^)(id<GLACIER2StringSetPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_adapterIds:(void(^)(id<GLACIER2StringSetPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_adapterIds:(ICEContext *)context response:(void(^)(id<GLACIER2StringSetPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<GLACIER2IdentitySetPrx>) identities;
-(id<GLACIER2IdentitySetPrx>) identities:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_identities;
-(id<ICEAsyncResult>) begin_identities:(ICEContext *)context;
-(id<GLACIER2IdentitySetPrx>) end_identities:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_identities:(void(^)(id<GLACIER2IdentitySetPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_identities:(ICEContext *)context response:(void(^)(id<GLACIER2IdentitySetPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_identities:(void(^)(id<GLACIER2IdentitySetPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_identities:(ICEContext *)context response:(void(^)(id<GLACIER2IdentitySetPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(ICEInt) getSessionTimeout;
-(ICEInt) getSessionTimeout:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getSessionTimeout;
-(id<ICEAsyncResult>) begin_getSessionTimeout:(ICEContext *)context;
-(ICEInt) end_getSessionTimeout:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getSessionTimeout:(void(^)(ICEInt))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getSessionTimeout:(ICEContext *)context response:(void(^)(ICEInt))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getSessionTimeout:(void(^)(ICEInt))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getSessionTimeout:(ICEContext *)context response:(void(^)(ICEInt))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) destroy;
-(void) destroy:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_destroy;
-(id<ICEAsyncResult>) begin_destroy:(ICEContext *)context;
-(void) end_destroy:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_destroy:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_destroy:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_destroy:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_destroy:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
@end

GLACIER2_API @protocol GLACIER2SessionManagerPrx <ICEObjectPrx>
-(id<GLACIER2SessionPrx>) create:(NSString*)userId control:(id<GLACIER2SessionControlPrx>)control;
-(id<GLACIER2SessionPrx>) create:(NSString*)userId control:(id<GLACIER2SessionControlPrx>)control context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_create:(NSString*)userId control:(id<GLACIER2SessionControlPrx>)control;
-(id<ICEAsyncResult>) begin_create:(NSString*)userId control:(id<GLACIER2SessionControlPrx>)control context:(ICEContext *)context;
-(id<GLACIER2SessionPrx>) end_create:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_create:(NSString*)userId control:(id<GLACIER2SessionControlPrx>)control response:(void(^)(id<GLACIER2SessionPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_create:(NSString*)userId control:(id<GLACIER2SessionControlPrx>)control context:(ICEContext *)context response:(void(^)(id<GLACIER2SessionPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_create:(NSString*)userId control:(id<GLACIER2SessionControlPrx>)control response:(void(^)(id<GLACIER2SessionPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_create:(NSString*)userId control:(id<GLACIER2SessionControlPrx>)control context:(ICEContext *)context response:(void(^)(id<GLACIER2SessionPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
@end

GLACIER2_API @protocol GLACIER2SSLSessionManagerPrx <ICEObjectPrx>
-(id<GLACIER2SessionPrx>) create:(GLACIER2SSLInfo*)info control:(id<GLACIER2SessionControlPrx>)control;
-(id<GLACIER2SessionPrx>) create:(GLACIER2SSLInfo*)info control:(id<GLACIER2SessionControlPrx>)control context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_create:(GLACIER2SSLInfo*)info control:(id<GLACIER2SessionControlPrx>)control;
-(id<ICEAsyncResult>) begin_create:(GLACIER2SSLInfo*)info control:(id<GLACIER2SessionControlPrx>)control context:(ICEContext *)context;
-(id<GLACIER2SessionPrx>) end_create:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_create:(GLACIER2SSLInfo*)info control:(id<GLACIER2SessionControlPrx>)control response:(void(^)(id<GLACIER2SessionPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_create:(GLACIER2SSLInfo*)info control:(id<GLACIER2SessionControlPrx>)control context:(ICEContext *)context response:(void(^)(id<GLACIER2SessionPrx>))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_create:(GLACIER2SSLInfo*)info control:(id<GLACIER2SessionControlPrx>)control response:(void(^)(id<GLACIER2SessionPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_create:(GLACIER2SSLInfo*)info control:(id<GLACIER2SessionControlPrx>)control context:(ICEContext *)context response:(void(^)(id<GLACIER2SessionPrx>))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
@end

GLACIER2_API @interface GLACIER2SessionPrx : ICEObjectPrx <GLACIER2SessionPrx>
+(NSString *) ice_staticId;
@end

GLACIER2_API @interface GLACIER2StringSetPrx : ICEObjectPrx <GLACIER2StringSetPrx>
+(NSString *) ice_staticId;
+(void) iceI_add_marshal:(ICEStringSeq*)iceP_additions os:(id<ICEOutputStream>)ostr;
+(void) iceI_remove_marshal:(ICEStringSeq*)iceP_deletions os:(id<ICEOutputStream>)ostr;
+(ICEMutableStringSeq*) iceI_get_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
@end

GLACIER2_API @interface GLACIER2IdentitySetPrx : ICEObjectPrx <GLACIER2IdentitySetPrx>
+(NSString *) ice_staticId;
+(void) iceI_add_marshal:(ICEIdentitySeq*)iceP_additions os:(id<ICEOutputStream>)ostr;
+(void) iceI_remove_marshal:(ICEIdentitySeq*)iceP_deletions os:(id<ICEOutputStream>)ostr;
+(ICEMutableIdentitySeq*) iceI_get_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
@end

GLACIER2_API @interface GLACIER2SessionControlPrx : ICEObjectPrx <GLACIER2SessionControlPrx>
+(NSString *) ice_staticId;
+(id<GLACIER2StringSetPrx>) iceI_categories_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(id<GLACIER2StringSetPrx>) iceI_adapterIds_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(id<GLACIER2IdentitySetPrx>) iceI_identities_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(ICEInt) iceI_getSessionTimeout_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
@end

GLACIER2_API @interface GLACIER2SessionManagerPrx : ICEObjectPrx <GLACIER2SessionManagerPrx>
+(NSString *) ice_staticId;
+(void) iceI_create_marshal:(NSString*)iceP_userId control:(id<GLACIER2SessionControlPrx>)iceP_control os:(id<ICEOutputStream>)ostr;
+(id<GLACIER2SessionPrx>) iceI_create_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
@end

GLACIER2_API @interface GLACIER2SSLSessionManagerPrx : ICEObjectPrx <GLACIER2SSLSessionManagerPrx>
+(NSString *) ice_staticId;
+(void) iceI_create_marshal:(GLACIER2SSLInfo*)iceP_info control:(id<GLACIER2SessionControlPrx>)iceP_control os:(id<ICEOutputStream>)ostr;
+(id<GLACIER2SessionPrx>) iceI_create_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
@end

GLACIER2_API @interface GLACIER2SessionPrxHelper : ICEProxyHelper
@end

typedef ICEObjectHelper GLACIER2SessionHelper;

GLACIER2_API @interface GLACIER2StringSetPrxHelper : ICEProxyHelper
@end

typedef ICEObjectHelper GLACIER2StringSetHelper;

GLACIER2_API @interface GLACIER2IdentitySetPrxHelper : ICEProxyHelper
@end

typedef ICEObjectHelper GLACIER2IdentitySetHelper;

GLACIER2_API @interface GLACIER2SessionControlPrxHelper : ICEProxyHelper
@end

typedef ICEObjectHelper GLACIER2SessionControlHelper;

GLACIER2_API @interface GLACIER2SessionManagerPrxHelper : ICEProxyHelper
@end

typedef ICEObjectHelper GLACIER2SessionManagerHelper;

GLACIER2_API @interface GLACIER2SSLSessionManagerPrxHelper : ICEProxyHelper
@end

typedef ICEObjectHelper GLACIER2SSLSessionManagerHelper;
