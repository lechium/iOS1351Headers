/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSPredicate, NSArray;

@interface FMFetchOptions : NSObject {

	NSPredicate* _predicate;
	NSArray* _sortDescriptors;

}

@property (nonatomic,retain) NSPredicate * predicate;                //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) NSArray * sortDescriptors;              //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
-(id)init;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(NSArray *)sortDescriptors;
-(void)setSortDescriptors:(NSArray *)arg1 ;
@end

