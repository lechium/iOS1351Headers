/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:06 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, UIKeyboardDicationBackgroundGradientView;

@interface UIKeyboardDicationBackground : UIView {

	NSArray* _shadows;
	UIKeyboardDicationBackgroundGradientView* _gradient;

}

@property (nonatomic,retain) UIKeyboardDicationBackgroundGradientView * gradient;              //@synthesize gradient=_gradient - In the implementation block
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setGradient:(UIKeyboardDicationBackgroundGradientView *)arg1 ;
-(UIKeyboardDicationBackgroundGradientView *)gradient;
-(id)shadows;
@end
