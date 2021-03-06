/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MobileStoreDemoKit.framework/MobileStoreDemoKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSPersistentContainer, NSManagedObjectContext, NSArray;

@interface MSDKF200EventStoreHelper : NSObject {

	NSPersistentContainer* _container;
	NSManagedObjectContext* _context;
	NSArray* _eventsToReport;

}

@property (retain) NSPersistentContainer * container;              //@synthesize container=_container - In the implementation block
@property (retain) NSManagedObjectContext * context;               //@synthesize context=_context - In the implementation block
@property (retain) NSArray * eventsToReport;                       //@synthesize eventsToReport=_eventsToReport - In the implementation block
+(id)sharedInstance;
+(id)requiredKeysInEvent;
-(id)init;
-(NSPersistentContainer *)container;
-(void)setContainer:(NSPersistentContainer *)arg1 ;
-(NSManagedObjectContext *)context;
-(void)setContext:(NSManagedObjectContext *)arg1 ;
-(BOOL)prepareContainerFolder;
-(void)saveEventInPersistentStore:(id)arg1 ;
-(id)buildEventsInfoFromEventEntities:(id)arg1 ;
-(void)fetchEventsFromPersistentStoreWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setEventsToReport:(NSArray *)arg1 ;
-(NSArray *)eventsToReport;
-(long long)thresholdTimestampForOutdatedEvent;
-(void)deleteEventsFromPersistentStoreWithReuqest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)saveEvent:(id)arg1 ;
-(void)fetchEventsWithPredicate:(id)arg1 fetchLimit:(unsigned long long)arg2 fetchOffset:(unsigned long long)arg3 completionHanlder:(/*^block*/id)arg4 ;
-(id)fetchUncommitedEventsForPing;
-(void)markLastF200EventPingAsCommitted:(BOOL)arg1 ;
-(void)purgeOutdatedEvents;
@end

