/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:28 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/HMEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class CLRegion, HMFLocationAuthorization;

@interface HMLocationEvent : HMEvent <NSSecureCoding, NSCopying, NSMutableCopying> {

	int _locationAuthorization;
	CLRegion* _region;
	HMFLocationAuthorization* _authorization;

}

@property (readonly) HMFLocationAuthorization * authorization;              //@synthesize authorization=_authorization - In the implementation block
@property (assign,nonatomic) int locationAuthorization;                     //@synthesize locationAuthorization=_locationAuthorization - In the implementation block
@property (nonatomic,retain) CLRegion * region;                             //@synthesize region=_region - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)createWithDictionary:(id)arg1 home:(id)arg2 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CLRegion *)region;
-(void)setRegion:(CLRegion *)arg1 ;
-(id)initWithRegion:(id)arg1 ;
-(HMFLocationAuthorization *)authorization;
-(void)__configureWithContext:(id)arg1 eventTrigger:(id)arg2 ;
-(int)locationAuthorization;
-(void)setLocationAuthorization:(int)arg1 ;
-(void)_updateRegion:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_serializeForAdd;
-(id)initWithDict:(id)arg1 region:(id)arg2 ;
-(void)_retrieveLocationEvent;
-(void)updateRegion:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleEventUpdatedNotification:(id)arg1 ;
-(void)__locationAuthorizationUpdated:(id)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
@end
