/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:16 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIRepeatingPressGestureRecognizer.h>

@class UIView, UIScrollView;

@interface UIScrollViewDirectionalPressGestureRecognizer : _UIRepeatingPressGestureRecognizer {

	BOOL _hasBeenModified;
	UIView* _originalView;
	UIScrollView* _scrollView;
	long long _activePressType;

}

@property (assign,nonatomic,__weak) UIScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) long long activePressType;                   //@synthesize activePressType=_activePressType - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(void)reset;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setAllowedTouchTypes:(id)arg1 ;
-(void)setAllowedPressTypes:(id)arg1 ;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(BOOL)_shouldReceivePress:(id)arg1 ;
-(long long)activePressType;
-(void)_setEnabledIfAllowed:(BOOL)arg1 ;
-(void)_addToViewIfAllowed:(id)arg1 ;
-(void)_resetToOriginalViewIfAllowed;
@end

