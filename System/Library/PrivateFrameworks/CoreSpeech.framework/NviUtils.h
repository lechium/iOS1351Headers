/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:50 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface NviUtils : NSObject
+(id)timeStampString;
+(id)strRepForNviSignalType:(unsigned long long)arg1 ;
+(id)strRepForNviDataSourceType:(unsigned long long)arg1 ;
+(BOOL)isNviEnabled;
+(id)strRepForNviSignalMask:(unsigned long long)arg1 ;
+(unsigned long long)nviSignalTypeForStr:(id)arg1 ;
+(unsigned long long)nviDataSourceTypeForStr:(id)arg1 ;
+(BOOL)_createDirAtPath:(id)arg1 ;
+(long long)getVoiceTriggerEndSampleCountFromVTEI:(id)arg1 ;
+(double)getVoiceTriggerEndSecsFromVTEI:(id)arg1 ;
+(id)readJsonDictionaryAt:(id)arg1 ;
+(id)getValueFromDictionaryOfDictionaries:(id)arg1 keypath:(id)arg2 ;
+(BOOL)createDirAtPath:(id)arg1 ;
@end

