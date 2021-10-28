/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:08 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/SBUIEmergencyCallHostInterface.h>

@class _UIBackdropView, UIColor;

@interface SBUIEmergencyCallHostViewController : _UIRemoteViewController <SBUIEmergencyCallHostInterface> {

	_UIBackdropView* _blurView;
	UIColor* _tintColor;
	long long _backgroundStyle;
	double _blurRadius;
	BOOL _blursSelf;

}

@property (assign,nonatomic) long long backgroundStyle;              //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                    //@synthesize tintColor=_tintColor - In the implementation block
@property (assign,nonatomic) double blurRadius;                      //@synthesize blurRadius=_blurRadius - In the implementation block
@property (assign,nonatomic) BOOL blursSelf;                         //@synthesize blursSelf=_blursSelf - In the implementation block
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(void)requestEmergencyCallControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)dismiss;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setBlurRadius:(double)arg1 ;
-(double)blurRadius;
-(void)setBackgroundStyle:(long long)arg1 ;
-(long long)backgroundStyle;
-(id)tintColorForBackgroundStyle:(long long)arg1 outBlurRadius:(double*)arg2 ;
-(void)setBlursSelf:(BOOL)arg1 ;
-(void)_createAndAddBlurViewIfNecessary;
-(BOOL)blursSelf;
@end
