//
// Copyright (c) ZeroC, Inc. All rights reserved.
//

// Ice version 3.7.2
// Generated from file `PropertiesAdmin.ice'

#import <objc/Ice/Config.h>
#import <objc/Ice/Proxy.h>
#import <objc/Ice/Current.h>
#import <objc/Ice/Object.h>
#import <objc/Ice/Stream.h>
#import <objc/Ice/LocalObject.h>
#import <objc/Ice/Exception.h>
#import <objc/Ice/BuiltinSequences.h>

#ifndef ICE_API
#   if defined(ICE_STATIC_LIBS)
#       define ICE_API /**/
#   elif defined(ICE_API_EXPORTS)
#       define ICE_API ICE_DECLSPEC_EXPORT
#   else
#       define ICE_API ICE_DECLSPEC_IMPORT
#   endif
#endif

@class ICEPropertiesAdmin;
@protocol ICEPropertiesAdmin;

@class ICEPropertiesAdminPrx;
@protocol ICEPropertiesAdminPrx;

typedef NSDictionary ICEPropertyDict;
typedef NSMutableDictionary ICEMutablePropertyDict;

ICE_API @protocol ICEPropertiesAdmin <NSObject>
-(NSString*) getProperty:(NSMutableString*)key current:(ICECurrent *)current;
-(ICEPropertyDict*) getPropertiesForPrefix:(NSMutableString*)prefix current:(ICECurrent *)current;
-(void) setProperties:(ICEMutablePropertyDict*)newProperties current:(ICECurrent *)current;
@end

ICE_API @interface ICEPropertiesAdmin : ICEServant
+(id) propertiesAdmin;
+(void) iceD_getProperty:(id<ICEPropertiesAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_getPropertiesForPrefix:(id<ICEPropertiesAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
+(void) iceD_setProperties:(id<ICEPropertiesAdmin>)target current:(ICECurrent *)current is:(id<ICEInputStream>)istr os:(id<ICEOutputStream>)ostr;
@end

ICE_API @protocol ICEPropertiesAdminPrx <ICEObjectPrx>
-(NSMutableString*) getProperty:(NSString*)key;
-(NSMutableString*) getProperty:(NSString*)key context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getProperty:(NSString*)key;
-(id<ICEAsyncResult>) begin_getProperty:(NSString*)key context:(ICEContext *)context;
-(NSMutableString*) end_getProperty:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getProperty:(NSString*)key response:(void(^)(NSMutableString*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getProperty:(NSString*)key context:(ICEContext *)context response:(void(^)(NSMutableString*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getProperty:(NSString*)key response:(void(^)(NSMutableString*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getProperty:(NSString*)key context:(ICEContext *)context response:(void(^)(NSMutableString*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(ICEMutablePropertyDict*) getPropertiesForPrefix:(NSString*)prefix;
-(ICEMutablePropertyDict*) getPropertiesForPrefix:(NSString*)prefix context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_getPropertiesForPrefix:(NSString*)prefix;
-(id<ICEAsyncResult>) begin_getPropertiesForPrefix:(NSString*)prefix context:(ICEContext *)context;
-(ICEMutablePropertyDict*) end_getPropertiesForPrefix:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_getPropertiesForPrefix:(NSString*)prefix response:(void(^)(ICEMutablePropertyDict*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getPropertiesForPrefix:(NSString*)prefix context:(ICEContext *)context response:(void(^)(ICEMutablePropertyDict*))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_getPropertiesForPrefix:(NSString*)prefix response:(void(^)(ICEMutablePropertyDict*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_getPropertiesForPrefix:(NSString*)prefix context:(ICEContext *)context response:(void(^)(ICEMutablePropertyDict*))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(void) setProperties:(ICEPropertyDict*)newProperties;
-(void) setProperties:(ICEPropertyDict*)newProperties context:(ICEContext *)context;
-(id<ICEAsyncResult>) begin_setProperties:(ICEPropertyDict*)newProperties;
-(id<ICEAsyncResult>) begin_setProperties:(ICEPropertyDict*)newProperties context:(ICEContext *)context;
-(void) end_setProperties:(id<ICEAsyncResult>)result;
-(id<ICEAsyncResult>) begin_setProperties:(ICEPropertyDict*)newProperties response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_setProperties:(ICEPropertyDict*)newProperties context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception;
-(id<ICEAsyncResult>) begin_setProperties:(ICEPropertyDict*)newProperties response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
-(id<ICEAsyncResult>) begin_setProperties:(ICEPropertyDict*)newProperties context:(ICEContext *)context response:(void(^)(void))response exception:(void(^)(ICEException*))exception sent:(void(^)(BOOL))sent;
@end

ICE_API @interface ICEPropertiesAdminPrx : ICEObjectPrx <ICEPropertiesAdminPrx>
+(NSString *) ice_staticId;
+(void) iceI_getProperty_marshal:(NSString*)iceP_key os:(id<ICEOutputStream>)ostr;
+(NSMutableString*) iceI_getProperty_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_getPropertiesForPrefix_marshal:(NSString*)iceP_prefix os:(id<ICEOutputStream>)ostr;
+(ICEMutablePropertyDict*) iceI_getPropertiesForPrefix_unmarshal:(id<ICEInputStream>)istr ok:(BOOL)ok;
+(void) iceI_setProperties_marshal:(ICEPropertyDict*)iceP_newProperties os:(id<ICEOutputStream>)ostr;
@end

ICE_API @interface ICEPropertyDictHelper : ICEDictionaryHelper
@end

ICE_API @interface ICEPropertiesAdminPrxHelper : ICEProxyHelper
@end

typedef ICEObjectHelper ICEPropertiesAdminHelper;
