/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:55 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HDIDSMessageCenterDelegate <NSObject>
@optional
-(void)messageCenter:(id)arg1 didReceiveUnknownRequest:(id)arg2;
-(void)messageCenter:(id)arg1 didResolveIDSIdentifierForRequest:(id)arg2;
-(void)messageCenter:(id)arg1 didResolveIDSIdentifierForResponse:(id)arg2;
-(void)messageCenter:(id)arg1 activeDeviceDidChange:(id)arg2 acknowledgementHandler:(/*^block*/id)arg3;

@end
