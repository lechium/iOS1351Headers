/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:30 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPComponentView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@protocol LPTextStyleable;
@class LPCaptionBarStyle, LPCaptionBarPresentationProperties, LPComponentView, LPPlayButtonView, LPCaptionBarAccessoryView, LPVerticalTextStackView, LPInlineMediaPlaybackInformation, NSString;

@interface LPCaptionBarView : LPComponentView <CAAnimationDelegate> {

	LPCaptionBarStyle* _style;
	LPCaptionBarPresentationProperties* _presentationProperties;
	LPComponentView* _leftIconView;
	LPComponentView* _rightIconView;
	LPPlayButtonView* _playButton;
	LPCaptionBarAccessoryView* _leftAccessoryView;
	LPCaptionBarAccessoryView* _rightAccessoryView;
	LPComponentView*<LPTextStyleable> _aboveTopCaptionView;
	LPComponentView*<LPTextStyleable> _topCaptionView;
	LPComponentView*<LPTextStyleable> _bottomCaptionView;
	LPComponentView*<LPTextStyleable> _belowBottomCaptionView;
	LPVerticalTextStackView* _textStackView;
	LPInlineMediaPlaybackInformation* _inlinePlaybackInformation;
	BOOL _hasEverBuilt;
	BOOL _useProgressSpinner;
	UIEdgeInsets _textSafeAreaInset;

}

@property (assign,nonatomic) BOOL useProgressSpinner;                     //@synthesize useProgressSpinner=_useProgressSpinner - In the implementation block
@property (assign,nonatomic) UIEdgeInsets textSafeAreaInset;              //@synthesize textSafeAreaInset=_textSafeAreaInset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)layoutComponentView;
-(void)animateOut;
-(void)animateInWithBaseAnimation:(id)arg1 currentTime:(double)arg2 ;
-(id)initWithStyle:(id)arg1 presentationProperties:(id)arg2 ;
-(void)setUseProgressSpinner:(BOOL)arg1 ;
-(void)setPlaybackInformation:(id)arg1 ;
-(void)setTextSafeAreaInset:(UIEdgeInsets)arg1 ;
-(void)_buildViewsForCaptionBarIfNeeded;
-(CGSize)_layoutCaptionBarForSize:(CGSize)arg1 applyingLayout:(BOOL)arg2 ;
-(BOOL)useProgressSpinner;
-(UIEdgeInsets)textSafeAreaInset;
@end

