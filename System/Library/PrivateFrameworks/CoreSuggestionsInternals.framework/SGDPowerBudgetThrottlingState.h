/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_os_log;
#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@class NSObject;

@interface SGDPowerBudgetThrottlingState : NSObject {

	opaque_pthread_mutex_t _lock;
	NSObject*<OS_os_log> _log;
	SCD_Struct_SG8 _state;
	unsigned long long _absTimeAtOpStart;
	int _fd;
	BOOL _opInProgress;
	BOOL _dirty;

}
-(void)dealloc;
-(id)state;
-(void)endWork;
-(BOOL)canDoDiscretionaryWork;
-(void)startWork;
-(void)refill;
-(id)initWithPath:(id)arg1 log:(id)arg2 ;
-(void)_readThrottleState;
-(void)_writeThrottleState;
-(void)_writeThrottleStateLocked;
-(unsigned long long)discretionaryOpsLeft;
@end
