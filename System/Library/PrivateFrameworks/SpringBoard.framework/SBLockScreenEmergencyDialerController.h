/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SBLockScreenEmergencyCallViewControllerDelegate.h>

@protocol SBLockScreenEmergencyDialerDelegate;
@class SBLockScreenEmergencyCallViewController, UIViewController, NSString;

@interface SBLockScreenEmergencyDialerController : NSObject <SBLockScreenEmergencyCallViewControllerDelegate> {

	SBLockScreenEmergencyCallViewController* _viewController;
	BOOL _active;
	id<SBLockScreenEmergencyDialerDelegate> _delegate;

}

@property (getter=isActive,nonatomic,readonly) BOOL active;                                        //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) UIViewController * viewController;                                  //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic,__weak) id<SBLockScreenEmergencyDialerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SBLockScreenEmergencyDialerDelegate>)delegate;
-(void)setDelegate:(id<SBLockScreenEmergencyDialerDelegate>)arg1 ;
-(BOOL)isActive;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(UIViewController *)viewController;
-(void)deactivate;
-(void)emergencyCallViewController:(id)arg1 didExitWithError:(id)arg2 ;
-(void)dismissEmergencyCallViewController:(id)arg1 ;
@end

