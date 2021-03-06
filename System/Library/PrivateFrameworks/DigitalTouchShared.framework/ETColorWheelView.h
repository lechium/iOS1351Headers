/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DigitalTouchShared/DigitalTouchShared-Structs.h>
#import <DigitalTouchShared/DTSColorWheel.h>

@class ETColorGradientView, UIColor;

@interface ETColorWheelView : DTSColorWheel {

	ETColorGradientView* _gradientView;
	double _originalRotation;
	double _originalPickerRotation;
	BOOL _handlingTouches;
	UIColor* _selectedColor;

}

@property (nonatomic,readonly) UIColor * selectedColor;              //@synthesize selectedColor=_selectedColor - In the implementation block
+(double)colorWheelWidth;
+(double)pickerDiameter;
+(double)pickerWidth;
+(CGColorRef)pickerBorderColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)doneButtonTapped:(id)arg1 ;
-(UIColor *)selectedColor;
-(void)hideColorWheelPickingColor:(BOOL)arg1 ;
-(void)showColorWheelFromPaletteCircle:(id)arg1 rotation:(double)arg2 ;
-(double)pickerDiameter;
-(void)beganTouches:(id)arg1 ;
-(void)finishedTouches;
-(double)colorWheelRadius;
-(double)gradientWidth;
-(id)pickerViewHighlightedColor;
-(void)hideDoneButton;
-(void)addPickerCircleForPaletteCircle:(id)arg1 ;
-(void)showDoneButtonAnimated;
-(BOOL)pickerShouldDismissClockwise;
-(void)hideDoneButtonAnimated;
-(void)animatePickerToOriginalPosition;
-(double)colorWheelDismissalRotation;
@end

