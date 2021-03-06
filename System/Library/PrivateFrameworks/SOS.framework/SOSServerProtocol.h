/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:14 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SOS.framework/SOS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SOSServerProtocol <NSObject>
@required
-(void)willStartSendingLocationUpdate;
-(void)startSendingLocationUpdateWithCompletion:(/*^block*/id)arg1;
-(void)startSendingLocationUpdateForReason:(long long)arg1 WithCompletion:(/*^block*/id)arg2;
-(void)stopSendingLocationUpdate;
-(void)isSendingLocationUpdate:(/*^block*/id)arg1;
-(void)mostRecentLocationSentWithCompletion:(/*^block*/id)arg1;

@end

