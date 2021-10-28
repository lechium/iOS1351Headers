/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:13 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface WBBookmarksDatabaseHealthInformation : NSObject {

	unsigned long long _topLevelDuplicateBookmarksCount;
	unsigned long long _allDuplicateBookmarksCount;

}

@property (nonatomic,readonly) unsigned long long topLevelDuplicateBookmarksCount;              //@synthesize topLevelDuplicateBookmarksCount=_topLevelDuplicateBookmarksCount - In the implementation block
@property (nonatomic,readonly) unsigned long long allDuplicateBookmarksCount;                   //@synthesize allDuplicateBookmarksCount=_allDuplicateBookmarksCount - In the implementation block
-(id)initWithTopLevelDuplicateBookmarksCount:(unsigned long long)arg1 allDuplicateBookmarksCount:(unsigned long long)arg2 ;
-(unsigned long long)topLevelDuplicateBookmarksCount;
-(unsigned long long)allDuplicateBookmarksCount;
@end
