/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:44 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBHomeGestureParticipantDelegate.h>

@class SBHomeGestureParticipant, SBBarSwipeAffordanceView;

@interface SBBarSwipeAffordanceViewController : UIViewController <SBHomeGestureParticipantDelegate> {

	long long _homeGestureParticipantIdentifier;
	SBHomeGestureParticipant* _homeGestureParticipant;
	BOOL _wantsToBeActiveAffordance;
	BOOL _suppressAffordance;

}

@property (nonatomic,retain) SBBarSwipeAffordanceView * view; 
@property (assign,nonatomic) BOOL wantsToBeActiveAffordance;               //@synthesize wantsToBeActiveAffordance=_wantsToBeActiveAffordance - In the implementation block
@property (assign,nonatomic) BOOL suppressAffordance;                      //@synthesize suppressAffordance=_suppressAffordance - In the implementation block
-(void)loadView;
-(BOOL)_canShowWhileLocked;
-(void)_updateActiveState;
-(void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1 ;
-(void)_beginTryingToBecomeActiveAffordance;
-(void)_stopTryingToBecomeActiveAffordance;
-(BOOL)suppressAffordance;
-(id)initWithHomeGestureParticipantIdentifier:(long long)arg1 ;
-(void)setWantsToBeActiveAffordance:(BOOL)arg1 ;
-(void)setSuppressAffordance:(BOOL)arg1 ;
-(BOOL)wantsToBeActiveAffordance;
@end

