/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:07 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/_HKMetadataFilter.h>

@interface _HKComparisonMetadataFilter : _HKMetadataFilter {

	id _value;

}

@property (nonatomic,readonly) id value;              //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)_acceptsOperatorType:(unsigned long long)arg1 ;
+(id)filterWithKey:(id)arg1 operatorType:(unsigned long long)arg2 value:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)value;
-(BOOL)acceptsDataObject:(id)arg1 ;
-(id)_initWithKey:(id)arg1 operatorType:(unsigned long long)arg2 value:(id)arg3 ;
@end
