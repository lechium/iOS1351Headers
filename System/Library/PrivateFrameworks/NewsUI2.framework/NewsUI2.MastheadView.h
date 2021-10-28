/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:04 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsUI2/NewsUI2-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/TUGutterViewBoundsObserver.h>
#import <libobjc.A.dylib/TUMotionManagerObserver.h>

@interface NewsUI2.MastheadView : UIView <TUGutterViewBoundsObserver, TUMotionManagerObserver> {

	 leftContentView;
	 rightContentView;
	 titleLabel;
	 titleMaskLabel;
	 titleShineView;
	 iconImageView;
	 lineView;
	 sauceView;

}

@property (assign,nonatomic) CGRect accessibilityFrame; 
@property (readonly,nonatomic) BOOL canBecomeFocused; 
-(void)gutterViewBoundsDidChange;
-(CGRect)accessibilityFrame;
-(void)setAccessibilityFrame:(CGRect)arg1 ;
-(void)motionManager:(id)arg1 didUpdateMotionData:(id)arg2 ;
-(void)motionManager:(id)arg1 motionEnabled:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)canBecomeFocused;
-(void)layoutSubviews;
-(void)willMoveToWindow:(id)arg1 ;
@end
