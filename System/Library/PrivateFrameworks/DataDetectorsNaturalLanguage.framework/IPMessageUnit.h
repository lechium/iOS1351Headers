/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:52 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <DataDetectorsNaturalLanguage/DataDetectorsNaturalLanguage-Structs.h>
@class NSMutableArray, NSArray, NSIndexSet, NSString, IPMessage;

@interface IPMessageUnit : NSObject {

	NSMutableArray* _followups;
	NSArray* _flatMessageThread;
	NSArray* _features;
	NSArray* _sentenceFeatures;
	NSArray* _dataFeatures;
	NSArray* _keywordFeatures;
	NSIndexSet* _rejectionRanges;
	NSIndexSet* _proposalAndAcceptationRanges;
	NSIndexSet* _neutralRanges;
	NSString* _bestLanguage;
	NSString* _lowercaseText;
	NSString* _text;
	IPMessageUnit* _previous;
	IPMessage* _originalMessage;
	long long _indexInOriginalMessage;
	NSRange _interactedDateRange;

}

@property (copy,readonly) NSString * text;                            //@synthesize text=_text - In the implementation block
@property (copy,readonly) NSString * lowercaseText; 
@property (__weak,readonly) IPMessage * originalMessage;              //@synthesize originalMessage=_originalMessage - In the implementation block
@property (readonly) long long indexInOriginalMessage;                //@synthesize indexInOriginalMessage=_indexInOriginalMessage - In the implementation block
@property (assign) NSRange interactedDateRange;                       //@synthesize interactedDateRange=_interactedDateRange - In the implementation block
@property (readonly) NSArray * features;                              //@synthesize features=_features - In the implementation block
@property (readonly) NSArray * sentenceFeatures;                      //@synthesize sentenceFeatures=_sentenceFeatures - In the implementation block
@property (readonly) NSArray * dataFeatures;                          //@synthesize dataFeatures=_dataFeatures - In the implementation block
@property (readonly) NSArray * keywordFeatures;                       //@synthesize keywordFeatures=_keywordFeatures - In the implementation block
@property (__weak,readonly) IPMessageUnit * previous;                 //@synthesize previous=_previous - In the implementation block
@property (readonly) NSArray * followups; 
-(id)description;
-(IPMessageUnit *)previous;
-(NSString *)text;
-(NSArray *)features;
-(void)setFeatures:(NSArray *)arg1 ;
-(IPMessage *)originalMessage;
-(id)initWithText:(id)arg1 originalMessage:(id)arg2 index:(long long)arg3 ;
-(void)setInteractedDateRange:(NSRange)arg1 ;
-(id)bestLanguageID;
-(void)addFollowup:(id)arg1 ;
-(long long)indexInOriginalMessage;
-(void)setDataFeatures:(NSArray *)arg1 ;
-(void)setKeywordFeatures:(NSArray *)arg1 ;
-(void)setSentenceFeatures:(NSArray *)arg1 ;
-(NSArray *)sentenceFeatures;
-(NSArray *)followups;
-(NSString *)lowercaseText;
-(id)rejectionRanges;
-(id)neutralRanges;
-(id)proposalAndAcceptationRanges;
-(NSArray *)dataFeatures;
-(NSArray *)keywordFeatures;
-(NSRange)interactedDateRange;
@end

