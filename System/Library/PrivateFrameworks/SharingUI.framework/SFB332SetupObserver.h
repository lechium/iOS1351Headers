/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Sharing/SFXPCClient.h>

@protocol SFB332UIProtocol;
@interface SFB332SetupObserver : SFXPCClient {

	id<SFB332UIProtocol> _delegate;

}

@property (assign,nonatomic,__weak) id<SFB332UIProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)invalidate;
-(id<SFB332UIProtocol>)delegate;
-(void)setDelegate:(id<SFB332UIProtocol>)arg1 ;
-(id)exportedInterface;
-(id)remoteObjectInterface;
-(id)machServiceName;
-(void)activate;
-(BOOL)shouldEscapeXpcTryCatch;
-(void)updateDeviceInfoWithName:(id)arg1 batteryLevel:(double)arg2 batteryLevelKnown:(BOOL)arg3 edge:(unsigned long long)arg4 orientation:(unsigned long long)arg5 ;
-(void)showPairingStarted;
-(void)showEnableBluetoothPill;
-(void)showPairingSuccess;
-(void)showPairingFailure;
-(void)showSubsequentPairSuccess;
-(void)showChargingStatus;
-(void)dismissChargingStatus;
-(void)showUnlockPrompt;
-(void)showPairConsentPrompt;
-(void)dismissUnlockPrompt;
-(void)dismissBTPrompt;
-(void)dismissUIAnimated:(BOOL)arg1 ;
-(void)acquireHUDTransaction;
-(void)releaseHUDTransaction;
-(void)enableBluetoothTapped;
-(void)pairTapped;
@end

