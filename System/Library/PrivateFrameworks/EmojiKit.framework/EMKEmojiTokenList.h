/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:13 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/EmojiKit.framework/EmojiKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EmojiKit/EmojiKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface EMKEmojiTokenList : NSObject <NSCopying> {

	NSArray* _emojiTokenArray;

}

@property (readonly) NSArray * emojiTokenArray; 
@property (readonly) unsigned long long count; 
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)emojiTokenAtIndex:(unsigned long long)arg1 ;
-(id)initWithEmojiTokenArray:(id)arg1 ;
-(NSArray *)emojiTokenArray;
@end

