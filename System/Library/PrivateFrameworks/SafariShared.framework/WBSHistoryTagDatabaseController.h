/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:53 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class WBSSQLiteDatabase;

@interface WBSHistoryTagDatabaseController : NSObject {

	WBSSQLiteDatabase* _database;

}
-(id)initWithDatabase:(id)arg1 ;
-(id)createTagsForIdentifiers:(id)arg1 withTitles:(id)arg2 type:(unsigned long long)arg3 level:(long long)arg4 error:(id*)arg5 ;
-(BOOL)assignHistoryItemWithID:(long long)arg1 toTopicTagsWithIDs:(id)arg2 error:(id*)arg3 ;
-(BOOL)renameTagWithID:(long long)arg1 toTitle:(id)arg2 error:(id*)arg3 ;
-(BOOL)clearAllTagsWithError:(id*)arg1 ;
-(BOOL)clearTagsFromStartDate:(id)arg1 endDate:(id)arg2 error:(id*)arg3 ;
@end

