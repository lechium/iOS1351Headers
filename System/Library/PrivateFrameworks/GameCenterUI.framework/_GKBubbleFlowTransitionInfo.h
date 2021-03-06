/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:18 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol GKBubbleFlowableViewController;
@class UIViewController, GKBubbleSet, GKBubblePathAnimator, _GKBubbleFlowPathTransitionInfo;

@interface _GKBubbleFlowTransitionInfo : NSObject <NSCopying> {

	UIViewController*<GKBubbleFlowableViewController> _toVC;
	UIViewController*<GKBubbleFlowableViewController> _fromVC;
	UIViewController* _toWrapperVC;
	UIViewController* _fromWrapperVC;
	UIViewController* _containingViewController;
	struct {
		unsigned respondsTo_bubbleAnimatorForTransitionFromViewController : 1;
		unsigned respondsTo_bubbleAnimatorForTransitionToViewController : 1;
		unsigned respondsTo_bubbleAnimatorForRotation : 1;
		unsigned respondsTo_finalScreenFrameInViewCoordinatesForBubbleOfType : 1;
		unsigned respondsTo_configureControlForBubble : 1;
		unsigned respondsTo_bubblesUsedForAnyTransition : 1;
		unsigned respondsTo_bubbleFlowAnimateInDuration : 1;
		unsigned respondsTo_bubbleFlowAnimateOutDuration : 1;
		unsigned respondsTo_bubbleFlowSubviewFadeOutDuration : 1;
		unsigned respondsTo_bubbleFlowSubviewFadeOutDelay : 1;
		unsigned respondsTo_bubbleFlowSubviewFadeInDuration : 1;
		unsigned respondsTo_bubbleFlowSubviewFadeInDelay : 1;
		unsigned respondsTo_viewWillAppearAnimated_bubbleFlow : 1;
		unsigned respondsTo_viewDidAppearAnimated_bubbleFlow : 1;
		unsigned respondsTo_viewWillDisappearAnimated_bubbleFlow : 1;
		unsigned respondsTo_viewDidDisappearAnimated_bubbleFlow : 1;
		unsigned respondsTo_viewsToAnimateInWhileAppearingWithBubbleFlow : 1;
		unsigned respondsTo_viewsToAnimateOutWhileDisappearingWithBubbleFlow : 1;
		unsigned respondsTo_willAnimateAppearingWithBubbleFlow : 1;
		unsigned respondsTo_willAnimateDisappearingWithBubbleFlow : 1;
		unsigned respondsTo_willAnimateKeyframesForAppearingWithBubbleFlowFromRelativeStartTime_relativeDuration_absoluteTransitionDuration : 1;
		unsigned respondsTo_willAnimateKeyframesForDisappearingWithBubbleFlowFromRelativeStartTime_relativeDuration_absoluteTransitionDuration : 1;
		unsigned respondsTo_updateBubbleTextImmediatelyForTransitionFromViewController : 1;
		unsigned respondsTo_readyToDisappearWithBubbleFlow : 1;
		unsigned respondsTo_readyToAppearWithBubbleFlow : 1;
		unsigned respondsTo_delayDisappearingWithBubbleFlowUntil : 1;
		unsigned respondsTo_delayAppearingWithBubbleFlowUntil : 1;
	}  _toFlags;
	struct {
		unsigned respondsTo_bubbleAnimatorForTransitionFromViewController : 1;
		unsigned respondsTo_bubbleAnimatorForTransitionToViewController : 1;
		unsigned respondsTo_bubbleAnimatorForRotation : 1;
		unsigned respondsTo_finalScreenFrameInViewCoordinatesForBubbleOfType : 1;
		unsigned respondsTo_configureControlForBubble : 1;
		unsigned respondsTo_bubblesUsedForAnyTransition : 1;
		unsigned respondsTo_bubbleFlowAnimateInDuration : 1;
		unsigned respondsTo_bubbleFlowAnimateOutDuration : 1;
		unsigned respondsTo_bubbleFlowSubviewFadeOutDuration : 1;
		unsigned respondsTo_bubbleFlowSubviewFadeOutDelay : 1;
		unsigned respondsTo_bubbleFlowSubviewFadeInDuration : 1;
		unsigned respondsTo_bubbleFlowSubviewFadeInDelay : 1;
		unsigned respondsTo_viewWillAppearAnimated_bubbleFlow : 1;
		unsigned respondsTo_viewDidAppearAnimated_bubbleFlow : 1;
		unsigned respondsTo_viewWillDisappearAnimated_bubbleFlow : 1;
		unsigned respondsTo_viewDidDisappearAnimated_bubbleFlow : 1;
		unsigned respondsTo_viewsToAnimateInWhileAppearingWithBubbleFlow : 1;
		unsigned respondsTo_viewsToAnimateOutWhileDisappearingWithBubbleFlow : 1;
		unsigned respondsTo_willAnimateAppearingWithBubbleFlow : 1;
		unsigned respondsTo_willAnimateDisappearingWithBubbleFlow : 1;
		unsigned respondsTo_willAnimateKeyframesForAppearingWithBubbleFlowFromRelativeStartTime_relativeDuration_absoluteTransitionDuration : 1;
		unsigned respondsTo_willAnimateKeyframesForDisappearingWithBubbleFlowFromRelativeStartTime_relativeDuration_absoluteTransitionDuration : 1;
		unsigned respondsTo_updateBubbleTextImmediatelyForTransitionFromViewController : 1;
		unsigned respondsTo_readyToDisappearWithBubbleFlow : 1;
		unsigned respondsTo_readyToAppearWithBubbleFlow : 1;
		unsigned respondsTo_delayDisappearingWithBubbleFlowUntil : 1;
		unsigned respondsTo_delayAppearingWithBubbleFlowUntil : 1;
	}  _fromFlags;
	GKBubbleSet* _fromBubbles;
	GKBubbleSet* _toBubbles;
	long long _toFocusBubbleType;
	long long _fromFocusBubbleType;
	long long _transitionType;
	long long _transitionPhase;
	double _startTime;
	double _duration;
	double _fadeOutDuration;
	double _crossfadeDuration;
	double _fadeInDuration;
	double _relativeDuration;
	double _relativeStartTime;
	double _relativeFadeOutDuration;
	double _relativeCrossfadeDuration;
	double _relativeFadeInDuration;
	GKBubblePathAnimator* _toPathAnimator;
	GKBubblePathAnimator* _fromPathAnimator;
	GKBubblePathAnimator* _onlyPathAnimator;
	_GKBubbleFlowPathTransitionInfo* _toPathTransitionInfo;
	_GKBubbleFlowPathTransitionInfo* _fromPathTransitionInfo;
	_GKBubbleFlowPathTransitionInfo* _onlyPathTransitionInfo;
	BOOL _fadedOutRealFromView;
	BOOL _disableInteractionDuringTransition;

}

