/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SGDPowerLog : NSObject
+(void)startDissectionOfMessage:(id)arg1 inContext:(unsigned long long)arg2 ;
+(void)endDissectionOfMessage:(id)arg1 inContext:(unsigned long long)arg2 ;
+(void)logPrewarmWithLastPrewarmTime:(double)arg1 ;
+(void)startIngestOfMessages:(unsigned long long)arg1 ;
+(void)endIngestOfMessages:(unsigned long long)arg1 ;
+(void)pluginStartSetup:(id)arg1 ;
+(void)pluginEndSetup:(id)arg1 ;
+(void)pluginStartProcessingSearchableItem:(id)arg1 ;
+(void)pluginEndProcessingSearchableItem:(id)arg1 ;
+(void)pluginStartDeletion:(id)arg1 ;
+(void)pluginEndDeletion:(id)arg1 ;
@end
