/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:03 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBUILegibility.h>

@class _UILegibilitySettings, UIView, UIImageView, NSString;

@interface SBFStatusBarLegibilityView : UIView <SBUILegibility> {

	BOOL _forceLegibilityGradientHidden;
	_UILegibilitySettings* _legibilitySettings;
	UIView* _statusBarGradientView;
	UIView* _overallGradientView;
	UIImageView* _leftCornerView;
	UIImageView* _rightCornerView;

}

@property (nonatomic,retain) UIView * statusBarGradientView;                          //@synthesize statusBarGradientView=_statusBarGradientView - In the implementation block
@property (nonatomic,retain) UIView * overallGradientView;                            //@synthesize overallGradientView=_overallGradientView - In the implementation block
@property (nonatomic,retain) UIImageView * leftCornerView;                            //@synthesize leftCornerView=_leftCornerView - In the implementation block
@property (nonatomic,retain) UIImageView * rightCornerView;                           //@synthesize rightCornerView=_rightCornerView - In the implementation block
@property (assign,nonatomic) BOOL forceLegibilityGradientHidden;                      //@synthesize forceLegibilityGradientHidden=_forceLegibilityGradientHidden - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings; 
@property (assign,nonatomic) double strength; 
+(id)statusBarGradientView;
+(id)overallGradientView;
+(id)gradientViewWithOpacities:(const double*)arg1 locations:(id)arg2 ;
-(void)layoutSubviews;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setStrength:(double)arg1 ;
-(double)strength;
-(void)_configureWithLegibilitySettings:(id)arg1 forceLegibilityGradientHidden:(BOOL)arg2 ;
-(UIImageView *)leftCornerView;
-(UIImageView *)rightCornerView;
-(void)_configureAsPad;
-(UIView *)statusBarGradientView;
-(void)_configureAsPhone;
-(void)setStatusBarGradientView:(UIView *)arg1 ;
-(UIView *)overallGradientView;
-(void)setOverallGradientView:(UIView *)arg1 ;
-(void)setLeftCornerView:(UIImageView *)arg1 ;
-(void)setRightCornerView:(UIImageView *)arg1 ;
-(void)setForceLegibilityGradientHidden:(BOOL)arg1 ;
-(BOOL)forceLegibilityGradientHidden;
@end
