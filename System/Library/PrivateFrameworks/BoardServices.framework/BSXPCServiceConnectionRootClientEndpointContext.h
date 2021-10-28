/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:22 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BoardServices/BSXPCServiceConnectionRootContext.h>

@protocol OS_xpc_object;
@class NSObject;

@interface BSXPCServiceConnectionRootClientEndpointContext : BSXPCServiceConnectionRootContext {

	NSObject*<OS_xpc_object> _endpoint;
	BOOL _nonLaunching;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> endpoint;                    //@synthesize endpoint=_endpoint - In the implementation block
@property (getter=isNonLaunching,nonatomic,readonly) BOOL nonLaunching;              //@synthesize nonLaunching=_nonLaunching - In the implementation block
+(id)uniqueClientContextWithEndpoint:(id)arg1 nonLaunching:(BOOL)arg2 description:(id)arg3 ;
-(NSObject*<OS_xpc_object>)endpoint;
-(BOOL)isClient;
-(id)_initWithEndpoint:(id)arg1 nonLaunching:(BOOL)arg2 eDesc:(id)arg3 ;
-(BOOL)isNonLaunching;
@end
