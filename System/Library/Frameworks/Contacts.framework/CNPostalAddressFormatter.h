/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:44 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Contacts/Contacts-Structs.h>
#import <Foundation/NSFormatter.h>

@interface CNPostalAddressFormatter : NSFormatter {

	long long _style;

}

@property (assign,nonatomic) long long style;              //@synthesize style=_style - In the implementation block
+(id)stringFromPostalAddress:(id)arg1 style:(long long)arg2 ;
+(id)getCountryCodeFromPostalAddress:(id)arg1 ;
+(id)specificationForCountry:(id)arg1 ;
+(id)fieldArrangementWithString:(id)arg1 ;
+(id)_postalToFormatMap;
+(id)addressValueForFormatKey:(id)arg1 postalAddress:(id)arg2 ;
+(id)specificationWithAddressFormatPlist:(id)arg1 ;
+(id)localizedStringForPostalAddressString:(id)arg1 ;
+(id)fieldLabelMapWithPlist:(id)arg1 ;
+(id)postalAddressPropertyKeyForFormatPropertyKey:(id)arg1 ;
+(id)supportedCountries;
+(id)attributedStringFromPostalAddress:(id)arg1 style:(long long)arg2 withDefaultAttributes:(id)arg3 ;
+(id)formatPropertyKeyForPostalAddressPropertyKey:(id)arg1 ;
+(id)singleLineStringFromPostalAddress:(id)arg1 addCountryName:(BOOL)arg2 ;
+(id)localizedCountryNameForISOCountryCode:(id)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(id)stringFromPostalAddress:(id)arg1 ;
-(id)attributedStringFromPostalAddress:(id)arg1 withDefaultAttributes:(id)arg2 ;
-(id)attributedStringFromPostalAddress:(id)arg1 name:(id)arg2 organization:(id)arg3 attributes:(id)arg4 order:(id*)arg5 ;
-(id)_addressPropertyKeyForDDResult:(DDResultRef)arg1 hasCountry:(BOOL*)arg2 ;
-(id)countryCodeForCountryName:(id)arg1 ;
-(id)attributedStringFromPostalAddress:(id)arg1 name:(id)arg2 organization:(id)arg3 attributes:(id)arg4 ;
-(id)postalAddressFromString:(id)arg1 ;
@end

