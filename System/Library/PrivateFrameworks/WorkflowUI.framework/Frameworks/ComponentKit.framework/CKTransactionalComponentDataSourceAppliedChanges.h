/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:08 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSSet, NSIndexSet, NSDictionary;

@interface CKTransactionalComponentDataSourceAppliedChanges : NSObject {

	NSSet* _updatedIndexPaths;
	NSSet* _removedIndexPaths;
	NSIndexSet* _removedSections;
	NSDictionary* _movedIndexPaths;
	NSIndexSet* _insertedSections;
	NSSet* _insertedIndexPaths;
	NSDictionary* _userInfo;

}

@property (nonatomic,copy,readonly) NSSet * updatedIndexPaths;                   //@synthesize updatedIndexPaths=_updatedIndexPaths - In the implementation block
@property (nonatomic,copy,readonly) NSSet * removedIndexPaths;                   //@synthesize removedIndexPaths=_removedIndexPaths - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * removedSections;                //@synthesize removedSections=_removedSections - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * movedIndexPaths;              //@synthesize movedIndexPaths=_movedIndexPaths - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * insertedSections;               //@synthesize insertedSections=_insertedSections - In the implementation block
@property (nonatomic,copy,readonly) NSSet * insertedIndexPaths;                  //@synthesize insertedIndexPaths=_insertedIndexPaths - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userInfo;                     //@synthesize userInfo=_userInfo - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDictionary *)userInfo;
-(NSIndexSet *)insertedSections;
-(NSSet *)insertedIndexPaths;
-(id)newIndexPathForPreviousIndexPath:(id)arg1 ;
-(NSSet *)updatedIndexPaths;
-(NSIndexSet *)removedSections;
-(NSDictionary *)movedIndexPaths;
-(NSSet *)removedIndexPaths;
-(id)initWithUpdatedIndexPaths:(id)arg1 removedIndexPaths:(id)arg2 removedSections:(id)arg3 movedIndexPaths:(id)arg4 insertedSections:(id)arg5 insertedIndexPaths:(id)arg6 userInfo:(id)arg7 ;
@end

