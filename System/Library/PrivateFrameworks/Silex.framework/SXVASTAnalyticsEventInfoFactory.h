/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:44 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SXVASTAnalyticsEventInfoFactory.h>

@protocol SXVASTAnalyticsEventInfoFactory <NSObject>
@required
-(id)createAnalyticsEventInfo;
-(id)createAnalyticsEventInfoWithMetadata:(id)arg1;
-(id)createAnalyticsProgressEventInfoForQuartile:(unsigned long long)arg1 withMetadata:(id)arg2;

@end


@protocol SVVisibilityMonitoring, SVVolumeProviding;
@class NSString;

@interface SXVASTAnalyticsEventInfoFactory : NSObject <SXVASTAnalyticsEventInfoFactory> {

	id<SVVisibilityMonitoring> _visibilityMonitor;
	id<SVVolumeProviding> _volumeProvider;

}

@property (nonatomic,readonly) id<SVVisibilityMonitoring> visibilityMonitor;              //@synthesize visibilityMonitor=_visibilityMonitor - In the implementation block
@property (nonatomic,readonly) id<SVVolumeProviding> volumeProvider;                      //@synthesize volumeProvider=_volumeProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVVisibilityMonitoring>)visibilityMonitor;
-(id<SVVolumeProviding>)volumeProvider;
-(id)createAnalyticsEventInfo;
-(id)createAnalyticsEventInfoWithMetadata:(id)arg1 ;
-(id)createAnalyticsProgressEventInfoForQuartile:(unsigned long long)arg1 withMetadata:(id)arg2 ;
-(id)initWithVisibilityMonitor:(id)arg1 volumeProvider:(id)arg2 ;
@end
