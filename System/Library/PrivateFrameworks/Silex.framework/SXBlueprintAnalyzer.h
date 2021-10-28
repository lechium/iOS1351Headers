/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SXBlueprintAnalyzer.h>

@protocol SXBlueprintAnalyzer <NSObject>
@required
-(void)analyzeBlueprint:(id)arg1 DOMObjectProvider:(id)arg2 onMarkerFound:(/*^block*/id)arg3 then:(/*^block*/id)arg4 onEndReached:(/*^block*/id)arg5;

@end


@class NSString;

@interface SXBlueprintAnalyzer : NSObject <SXBlueprintAnalyzer>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)markersFromBlueprint:(id)arg1 components:(id)arg2 DOMObjectProvider:(id)arg3 cursor:(id)arg4 ;
-(void)iterateMarkers:(id)arg1 onMarkerFound:(/*^block*/id)arg2 then:(/*^block*/id)arg3 onEndReached:(/*^block*/id)arg4 ;
-(BOOL)componentPlacedAboveComponentBlueprint:(id)arg1 blueprint:(id)arg2 ;
-(void)analyzeBlueprint:(id)arg1 DOMObjectProvider:(id)arg2 onMarkerFound:(/*^block*/id)arg3 then:(/*^block*/id)arg4 onEndReached:(/*^block*/id)arg5 ;
@end
