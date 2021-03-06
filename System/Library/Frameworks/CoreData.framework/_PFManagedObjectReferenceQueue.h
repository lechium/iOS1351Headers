/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:20 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreData/CoreData-Structs.h>
@class NSManagedObjectContext;

@interface _PFManagedObjectReferenceQueue : NSObject {

	int _cd_rc;
	int _spinLock;
	int _flags;
	int _signalRunloop;
	NSManagedObjectContext* _context;
	CFArrayRef _queue;
	CFRunLoopObserverRef _rlObserver;
	int _processing;

}
-(unsigned long long)retainCount;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(void)finalize;
-(void)_processReferenceQueue:(BOOL)arg1 ;
-(BOOL)_queueForDealloc:(id)arg1 ;
-(void)_unregisterRunloopObservers;
-(void)_contextDidDealloc;
-(id)initForContext:(id)arg1 ;
-(long long)_queueCount;
-(BOOL)_signal;
-(BOOL)_queueBatchForDealloc:(CFArrayRef)arg1 ;
@end

