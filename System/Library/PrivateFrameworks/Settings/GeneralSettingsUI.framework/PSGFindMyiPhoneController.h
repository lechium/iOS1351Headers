/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:20 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_semaphore;
@class NSObject;

@interface PSGFindMyiPhoneController : NSObject {

	NSObject*<OS_dispatch_semaphore> _stateChangeSem;

}
+(id)shared;
-(id)init;
-(void)dealloc;
-(BOOL)isFindMyiPhoneEnabled;
-(id)preferredFindMyiPhoneAccount;
-(void)disablePhoneLocatorWithMessageString:(id)arg1 buttonTitle:(id)arg2 presentingViewController:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)locatorStateDidChange:(id)arg1 ;
-(BOOL)isFindMyiPhoneProvisioned;
-(void)enablePhoneLocatorWithCompletion:(/*^block*/id)arg1 ;
@end

