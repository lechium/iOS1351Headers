/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:02 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VSApplicationControllerDelegate <NSObject>
@optional
-(void)applicationControllerDidStop:(id)arg1;

@required
-(BOOL)applicationController:(id)arg1 requestsAlert:(id)arg2;
-(void)applicationController:(id)arg1 request:(id)arg2 didCompleteWithResponse:(id)arg3;
-(void)applicationController:(id)arg1 didReceiveViewModel:(id)arg2;
-(void)applicationController:(id)arg1 didReceiveViewModelError:(id)arg2;
-(void)applicationController:(id)arg1 request:(id)arg2 didFailWithError:(id)arg3;
-(void)applicationControllerDidStart:(id)arg1;
-(void)applicationController:(id)arg1 startDidFailWithError:(id)arg2;

@end
