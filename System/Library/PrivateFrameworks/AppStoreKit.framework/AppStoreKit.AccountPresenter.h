/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:20 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface AppStoreKit.AccountPresenter : _UKNOWN_SUPERCLASS_ {

	 appStateController;
	 restrictions;
	 storeAccountStore;
	 iCloudAccountStore;
	 iapStateProvider;
	 updatesPresenter;
	 activeStoreAccount;
	 hasManagedAppleID;
	 hasSubscriptions;
	 profilePictureDiameter;
	 view;
	 profilePicture;
	 authenticating;
	 accountNameInputValue;
	 passwordInputValue;
	 iForgotUrl;
	 isMonetaryGiftingEnabled;
	 hasPrimaryiCloudAccount;
	 sections;
	 $__lazy_storage_$_notificationsAccountSectionLink;

}
-(void)restrictionsDidChange:(id)arg1 ;
-(void)profilePictureStoreDidChange;
-(void)storeAccountsDidChange;
-(void)iCloudAccountsDidChange;
@end

