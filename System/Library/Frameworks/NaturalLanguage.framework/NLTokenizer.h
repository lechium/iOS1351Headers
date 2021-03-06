/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:13 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <NaturalLanguage/NaturalLanguage-Structs.h>
@class NSString;

@interface NLTokenizer : NSObject {

	long long _unit;
	NSString* _string;
	NSString* _language;
	NLTokenizerRef _tokenizer;

}

@property (nonatomic,readonly) long long unit; 
@property (nonatomic,retain) NSString * string; 
-(NSString *)string;
-(void)dealloc;
-(void)setString:(NSString *)arg1 ;
-(long long)unit;
-(id)language;
-(void)setLanguage:(id)arg1 ;
-(NSRange)tokenRangeAtIndex:(unsigned long long)arg1 ;
-(id)initWithUnit:(long long)arg1 ;
-(void)enumerateTokensInRange:(NSRange)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)tokensForRange:(NSRange)arg1 ;
@end

