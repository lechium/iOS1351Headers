/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARConfiguration.h>

@class ARWorldMap;

@interface ARPositionalTrackingConfiguration : ARConfiguration {

	BOOL _relocalizationEnabled;
	BOOL _vioFusionEnabled;
	unsigned long long _planeDetection;
	ARWorldMap* _initialWorldMap;

}

@property (assign,getter=isRelocalizationEnabled,nonatomic) BOOL relocalizationEnabled;              //@synthesize relocalizationEnabled=_relocalizationEnabled - In the implementation block
@property (assign,getter=isVIOFusionEnabled,nonatomic) BOOL vioFusionEnabled;                        //@synthesize vioFusionEnabled=_vioFusionEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long planeDetection;                                      //@synthesize planeDetection=_planeDetection - In the implementation block
@property (nonatomic,retain) ARWorldMap * initialWorldMap;                                           //@synthesize initialWorldMap=_initialWorldMap - In the implementation block
+(id)new;
+(BOOL)isSupported;
+(id)supportedVideoFormats;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPlaneDetection:(unsigned long long)arg1 ;
-(ARWorldMap *)initialWorldMap;
-(unsigned long long)planeDetection;
-(void)createTechniques:(id)arg1 ;
-(id)imageSensorSettings;
-(void)setRelocalizationEnabled:(BOOL)arg1 ;
-(void)setInitialWorldMap:(ARWorldMap *)arg1 ;
-(id)worldTrackingOptions;
-(BOOL)isRelocalizationEnabled;
-(BOOL)isVIOFusionEnabled;
-(void)setVioFusionEnabled:(BOOL)arg1 ;
@end

