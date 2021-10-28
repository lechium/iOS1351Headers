/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:22 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BoardServices/BoardServices-Structs.h>
#import <libobjc.A.dylib/RBSServiceDelegate.h>

@class BSServicesConfiguration, NSDictionary, NSMutableDictionary, NSMapTable, RBSService, NSString;

@interface BSServiceManager : NSObject <RBSServiceDelegate> {

	BSServicesConfiguration* _configuration;
	NSDictionary* _identifierToDomain;
	os_unfair_lock_s _lock;
	NSMutableDictionary* _lock_endpointToOutgoingRootConnections;
	NSMutableDictionary* _lock_inheritanceToEndpoint;
	NSMapTable* _lock_endpointToInheritances;
	NSMutableDictionary* _lock_serviceIdentifierToEndpoints;
	NSMutableDictionary* _lock_serviceIdentifierToMonitors;
	os_unfair_lock_s _callOutLock;
	NSMutableDictionary* _callOutLock_serviceIdentifierToEndpointsToEnvironments;
	RBSService* _RBSService;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(NSString *)debugDescription;
-(void)service:(id)arg1 didReceiveInheritances:(id)arg2 ;
-(void)service:(id)arg1 didLoseInheritances:(id)arg2 ;
-(id)_initWithConfiguration:(id)arg1 ;
-(id)newConnectionWithEndpoint:(id)arg1 nonLaunching:(BOOL)arg2 description:(id)arg3 ;
-(id)_lock_rootConnectionWithEndpoint:(id)arg1 nonLaunching:(BOOL)arg2 description:(id)arg3 ;
-(void)_callOutLock_noteEndpointsChangedForServices:(id)arg1 ;
-(id)domainWithIdentifier:(id)arg1 ;
-(void)disableLaunchWhitelist;
-(id)registerMonitor:(id)arg1 ;
-(void)serviceWillTerminateProcess:(id)arg1 ;
@end
