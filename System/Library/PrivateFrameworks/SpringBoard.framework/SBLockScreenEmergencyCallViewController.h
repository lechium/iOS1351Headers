/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:47 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoardUIServices/SBUIEmergencyCallHostViewController.h>

@protocol SBLockScreenEmergencyCallViewControllerDelegate;
@interface SBLockScreenEmergencyCallViewController : SBUIEmergencyCallHostViewController {

	id<SBLockScreenEmergencyCallViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBLockScreenEmergencyCallViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SBLockScreenEmergencyCallViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SBLockScreenEmergencyCallViewControllerDelegate>)arg1 ;
-(void)dismiss;
-(BOOL)_canShowWhileLocked;
-(void)setBackgroundStyle:(long long)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(id)tintColorForBackgroundStyle:(long long)arg1 outBlurRadius:(double*)arg2 ;
-(long long)_wallpaperStyleFromUIBackgroundStyle:(long long)arg1 ;
@end
