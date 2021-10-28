/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:53 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariShared/WBSPasswordWordList.h>

@class NSOrderedSet;

@interface WBSPasswordOrderedSetWordList : WBSPasswordWordList {

	NSOrderedSet* _words;
	BOOL _sensitive;

}

@property (getter=isSensitive,nonatomic,readonly) BOOL sensitive;              //@synthesize sensitive=_sensitive - In the implementation block
-(BOOL)isSensitive;
-(void)enumerateEntriesForString:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)initWithIdentifier:(id)arg1 isSensitive:(BOOL)arg2 orderedWordsArray:(id)arg3 ;
-(id)initWithIdentifier:(id)arg1 isSensitive:(BOOL)arg2 orderedWords:(id)arg3 ;
@end
