/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:30 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MPLazySectionedCollectionDataSource <NSObject>
@optional
-(id)sectionIndexTitles;
-(id)identifiersForItemAtIndexPath:(id)arg1;
-(id)identifiersForSectionAtIndex:(long long)arg1;
-(id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg1;
-(NSRange*)optionalSectionIndexTitlesRange;
-(long long)indexOfSectionForSectionIndexTitleAtIndex:(long long)arg1;
-(BOOL)hasSameContentAsDataSource:(id)arg1;

@required
-(unsigned long long)numberOfSections;
-(unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
-(id)sectionAtIndex:(unsigned long long)arg1;
-(id)itemAtIndexPath:(id)arg1;

@end

