/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:46 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol DNDSSyncServiceDelegate <NSObject>
@optional
-(BOOL)syncService:(id)arg1 shouldAcceptIncomingMessage:(id)arg2 withVersionNumber:(unsigned long long)arg3 fromDeviceIdentifier:(id)arg4;

@required
-(void)syncService:(id)arg1 didReceiveMessage:(id)arg2 withVersionNumber:(unsigned long long)arg3 fromDeviceIdentifier:(id)arg4;

@end
