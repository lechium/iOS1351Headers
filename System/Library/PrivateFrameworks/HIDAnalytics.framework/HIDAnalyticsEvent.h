/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HIDAnalytics.framework/HIDAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <HIDAnalytics/HIDAnalytics-Structs.h>
@class NSMutableDictionary, NSString, NSDictionary;

@interface HIDAnalyticsEvent : NSObject {

	NSMutableDictionary* _fields;
	BOOL _isUpdated;
	NSString* _name;
	NSDictionary* _desc;

}

@property (retain) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (retain) NSDictionary * desc;              //@synthesize desc=_desc - In the implementation block
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)cancel;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)setIntegerValue:(unsigned long long)arg1 ;
-(void)addField:(id)arg1 ;
-(void)activate;
-(NSDictionary *)desc;
-(void)setDesc:(NSDictionary *)arg1 ;
-(id)initWithAttributes:(id)arg1 description:(id)arg2 ;
-(void)addHistogramFieldWithSegments:(id)arg1 segments:(HIDAnalyticsHistogramSegmentConfig*)arg2 count:(long long)arg3 ;
-(void)setIntegerValue:(unsigned long long)arg1 forField:(id)arg2 ;
@end
