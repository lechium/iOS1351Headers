/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:24 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, CLSEndpointConnection;

@interface CLSUtilityService : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	CLSEndpointConnection* _endpointConnection;

}

@property (nonatomic,retain) CLSEndpointConnection * endpointConnection;              //@synthesize endpointConnection=_endpointConnection - In the implementation block
+(id)sharedInstance;
+(Class)endpointClass;
-(id)initWithEndpoint:(id)arg1 ;
-(CLSEndpointConnection *)endpointConnection;
-(id)utilityServer:(/*^block*/id)arg1 ;
-(void)syncFetchWithCompletion:(/*^block*/id)arg1 ;
-(void)setEndpointConnection:(CLSEndpointConnection *)arg1 ;
-(void)databasePathWithCompletion:(/*^block*/id)arg1 ;
-(void)recreateDatabaseWithCompletion:(/*^block*/id)arg1 ;
-(void)recreateDatabase:(BOOL)arg1 andTerminateDaemonWithCompletion:(/*^block*/id)arg2 ;
-(void)recreateDevelopmentDatabaseWithCompletion:(/*^block*/id)arg1 ;
-(void)getDevModeWithCompletion:(/*^block*/id)arg1 ;
-(void)setDevMode:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)syncStatsWithCompletion:(/*^block*/id)arg1 ;
-(void)syncPushWithCompletion:(/*^block*/id)arg1 ;
-(void)statusWithCompletion:(/*^block*/id)arg1 ;
-(void)addAuthorizationStatus:(unsigned long long)arg1 forContextAtPath:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeAuthorizationStatus:(unsigned long long)arg1 forContextAtPath:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)authorizationStatusForContextAtPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)userDefaultsConfigurationDictionaryWithCompletion:(/*^block*/id)arg1 ;
-(void)getUserDefaultForDefaultNamed:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setUserDefaultValue:(id)arg1 forDefaultNamed:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

