/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:35 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSArray, NSObject, NSString, NSDictionary;

@interface _SFSearchEngineController : NSObject {

	NSArray* _searchEngines;
	unsigned long long _defaultSearchEngineIndex;
	NSObject*<OS_dispatch_queue> _searchEngineArrayAccessQueue;
	NSString* _countryCode;
	NSDictionary* _templateParameterValues;
	NSDictionary* _carrierTemplateParameterValues;

}

@property (nonatomic,copy,readonly) NSArray * engines; 
@property (nonatomic,copy,readonly) NSArray * enginesAvailableForUnifiedFieldSearching; 
@property (nonatomic,copy,readonly) NSArray * searchEngineNames; 
@property (nonatomic,copy,readonly) NSString * defaultSearchEngineName; 
@property (nonatomic,readonly) NSString * countryCode;                                               //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) NSDictionary * templateParameterValues;                               //@synthesize templateParameterValues=_templateParameterValues - In the implementation block
@property (nonatomic,readonly) NSDictionary * carrierTemplateParameterValues;                        //@synthesize carrierTemplateParameterValues=_carrierTemplateParameterValues - In the implementation block
+(id)sharedInstance;
+(void)_initializeSharedInstance;
+(BOOL)_deviceRegionCodeIsChina;
+(void)loadSystemLanguageProperties;
+(id)sharedInstanceIfAvailable;
-(id)init;
-(id)description;
-(NSString *)countryCode;
-(NSArray *)engines;
-(NSDictionary *)templateParameterValues;
-(NSDictionary *)carrierTemplateParameterValues;
-(void)_populateSearchEngines;
-(void)_setEngines:(id)arg1 defaultSearchEngineIndex:(unsigned long long)arg2 ;
-(void)_loadSystemProperties;
-(void)_addAllWebSearchEngineInfosToArray:(id)arg1 andAddUserVisibleWebSearchEngineInfosToArray:(id)arg2 ;
-(void)_addSpecialSearchEnginesToArray:(id)arg1 ;
-(void)_setDefaultSearchEngine:(id)arg1 ;
-(void)_postDefaultSearchEngineDidChange;
-(void)_getEngines:(id*)arg1 defaultSearchEngineIndex:(unsigned long long*)arg2 ;
-(id)defaultSearchEngine;
-(id)_existingEngineInfoFor:(id)arg1 ;
-(void)reloadSearchEngines;
-(void)setDefaultSearchEngine:(id)arg1 ;
-(id)engineInfoFor:(id)arg1 ;
-(id)engineInfoForScriptName:(id)arg1 ;
-(id)safeSearchRequestForSearchRequest:(id)arg1 ;
-(NSArray *)enginesAvailableForUnifiedFieldSearching;
-(NSArray *)searchEngineNames;
-(NSString *)defaultSearchEngineName;
@end

