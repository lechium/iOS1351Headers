/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableArray, NUJobQueue, NSObject, NSString;

@interface NUJobPriorityQueue : NSObject {

	NSMutableArray* _jobs;
	BOOL _needSort;
	NUJobQueue* _owner;
	NSObject*<OS_dispatch_queue> _runQueue;
	NSObject*<OS_dispatch_queue> _stateQueue;
	BOOL _isRunning;
	NSString* _name;

}

@property (readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (readonly) long long count; 
-(id)init;
-(id)description;
-(NSString *)name;
-(long long)count;
-(BOOL)start;
-(void)_run;
-(void)_sortIfNeeded;
-(void)_sort;
-(void)addJob:(id)arg1 ;
-(BOOL)removeJob:(id)arg1 ;
-(id)initWithName:(id)arg1 owner:(id)arg2 qos:(unsigned)arg3 ;
-(void)_addJob:(id)arg1 ;
-(BOOL)_removeJob:(id)arg1 ;
-(id)popJob;
-(id)_popJob;
-(void)_startRunning;
-(BOOL)_runNextJob;
@end

