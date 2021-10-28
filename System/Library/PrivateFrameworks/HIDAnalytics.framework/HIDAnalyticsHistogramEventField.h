/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HIDAnalytics.framework/HIDAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HIDAnalytics/HIDAnalytics-Structs.h>
#import <HIDAnalytics/HIDAnalyticsEventFieldProtocol.h>

@class NSString;

@interface HIDAnalyticsHistogramEventField : NSObject <HIDAnalyticsEventFieldProtocol> {

	unsigned char _segmentCount;
	HIDAnalyticsHistogramSegment* _segments;
	NSString* _fieldName;

}

@property (readonly) NSString * fieldName;                          //@synthesize fieldName=_fieldName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) id value; 
-(void)dealloc;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)setIntegerValue:(unsigned long long)arg1 ;
-(NSString *)fieldName;
-(id)initWithAttributes:(id)arg1 segments:(HIDAnalyticsHistogramSegmentConfig*)arg2 count:(long long)arg3 ;
-(void)createBuckets:(HIDAnalyticsHistogramSegmentConfig*)arg1 count:(long long)arg2 ;
@end
