/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:36 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AVTCoreDataStoreMaintenance.h>

@protocol AVTCoreDataStoreMaintenance
@required
-(void)storeDidChange;

@end


@protocol AVTUILogger, OS_dispatch_queue, AVTEventCoalescer;
@class NSObject;

@interface AVTCoreDataStoreMaintenance : NSObject <AVTCoreDataStoreMaintenance> {

	id<AVTUILogger> _logger;
	NSObject*<OS_dispatch_queue> _workQueue;
	id<AVTEventCoalescer> _eventCoalescer;
	/*^block*/id _mocFactory;

}

@property (nonatomic,readonly) id<AVTUILogger> logger;                              //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) id<AVTEventCoalescer> eventCoalescer;                //@synthesize eventCoalescer=_eventCoalescer - In the implementation block
@property (nonatomic,copy,readonly) id mocFactory;                                  //@synthesize mocFactory=_mocFactory - In the implementation block
-(id<AVTUILogger>)logger;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)initWithWorkQueue:(id)arg1 managedObjectContextFactory:(/*^block*/id)arg2 eventCoalescer:(id)arg3 logger:(id)arg4 ;
-(void)runMaintenanceTasks;
-(id<AVTEventCoalescer>)eventCoalescer;
-(id)mocFactory;
-(BOOL)mitigateDuplicatesWithManagedObjectContext:(id)arg1 error:(id*)arg2 ;
-(id)duplicatedIdentifiersInManagedObjectContext:(id)arg1 error:(id*)arg2 ;
-(id)fetchDuplicatedRecordsForIdentifiers:(id)arg1 managedObjectContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)fixDuplicateRecordIdentifiers:(id)arg1 managedObjectContext:(id)arg2 error:(id*)arg3 ;
-(void)storeDidChange;
-(id)initWithEnvironment:(id)arg1 managedObjectContextFactory:(/*^block*/id)arg2 ;
@end

