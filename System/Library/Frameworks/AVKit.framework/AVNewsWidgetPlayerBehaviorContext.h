/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:28 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVPlaybackContentTransitioningViewDelegate.h>
#import <AVKit/AVPlayerViewControllerBehaviorContext.h>
#import <AVKit/AVBehaviorContextInternal.h>
#import <AVKit/AVBehaviorContext.h>

@class AVPlayerViewController, AVNewsWidgetPlayerBehavior, AVPlayer, UIView, AVPlaybackContentTransitioningView, NSString;

@interface AVNewsWidgetPlayerBehaviorContext : NSObject <AVPlaybackContentTransitioningViewDelegate, AVPlayerViewControllerBehaviorContext, AVBehaviorContextInternal, AVBehaviorContext> {

	BOOL _startNextContentTransitionButtonEnabled;
	BOOL _startPreviousContentTransitionButtonEnabled;
	AVPlayerViewController* _playerViewController;
	AVNewsWidgetPlayerBehavior* _behavior;
	AVPlayer* _contentTransitioningPlayer;
	UIView* _customContentTransitioningInfoPanel;
	AVPlaybackContentTransitioningView* _contentTransitionView;

}

@property (nonatomic,retain) AVPlayer * contentTransitioningPlayer;                                                                              //@synthesize contentTransitioningPlayer=_contentTransitioningPlayer - In the implementation block
@property (nonatomic,retain) AVPlaybackContentTransitioningView * contentTransitionView;                                                         //@synthesize contentTransitionView=_contentTransitionView - In the implementation block
@property (assign,nonatomic,__weak) AVNewsWidgetPlayerBehavior * behavior;                                                                       //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,readonly) long long activeContentTransitionType; 
@property (getter=isContentTransitionInteractive,nonatomic,readonly) BOOL contentTransitionInteractive; 
@property (nonatomic,readonly) UIView * contentTransitioningOverlayView; 
@property (assign,getter=isStartNextContentTransitionButtonEnabled,nonatomic) BOOL startNextContentTransitionButtonEnabled;                      //@synthesize startNextContentTransitionButtonEnabled=_startNextContentTransitionButtonEnabled - In the implementation block
@property (assign,getter=isStartPreviousContentTransitionButtonEnabled,nonatomic) BOOL startPreviousContentTransitionButtonEnabled;              //@synthesize startPreviousContentTransitionButtonEnabled=_startPreviousContentTransitionButtonEnabled - In the implementation block
@property (nonatomic,retain) UIView * customContentTransitioningInfoPanel;                                                                       //@synthesize customContentTransitioningInfoPanel=_customContentTransitioningInfoPanel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) AVPlayerViewController * playerViewController;                                                             //@synthesize playerViewController=_playerViewController - In the implementation block
-(void)viewDidLoad;
-(AVNewsWidgetPlayerBehavior *)behavior;
-(void)setBehavior:(AVNewsWidgetPlayerBehavior *)arg1 ;
-(AVPlayerViewController *)playerViewController;
-(id)makePlaybackContentContainerWithFrame:(CGRect)arg1 activeContentView:(id)arg2 ;
-(id)initWithAVKitOwner:(id)arg1 ;
-(void)willAddBehavior:(id)arg1 ;
-(void)didAddBehavior:(id)arg1 ;
-(void)willRemoveBehavior:(id)arg1 ;
-(void)didRemoveBehavior:(id)arg1 ;
-(BOOL)contentTransitioningViewShouldBeginDragging:(id)arg1 locationInView:(CGPoint)arg2 ;
-(BOOL)contentTransitioningView:(id)arg1 shouldBeginTransitionWithDirection:(long long)arg2 ;
-(id)contentTransitioningPlayerContentViewForTransition:(id)arg1 ;
-(void)contentTransitioningViewDidChangeTransitionStatus:(id)arg1 oldState:(long long)arg2 oldTransitionDirection:(long long)arg3 oldProgress:(double)arg4 ;
-(void)setVideoGravityForTransitioningContent:(id)arg1 ;
-(void)startContentTransition:(long long)arg1 ;
-(long long)_transitionDirectionForContentTransitionType:(long long)arg1 ;
-(UIView *)contentTransitioningOverlayView;
-(long long)activeContentTransitionType;
-(BOOL)isContentTransitionInteractive;
-(void)setStartNextContentTransitionButtonEnabled:(BOOL)arg1 ;
-(void)setStartPreviousContentTransitionButtonEnabled:(BOOL)arg1 ;
-(void)updateStartLeftRightContentTransitionButtonsEnabled;
-(void)setCustomContentTransitioningInfoPanel:(UIView *)arg1 ;
-(long long)contentTransitionTypeForTransitionDirection:(long long)arg1 ;
-(AVPlayer *)contentTransitioningPlayer;
-(void)setContentTransitioningPlayer:(AVPlayer *)arg1 ;
-(BOOL)isStartNextContentTransitionButtonEnabled;
-(BOOL)isStartPreviousContentTransitionButtonEnabled;
-(UIView *)customContentTransitioningInfoPanel;
-(AVPlaybackContentTransitioningView *)contentTransitionView;
-(void)setContentTransitionView:(AVPlaybackContentTransitioningView *)arg1 ;
@end

