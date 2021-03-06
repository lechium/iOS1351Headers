/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:45 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SBMainWorkspaceTransaction.h>
#import <libobjc.A.dylib/SBTransientOverlayPresentWorkspaceTransactionObserver.h>

@protocol SBInteractiveScreenshotCommitWorkspaceTransactionDelegate;
@class NSTimer, NSUUID, SBTransientOverlayViewController, NSString;

@interface SBInteractiveScreenshotCommitWorkspaceTransaction : SBMainWorkspaceTransaction <SBTransientOverlayPresentWorkspaceTransactionObserver> {

	BOOL _hasBeganPresentation;
	BOOL _hasFinishedPresentation;
	BOOL _hasQueuedPresentationTransaction;
	BOOL _hasRequestedPlaceholderChromeRemoval;
	BOOL _hasWatchdogExpired;
	NSTimer* _watchdogTimeoutTimer;
	BOOL _hasFinishedFlashAnimation;
	BOOL _hasFinishedSettlingAnimation;
	NSUUID* _gestureSessionID;
	SBTransientOverlayViewController* _screenshotMarkupTransientOverlayViewController;
	id<SBInteractiveScreenshotCommitWorkspaceTransactionDelegate> _interactiveScreenshotCommitDelegate;

}

@property (nonatomic,copy,readonly) NSUUID * gestureSessionID;                                                                                      //@synthesize gestureSessionID=_gestureSessionID - In the implementation block
@property (assign,nonatomic) BOOL hasFinishedFlashAnimation;                                                                                        //@synthesize hasFinishedFlashAnimation=_hasFinishedFlashAnimation - In the implementation block
@property (assign,nonatomic) BOOL hasFinishedSettlingAnimation;                                                                                     //@synthesize hasFinishedSettlingAnimation=_hasFinishedSettlingAnimation - In the implementation block
@property (nonatomic,retain) SBTransientOverlayViewController * screenshotMarkupTransientOverlayViewController;                                     //@synthesize screenshotMarkupTransientOverlayViewController=_screenshotMarkupTransientOverlayViewController - In the implementation block
@property (assign,nonatomic,__weak) id<SBInteractiveScreenshotCommitWorkspaceTransactionDelegate> interactiveScreenshotCommitDelegate;              //@synthesize interactiveScreenshotCommitDelegate=_interactiveScreenshotCommitDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_begin;
-(void)_updateState;
-(void)transientOverlayPresentWorkspaceTransactionDidPerformPresentation:(id)arg1 ;
-(void)_handleWatchdogTimeout;
-(id)initWithTransitionRequest:(id)arg1 gestureSessionID:(id)arg2 ;
-(void)setHasFinishedFlashAnimation:(BOOL)arg1 ;
-(void)setHasFinishedSettlingAnimation:(BOOL)arg1 ;
-(void)setScreenshotMarkupTransientOverlayViewController:(SBTransientOverlayViewController *)arg1 ;
-(NSUUID *)gestureSessionID;
-(BOOL)hasFinishedFlashAnimation;
-(BOOL)hasFinishedSettlingAnimation;
-(SBTransientOverlayViewController *)screenshotMarkupTransientOverlayViewController;
-(id<SBInteractiveScreenshotCommitWorkspaceTransactionDelegate>)interactiveScreenshotCommitDelegate;
-(void)setInteractiveScreenshotCommitDelegate:(id<SBInteractiveScreenshotCommitWorkspaceTransactionDelegate>)arg1 ;
@end

