/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:06 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsSignalPack.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface MapsSuggestionsMutableSignalPack : MapsSuggestionsSignalPack <NSCopying, NSMutableCopying, NSSecureCoding>
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)removeAll;
-(BOOL)writeSignalValue:(float)arg1 forType:(long long)arg2 ;
-(BOOL)addFromEntry:(id)arg1 ;
-(BOOL)addFromMapItem:(id)arg1 ;
-(BOOL)writeSignalValue:(float)arg1 forType:(long long)arg2 gathered:(id)arg3 expires:(id)arg4 ;
-(BOOL)writeSignalValue:(float)arg1 forType:(long long)arg2 gathered:(id)arg3 ;
-(BOOL)removeSignalType:(long long)arg1 ;
@end
