/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:28 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/_GEOLocationShifterProxy.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface _GEOLocationShifterRemoteProxy : NSObject <_GEOLocationShifterProxy> {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue; 
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)isLocationShiftRequiredForCoordinate:(SCD_Struct_GE32)arg1 ;
-(unsigned)locationShiftFunctionVersion;
-(BOOL)isLocationShiftEnabled;
-(void)shiftLatLng:(id)arg1 auditToken:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)flushDiskCache;
@end
