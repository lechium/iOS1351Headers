/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:45 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WPPairingDelegate <NSObject>
@optional
-(void)pairingStartedScanning:(id)arg1;
-(void)pairingStoppedScanning:(id)arg1;
-(void)pairing:(id)arg1 failedToStartScanningWithError:(id)arg2;
-(void)pairing:(id)arg1 foundDevice:(id)arg2 payload:(id)arg3 rssi:(id)arg4 peerInfo:(id)arg5;
-(BOOL)pairing:(id)arg1 foundDevice:(id)arg2 payload:(id)arg3 rssi:(id)arg4;

@required
-(void)pairingDidUpdateState:(id)arg1;

@end
