/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:10 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, AVAudioSession;

@interface AXMAudioSession : NSObject {

	NSMutableArray* _notificationObserverTokens;
	AVAudioSession* _session;

}

@property (nonatomic,retain) NSMutableArray * notificationObserverTokens;              //@synthesize notificationObserverTokens=_notificationObserverTokens - In the implementation block
@property (nonatomic,retain) AVAudioSession * session;                                 //@synthesize session=_session - In the implementation block
-(id)init;
-(void)dealloc;
-(AVAudioSession *)session;
-(void)setSession:(AVAudioSession *)arg1 ;
-(void)setNotificationObserverTokens:(NSMutableArray *)arg1 ;
-(NSMutableArray *)notificationObserverTokens;
-(void)_handleSessionInterrupted:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(void)_handleRouteChanged:(unsigned long long)arg1 previousRoute:(id)arg2 ;
-(void)_handleMediaServicesLost;
-(void)_handleMediaServicesReset;
-(void)_handleSilenceSecondaryAudio:(unsigned long long)arg1 ;
-(id)_stringForRouteChangeReason:(unsigned long long)arg1 ;
-(BOOL)deactivateSessionWithError:(id*)arg1 ;
-(BOOL)activateSessionWithError:(id*)arg1 ;
@end

