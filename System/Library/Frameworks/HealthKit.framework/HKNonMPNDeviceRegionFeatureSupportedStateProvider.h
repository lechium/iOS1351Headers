/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:07 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HKDeviceRegionFeatureSupportedStateProvider.h>

@class NSString;

@interface HKNonMPNDeviceRegionFeatureSupportedStateProvider : NSObject <HKDeviceRegionFeatureSupportedStateProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)electrocardiogramSupportedStateForDeviceRegion:(id)arg1 ;
+(unsigned long long)electrocardiogramSupportedStateForCurrentDeviceRegion;
+(unsigned long long)electrocardiogramSupportedOnPhone:(id)arg1 iOSVersionString:(id)arg2 ;
+(unsigned long long)atrialFibrillationDetectionSupportedStateForCurrentDeviceRegion;
+(unsigned long long)atrialFibrillationDetectionSupportedStateForDeviceRegion:(id)arg1 ;
@end
