/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:58 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIVisualEffectView, UIView, UIColor, UIVisualEffect;

@interface _TVAppNavigationControllerStatusBlur : UIView {

	UIVisualEffectView* _visualEffectView;
	UIView* _dimmingView;

}

@property (nonatomic,retain) UIColor * backgroundTintColor; 
@property (nonatomic,retain) UIVisualEffect * visualEffect; 
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIColor *)backgroundTintColor;
-(void)setBackgroundTintColor:(UIColor *)arg1 ;
-(UIVisualEffect *)visualEffect;
-(void)setVisualEffect:(UIVisualEffect *)arg1 ;
@end

