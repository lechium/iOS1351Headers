/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:14 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface CNAutocompleteProbeKeyBuilder : NSObject {

	NSString* _key;
	NSArray* _prefixes;
	NSArray* _suffixes;

}

@property (nonatomic,retain) NSString * key;                  //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSArray * prefixes;              //@synthesize prefixes=_prefixes - In the implementation block
@property (nonatomic,retain) NSArray * suffixes;              //@synthesize suffixes=_suffixes - In the implementation block
+(id)builderWithKey:(id)arg1 ;
-(id)init;
-(NSString *)key;
-(id)initWithKey:(id)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(id)build;
-(id)prediction;
-(NSArray *)prefixes;
-(NSArray *)suffixes;
-(void)setSuffixes:(NSArray *)arg1 ;
-(void)useString:(id)arg1 forSuffixAtIndex:(unsigned long long)arg2 ;
-(void)setPrefixes:(NSArray *)arg1 ;
-(id)addDuetReturnedResults:(BOOL)arg1 ;
-(id)addBatchIndex:(unsigned long long)arg1 ;
-(id)prefixedSearch;
-(id)addDuetModelID;
@end
