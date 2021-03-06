/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:12 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface WCActiveDeviceSwitchTask : NSObject {

	BOOL _clientReadyForSessionState;
	unsigned long long _taskState;

}

@property (assign) BOOL clientReadyForSessionState;              //@synthesize clientReadyForSessionState=_clientReadyForSessionState - In the implementation block
@property (assign) unsigned long long taskState;                 //@synthesize taskState=_taskState - In the implementation block
+(id)taskStateToString:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)taskState;
-(void)setTaskState:(unsigned long long)arg1 ;
-(BOOL)clientReadyForSessionState;
-(void)setClientReadyForSessionState:(BOOL)arg1 ;
@end

