/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:44 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PairedUnlock.framework/PairedUnlock
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, PUConnectionDelegate;
@class NSXPCConnection, NSObject, PUConnectionUnlockClient;

@interface PUConnection : NSObject {

	NSXPCConnection* _serverConnection;
	NSObject*<OS_dispatch_queue> _serverConnectionQueue;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	PUConnectionUnlockClient* _unlockClient;
	id<PUConnectionDelegate> _delegate;
	/*^block*/id _remoteDeviceRemoveLockoutHandler;

}

@property (nonatomic,copy) id remoteDeviceRemoveLockoutHandler;              //@synthesize remoteDeviceRemoveLockoutHandler=_remoteDeviceRemoveLockoutHandler - In the implementation block
@property (__weak) id<PUConnectionDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
+(id)serverInterface;
+(id)clientInterface;
+(void)syncPasscodeState;
-(id)init;
-(void)dealloc;
-(id<PUConnectionDelegate>)delegate;
-(void)setDelegate:(id<PUConnectionDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(id)serverConnection;
-(void)setServerConnection:(id)arg1 ;
-(const char*)queueNameWithSuffix:(id)arg1 ;
-(void)pairForUnlockWithPasscode:(id)arg1 ;
-(void)unpairForUnlock;
-(void)enableOnlyRemoteUnlockWithPasscode:(id)arg1 ;
-(void)disableOnlyRemoteUnlock;
-(void)requestRemoteDeviceRemoteAction:(long long)arg1 type:(long long)arg2 ;
-(void)requestRemoteDeviceUnlockNotification;
-(void)queryRemoteDeviceState:(/*^block*/id)arg1 ;
-(void)requestDeviceSetWristDetectionDisabled:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)didPairForUnlock:(BOOL)arg1 error:(id)arg2 ;
-(void)didUnpairForUnlock:(BOOL)arg1 error:(id)arg2 ;
-(void)didEnableOnlyRemoteUnlock:(BOOL)arg1 error:(id)arg2 ;
-(void)didDisableOnlyRemoteUnlock:(BOOL)arg1 error:(id)arg2 ;
-(void)remoteDeviceDidCompleteRemoteAction:(BOOL)arg1 remoteDeviceState:(id)arg2 error:(id)arg3 ;
-(void)remoteDeviceDidUnlock;
-(void)remoteDeviceDidRemoveLockout:(BOOL)arg1 error:(id)arg2 ;
-(void)didGetRemoteDeviceState:(id)arg1 error:(id)arg2 ;
-(void)setRemoteDeviceRemoveLockoutHandler:(id)arg1 ;
-(id)delegateIfRespondsToSelector:(SEL)arg1 ;
-(id)remoteDeviceRemoveLockoutHandler;
-(void)requestRemoteDeviceRemoveLockout:(/*^block*/id)arg1 ;
-(void)getRemoteDeviceState:(/*^block*/id)arg1 ;
@end

