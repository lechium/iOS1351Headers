/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:06 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class NSArray, NSString;

@interface UIDictationMultilingualResults : NSObject {

	NSArray* _phrases;
	NSString* _dominantLanguage;

}

@property (nonatomic,copy) NSArray * phrases;                        //@synthesize phrases=_phrases - In the implementation block
@property (nonatomic,copy) NSString * dominantLanguage;              //@synthesize dominantLanguage=_dominantLanguage - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)dominantLanguage;
-(id)initWithPhrases:(id)arg1 dominantLanguage:(id)arg2 ;
-(NSArray *)phrases;
-(void)setDominantLanguage:(NSString *)arg1 ;
-(void)setPhrases:(NSArray *)arg1 ;
@end
