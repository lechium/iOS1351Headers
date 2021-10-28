/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:12 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, DNDModeAssertionLifetime, NSDate;

@interface DNDModeAssertionDetails : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _identifier;
	NSString* _modeIdentifier;
	DNDModeAssertionLifetime* _lifetime;
	NSDate* _userVisibleEndDate;

}

@property (getter=isUserRequested,nonatomic,readonly) BOOL userRequested; 
@property (nonatomic,copy,readonly) NSDate * userVisibleEndDate;                       //@synthesize userVisibleEndDate=_userVisibleEndDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * modeIdentifier;                         //@synthesize modeIdentifier=_modeIdentifier - In the implementation block
@property (nonatomic,copy,readonly) DNDModeAssertionLifetime * lifetime;               //@synthesize lifetime=_lifetime - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)detailsWithIdentifier:(id)arg1 modeIdentifier:(id)arg2 lifetime:(id)arg3 ;
+(id)userRequestedAssertionDetailsWithIdentifier:(id)arg1 modeIdentifier:(id)arg2 lifetime:(id)arg3 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(DNDModeAssertionLifetime *)lifetime;
-(NSString *)modeIdentifier;
-(BOOL)isUserRequested;
-(id)_initWithDetails:(id)arg1 ;
-(id)_initWithIdentifier:(id)arg1 modeIdentifier:(id)arg2 lifetime:(id)arg3 userVisibleEndDate:(id)arg4 ;
-(NSDate *)userVisibleEndDate;
@end
