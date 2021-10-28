/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:02 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VSViewServiceRemoteViewControllerDelegate <NSObject>
@required
-(void)presentViewServiceRemoteViewController:(id)arg1;
-(void)dismissViewServiceRemoteViewController:(id)arg1;
-(void)viewServiceRemoteViewController:(id)arg1 didTerminateWithError:(id)arg2;
-(void)viewServiceRemoteViewController:(id)arg1 request:(id)arg2 didFinishWithResponse:(id)arg3;
-(void)viewServiceRemoteViewController:(id)arg1 request:(id)arg2 didFailWithError:(id)arg3;
-(void)viewServiceRemoteViewController:(id)arg1 didChooseAdditionalProvidersForRequest:(id)arg2;
-(void)viewServiceRemoteViewController:(id)arg1 didCancelRequest:(id)arg2;
-(void)viewServiceRemoteViewController:(id)arg1 didSelectProviderWithIdentifier:(id)arg2 vetoHandler:(/*^block*/id)arg3;

@end
