/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:17 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPopoverBackgroundView.h>

@interface _UIPopoverSlidingChromeView : UIPopoverBackgroundView
+(double)cornerRadius;
+(UIEdgeInsets)contentViewInsets;
+(double)arrowHeight;
+(double)arrowBase;
-(CGSize)_shadowOffset;
-(void)layoutSubviews;
-(double)_shadowRadius;
-(double)_shadowOpacity;
-(unsigned long long)arrowDirection;
-(UIEdgeInsets)_contentViewInsets;
-(double)arrowOffset;
-(void)setArrowOffset:(double)arg1 ;
-(void)setArrowDirection:(unsigned long long)arg1 ;
-(UIEdgeInsets)_shadowInsets;
-(id)_shadowPathForRect:(CGRect)arg1 arrowDirection:(unsigned long long)arg2 ;
@end
