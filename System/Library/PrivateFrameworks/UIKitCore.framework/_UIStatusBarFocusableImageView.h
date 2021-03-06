/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:11 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIStatusBarImageView.h>

@class UIColor;

@interface _UIStatusBarFocusableImageView : _UIStatusBarImageView {

	UIColor* _unfocusedTintColor;
	UIColor* _focusedImageTintColor;

}

@property (nonatomic,retain) UIColor * focusedImageTintColor;              //@synthesize focusedImageTintColor=_focusedImageTintColor - In the implementation block
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(BOOL)isUserInteractionEnabled;
-(void)applyStyleAttributes:(id)arg1 ;
-(UIColor *)focusedImageTintColor;
-(void)setFocusedImageTintColor:(UIColor *)arg1 ;
@end

