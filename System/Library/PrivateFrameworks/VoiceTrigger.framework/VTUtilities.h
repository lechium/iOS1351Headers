/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:29 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface VTUtilities : NSObject
+(BOOL)isInternalInstall;
+(BOOL)isAlwaysOn;
+(id)deviceProductType;
+(id)deviceProductVersion;
+(BOOL)isNano;
+(BOOL)VTIsHorseman;
+(BOOL)supportBargeIn;
+(void)forceReload;
+(unsigned long long)deviceCategoryForDeviceProductType:(id)arg1 ;
+(double)_round:(double)arg1 withPlaces:(int)arg2 ;
+(id)sanitizeEventInfoForLogging:(id)arg1 ;
+(double)systemUpTime;
+(BOOL)supportTTS;
+(BOOL)supportExternalPhraseSpotter;
+(BOOL)supportPremiumAssets;
+(id)deviceSoftwareVersion;
+(id)getAssetHashFromConfigPath:(id)arg1 ;
+(double)VTMachAbsoluteTimeGetTimeInterval:(unsigned long long)arg1 ;
@end

