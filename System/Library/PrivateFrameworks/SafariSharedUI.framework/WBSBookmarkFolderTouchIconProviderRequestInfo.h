/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSSet, NSArray;

@interface WBSBookmarkFolderTouchIconProviderRequestInfo : NSObject {

	NSMutableArray* _thumbnailImages;
	NSMutableArray* _backgroundColors;
	BOOL _hasScheduledCoalescedUpdate;
	NSSet* _subrequestTokens;

}

@property (nonatomic,copy) NSSet * subrequestTokens;                         //@synthesize subrequestTokens=_subrequestTokens - In the implementation block
@property (nonatomic,copy,readonly) NSArray * thumbnailImages; 
@property (nonatomic,copy,readonly) NSArray * backgroundColors; 
@property (assign,nonatomic) BOOL hasScheduledCoalescedUpdate;               //@synthesize hasScheduledCoalescedUpdate=_hasScheduledCoalescedUpdate - In the implementation block
-(id)init;
-(NSArray *)thumbnailImages;
-(NSArray *)backgroundColors;
-(NSSet *)subrequestTokens;
-(void)setSubrequestTokens:(NSSet *)arg1 ;
-(void)setThumbnailImage:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setBackgroundColor:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)hasScheduledCoalescedUpdate;
-(void)setHasScheduledCoalescedUpdate:(BOOL)arg1 ;
@end

