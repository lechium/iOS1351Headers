/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableSet, NSString;

@interface PFUbiquityToManyConflictDiff : NSObject {

	NSMutableSet* _insertedObjectIDs;
	NSMutableSet* _deletedObjectIDs;
	NSString* _relationshipKey;

}

@property (nonatomic,readonly) NSMutableSet * insertedObjectIDs;              //@synthesize insertedObjectIDs=_insertedObjectIDs - In the implementation block
@property (nonatomic,readonly) NSMutableSet * deletedObjectIDs;               //@synthesize deletedObjectIDs=_deletedObjectIDs - In the implementation block
@property (nonatomic,readonly) NSString * relationshipKey;                    //@synthesize relationshipKey=_relationshipKey - In the implementation block
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSMutableSet *)deletedObjectIDs;
-(NSMutableSet *)insertedObjectIDs;
-(id)initForRelationshipAtKey:(id)arg1 ;
-(void)diffWithLogSnapshot:(id)arg1 andPreviousSnapshot:(id)arg2 ;
-(NSString *)relationshipKey;
@end
