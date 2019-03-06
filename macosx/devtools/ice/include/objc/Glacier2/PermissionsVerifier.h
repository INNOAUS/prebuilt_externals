//
// Copyright (c) ZeroC, Inc. All rights reserved.
//

// Ice version 3.7.2
// Generated from file `PermissionsVerifier.ice'

#import <objc/Ice/Config.h>
#import <objc/Ice/Proxy.h>
#import <objc/Ice/Current.h>
#import <objc/Ice/Object.h>
#import <objc/Ice/Stream.h>
#import <objc/Ice/LocalObject.h>
#import <objc/Ice/Exception.h>
#import <objc/Ice/SlicedData.h>
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

@class GLACIER2PermissionsVerifier;
@protocol GLACIER2PermissionsVerifier;

@class GLACIER2SSLPermissionsVerifier;
@protocol GLACIER2SSLPermissionsVerifier;

@class GLACIER2PermissionsVerifierPrx;
@protocol GLACIER2PermissionsVerifierPrx;

@class GLACIER2SSLPermissionsVerifierPrx;
@protocol GLACIER2SSLPermissionsVerifierPrx;

GLACIER2_API @interface GLACIER2PermissionDeniedException : ICEUserException
{
    NSString *reason_;
    id<ICESlicedData> slicedData_;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *reason_;

-(NSString *) ice_id;

-(id) init;
-(id) init:(NSString*)reason;
+(id) permissionDeniedException;
+(id) permissionDeniedException:(NSString*)reason;
// This class also overrides copyWithZone:
// This class also overrides dealloc
@end

GLACIER2_API @protocol GLACIER2PermissionsVerifier <NSObject>
-(BOOL) checkPermissions:(NSMutableString*)userId password:(NSMutableString*)password reason:(NSString**)reason current:(ICECurrent *)current;
@end

GLACIER2_API @interface GLACIER2PermissionsVerifier : ICEServant
+(id) permissionsVerifier;
+(void) iceD_checkPermissions:(id<GLACIER2PermissionsVerifier>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
@end

GLACIER2_API @protocol GLACIER2SSLPermissionsVerifier <NSObject>
-(BOOL) authorize:(GLACIER2SSLInfo*)info reason:(NSString**)reason current:(ICECurrent *)current;
@end

GLACIER2_API @interface GLACIER2SSLPermissionsVerifier : ICEServant
+(id) sslPermissionsVerifier;
+(id) sSLPermissionsVerifier ICE_DEPRECATED_API("use sslPermissionsVerifier instead");
+(void) iceD_authorize:(id<GLACIER2SSLPermissionsVerifier>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
@end

GLACIER2_API @protocol GLACIER2PermissionsVerifierPrx <ICEObjectPrx>
-(BOOL) checkPermissions:(NSString*)userId password:(NSString*)password reason:(NSMutableString* ICE_AUTORELEASING_QUALIFIER*)reason;
-(BOOL) checkPermissions:(NSString*)userId password:(NSString*)password reason:(NSMutableString* ICE_AUTORELEASING_QUALIFIER*)reason context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_checkPermissions:(NSString*)userId password:(NSString*)password;
-(id<ICEAsyncResult>) begin_checkPermissions:(NSString*)userId password:(NSString*)password context:(ICEContext *)context;
-(BOOL) end_checkPermissions:(NSMutableString* ICE_AUTORELEASING_QUALIFIER*)reason result:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_checkPermissions:(NSString*)userId password:(NSString*)password response:(void(^)(BOOL, NSMutableString*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_checkPermissions:(NSString*)userId password:(NSString*)password context:(ICEContext *)context response:(void(^)(BOOL, NSMutableString*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_checkPermissions:(NSString*)userId password:(NSString*)password response:(void(^)(BOOL, NSMutableString*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_checkPermissions:(NSString*)userId password:(NSString*)password context:(ICEContext *)context response:(void(^)(BOOL, NSMutableString*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
@end

GLACIER2_API @protocol GLACIER2SSLPermissionsVerifierPrx <ICEObjectPrx>
-(BOOL) authorize:(GLACIER2SSLInfo*)info reason:(NSMutableString* ICE_AUTORELEASING_QUALIFIER*)reason;
-(BOOL) authorize:(GLACIER2SSLInfo*)info reason:(NSMutableString* ICE_AUTORELEASING_QUALIFIER*)reason context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_authorize:(GLACIER2SSLInfo*)info;
-(id<ICEAsyncResult>) begin_authorize:(GLACIER2SSLInfo*)info context:(ICEContext *)context;
-(BOOL) end_authorize:(NSMutableString* ICE_AUTORELEASING_QUALIFIER*)reason result:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_authorize:(GLACIER2SSLInfo*)info response:(void(^)(BOOL, NSMutableString*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_authorize:(GLACIER2SSLInfo*)info context:(ICEContext *)context response:(void(^)(BOOL, NSMutableString*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_authorize:(GLACIER2SSLInfo*)info response:(void(^)(BOOL, NSMutableString*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_authorize:(GLACIER2SSLInfo*)info context:(ICEContext *)context response:(void(^)(BOOL, NSMutableString*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
@end

GLACIER2_API @interface GLACIER2PermissionsVerifierPrx : ICEObjectPrx <GLACIER2PermissionsVerifierPrx>
+(NSString *) ice_staticId;
+(void) iceI_checkPermissions_marshal:(NSString*)iceP_userId password:(NSString*)iceP_password os:(id<ICEOutputStream>)ostr;
+(BOOL) iceI_checkPermissions_unmarshal:(NSMutableString* ICE_AUTORELEASING_QUALIFIER*)iceP_reason is:(id<ICEInputStream>)istr ok:(BOOL)ok;
@end

GLACIER2_API @interface GLACIER2SSLPermissionsVerifierPrx : ICEObjectPrx <GLACIER2SSLPermissionsVerifierPrx>
+(NSString *) ice_staticId;
+(void) iceI_authorize_marshal:(GLACIER2SSLInfo*)iceP_info os:(id<ICEOutputStream>)ostr;
+(BOOL) iceI_authorize_unmarshal:(NSMutableString* ICE_AUTORELEASING_QUALIFIER*)iceP_reason is:(id<ICEInputStream>)istr ok:(BOOL)ok;
@end

GLACIER2_API @interface GLACIER2PermissionsVerifierPrxHelper : ICEProxyHelper
@end

typedef ICEObjectHelper GLACIER2PermissionsVerifierHelper;

GLACIER2_API @interface GLACIER2SSLPermissionsVerifierPrxHelper : ICEProxyHelper
@end

typedef ICEObjectHelper GLACIER2SSLPermissionsVerifierHelper;
