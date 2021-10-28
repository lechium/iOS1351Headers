/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:00 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface AAUIDeviceLocatorConfirmationUtilities : NSObject
+(void)checkIfWatchHasAppleIDAccount:(/*^block*/id)arg1 ;
+(void)showDisableAlertForAccount:(id)arg1 presentingViewController:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
+(void)showDisableAlertForAccount:(id)arg1 withMessage:(id)arg2 confirmationButtonTitle:(id)arg3 presentingViewController:(id)arg4 completion:(/*^block*/id)arg5 ;
+(void)_performFMIPAuthenticationForAccount:(id)arg1 withMessage:(id)arg2 confirmationButtonTitle:(id)arg3 presentingViewController:(id)arg4 completion:(/*^block*/id)arg5 ;
+(void)_handleFMIPAuthenticationResponse:(id)arg1 withError:(id)arg2 forAccount:(id)arg3 message:(id)arg4 confirmationButtonTitle:(id)arg5 presentingViewController:(id)arg6 completion:(/*^block*/id)arg7 ;
+(id)_titleForError:(id)arg1 account:(id)arg2 ;
+(id)_messageForError:(id)arg1 account:(id)arg2 ;
+(void)showEnableAlertWithCompletion:(/*^block*/id)arg1 ;
+(void)showDisableAlertForAccount:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(void)showDisableAlertForAccount:(id)arg1 withMessage:(id)arg2 confirmationButtonTitle:(id)arg3 completion:(/*^block*/id)arg4 ;
@end
