/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:30 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SKCloudServiceSetupRemoteViewControllerDelegate <NSObject>
@required
-(void)overrideCreditCardPresentationWithCompletion:(/*^block*/id)arg1;
-(void)overrideRedeemCameraPerformAction:(long long)arg1 withObject:(id)arg2;
-(void)cloudServiceSetupRemoteViewController:(id)arg1 didFinishLoadingWithSuccess:(BOOL)arg2 error:(id)arg3;
-(void)cloudServiceSetupRemoteViewController:(id)arg1 requestsDismissalWithAnimation:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)cloudServiceSetupRemoteViewController:(id)arg1 requestsDismissingSafariViewControllerAnimated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)cloudServiceSetupRemoteViewController:(id)arg1 requestsPresentingSafariViewControllerWithURL:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4;

@end

