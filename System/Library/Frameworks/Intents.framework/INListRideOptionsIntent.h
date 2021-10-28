/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:08 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INListRideOptionsIntentExport.h>

@class CLPlacemark, NSString;

@interface INListRideOptionsIntent : INIntent <INListRideOptionsIntentExport>

@property (nonatomic,copy,readonly) CLPlacemark * pickupLocation; 
@property (nonatomic,copy,readonly) CLPlacemark * dropOffLocation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)domain;
-(id)_metadata;
-(id)verb;
-(void)setDomain:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(void)_setMetadata:(id)arg1 ;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(void)setVerb:(id)arg1 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(CLPlacemark *)pickupLocation;
-(void)setPickupLocation:(CLPlacemark *)arg1 ;
-(CLPlacemark *)dropOffLocation;
-(void)setDropOffLocation:(CLPlacemark *)arg1 ;
-(id)initWithPickupLocation:(id)arg1 dropOffLocation:(id)arg2 ;
@end
