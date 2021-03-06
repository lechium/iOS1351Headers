/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:45 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@class SBDeviceApplicationSceneHandle, NSMutableDictionary, UIView, SBSceneViewAppIconView, SBApplicationBlurSnapshotGenerationContainerView;

@interface SBApplicationBlurContentView : UIView {

	SBDeviceApplicationSceneHandle* _sceneHandle;
	unsigned long long _state;
	NSMutableDictionary* _mapStateToCompletionBlocks;
	CGSize _targetViewOriginalSize;
	UIView* _targetViewToBlur;
	UIView* _unblurredRealSnapshotView;
	UIView* _unblurredCopySnapshotView;
	UIView* _liveBlurView;
	SBSceneViewAppIconView* _iconView;
	UIView* _blurredSnapshotView;
	SBApplicationBlurSnapshotGenerationContainerView* _snapshotGenerationContainerView;
	UIView* _blurView;

}

@property (nonatomic,readonly) SBSceneViewAppIconView * iconView;              //@synthesize iconView=_iconView - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)_setState:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(SBSceneViewAppIconView *)iconView;
-(id)initWithFrame:(CGRect)arg1 deviceApplicationSceneHandle:(id)arg2 targetViewToBlur:(id)arg3 ;
-(void)generateBlurredSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(void)generateAndAnimateToBlurredSnapshotWithAnimationFactory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)animateToBlurredSnapshotWithFactory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_iconViewForApplication;
-(void)_fireCompletionBlocksForState:(unsigned long long)arg1 ;
-(void)_addCompletionBlock:(/*^block*/id)arg1 forState:(unsigned long long)arg2 ;
-(void)_doBlurGenerationWithCompletion:(/*^block*/id)arg1 ;
-(void)_doAnimationToBlurredSnapshotWithFactory:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