@property (nonatomic,retain) UIViewController*<GKBubbleFlowableViewController> toVC;                //@synthesize toVC=_toVC - In the implementation block
@property (nonatomic,retain) UIViewController*<GKBubbleFlowableViewController> fromVC;              //@synthesize fromVC=_fromVC - In the implementation block
@property (nonatomic,retain) UIViewController * toWrapperVC;                                        //@synthesize toWrapperVC=_toWrapperVC - In the implementation block
@property (nonatomic,retain) UIViewController * fromWrapperVC;                                      //@synthesize fromWrapperVC=_fromWrapperVC - In the implementation block
@property (nonatomic,retain) UIViewController * containingViewController;                           //@synthesize containingViewController=_containingViewController - In the implementation block
@property (assign,nonatomic) SCD_Struct_GK8 toFlags;                                                //@synthesize toFlags=_toFlags - In the implementation block
@property (assign,nonatomic) SCD_Struct_GK8 fromFlags;                                              //@synthesize fromFlags=_fromFlags - In the implementation block
@property (nonatomic,retain) GKBubbleSet * fromBubbles;                                             //@synthesize fromBubbles=_fromBubbles - In the implementation block
@property (nonatomic,retain) GKBubbleSet * toBubbles;                                               //@synthesize toBubbles=_toBubbles - In the implementation block
@property (assign,nonatomic) long long toFocusBubbleType;                                           //@synthesize toFocusBubbleType=_toFocusBubbleType - In the implementation block
@property (assign,nonatomic) long long fromFocusBubbleType;                                         //@synthesize fromFocusBubbleType=_fromFocusBubbleType - In the implementation block
@property (assign,nonatomic) long long transitionType;                                              //@synthesize transitionType=_transitionType - In the implementation block
@property (assign,nonatomic) long long transitionPhase;                                             //@synthesize transitionPhase=_transitionPhase - In the implementation block
@property (assign,nonatomic) double startTime;                                                      //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double duration;                                                       //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double fadeOutDuration;                                                //@synthesize fadeOutDuration=_fadeOutDuration - In the implementation block
@property (assign,nonatomic) double crossfadeDuration;                                              //@synthesize crossfadeDuration=_crossfadeDuration - In the implementation block
@property (assign,nonatomic) double fadeInDuration;                                                 //@synthesize fadeInDuration=_fadeInDuration - In the implementation block
@property (assign,nonatomic) double relativeStartTime;                                              //@synthesize relativeStartTime=_relativeStartTime - In the implementation block
@property (assign,nonatomic) double relativeDuration;                                               //@synthesize relativeDuration=_relativeDuration - In the implementation block
@property (assign,nonatomic) double relativeFadeOutDuration;                                        //@synthesize relativeFadeOutDuration=_relativeFadeOutDuration - In the implementation block
@property (assign,nonatomic) double relativeCrossfadeDuration;                                      //@synthesize relativeCrossfadeDuration=_relativeCrossfadeDuration - In the implementation block
@property (assign,nonatomic) double relativeFadeInDuration;                                         //@synthesize relativeFadeInDuration=_relativeFadeInDuration - In the implementation block
@property (nonatomic,retain) GKBubblePathAnimator * toPathAnimator;                                 //@synthesize toPathAnimator=_toPathAnimator - In the implementation block
@property (nonatomic,retain) GKBubblePathAnimator * fromPathAnimator;                               //@synthesize fromPathAnimator=_fromPathAnimator - In the implementation block
@property (nonatomic,retain) GKBubblePathAnimator * onlyPathAnimator;                               //@synthesize onlyPathAnimator=_onlyPathAnimator - In the implementation block
@property (nonatomic,retain) _GKBubbleFlowPathTransitionInfo * toPathTransitionInfo;                //@synthesize toPathTransitionInfo=_toPathTransitionInfo - In the implementation block
@property (nonatomic,retain) _GKBubbleFlowPathTransitionInfo * fromPathTransitionInfo;              //@synthesize fromPathTransitionInfo=_fromPathTransitionInfo - In the implementation block
@property (nonatomic,retain) _GKBubbleFlowPathTransitionInfo * onlyPathTransitionInfo;              //@synthesize onlyPathTransitionInfo=_onlyPathTransitionInfo - In the implementation block
@property (assign,nonatomic) BOOL fadedOutRealFromView;                                             //@synthesize fadedOutRealFromView=_fadedOutRealFromView - In the implementation block
@property (assign,nonatomic) BOOL disableInteractionDuringTransition;                               //@synthesize disableInteractionDuringTransition=_disableInteractionDuringTransition - In the implementation block
@property (nonatomic,readonly) BOOL animated; 
@property (nonatomic,readonly) UIViewController * realToVC; 
@property (nonatomic,readonly) UIViewController * realFromVC; 
@property (nonatomic,readonly) BOOL hasNonFallbackPathAnimator; 
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(BOOL)animated;
-(void)setFadeInDuration:(double)arg1 ;
-(void)setFadeOutDuration:(double)arg1 ;
-(double)fadeInDuration;
-(double)fadeOutDuration;
-(long long)transitionType;
-(void)setTransitionType:(long long)arg1 ;
-(void)setTransitionPhase:(long long)arg1 ;
-(long long)transitionPhase;
-(void)setToVC:(UIViewController*<GKBubbleFlowableViewController>)arg1 ;
-(void)setFromVC:(UIViewController*<GKBubbleFlowableViewController>)arg1 ;
-(void)setToWrapperVC:(UIViewController *)arg1 ;
-(void)setFromWrapperVC:(UIViewController *)arg1 ;
-(void)setContainingViewController:(UIViewController *)arg1 ;
-(void)setToBubbles:(GKBubbleSet *)arg1 ;
-(void)setFromBubbles:(GKBubbleSet *)arg1 ;
-(void)setToPathAnimator:(GKBubblePathAnimator *)arg1 ;
-(void)setFromPathAnimator:(GKBubblePathAnimator *)arg1 ;
-(void)setOnlyPathAnimator:(GKBubblePathAnimator *)arg1 ;
-(void)setToPathTransitionInfo:(_GKBubbleFlowPathTransitionInfo *)arg1 ;
-(void)setFromPathTransitionInfo:(_GKBubbleFlowPathTransitionInfo *)arg1 ;
-(void)setOnlyPathTransitionInfo:(_GKBubbleFlowPathTransitionInfo *)arg1 ;
-(UIViewController*<GKBubbleFlowableViewController>)toVC;
-(UIViewController *)toWrapperVC;
-(UIViewController*<GKBubbleFlowableViewController>)fromVC;
-(UIViewController *)fromWrapperVC;
-(UIViewController *)containingViewController;
-(double)crossfadeDuration;
-(double)relativeFadeOutDuration;
-(double)relativeCrossfadeDuration;
-(double)relativeFadeInDuration;
-(GKBubblePathAnimator *)toPathAnimator;
-(GKBubblePathAnimator *)fromPathAnimator;
-(GKBubblePathAnimator *)onlyPathAnimator;
-(void)recalculateDurationsAfterAdjustment;
-(UIViewController *)realFromVC;
-(UIViewController *)realToVC;
-(BOOL)hasNonFallbackPathAnimator;
-(void)adjustDuration:(double)arg1 ;
-(id)copyForPhase:(long long)arg1 ;
-(SCD_Struct_GK8)toFlags;
-(void)setToFlags:(SCD_Struct_GK8)arg1 ;
-(SCD_Struct_GK8)fromFlags;
-(void)setFromFlags:(SCD_Struct_GK8)arg1 ;
-(GKBubbleSet *)fromBubbles;
-(GKBubbleSet *)toBubbles;
-(long long)toFocusBubbleType;
-(void)setToFocusBubbleType:(long long)arg1 ;
-(long long)fromFocusBubbleType;
-(void)setFromFocusBubbleType:(long long)arg1 ;
-(void)setCrossfadeDuration:(double)arg1 ;
-(double)relativeStartTime;
-(void)setRelativeStartTime:(double)arg1 ;
-(double)relativeDuration;
-(void)setRelativeDuration:(double)arg1 ;
-(void)setRelativeFadeOutDuration:(double)arg1 ;
-(void)setRelativeCrossfadeDuration:(double)arg1 ;
-(void)setRelativeFadeInDuration:(double)arg1 ;
-(_GKBubbleFlowPathTransitionInfo *)toPathTransitionInfo;
-(_GKBubbleFlowPathTransitionInfo *)fromPathTransitionInfo;
-(_GKBubbleFlowPathTransitionInfo *)onlyPathTransitionInfo;
-(BOOL)fadedOutRealFromView;
-(void)setFadedOutRealFromView:(BOOL)arg1 ;
-(BOOL)disableInteractionDuringTransition;
-(void)setDisableInteractionDuringTransition:(BOOL)arg1 ;
@end

