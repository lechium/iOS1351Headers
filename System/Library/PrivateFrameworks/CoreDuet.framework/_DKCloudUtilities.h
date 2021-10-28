/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:22 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, _DKThrottledActivity;

@interface _DKCloudUtilities : NSObject {

	NSObject*<OS_dispatch_queue> _fetchQueue;
	_DKThrottledActivity* _activityThrottler;
	BOOL _supportsDeviceToDeviceEncryption;
	BOOL _isSingleDevice;

}

@property (nonatomic,readonly) BOOL isSingleDevice; 
@property (nonatomic,readonly) BOOL isCloudSyncAvailable; 
@property (nonatomic,readonly) BOOL isSiriCloudSyncEnabled; 
@property (nonatomic,readonly) BOOL supportsDeviceToDeviceEncryption; 
+(id)sharedInstance;
+(BOOL)isUnitTesting;
+(BOOL)isCloudKitEnabled;
+(BOOL)isSyncAvailableAndEnabled;
+(BOOL)isSyncAvailableAndEnabledWithVerboseLogging:(BOOL)arg1 ;
+(id)containerIdentifier;
+(void)setCloudKitEnabled:(BOOL)arg1 ;
+(void)setUnitTesting:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isSingleDevice;
-(id)keyValueStore;
-(void)deleteRemoteStateWithReply:(/*^block*/id)arg1 ;
-(BOOL)isCloudSyncAvailable;
-(BOOL)isSiriCloudSyncEnabled;
-(void)_accountDidChange:(id)arg1 ;
-(void)_fetchCloudKitConfigurationAndStatus;
-(void)_updateNumberOfSyncedDevicesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_fetchAccountInfoWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_updateAccountInfo:(id)arg1 error:(id)arg2 ;
-(BOOL)supportsDeviceToDeviceEncryption;
-(void)_performUpdateNumberOfSyncedDevicesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_performUpdateNumberOfSyncedDevicesWithAttempt:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)containerKeyValueStore;
-(void)setCloudSyncAvailable:(BOOL)arg1 ;
@end
