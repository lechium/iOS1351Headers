/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:12 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CDPUIDeviceToDeviceEncryptionUIProvider.h>

@interface CDPUIDeviceToDeviceEncryptionUIProviderImp : NSObject <CDPUIDeviceToDeviceEncryptionUIProvider> {

	/*^block*/id _cancelActionHandler;
	/*^block*/id _continueActionHandler;

}

@property (nonatomic,copy) id cancelActionHandler;                //@synthesize cancelActionHandler=_cancelActionHandler - In the implementation block
@property (nonatomic,copy) id continueActionHandler;              //@synthesize continueActionHandler=_continueActionHandler - In the implementation block
-(void)dealloc;
-(void)cancelTapped:(id)arg1 ;
-(void)setContinueActionHandler:(id)arg1 ;
-(id)continueActionHandler;
-(void)promptForUpgradeWithContext:(id)arg1 vm:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)promptIneligibilityWithContext:(id)arg1 vm:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)promptForCancelWithContext:(id)arg1 vm:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_upgradeViewControllerWithContext:(id)arg1 vm:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_upgradeAlertControllerWithContext:(id)arg1 vm:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_upgradeCardUIViewControllerWithContext:(id)arg1 vm:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)continueTapped:(id)arg1 ;
-(void)setCancelActionHandler:(id)arg1 ;
-(id)cancelActionHandler;
@end

