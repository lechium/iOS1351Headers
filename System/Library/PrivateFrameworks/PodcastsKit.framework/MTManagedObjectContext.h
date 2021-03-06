/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObjectContext.h>

@interface MTManagedObjectContext : NSManagedObjectContext {

	long long _type;

}

@property (assign,nonatomic) long long type;              //@synthesize type=_type - In the implementation block
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)reset;
-(id)existingObjectWithID:(id)arg1 error:(id*)arg2 ;
-(id)executeFetchRequest:(id)arg1 error:(id*)arg2 ;
-(void)performBlockAndWait:(/*^block*/id)arg1 ;
-(unsigned long long)countForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id)objectWithID:(id)arg1 ;
-(void)insertObject:(id)arg1 ;
-(id)objectRegisteredForID:(id)arg1 ;
-(void)deleteObject:(id)arg1 ;
-(void)validateConcurencyType;
-(BOOL)handleError:(id*)arg1 withCallback:(/*^block*/id)arg2 ;
-(BOOL)_isInternalCoreDataQueue;
-(void)seedCacheWithObjectsInEntity:(id)arg1 predicate:(id)arg2 ;
-(void)seedCacheWithObjectsInEntity:(id)arg1 predicateFormat:(id)arg2 ;
-(void)seedCacheWithObjectsInArray:(id)arg1 forUUIDKey:(id)arg2 entityName:(id)arg3 ;
@end

