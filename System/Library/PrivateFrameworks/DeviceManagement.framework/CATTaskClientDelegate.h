/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:05 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CATTaskClientDelegate <NSObject>
@optional
-(void)clientWillInvalidate:(id)arg1;
-(void)clientDidDisconnect:(id)arg1;
-(void)clientDidConnect:(id)arg1;
-(void)client:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3;
-(void)clientDidInvalidate:(id)arg1;

@required
-(void)client:(id)arg1 didInterruptWithError:(id)arg2;

@end

