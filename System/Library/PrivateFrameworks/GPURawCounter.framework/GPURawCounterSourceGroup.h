/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:19 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GPURawCounter.framework/GPURawCounter
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSArray, NSDictionary;


@protocol GPURawCounterSourceGroup <NSObject>
@property (readonly) NSString * name; 
@property (readonly) NSArray * sourceList; 
@property (assign) unsigned long long samplingPeriodInMicroseconds; 
@property (assign) unsigned long long samplingTriggers; 
@property (copy) NSDictionary * vendorOptions; 
@property (readonly) unsigned long long sampleMarker; 
@property (readonly) unsigned long long availableCounterTriggers; 
@required
-(NSString *)name;
-(BOOL)stopSampling;
-(unsigned long long)availableCounterTriggers;
-(BOOL)startSampling;
-(NSArray *)sourceList;
-(unsigned long long)samplingPeriodInMicroseconds;
-(void)setSamplingPeriodInMicroseconds:(unsigned long long)arg1;
-(unsigned long long)samplingTriggers;
-(void)setSamplingTriggers:(unsigned long long)arg1;
-(NSDictionary *)vendorOptions;
-(void)setVendorOptions:(id)arg1;
-(unsigned long long)sampleMarker;

@end
