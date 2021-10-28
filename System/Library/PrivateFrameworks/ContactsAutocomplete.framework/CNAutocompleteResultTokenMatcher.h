/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:14 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSString;

@interface CNAutocompleteResultTokenMatcher : NSObject {

	NSArray* _tokens;
	NSString* _countryCode;

}
+(id)searchTokensFromString:(id)arg1 ;
+(id)normalizePhoneNumber:(id)arg1 countryCode:(id)arg2 ;
+(id)indexTokensFromPhoneNumber:(id)arg1 ;
+(id)tokenizePhoneNumber:(id)arg1 ;
-(id)init;
-(id)initWithSearchString:(id)arg1 ;
-(/*^block*/id)filterAdapter;
-(id)initWithSearchString:(id)arg1 countryCode:(id)arg2 ;
-(BOOL)evaluateResult:(id)arg1 ;
-(BOOL)evaluateSingleResult:(id)arg1 ;
-(BOOL)evaluateTopLevelGroupResult:(id)arg1 ;
-(id)nameTokensForResult:(id)arg1 ;
-(id)tokensForResultName:(id)arg1 ;
-(id)tokensForResultValue:(id)arg1 ;
-(id)representationsOfPhoneNumber:(id)arg1 ;
@end
