/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:51 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol RMSControlSessionDelegate <NSObject>
@required
-(void)controlSession:(id)arg1 didReceivePairingChallengeRequestWithCredentials:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)controlSession:(id)arg1 didUpdateNowPlayingInfo:(id)arg2;
-(void)controlSession:(id)arg1 artworkDataDidBecomeAvailable:(id)arg2 identifier:(id)arg3;
-(void)controlSession:(id)arg1 didUpdateAudioRoutes:(id)arg2;
-(void)controlSession:(id)arg1 didUpdateVolume:(float)arg2;
-(void)controlSessionDidBeginEditingText:(id)arg1;
-(void)controlSessionDidEndEditingText:(id)arg1;
-(void)controlSessionDidEnd:(id)arg1;

@end
