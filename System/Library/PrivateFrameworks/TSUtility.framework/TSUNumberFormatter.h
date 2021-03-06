/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:07 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TSUtility/TSUtility-Structs.h>
@class NSMutableDictionary, NSString, NSMutableArray;

@interface TSUNumberFormatter : NSObject {

	CFLocaleRef mLocale;
	CFArrayRef mDecimalFormatters;
	CFArrayRef mCurrencyFormatters;
	CFArrayRef mPercentageFormatters;
	CFArrayRef mScientificFormatters;
	CFNumberFormatterRef mFractionFormatter;
	NSMutableDictionary* mCurrencyCodeToSymbolMap;
	NSMutableDictionary* mCurrencyCodeToHalfWidthSymbolMap;
	NSString* mCurrencyString;
	NSString* mPercentageString;
	NSString* mScientificString;
	NSString* mDecimalString;
	NSString* mPercentSymbol;
	NSMutableArray* mTransformedDecimalStrings;
	NSMutableArray* mTransformedCurrencyStrings;
	NSMutableArray* mTransformedPercentageStrings;
	NSMutableArray* mTransformedScientificStrings;
	CFStringRef mAdditionalCurrencyCode;
	CFArrayRef mAdditionalCurrencyCodeFormatters;

}
+(void)initialize;
+(id)currentLocaleDecimalSeparator;
+(id)formatString:(id)arg1 transformedForNegativeStyle:(int)arg2 ;
+(id)defaultFormatStringForValueType:(int)arg1 negativeStyle:(int)arg2 ;
+(id)currentLocaleCurrencyCode;
+(unsigned short)defaultDecimalPlacesForCurrencyCode:(id)arg1 ;
+(id)currencySymbolForCurrencyCode:(id)arg1 ;
+(id)userVisibleCurrencyCodes;
+(id)formatterForLocale:(CFLocaleRef)arg1 ;
+(int)positionOfSymbol:(id)arg1 inNumberFormatSubpattern:(id)arg2 ;
+(void)formatString:(id)arg1 replaceOccurencesOfUnescapedString:(id)arg2 withString:(id)arg3 ;
+(int)positionOfMinusSignInNumberFormatSubpattern:(id)arg1 ;
+(id)displayNameForCurrencyCode:(id)arg1 ;
+(id)defaultFormatStringForValueType:(int)arg1 ;
+(id)localizedPercentSymbol;
+(int)positionOfCurrencySymbolInNumberFormatSubpattern:(id)arg1 ;
+(id)availableCurrencyCodes;
+(id)currentNonCachedLocaleCurrencyCode;
+(id)currentNonCachedLocaleDecimalSeparator;
+(id)currentLocaleListSeparator;
+(id)numberFormatStringSpecialSymbols;
-(void)dealloc;
-(id)initWithLocale:(CFLocaleRef)arg1 ;
-(id)defaultFormatStringForValueType:(int)arg1 negativeStyle:(int)arg2 ;
-(id)currentLocaleCurrencyCode;
-(id)currencySymbolForCurrencyCode:(id)arg1 ;
-(BOOL)decimalFromString:(CFStringRef)arg1 value:(double*)arg2 formatString:(const _CFString*)arg3 ;
-(BOOL)currencyFromString:(CFStringRef)arg1 additionalCurrencyCode:(CFStringRef)arg2 value:(double*)arg3 formatString:(const _CFString*)arg4 currencyCode:(const _CFString*)arg5 ;
-(BOOL)percentageFromString:(CFStringRef)arg1 value:(double*)arg2 formatString:(const _CFString*)arg3 ;
-(BOOL)scientificFromString:(CFStringRef)arg1 value:(double*)arg2 formatString:(const _CFString*)arg3 ;
-(BOOL)fractionFromString:(CFStringRef)arg1 value:(double*)arg2 ;
-(id)displayNameForCurrencyCode:(id)arg1 ;
-(id)defaultFormatStringForValueType:(int)arg1 ;
-(id)localizedPercentSymbol;
-(void)numberPreferencesChanged:(id)arg1 ;
-(CFArrayRef)p_decimalFormatters;
-(BOOL)valueFromString:(CFStringRef)arg1 formatters:(CFArrayRef)arg2 value:(double*)arg3 formatString:(const _CFString*)arg4 currencyCode:(const _CFString*)arg5 ;
-(BOOL)findCurrencySymbolInString:(CFStringRef)arg1 additionalCurrencyCode:(CFStringRef)arg2 successTSUlString:(const _CFString*)arg3 ;
-(CFArrayRef)p_currencyFormatters;
-(CFArrayRef)p_percentageFormatters;
-(CFArrayRef)p_scientificFormatters;
-(id)halfWidthCurrencySymbolForCurrencyCode:(id)arg1 ;
@end

