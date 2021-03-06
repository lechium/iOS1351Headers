/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:59 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <TelephonyPreferences/TelephonyPreferences-Structs.h>
@class NSMutableDictionary, NSObject, NSURL, NSArray, NSString, NSLocale;

@interface TPSSubscriptionLabeler : NSObject {

	NSMutableDictionary* _labelDictionary;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSURL* _url;
	NSArray* _applicableUnlocalizedLabels;
	NSString* _applicableLanguage;
	NSLocale* _updatingLocale;
	NSArray* _cachedResult;

}

@property (nonatomic,retain) NSMutableDictionary * labelDictionary;                 //@synthesize labelDictionary=_labelDictionary - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;              //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,retain) NSURL * url;                                           //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSArray * applicableUnlocalizedLabels;                 //@synthesize applicableUnlocalizedLabels=_applicableUnlocalizedLabels - In the implementation block
@property (nonatomic,retain) NSString * applicableLanguage;                         //@synthesize applicableLanguage=_applicableLanguage - In the implementation block
@property (nonatomic,retain) NSLocale * updatingLocale;                             //@synthesize updatingLocale=_updatingLocale - In the implementation block
@property (nonatomic,retain) NSArray * cachedResult;                                //@synthesize cachedResult=_cachedResult - In the implementation block
+(id)localizedLabelForLabel:(id)arg1 ;
+(id)localizedLabelForLabel:(id)arg1 longForm:(BOOL)arg2 languageStringOverrides:(id)arg3 ;
+(id)localizedStringDictionaryForLanguageIdentifiers:(id)arg1 selectedLanguage:(id*)arg2 ;
+(id)localizedLabelsForLabels:(id)arg1 languageStringOverrides:(id)arg2 ;
+(id)localizedBadgeLabelsForUnlocalizedLabels:(id)arg1 languageStringOverrides:(id)arg2 ;
+(id)displayShortLabelStringsForLongFormShortLabels:(id)arg1 ;
+(id)localizedBadgeLabelsForUnlocalizedLabels:(id)arg1 languageIdentifiers:(id)arg2 ;
+(id)stringsByAbbreviatingToPrefixesOfStrings:(id)arg1 ;
+(id)stringsByClippingStrings:(id)arg1 toWidthOfString:(id)arg2 ;
+(id)stringsByNumericallyDisambiguatingStrings:(id)arg1 ;
+(BOOL)isExclusivelyCJKString:(id)arg1 characterSets:(id)arg2 ;
+(id)fontAttributeDictionary;
+(double)widthOfString:(id)arg1 attributes:(id)arg2 ;
+(id)_groupStringsByCollationEquivalency:(id)arg1 ;
+(BOOL)_dictionary:(id)arg1 containsCollationEquivalentKey:(id)arg2 ;
+(BOOL)isString:(id)arg1 exclusivelyInCharacterSet:(USetRef)arg2 ;
+(id)_resultWithAllCharacters:(/*^block*/id)arg1 string:(id)arg2 ;
+(id)localizedLabelsForLabels:(id)arg1 languageIdentifiers:(id)arg2 ;
+(id)localizedBadgeLabelsForUnlocalizedLabels:(id)arg1 ;
+(id)stringByShorteningString:(id)arg1 maximumWidth:(double)arg2 attributes:(id)arg3 ;
+(id)standardLabelIdentifiers;
-(NSURL *)url;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSArray *)cachedResult;
-(void)setCachedResult:(NSArray *)arg1 ;
-(void)_validateLabelsForInstalledUnlocalizedLabels:(id)arg1 languageIdentifiers:(id)arg2 ;
-(id)cachedLocalizedLabelsForUnlocalizedLabels:(id)arg1 languageIdentifiers:(id)arg2 ;
-(NSLocale *)updatingLocale;
-(NSString *)applicableLanguage;
-(NSArray *)applicableUnlocalizedLabels;
-(NSMutableDictionary *)labelDictionary;
-(void)setApplicableLanguage:(NSString *)arg1 ;
-(void)setApplicableUnlocalizedLabels:(NSArray *)arg1 ;
-(id)initWithLabelStorage:(id)arg1 ;
-(id)cachedLocalizedLabelsForUnlocalizedLabels:(id)arg1 ;
-(void)setLabelDictionary:(NSMutableDictionary *)arg1 ;
-(void)setUpdatingLocale:(NSLocale *)arg1 ;
@end

