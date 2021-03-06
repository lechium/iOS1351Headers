/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSMutableDictionary, NSLocale;

@interface OITSULocaleStructuredDictionary : NSObject {

	NSDictionary* _dictionary;
	NSMutableDictionary* _cldrLanguageScriptRegionForKey;
	NSMutableDictionary* _cldrLanguageScriptForKey;
	NSMutableDictionary* _workingDictionary;
	NSLocale* _workingLocale;
	BOOL _workingLocaleIsAutoUpdating;
	unsigned long long _autoUpdatingCount;

}
+(id)dictionaryWithContentsOfFileForLocale:(id)arg1 inDirectory:(id)arg2 inBundle:(id)arg3 ;
+(id)dateFormatterSymbolsFallbackDictionary;
+(id)numberFormatterSymbolsFallbackDictionary;
-(id)objectForKey:(id)arg1 locale:(id)arg2 ;
-(id)initWithDictionary:(id)arg1 locale:(id)arg2 ;
-(void)p_remakeWorkingDictionaryWithLocale:(id)arg1 ;
-(BOOL)p_extractLanguage:(id*)arg1 script:(id*)arg2 region:(id*)arg3 fromString:(id)arg4 ;
-(id)p_makeLocaleIdentifierWithLanguage:(id)arg1 script:(id)arg2 region:(id)arg3 ;
@end

