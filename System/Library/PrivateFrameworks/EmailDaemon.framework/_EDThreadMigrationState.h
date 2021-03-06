/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:12 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class EMThreadScope, NSMutableSet;

@interface _EDThreadMigrationState : NSObject {

	EMThreadScope* _threadScope;
	NSMutableSet* _objectIDsToMigrate;
	NSMutableSet* _recentlyMigratedObjectIDs;
	unsigned long long _state;

}

@property (nonatomic,readonly) EMThreadScope * threadScope;                           //@synthesize threadScope=_threadScope - In the implementation block
@property (nonatomic,readonly) NSMutableSet * objectIDsToMigrate;                     //@synthesize objectIDsToMigrate=_objectIDsToMigrate - In the implementation block
@property (nonatomic,readonly) NSMutableSet * recentlyMigratedObjectIDs;              //@synthesize recentlyMigratedObjectIDs=_recentlyMigratedObjectIDs - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                //@synthesize state=_state - In the implementation block
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)fail;
-(EMThreadScope *)threadScope;
-(id)initWithThreadScope:(id)arg1 ;
-(NSMutableSet *)objectIDsToMigrate;
-(NSMutableSet *)recentlyMigratedObjectIDs;
-(id)nextBatch;
-(BOOL)removeMigratedObjectIDs:(id)arg1 ;
-(BOOL)addObjectIDs:(id)arg1 ;
-(BOOL)changeObjectIDsToMigrate:(id)arg1 ;
-(id)deleteObjectIDsToMigrate:(id)arg1 ;
@end

