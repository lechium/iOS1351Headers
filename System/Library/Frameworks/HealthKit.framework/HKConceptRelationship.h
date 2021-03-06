/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:07 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HKConcept, NSString;

@interface HKConceptRelationship : NSObject <NSObject, NSCopying, NSSecureCoding> {

	long long _identifier;
	HKConcept* _owner;
	NSString* _name;
	HKConcept* _destination;

}

@property (nonatomic,readonly) long long identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,__weak,readonly) HKConcept * owner;                  //@synthesize owner=_owner - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) HKConcept * destination;              //@synthesize destination=_destination - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)debugDescription;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)identifier;
-(void)setOwner:(HKConcept *)arg1 ;
-(HKConcept *)owner;
-(HKConcept *)destination;
-(id)initWithIdentifier:(long long)arg1 owner:(id)arg2 name:(id)arg3 destination:(id)arg4 ;
-(id)initWithOwner:(id)arg1 name:(id)arg2 destination:(id)arg3 ;
@end

