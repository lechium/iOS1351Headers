/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:22 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _CDStats : NSObject
+(id)sharedInstance;
+(id)hardwareModel;
+(id)familyNames;
-(id)init;
-(id)string;
-(void)dealloc;
-(id)dictionary;
-(void)addToStatsPrinter:(id)arg1 perfMetricFamily:(id)arg2 ;
-(void)addToDictionary:(id)arg1 perfMetricFamily:(id)arg2 ;
-(void)addToDictionary:(id)arg1 perfMetric:(id)arg2 ;
@end
