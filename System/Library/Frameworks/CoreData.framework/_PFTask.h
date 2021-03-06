/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:19 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreData/CoreData-Structs.h>
@interface _PFTask : NSObject {

	int _cd_rc;
	void* _task;
	void* arguments;
	opaque_pthread_mutex_t lock;
	opaque_pthread_cond_t condition;
	int isFinishedFlag;

}
+(int)getNumActiveProcessors;
+(double)getProcessorSpeed;
+(unsigned long long)getPhysicalMemory;
-(unsigned long long)retainCount;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(void)finalize;
-(id)initWithFunction:(/*function pointer*/void*)arg1 withArgument:(void*)arg2 andPriority:(int)arg3 ;
@end

