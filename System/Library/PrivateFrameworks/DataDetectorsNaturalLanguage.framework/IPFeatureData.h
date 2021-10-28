/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:52 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DataDetectorsNaturalLanguage/DataDetectorsNaturalLanguage-Structs.h>
#import <DataDetectorsNaturalLanguage/IPFeature.h>

@class NSMutableDictionary;

@interface IPFeatureData : IPFeature {

	NSMutableDictionary* _contextDictionary;
	unsigned long long _type;
	id _value;

}

@property (assign) unsigned long long type;                                //@synthesize type=_type - In the implementation block
@property (retain) id value;                                               //@synthesize value=_value - In the implementation block
@property (readonly) NSMutableDictionary * contextDictionary;              //@synthesize contextDictionary=_contextDictionary - In the implementation block
+(id)featureDataWithType:(unsigned long long)arg1 value:(id)arg2 matchRange:(NSRange)arg3 ;
-(id)description;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(id)value;
-(void)setValue:(id)arg1 ;
-(NSMutableDictionary *)contextDictionary;
-(id)nGramMarker;
@end
