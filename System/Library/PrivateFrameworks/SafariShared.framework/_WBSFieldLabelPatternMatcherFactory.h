/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:52 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SafariShared/SafariShared-Structs.h>
@class NSMutableDictionary;

@interface _WBSFieldLabelPatternMatcherFactory : NSObject {

	NSMutableDictionary* _trie;

}
+(WBSFieldLabelPatternMatcherArrayRef)createFieldLabelPatternMatcherArrayFromWordArrays:(id)arg1 allowingEndOfWordMatches:(BOOL)arg2 ;
-(id)init;
-(void)_addWord:(id)arg1 allowingEndOfWordMatch:(BOOL)arg2 ;
@end

