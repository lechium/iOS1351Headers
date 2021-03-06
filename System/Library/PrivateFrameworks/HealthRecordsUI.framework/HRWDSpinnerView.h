/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:23 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class UIActivityIndicatorView, UILabel, NSLayoutConstraint;

@interface HRWDSpinnerView : UIView {

	UIActivityIndicatorView* _spinner;
	UILabel* _label;
	NSLayoutConstraint* _spinnerTopConstraint;

}

@property (getter=isAnimating,nonatomic,readonly) BOOL animating; 
-(id)init;
-(void)updateConstraints;
-(BOOL)isAnimating;
-(void)stopSpinner;
-(void)_setupSubviews;
-(void)setMessageWhileSpinning:(id)arg1 ;
-(void)setMessageFont:(id)arg1 ;
-(void)startSpinner;
@end

