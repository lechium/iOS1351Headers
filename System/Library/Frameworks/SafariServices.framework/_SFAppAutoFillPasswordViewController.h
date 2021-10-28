/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:34 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariServices/_SFPasswordViewController.h>

@protocol SFPasswordPickerServiceViewControllerProtocol;
@class SFPasswordRemoteViewController, SFQueueingServiceViewControllerProxy;

@interface _SFAppAutoFillPasswordViewController : _SFPasswordViewController {

	SFPasswordRemoteViewController* _remoteViewController;
	SFQueueingServiceViewControllerProxy*<SFPasswordPickerServiceViewControllerProtocol> _serviceProxy;

}
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(id)_remoteViewController;
-(void)setWebViewURL:(id)arg1 ;
-(void)setRemoteAppID:(id)arg1 ;
-(void)setRemoteLocalizedAppName:(id)arg1 ;
-(void)setRemoteUnlocalizedAppName:(id)arg1 ;
-(void)setExternallyVerifiedAndApprovedSharedWebCredentialsDomains:(id)arg1 ;
-(void)authenticateToPresentInPopover:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_sceneDidEnterBackground:(id)arg1 ;
-(void)setAuthenticationGracePeriod:(double)arg1 ;
-(void)remoteViewController:(id)arg1 selectedCredential:(id)arg2 ;
-(void)_setUpServiceProxyIfNeeded;
-(id)_connectToServiceWithCompletion:(/*^block*/id)arg1 ;
@end
