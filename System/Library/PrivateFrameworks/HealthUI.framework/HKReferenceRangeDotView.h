/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class _HKReferenceRangeDotViewDot, UIColor;

@interface HKReferenceRangeDotView : UIView {

	_HKReferenceRangeDotViewDot* _dotView;

}

@property (nonatomic,retain) UIColor * dotColor; 
@property (assign,nonatomic,__weak) _HKReferenceRangeDotViewDot * dotView;              //@synthesize dotView=_dotView - In the implementation block
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDotView:(_HKReferenceRangeDotViewDot *)arg1 ;
-(_HKReferenceRangeDotViewDot *)dotView;
-(void)setDotColor:(UIColor *)arg1 ;
-(UIColor *)dotColor;
-(CGRect)desiredDotViewFrame;
@end

