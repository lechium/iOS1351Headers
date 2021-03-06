/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:06 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/_HKXPCExportable.h>
#import <libobjc.A.dylib/HKCloudSyncObserverClientInterface.h>

@protocol HKCloudSyncObserverDelegate;
@class NSUUID, HKHealthStore, HKTaskServerProxyProvider, NSProgress, HKCloudSyncObserverStatus, NSString;

@interface HKCloudSyncObserver : NSObject <_HKXPCExportable, HKCloudSyncObserverClientInterface> {

	NSUUID* _identifier;
	HKHealthStore* _healthStore;
	HKTaskServerProxyProvider* _proxyProvider;
	BOOL _observingSyncStatus;
	NSProgress* _progress;
	HKCloudSyncObserverStatus* _status;
	id<HKCloudSyncObserverDelegate> _delegate;
	os_unfair_lock_s _lock;

}

@property (assign,nonatomic,__weak) id<HKCloudSyncObserverDelegate> delegate; 
@property (nonatomic,copy,readonly) HKCloudSyncObserverStatus * status; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serverInterface;
+(id)clientInterface;
-(id<HKCloudSyncObserverDelegate>)delegate;
-(void)setDelegate:(id<HKCloudSyncObserverDelegate>)arg1 ;
-(id)progress;
-(HKCloudSyncObserverStatus *)status;
-(id)exportedInterface;
-(void)setStatus:(HKCloudSyncObserverStatus *)arg1 ;
-(void)setProgress:(id)arg1 ;
-(void)connectionInvalidated;
-(id)remoteInterface;
-(void)setObservingSyncStatus:(BOOL)arg1 ;
-(void)didCompleteSyncWithStatus:(long long)arg1 error:(id)arg2 ;
-(BOOL)isObservingSyncStatus;
-(void)clientRemote_syncDidStart;
-(void)clientRemote_didUpdateObserverWithSyncStatus:(id)arg1 ;
-(id)initWithHealthStore:(id)arg1 delegate:(id)arg2 ;
-(void)startObservingSyncStatus;
-(void)startSyncIfRestoreNotCompleted;
@end

