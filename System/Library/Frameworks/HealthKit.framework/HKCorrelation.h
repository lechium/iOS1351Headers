/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:07 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HKSample.h>

@class NSMutableDictionary, NSUUID, HKCorrelationType, NSSet;

@interface HKCorrelation : HKSample {

	NSMutableDictionary* _objects;

}

@property (getter=_UUID,readonly) NSUUID * UUID; 
@property (readonly) HKCorrelationType * correlationType; 
@property (copy,readonly) NSSet * objects; 
+(BOOL)supportsSecureCoding;
+(BOOL)_isConcreteObjectClass;
+(id)correlationWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 objects:(id)arg4 device:(id)arg5 metadata:(id)arg6 ;
+(BOOL)_allowEmptyCorrelations;
+(id)correlationWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 objects:(id)arg4 ;
+(id)correlationWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 objects:(id)arg4 metadata:(id)arg5 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(id)_UUID;
-(NSSet *)objects;
-(id)_allTypes;
-(id)_validateConfigurationWithOptions:(unsigned long long)arg1 ;
-(HKCorrelationType *)correlationType;
-(void)_addCorrelatedObjects:(id)arg1 ;
-(void)_addCorrelatedObject:(id)arg1 ;
-(BOOL)_containsObjects;
-(id)objectsForType:(id)arg1 ;
-(void)_filterCorrelatedObjectsWithFilterDictionary:(id)arg1 ;
-(BOOL)_correlatedObjectsMatchFilterDictionary:(id)arg1 ;
-(void)_removeAllCorrelatedObjects;
@end
