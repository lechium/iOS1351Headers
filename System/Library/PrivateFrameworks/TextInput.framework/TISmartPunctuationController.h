/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:10 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSCharacterSet, TISmartPunctuationOptions;

@interface TISmartPunctuationController : NSObject {

	BOOL _leftSingleQuotationMarkInserted;
	BOOL _leftDoubleQuotationMarkInserted;
	NSCharacterSet* _alphanumericCharacterSet;
	NSCharacterSet* _whitespaceAndNewlineCharacterSet;
	NSCharacterSet* _decimalDigitCharacterSet;
	NSCharacterSet* _punctuationCharacterSet;
	NSCharacterSet* _openerCharacterSet;
	NSCharacterSet* _germanApostrophePrecedingSet;
	NSCharacterSet* _dutchApostropheFollowingSet;
	NSCharacterSet* _cornerBracketCharacterSet;
	NSCharacterSet* _bookTitleMarkCharacterSet;
	NSCharacterSet* _dashCharacterSet;
	NSCharacterSet* _enDashCharacterSet;
	NSCharacterSet* _emDashCharacterSet;
	BOOL _smartQuotesEnabled;
	BOOL _smartDashesEnabled;
	unsigned long long _autoQuoteType;
	TISmartPunctuationOptions* _smartPunctuationOptions;

}

@property (assign,nonatomic) BOOL smartQuotesEnabled;                                          //@synthesize smartQuotesEnabled=_smartQuotesEnabled - In the implementation block
@property (assign,nonatomic) BOOL smartDashesEnabled;                                          //@synthesize smartDashesEnabled=_smartDashesEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long autoQuoteType;                                 //@synthesize autoQuoteType=_autoQuoteType - In the implementation block
@property (nonatomic,retain) TISmartPunctuationOptions * smartPunctuationOptions;              //@synthesize smartPunctuationOptions=_smartPunctuationOptions - In the implementation block
+(id)_chineseContextualVariantMapping;
-(id)init;
-(void)reset;
-(BOOL)smartQuotesEnabled;
-(void)setSmartQuotesEnabled:(BOOL)arg1 ;
-(BOOL)smartDashesEnabled;
-(void)setSmartDashesEnabled:(BOOL)arg1 ;
-(id)smartPunctuationedStringForString:(id)arg1 ;
-(TISmartPunctuationOptions *)smartPunctuationOptions;
-(id)smartPunctuationResultsForString:(id)arg1 ;
-(void)setSmartPunctuationOptions:(TISmartPunctuationOptions *)arg1 ;
-(unsigned long long)autoQuoteType;
-(id)smartPunctuationOutputForInput:(id)arg1 isLockedInput:(BOOL)arg2 documentState:(id)arg3 ;
-(void)setAutoQuoteType:(unsigned long long)arg1 ;
-(void)_initializeQuoteCharacterSetsIfNecessary;
-(void)_initializeDashCharacterSetsIfNecessary;
-(id)_alternatingStringForInputString:(id)arg1 isLockedInput:(BOOL)arg2 hasMarkedText:(BOOL)arg3 ;
-(id)_checkInput:(id)arg1 forContextualQuotesInDocumentState:(id)arg2 ;
-(id)_checkInput:(id)arg1 forContextualChinesePunctuationInDocumentState:(id)arg2 ;
-(id)_checkInput:(id)arg1 forContextualDashesInDocumentState:(id)arg2 ;
@end

