/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:49 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSPersonNameComponents, NSArray;

@interface CNNameComponentsStringTokenizer : NSObject {

	NSString* _string;
	NSPersonNameComponents* _components;
	NSArray* _tokens;

}

@property (copy) NSString * string;                                  //@synthesize string=_string - In the implementation block
@property (retain) NSPersonNameComponents * components;              //@synthesize components=_components - In the implementation block
@property (retain) NSArray * tokens;                                 //@synthesize tokens=_tokens - In the implementation block
+(id)componentsFromString:(id)arg1 ;
+(id)tokensFromString:(id)arg1 nameOrder:(long long*)arg2 ;
+(id)whitespaceTokens:(id)arg1 ;
+(BOOL)isNameSuffix:(id)arg1 ;
+(BOOL)isNamePrefix:(id)arg1 ;
+(id)tokensByAdjustingForNobiliaryParticles:(id)arg1 ;
+(BOOL)isNobiliaryParticle:(id)arg1 ;
+(id)namePrefixElements;
+(id)nameComponentElements;
+(id)nameSuffixElements;
+(id)nobiliaryParticleElements;
+(id)uncachedNameComponentElements;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(id)initWithString:(id)arg1 ;
-(NSPersonNameComponents *)components;
-(NSArray *)tokens;
-(void)setTokens:(NSArray *)arg1 ;
-(void)setComponents:(NSPersonNameComponents *)arg1 ;
-(id)parseComponents;
-(void)removeParentheticalContent;
-(void)extractNicknameFromQuotedContent;
-(void)extractNameSuffixFromEnd;
-(void)extractNamePrefixFromBeginning;
-(void)adjustTokensForNobiliaryParticles;
-(void)extractGivenMiddleFamilyNamesFromWhatsLeftUsingOrder:(long long)arg1 ;
@end

