/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:54 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CompanionHealthDaemon.framework/CompanionHealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDNanoSyncManagerObserver.h>

@protocol OS_dispatch_queue;
@class HDProfile, ASDSystemAppRequest, NSObject, NSString;

@interface CHActivityApplicationInstallationManager : NSObject <HDHealthDaemonReadyObserver, HDNanoSyncManagerObserver> {

	HDProfile* _profile;
	BOOL _installationRequestInProgress;
	ASDSystemAppRequest* _systemAppRequest;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithProfile:(id)arg1 ;
-(void)daemonReady:(id)arg1 ;
-(void)_applicationsInstalled:(id)arg1 ;
-(void)_applicationsUninstalled:(id)arg1 ;
-(void)_setAndNotifyStickersAvailable:(BOOL)arg1 ;
-(void)_requestActivityAppInstallIfNecessaryWithPairedDeviceSnapshot:(id)arg1 ;
-(void)_queue_requestActivityAppInstallIfNecessaryWithPairedDeviceSnapshot:(id)arg1 ;
-(void)_queue_startInstalling;
-(void)_cleanupInstallRequest;
-(void)_queue_cleanupInstallRequest;
-(void)nanoSyncManager:(id)arg1 pairedDevicesChanged:(id)arg2 ;
@end

