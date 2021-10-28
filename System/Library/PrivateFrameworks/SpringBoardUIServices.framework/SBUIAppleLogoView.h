/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:08 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, PUIProgressWindow;

@interface SBUIAppleLogoView : UIView {

	UIView* _layerView;
	PUIProgressWindow* _progressWindow;
	float _progress;

}

@property (assign,nonatomic) float progress;              //@synthesize progress=_progress - In the implementation block
-(float)progress;
-(void)setProgress:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 appearance:(long long)arg2 progressBarVisible:(BOOL)arg3 ;
-(id)initWithFrame:(CGRect)arg1 inverted:(BOOL)arg2 progressBarVisible:(BOOL)arg3 ;
-(id)initWithFrame:(CGRect)arg1 useWhiteLogo:(BOOL)arg2 progressBarVisible:(BOOL)arg3 ;
-(id)initWithFrame:(CGRect)arg1 progressBarVisible:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 inverted:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 useWhiteLogo:(BOOL)arg2 ;
@end
