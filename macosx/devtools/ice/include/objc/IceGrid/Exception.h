//
// Copyright (c) ZeroC, Inc. All rights reserved.
//

// Ice version 3.7.2
// Generated from file `Exception.ice'

#import <objc/Ice/Config.h>
#import <objc/Ice/Stream.h>
#import <objc/Ice/LocalObject.h>
#import <objc/Ice/Exception.h>
#import <objc/Ice/Identity.h>
#import <objc/Ice/BuiltinSequences.h>

#ifndef ICEGRID_API
#   if defined(ICE_STATIC_LIBS)
#       define ICEGRID_API /**/
#   elif defined(ICEGRID_API_EXPORTS)
#       define ICEGRID_API ICE_DECLSPEC_EXPORT
#   else
#       define ICEGRID_API ICE_DECLSPEC_IMPORT
#   endif
#endif

ICEGRID_API @interface ICEGRIDApplicationNotExistException : ICEUserException
{
    NSString *name_;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *name_;

-(NSString *) ice_id;

-(id) init;
-(id) init:(NSString*)name;
+(id) applicationNotExistException;
+(id) applicationNotExistException:(NSString*)name;
// This class also overrides copyWithZone:
// This class also overrides dealloc
@end

ICEGRID_API @interface ICEGRIDServerNotExistException : ICEUserException
{
    NSString *id_;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *id_;

-(NSString *) ice_id;

-(id) init;
-(id) init:(NSString*)id_;
+(id) serverNotExistException;
+(id) serverNotExistException:(NSString*)id_;
// This class also overrides copyWithZone:
// This class also overrides dealloc
@end

ICEGRID_API @interface ICEGRIDServerStartException : ICEUserException
{
    NSString *id_;
    NSString *reason_;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *id_;
@property(nonatomic, ICE_STRONG_ATTR) NSString *reason_;

-(NSString *) ice_id;

-(id) init;
-(id) init:(NSString*)id_ reason:(NSString*)reason;
+(id) serverStartException;
+(id) serverStartException:(NSString*)id_ reason:(NSString*)reason;
// This class also overrides copyWithZone:
// This class also overrides dealloc
@end

ICEGRID_API @interface ICEGRIDServerStopException : ICEUserException
{
    NSString *id_;
    NSString *reason_;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *id_;
@property(nonatomic, ICE_STRONG_ATTR) NSString *reason_;

-(NSString *) ice_id;

-(id) init;
-(id) init:(NSString*)id_ reason:(NSString*)reason;
+(id) serverStopException;
+(id) serverStopException:(NSString*)id_ reason:(NSString*)reason;
// This class also overrides copyWithZone:
// This class also overrides dealloc
@end

ICEGRID_API @interface ICEGRIDAdapterNotExistException : ICEUserException
{
    NSString *id_;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *id_;

-(NSString *) ice_id;

-(id) init;
-(id) init:(NSString*)id_;
+(id) adapterNotExistException;
+(id) adapterNotExistException:(NSString*)id_;
// This class also overrides copyWithZone:
// This class also overrides dealloc
@end

ICEGRID_API @interface ICEGRIDObjectExistsException : ICEUserException
{
    ICEIdentity *id_;
}

@property(nonatomic, ICE_STRONG_ATTR) ICEIdentity *id_;

-(NSString *) ice_id;

-(id) init;
-(id) init:(ICEIdentity*)id_;
+(id) objectExistsException;
+(id) objectExistsException:(ICEIdentity*)id_;
// This class also overrides copyWithZone:
// This class also overrides dealloc
@end

ICEGRID_API @interface ICEGRIDObjectNotRegisteredException : ICEUserException
{
    ICEIdentity *id_;
}

@property(nonatomic, ICE_STRONG_ATTR) ICEIdentity *id_;

-(NSString *) ice_id;

-(id) init;
-(id) init:(ICEIdentity*)id_;
+(id) objectNotRegisteredException;
+(id) objectNotRegisteredException:(ICEIdentity*)id_;
// This class also overrides copyWithZone:
// This class also overrides dealloc
@end

ICEGRID_API @interface ICEGRIDNodeNotExistException : ICEUserException
{
    NSString *name_;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *name_;

-(NSString *) ice_id;

-(id) init;
-(id) init:(NSString*)name;
+(id) nodeNotExistException;
+(id) nodeNotExistException:(NSString*)name;
// This class also overrides copyWithZone:
// This class also overrides dealloc
@end

ICEGRID_API @interface ICEGRIDRegistryNotExistException : ICEUserException
{
    NSString *name_;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *name_;

-(NSString *) ice_id;

-(id) init;
-(id) init:(NSString*)name;
+(id) registryNotExistException;
+(id) registryNotExistException:(NSString*)name;
// This class also overrides copyWithZone:
// This class also overrides dealloc
@end

ICEGRID_API @interface ICEGRIDDeploymentException : ICEUserException
{
    NSString *reason_;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *reason_;

-(NSString *) ice_id;

-(id) init;
-(id) init:(NSString*)reason;
+(id) deploymentException;
+(id) deploymentException:(NSString*)reason;
// This class also overrides copyWithZone:
// This class also overrides dealloc
@end

ICEGRID_API @interface ICEGRIDNodeUnreachableException : ICEUserException
{
    NSString *name_;
    NSString *reason_;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *name_;
@property(nonatomic, ICE_STRONG_ATTR) NSString *reason_;

-(NSString *) ice_id;

-(id) init;
-(id) init:(NSString*)name reason:(NSString*)reason;
+(id) nodeUnreachableException;
+(id) nodeUnreachableException:(NSString*)name reason:(NSString*)reason;
// This class also overrides copyWithZone:
// This class also overrides dealloc
@end

ICEGRID_API @interface ICEGRIDServerUnreachableException : ICEUserException
{
    NSString *name_;
    NSString *reason_;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *name_;
@property(nonatomic, ICE_STRONG_ATTR) NSString *reason_;

-(NSString *) ice_id;

-(id) init;
-(id) init:(NSString*)name reason:(NSString*)reason;
+(id) serverUnreachableException;
+(id) serverUnreachableException:(NSString*)name reason:(NSString*)reason;
// This class also overrides copyWithZone:
// This class also overrides dealloc
@end

ICEGRID_API @interface ICEGRIDRegistryUnreachableException : ICEUserException
{
    NSString *name_;
    NSString *reason_;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *name_;
@property(nonatomic, ICE_STRONG_ATTR) NSString *reason_;

-(NSString *) ice_id;

-(id) init;
-(id) init:(NSString*)name reason:(NSString*)reason;
+(id) registryUnreachableException;
+(id) registryUnreachableException:(NSString*)name reason:(NSString*)reason;
// This class also overrides copyWithZone:
// This class also overrides dealloc
@end

ICEGRID_API @interface ICEGRIDBadSignalException : ICEUserException
{
    NSString *reason_;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *reason_;

-(NSString *) ice_id;

-(id) init;
-(id) init:(NSString*)reason;
+(id) badSignalException;
+(id) badSignalException:(NSString*)reason;
// This class also overrides copyWithZone:
// This class also overrides dealloc
@end

ICEGRID_API @interface ICEGRIDPatchException : ICEUserException
{
    ICEStringSeq *reasons;
}

@property(nonatomic, ICE_STRONG_ATTR) ICEStringSeq *reasons;

-(NSString *) ice_id;

-(id) init:(ICEStringSeq*)reasons;
+(id) patchException;
+(id) patchException:(ICEStringSeq*)reasons;
// This class also overrides copyWithZone:
// This class also overrides dealloc
@end

ICEGRID_API @interface ICEGRIDAccessDeniedException : ICEUserException
{
    NSString *lockUserId;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *lockUserId;

-(NSString *) ice_id;

-(id) init;
-(id) init:(NSString*)lockUserId;
+(id) accessDeniedException;
+(id) accessDeniedException:(NSString*)lockUserId;
// This class also overrides copyWithZone:
// This class also overrides dealloc
@end

ICEGRID_API @interface ICEGRIDAllocationException : ICEUserException
{
    NSString *reason_;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *reason_;

-(NSString *) ice_id;

-(id) init;
-(id) init:(NSString*)reason;
+(id) allocationException;
+(id) allocationException:(NSString*)reason;
// This class also overrides copyWithZone:
// This class also overrides dealloc
@end

ICEGRID_API @interface ICEGRIDAllocationTimeoutException : ICEGRIDAllocationException
-(NSString *) ice_id;
+(id) allocationTimeoutException;
+(id) allocationTimeoutException:(NSString*)reason;
// This class also overrides copyWithZone:
@end

ICEGRID_API @interface ICEGRIDPermissionDeniedException : ICEUserException
{
    NSString *reason_;
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

ICEGRID_API @interface ICEGRIDObserverAlreadyRegisteredException : ICEUserException
{
    ICEIdentity *id_;
}

@property(nonatomic, ICE_STRONG_ATTR) ICEIdentity *id_;

-(NSString *) ice_id;

-(id) init;
-(id) init:(ICEIdentity*)id_;
+(id) observerAlreadyRegisteredException;
+(id) observerAlreadyRegisteredException:(ICEIdentity*)id_;
// This class also overrides copyWithZone:
// This class also overrides dealloc
@end

ICEGRID_API @interface ICEGRIDFileNotAvailableException : ICEUserException
{
    NSString *reason_;
}

@property(nonatomic, ICE_STRONG_ATTR) NSString *reason_;

-(NSString *) ice_id;

-(id) init;
-(id) init:(NSString*)reason;
+(id) fileNotAvailableException;
+(id) fileNotAvailableException:(NSString*)reason;
// This class also overrides copyWithZone:
// This class also overrides dealloc
@end
