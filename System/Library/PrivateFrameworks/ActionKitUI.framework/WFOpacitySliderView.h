/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIControl.h>

@class WFOpacitySlider, UILabel;

@interface WFOpacitySliderView : UIControl {

	WFOpacitySlider* _slider;
	UILabel* _opacityLabel;

}

@property (nonatomic,__weak,readonly) WFOpacitySlider * slider;              //@synthesize slider=_slider - In the implementation block
@property (nonatomic,__weak,readonly) UILabel * opacityLabel;                //@synthesize opacityLabel=_opacityLabel - In the implementation block
@property (nonatomic,readonly) double opacity; 
-(id)init;
-(void)reset;
-(double)opacity;
-(void)layoutSubviews;
-(WFOpacitySlider *)slider;
-(UILabel *)opacityLabel;
-(void)didChangeOpacityValue:(id)arg1 ;
@end
