/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSTimeZone;

@interface SGDataDetectorMatch : NSObject <NSSecureCoding> {

	BOOL _allDay;
	unsigned _matchType;
	int _parsecDomain;
	NSString* _valueString;
	NSString* _labelString;
	NSString* _parsecWikidataQid;
	NSDate* _detectedDate;
	NSTimeZone* _detectedTimeZone;
	NSRange _range;
	NSRange _labelRange;
	NSRange _valueRange;

}

@property (nonatomic,readonly) unsigned matchType;                         //@synthesize matchType=_matchType - In the implementation block
@property (nonatomic,readonly) NSRange range;                              //@synthesize range=_range - In the implementation block
@property (nonatomic,readonly) NSRange labelRange;                         //@synthesize labelRange=_labelRange - In the implementation block
@property (nonatomic,readonly) NSRange valueRange;                         //@synthesize valueRange=_valueRange - In the implementation block
@property (nonatomic,readonly) NSString * valueString;                     //@synthesize valueString=_valueString - In the implementation block
@property (nonatomic,readonly) NSString * labelString;                     //@synthesize labelString=_labelString - In the implementation block
@property (nonatomic,readonly) int parsecDomain;                           //@synthesize parsecDomain=_parsecDomain - In the implementation block
@property (nonatomic,readonly) NSString * parsecWikidataQid;               //@synthesize parsecWikidataQid=_parsecWikidataQid - In the implementation block
@property (nonatomic,readonly) NSDate * detectedDate;                      //@synthesize detectedDate=_detectedDate - In the implementation block
@property (nonatomic,readonly) NSTimeZone * detectedTimeZone;              //@synthesize detectedTimeZone=_detectedTimeZone - In the implementation block
@property (nonatomic,readonly) BOOL allDay;                                //@synthesize allDay=_allDay - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSRange)range;
-(unsigned)matchType;
-(NSString *)valueString;
-(NSString *)labelString;
-(BOOL)allDay;
-(NSRange)valueRange;
-(id)initWithMatchType:(unsigned)arg1 range:(NSRange)arg2 labelRange:(NSRange)arg3 labelString:(id)arg4 valueRange:(NSRange)arg5 valueString:(id)arg6 ;
-(id)initWithLookupHintInDomain:(int)arg1 range:(NSRange)arg2 labelRange:(NSRange)arg3 labelString:(id)arg4 valueRange:(NSRange)arg5 valueString:(id)arg6 qid:(id)arg7 ;
-(id)initWithDetectedDate:(id)arg1 detectedTimeZone:(id)arg2 matchType:(unsigned)arg3 range:(NSRange)arg4 labelRange:(NSRange)arg5 labelString:(id)arg6 valueRange:(NSRange)arg7 valueString:(id)arg8 allDay:(BOOL)arg9 ;
-(BOOL)isEqualToDataDetectorMatch:(id)arg1 ;
-(NSRange)labelRange;
-(int)parsecDomain;
-(NSString *)parsecWikidataQid;
-(NSDate *)detectedDate;
-(NSTimeZone *)detectedTimeZone;
@end
