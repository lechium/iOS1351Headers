/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:01 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface PLPhotoEffect : NSObject {

	BOOL _isPortrait;
	BOOL _isLegacy;
	NSString* _filterIdentifier;
	NSString* _displayName;
	NSString* _CIFilterName;
	long long _lightingVersion;

}

@property (nonatomic,copy,readonly) NSString * filterIdentifier;              //@synthesize filterIdentifier=_filterIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * CIFilterName;                  //@synthesize CIFilterName=_CIFilterName - In the implementation block
@property (nonatomic,readonly) long long latestVersion; 
@property (nonatomic,readonly) long long lightingVersion;                     //@synthesize lightingVersion=_lightingVersion - In the implementation block
@property (nonatomic,readonly) BOOL isPortrait;                               //@synthesize isPortrait=_isPortrait - In the implementation block
@property (nonatomic,readonly) BOOL isLegacy;                                 //@synthesize isLegacy=_isLegacy - In the implementation block
+(id)effectWithCIFilterName:(id)arg1 ;
+(id)_legacyEffectWithIdentifier:(id)arg1 CIFilterName:(id)arg2 ;
+(id)_effectWithIdentifier:(id)arg1 CIFilterName:(id)arg2 displayName:(id)arg3 ;
+(id)_lightingEffectWithIdentifier:(id)arg1 CIFilterName:(id)arg2 lightingVersion:(long long)arg3 ;
+(id)allEffects;
+(id)standardSupportedEffects;
+(id)allSupportedEffects;
+(BOOL)isEffectNoneForIdentifier:(id)arg1 ;
+(BOOL)isEffectWithIdentifier:(id)arg1 equalToEffectWithIdentifier:(id)arg2 ;
+(unsigned long long)_indexOfEffectWithIdentifier:(id)arg1 ;
+(id)effectWithIdentifier:(id)arg1 ;
-(id)description;
-(NSString *)displayName;
-(BOOL)isLegacy;
-(BOOL)isPortrait;
-(long long)latestVersion;
-(NSString *)filterIdentifier;
-(id)newEffectFilter;
-(NSString *)CIFilterName;
-(long long)lightingVersion;
@end

