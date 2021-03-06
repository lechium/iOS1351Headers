/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:21 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HMDUserCloudShareControllerDelegate <NSObject>
@required
-(void)userCloudShareController:(id)arg1 sendShareRequestMessageWithConnection:(id)arg2 fromUser:(id)arg3 toUser:(id)arg4 home:(id)arg5 shareURL:(id)arg6 shareToken:(id)arg7 containerID:(id)arg8 completion:(/*^block*/id)arg9;
-(void)userCloudShareController:(id)arg1 wakeClientWithContainerID:(id)arg2;
-(id)userCloudShareController:(id)arg1 timerWithInterval:(double)arg2;
-(id)currentDateForUserCloudShareController:(id)arg1;

@end

