/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:22 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BoardServices/BoardServices-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class BSProcessHandle, NSMutableDictionary, NSMutableSet, NSString;

@interface BSXPCServiceConnectionPeer : NSObject <BSDescriptionProviding> {

	BSProcessHandle* _processHandle;
	os_unfair_lock_s _lock;
	NSMutableDictionary* _lock_entitlements;
	NSMutableSet* _lock_connections;
	unsigned long long _lock_lastConnectedGenerationCount;

}

@property (nonatomic,retain,readonly) BSProcessHandle * processHandle;              //@synthesize processHandle=_processHandle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)peerOfConnection:(id)arg1 ;
+(void)invalidateConnection:(id)arg1 ;
+(id)_allPeers;
-(id)init;
-(NSString *)description;
-(id)_initWithConnection:(id)arg1 ;
-(BSProcessHandle *)processHandle;
-(BOOL)hasEntitlement:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end

