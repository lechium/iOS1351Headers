/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:08 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ControlCenterUIKit/ControlCenterUIKit-Structs.h>
#import <ControlCenterUIKit/CCUIBaseSliderView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIView, UIPanGestureRecognizer, _UIEdgeFeedbackGenerator, NSString;

@interface CCUIContinuousSliderView : CCUIBaseSliderView <UIGestureRecognizerDelegate> {

	UIView* _valueIndicatorClippingView;
	UIView* _backgroundView;
	double _startingLength;
	float _startingValue;
	BOOL _gestureStartedInside;
	UIPanGestureRecognizer* _valueChangeGestureRecognizer;
	_UIEdgeFeedbackGenerator* _edgeFeedbackGenerator;
	double _continuousSliderCornerRadius;
	unsigned long long _axis;

}

@property (assign,nonatomic) double continuousSliderCornerRadius;                //@synthesize continuousSliderCornerRadius=_continuousSliderCornerRadius - In the implementation block
@property (assign,nonatomic) unsigned long long axis;                            //@synthesize axis=_axis - In the implementation block
@property (nonatomic,readonly) UIView * valueIndicatorClippingView;              //@synthesize valueIndicatorClippingView=_valueIndicatorClippingView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)axis;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setAxis:(unsigned long long)arg1 ;
-(void)_handleValueChangeGestureRecognizer:(id)arg1 ;
-(double)sliderLengthForValue:(float)arg1 ;
-(float)filteredValueForValue:(float)arg1 ;
-(float)_valueForTouchTranslation:(CGPoint)arg1 ;
-(void)_beginTrackingWithGestureRecognizer:(id)arg1 ;
-(void)_continueTrackingWithGestureRecognizer:(id)arg1 ;
-(void)_endTrackingWithGestureRecognizer:(id)arg1 ;
-(void)_updateValueForPanGestureRecognizer:(id)arg1 forContinuedGesture:(BOOL)arg2 ;
-(void)setContinuousSliderCornerRadius:(double)arg1 ;
-(CGPoint)glyphCenter;
-(id)topLevelBlockingGestureRecognizers;
-(double)continuousSliderCornerRadius;
-(UIView *)valueIndicatorClippingView;
@end

