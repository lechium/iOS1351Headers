/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface ECCurrencyConverter : NSObject {

	NSMutableDictionary* mXlToLassoCurrencyCode;
	NSMutableDictionary* mLassoToXlCurrencyCode;
	NSMutableDictionary* mXlAccountingFormat;
	NSMutableDictionary* mXlToLassoCurrencyCodeBySymbol;

}
+(id)currencyConverter;
-(void)populateDictionaries;
-(id)lassoCurrencyCodeForDollar;
-(id)lassoCurrencyCodeFromXl:(id)arg1 ;
-(id)xlCurrencyCodeFromLasso:(id)arg1 ;
-(int)xlAccountFormatFromLasso:(id)arg1 ;
@end

