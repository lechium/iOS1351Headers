/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:04 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class TVPStateMachine, NSDate, NSTimer;

@interface VUIRentalExpirationMonitor : NSObject {

	TVPStateMachine* _stateMachine;
	NSDate* _dateOfLastRentalExpirationHandling;
	NSTimer* _earliestExpirationTimer;

}

@property (nonatomic,retain) TVPStateMachine * stateMachine;                           //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) NSDate * dateOfLastRentalExpirationHandling;              //@synthesize dateOfLastRentalExpirationHandling=_dateOfLastRentalExpirationHandling - In the implementation block
@property (nonatomic,retain) NSTimer * earliestExpirationTimer;                        //@synthesize earliestExpirationTimer=_earliestExpirationTimer - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)startMonitoring;
-(TVPStateMachine *)stateMachine;
-(void)setStateMachine:(TVPStateMachine *)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)_libraryContentsDidChange:(id)arg1 ;
-(void)_registerStateMachineHandlers;
-(void)_isPlaybackUIBeingShownDidChange:(id)arg1 ;
-(void)setEarliestExpirationTimer:(NSTimer *)arg1 ;
-(NSDate *)dateOfLastRentalExpirationHandling;
-(void)setDateOfLastRentalExpirationHandling:(NSDate *)arg1 ;
-(NSTimer *)earliestExpirationTimer;
-(void)_expirationTimerDidFire:(id)arg1 ;
@end
