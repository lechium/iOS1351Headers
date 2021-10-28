/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:45 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ATConnection;

@interface SBModelessSyncController : NSObject {

	BOOL _isAppSyncing;
	BOOL _isSyncing;
	int _syncRegistrationToken;
	int _iCloudRestoreToken;
	BOOL _restoringFromICloud;
	BOOL _isAutoSyncing;
	BOOL _isWirelessSyncing;
	ATConnection* _airTrafficConnection;

}

@property (nonatomic,readonly) BOOL isAppSyncing;                       //@synthesize isAppSyncing=_isAppSyncing - In the implementation block
@property (nonatomic,readonly) BOOL isSyncing;                          //@synthesize isSyncing=_isSyncing - In the implementation block
@property (nonatomic,readonly) BOOL isRestoringFromICloud; 
@property (nonatomic,readonly) BOOL isAutoSyncing;                      //@synthesize isAutoSyncing=_isAutoSyncing - In the implementation block
@property (nonatomic,readonly) BOOL isWirelessSyncing;                  //@synthesize isWirelessSyncing=_isWirelessSyncing - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)beginMonitoring;
-(void)endMonitoring;
-(BOOL)isSyncing;
-(void)connectionWasInterrupted:(id)arg1 ;
-(void)connection:(id)arg1 updatedProgress:(id)arg2 ;
-(void)setIsSyncing:(BOOL)arg1 ;
-(void)gotLowBatteryWarning;
-(BOOL)isWirelessSyncing;
-(BOOL)isAutoSyncing;
-(void)_appSyncStateChanged;
-(void)_beginObservingICloudRestoreStatus;
-(void)_endObservingICloudRestoreStatus;
-(void)_setAppSyncState:(BOOL)arg1 ;
-(void)_updateIconsForStateChange;
-(void)_iCloudStatusChanged;
-(BOOL)isRestoringFromICloud;
-(BOOL)isAppSyncing;
@end
