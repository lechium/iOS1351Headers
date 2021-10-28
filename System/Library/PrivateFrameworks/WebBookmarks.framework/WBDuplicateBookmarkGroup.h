/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:13 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, WebBookmark, NSArray;

@interface WBDuplicateBookmarkGroup : NSObject {

	NSMutableArray* _dupicateBookmarks;
	NSMutableArray* _dupicateBookmarksToKeep;
	BOOL _foundDuplicates;
	WebBookmark* _originalBookmark;

}

@property (nonatomic,readonly) WebBookmark * originalBookmark;              //@synthesize originalBookmark=_originalBookmark - In the implementation block
@property (nonatomic,readonly) NSArray * duplicates; 
@property (nonatomic,readonly) NSArray * duplicatesToKeep; 
@property (nonatomic,readonly) BOOL foundDuplicates;                        //@synthesize foundDuplicates=_foundDuplicates - In the implementation block
-(NSArray *)duplicates;
-(id)initWithOriginalBookmark:(id)arg1 ;
-(NSArray *)duplicatesToKeep;
-(void)addDuplicateBookmark:(id)arg1 replaceOriginal:(BOOL)arg2 ;
-(void)addDuplicateBookmarkToKeep:(id)arg1 ;
-(void)exchangeOriginalBookmarkWithBookmark:(id)arg1 ;
-(void)removeAllDuplicates;
-(WebBookmark *)originalBookmark;
-(BOOL)foundDuplicates;
@end
