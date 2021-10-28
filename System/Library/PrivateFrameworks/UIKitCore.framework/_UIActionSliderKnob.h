/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:02 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface _UIActionSliderKnob : UIView {

	UIColor* _knobColor;

}

@property (nonatomic,retain) UIColor * knobColor;              //@synthesize knobColor=_knobColor - In the implementation block
-(BOOL)isOpaque;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(UIColor *)knobColor;
-(void)setKnobColor:(UIColor *)arg1 ;
@end
