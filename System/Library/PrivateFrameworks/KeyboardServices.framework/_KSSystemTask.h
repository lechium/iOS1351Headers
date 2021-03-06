/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:08 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSString, NSObject;

@interface _KSSystemTask : NSObject {

	unsigned long long _periodSeconds;
	NSString* _name;
	/*^block*/id _handler;
	double _maxRunTime;
	double _checkInTime;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _executionCriteria;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> executionCriteria;              //@synthesize executionCriteria=_executionCriteria - In the implementation block
@property (nonatomic,readonly) unsigned long long periodSeconds;                        //@synthesize periodSeconds=_periodSeconds - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) id handler;                                              //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) double maxRunTime;                                         //@synthesize maxRunTime=_maxRunTime - In the implementation block
@property (assign,nonatomic) double checkInTime;                                        //@synthesize checkInTime=_checkInTime - In the implementation block
-(id)init;
-(NSString *)name;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)handler;
-(NSObject*<OS_xpc_object>)executionCriteria;
-(unsigned long long)periodSeconds;
-(id)initWithName:(id)arg1 isPeriodic:(BOOL)arg2 period:(unsigned long long)arg3 handler:(/*^block*/id)arg4 ;
-(id)initWithName:(id)arg1 delay:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(double)maxRunTime;
-(void)setMaxRunTime:(double)arg1 ;
-(double)checkInTime;
-(void)setCheckInTime:(double)arg1 ;
@end

