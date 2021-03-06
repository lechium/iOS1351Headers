/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:09 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PKPaymentSetupViewControllerDelegate <NSObject>
@optional
-(void)viewControllerDidCancelSetupFlow:(id)arg1;
-(void)viewController:(id)arg1 didShowProvisioningError:(id)arg2;
-(void)viewControllerDidShowEligibilityIssue:(id)arg1;
-(void)viewController:(id)arg1 willPerformPasscodeUpgradeWithCompletionHandler:(/*^block*/id)arg2;
-(void)viewController:(id)arg1 requestPasscodeUpgradeForPasscodeUpgradeFlowController:(id)arg2 completion:(/*^block*/id)arg3;
-(void)viewController:(id)arg1 didExitPasscodeUpgradeForPasscodeUpgradeFlowController:(id)arg2 withShouldContinue:(BOOL)arg3 error:(id)arg4;
-(void)viewControllerWillPresentChangePasscodeComplex:(id)arg1;
-(void)viewControllerDidFinishChangingPasscodeComplex:(id)arg1;
-(void)viewControllerDidFailToChangePasscodeComplex:(id)arg1;
-(void)viewController:(id)arg1 requestPasscodeUpgradeWithCompletion:(/*^block*/id)arg2;
-(void)viewController:(id)arg1 didExitPasscodeUpgradeWithShouldContinue:(BOOL)arg2 error:(id)arg3;
-(void)viewController:(id)arg1 canProceedWithInstallment:(BOOL)arg2 featureApplication:(id)arg3 completion:(/*^block*/id)arg4;

@required
-(void)viewControllerDidTerminateSetupFlow:(id)arg1;

@end

