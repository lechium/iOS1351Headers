/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NTKEnumeratedEditOption.h>

@class NSLocale;

@interface NTKBigNumeralsAnalogTypefaceEditOption : NTKEnumeratedEditOption

@property (nonatomic,readonly) unsigned long long typeface; 
@property (nonatomic,readonly) NSLocale * locale; 
+(id)defaultOptionForLocale:(id)arg1 device:(id)arg2 ;
+(id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)_nameLocalizationKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)_orderedValuesForDevice:(id)arg1 ;
+(id)__orderedValuesForDevice:(id)arg1 ;
+(id)optionWithTypeface:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)localeForTypeface:(unsigned long long)arg1 ;
-(NSLocale *)locale;
-(unsigned long long)typeface;
-(long long)swatchStyle;
-(id)_valueToFaceBundleStringDict;
@end
