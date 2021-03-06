/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:18 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GKMultiplayerViewController.h>

@protocol GKMultiplayerP2PViewControllerDelegate;
@class GKInvite;

@interface GKMultiplayerP2PViewController : GKMultiplayerViewController {

	BOOL _hosted;
	id<GKMultiplayerP2PViewControllerDelegate> _delegateWeak;
	long long _mode;
	GKInvite* _acceptedInvite;
	double _inviteeConnectionTimeStamp;

}

@property (assign,nonatomic) long long mode;                                                   //@synthesize mode=_mode - In the implementation block
@property (nonatomic,copy) GKInvite * acceptedInvite;                                          //@synthesize acceptedInvite=_acceptedInvite - In the implementation block
@property (assign,nonatomic) double inviteeConnectionTimeStamp;                                //@synthesize inviteeConnectionTimeStamp=_inviteeConnectionTimeStamp - In the implementation block
@property (assign,getter=isHosted,nonatomic) BOOL hosted;                                      //@synthesize hosted=_hosted - In the implementation block
@property (assign,nonatomic) id<GKMultiplayerP2PViewControllerDelegate> delegate;              //@synthesize delegateWeak=_delegateWeak - In the implementation block
-(void)dealloc;
-(id<GKMultiplayerP2PViewControllerDelegate>)delegate;
-(void)setDelegate:(id<GKMultiplayerP2PViewControllerDelegate>)arg1 ;
-(void)setMode:(long long)arg1 ;
-(void)cancel;
-(long long)mode;
-(void)finishWithError:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)applicationWillEnterForeground;
-(void)setHosted:(BOOL)arg1 ;
-(void)configureDataSource;
-(void)setAutomatchPlayerCount:(long long)arg1 ;
-(BOOL)isHosted;
-(void)cancelAlertWithoutDelegateCallback;
-(void)cancelPendingInvites;
-(BOOL)havePendingPlayers;
-(void)startGame;
-(void)setInviteeConnectionTimeStamp:(double)arg1 ;
-(void)sendStatusUpdate;
-(void)playerConnected:(id)arg1 ;
-(void)playerDisconnected:(id)arg1 ;
-(void)processStatusUpdateMessageFromBytes:(const char*)arg1 withLength:(unsigned)arg2 ;
-(void)playNow;
-(void)showInviterDisconnectedAlert;
-(void)showAutomatchingErrorAlert;
-(BOOL)haveInvitedPlayers;
-(double)inviteeConnectionTimeStamp;
-(void)invitePlayers:(id)arg1 ;
-(GKInvite *)acceptedInvite;
-(id)initWithAcceptedInvite:(id)arg1 ;
-(void)setExistingPlayers:(id)arg1 ;
-(void)setPlayer:(id)arg1 responded:(long long)arg2 ;
-(void)setPlayer:(id)arg1 connected:(BOOL)arg2 ;
-(void)setPlayer:(id)arg1 sentData:(id)arg2 ;
-(void)setInvitesFailedWithError:(id)arg1 ;
-(void)setAutomatchFailedWithError:(id)arg1 ;
-(void)setFailedWithError:(id)arg1 ;
-(void)inviterCancelled;
-(BOOL)canStartForcedAutomatch;
-(void)willPresentPlayerPicker:(id)arg1 ;
-(void)willQueryGKIDs;
-(void)loadShareURLWithCompletion:(/*^block*/id)arg1 ;
-(void)willShare;
-(void)shareFinishedWithContactPlayers:(id)arg1 legacyPlayers:(id)arg2 ;
-(void)removedPlayer:(id)arg1 ;
-(void)setAcceptedInvite:(GKInvite *)arg1 ;
@end

