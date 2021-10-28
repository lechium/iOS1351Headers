/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:22 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SFSafariViewController;

@interface WDClinicalAccountErrorManager : NSObject {

	SFSafariViewController* _activeLoginViewController;

}

@property (assign,nonatomic,__weak) SFSafariViewController * activeLoginViewController;              //@synthesize activeLoginViewController=_activeLoginViewController - In the implementation block
+(id)sharedInstance;
-(void)_handleSingleAccountNeedsRelogin:(id)arg1 fromPresenter:(id)arg2 profile:(id)arg3 ;
-(void)_handleMultipleAccountsNeedReloginFromPresenter:(id)arg1 ;
-(SFSafariViewController *)activeLoginViewController;
-(void)setActiveLoginViewController:(SFSafariViewController *)arg1 ;
-(void)_dismissReloginViewController:(id)arg1 ;
-(void)reloginAccount:(id)arg1 fromPresenter:(id)arg2 profile:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)presentErrorsIfNecessaryForAccounts:(id)arg1 fromPresenter:(id)arg2 profile:(id)arg3 ;
@end
