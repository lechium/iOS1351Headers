/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:00 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <UIKitCore/_UIDataSourceSnapshot.h>

@interface _UIDataSourceSnapshotter : NSObject <NSCopying, _UIDataSourceSnapshot> {

	vector<_NSRange, std::__1::allocator<_NSRange> >* _sectionRanges;

}
+(id)snapshotWithSectionCountsProvider:(/*^block*/id)arg1 ;
+(id)snapshotForDataSourceBackedView:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)snapshot;
-(long long)globalIndexForIndexPath:(id)arg1 ;
-(long long)numberOfSections;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(id)initWithSectionCounts:(id)arg1 ;
-(long long)numberOfItems;
-(NSRange)rangeForSection:(long long)arg1 ;
-(long long)sectionForGlobalIndex:(long long)arg1 ;
-(id)indexPathForGlobalIndex:(long long)arg1 ;
-(BOOL)_insertSection:(long long)arg1 withInitialCount:(long long)arg2 ;
-(BOOL)_incrementSectionCount:(long long)arg1 byCount:(long long)arg2 ;
-(BOOL)_deleteSection:(long long)arg1 ;
-(BOOL)_decrementSectionCount:(long long)arg1 byCount:(long long)arg2 ;
-(BOOL)_decrementSectionCount:(long long)arg1 ;
-(BOOL)_incrementSectionCount:(long long)arg1 ;
-(id)initWithSectionCountsProvider:(/*^block*/id)arg1 ;
-(long long)numberOfItemsBeforeSection:(long long)arg1 ;
-(BOOL)indexPathIsSectionAppendingInsert:(id)arg1 ;
-(id)indexPathForAppendingInsertInSection:(long long)arg1 ;
-(id)initWithDataSourceBackedView:(id)arg1 ;
-(void)_recomputeRangeLocations;
-(BOOL)_deleteAllSections;
@end
