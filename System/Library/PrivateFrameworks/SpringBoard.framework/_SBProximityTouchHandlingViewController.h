/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@interface _SBProximityTouchHandlingViewController : UIViewController {

	double _statusBarHeight;

}

@property (assign,nonatomic) id<_SBProximityTouchHandlingDelegate> delegate; 
@property (assign,nonatomic) double statusBarHeight;                                      //@synthesize statusBarHeight=_statusBarHeight - In the implementation block
-(id<_SBProximityTouchHandlingDelegate>)delegate;
-(void)setDelegate:(id<_SBProximityTouchHandlingDelegate>)arg1 ;
-(id)_view;
-(void)loadView;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(double)statusBarHeight;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)setStatusBarHeight:(double)arg1 ;
@end

