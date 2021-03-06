/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:30 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AKBasicLoginControllerDelegate.h>
#import <libobjc.A.dylib/AKInAppAuthenticationUIProvider.h>

@class AKBasicLoginAlertController, AKBasicLoginViewController, UINavigationController, AAUICDPStingrayRemoteUIController, AKInAppAuthenticationRemoteUIDelegate, AKAppleIDAuthenticationInAppContext, RemoteUIController, NSString;

@interface AKInAppAuthenticationRemoteUIProvider : NSObject <AKBasicLoginControllerDelegate, AKInAppAuthenticationUIProvider> {

	AKBasicLoginAlertController* _basicLoginAlertController;
	AKBasicLoginViewController* _basicLoginViewController;
	UINavigationController* _navController;
	AAUICDPStingrayRemoteUIController* _stingrayController;
	AKInAppAuthenticationRemoteUIDelegate* _remoteUIControllerDelegate;
	AKAppleIDAuthenticationInAppContext* _context;
	RemoteUIController* _remoteUIController;

}

@property (assign,nonatomic,__weak) AKAppleIDAuthenticationInAppContext * context;                              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) RemoteUIController * remoteUIController;                                           //@synthesize remoteUIController=_remoteUIController - In the implementation block
@property (nonatomic,readonly) AKInAppAuthenticationRemoteUIDelegate * remoteUIControllerDelegate;              //@synthesize remoteUIControllerDelegate=_remoteUIControllerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(AKAppleIDAuthenticationInAppContext *)context;
-(void)setContext:(AKAppleIDAuthenticationInAppContext *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(id)_navController;
-(void)_startAnimating;
-(void)presentKeepUsingUIForAppleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissKeepUsingUIWithCompletion:(/*^block*/id)arg1 ;
-(void)presentBasicLoginUIWithCompletion:(/*^block*/id)arg1 ;
-(void)dismissBasicLoginUIWithCompletion:(/*^block*/id)arg1 ;
-(void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)presentSecondFactorUIWithCompletion:(/*^block*/id)arg1 ;
-(void)dismissSecondFactorUIWithCompletion:(/*^block*/id)arg1 ;
-(void)presentSecondFactorAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)presentBiometricOrPasscodeValidationForAppleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentServerProvidedUIWithConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissServerProvidedUIWithCompletion:(/*^block*/id)arg1 ;
-(void)presentNativeRecoveryUIWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissNativeRecoveryUIWithCompletion:(/*^block*/id)arg1 ;
-(void)willPresentModalNavigationController:(id)arg1 ;
-(void)basicLoginControllerDidPresent:(id)arg1 ;
-(void)basicLoginControllerWillDismiss:(id)arg1 ;
-(void)basicLoginControllerDidDismiss:(id)arg1 ;
-(void)_clearRemoteUIController;
-(BOOL)_shouldShowAsView;
-(void)presentBasicLoginUIAsViewWithCompletion:(/*^block*/id)arg1 ;
-(void)presentBasicLoginUIAsAlertWithCompletion:(/*^block*/id)arg1 ;
-(void)presentLoginAlertUIAsViewWithError:(id)arg1 title:(id)arg2 message:(id)arg3 waitForInteraction:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 waitForInteraction:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)cleanUpBasicLoginWithCompletion:(/*^block*/id)arg1 ;
-(id)_secondFactorActionsForAlert:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_contextWillDismissLoginAlertController;
-(void)_contextDidPresentLoginController;
-(RemoteUIController *)remoteUIController;
-(void)_contextDidDismissLoginAlertController;
-(void)_updateReason;
-(id)_actionsForLoginWithCompletion:(/*^block*/id)arg1 ;
-(void)_showMaxAttemptAlertWithCompletion:(/*^block*/id)arg1 ;
-(void)presentIDPProvidedUIWithConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(AKInAppAuthenticationRemoteUIDelegate *)remoteUIControllerDelegate;
-(void)setRemoteUIController:(RemoteUIController *)arg1 ;
@end

