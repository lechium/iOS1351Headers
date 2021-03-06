/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <CoreSuggestionsInternals/SGRe2.h>

@class NSData;

@interface SGRe2Basic : SGRe2 {

	NSData* _patternData;
	RE2* _pattern;
	BOOL _isTrivial;

}
-(void)dealloc;
-(id)description;
-(id)initWithRegexp:(id)arg1 ;
-(id)initWithRegexpData:(id)arg1 ;
-(id)existsInUtf8:(const char*)arg1 ;
-(id)matchesUtf8:(const char*)arg1 ;
-(void)enumerateMatchesInUtf8:(const char*)arg1 fromString:(id)arg2 ngroups:(unsigned long long)arg3 block:(/*^block*/id)arg4 ;
-(int)_enumerateMatchesInUtf8:(const char*)arg1 fromString:(id)arg2 ngroups:(unsigned long long)arg3 block:(/*^block*/id)arg4 ;
-(id)hashId;
@end

