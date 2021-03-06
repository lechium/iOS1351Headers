/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:24 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@class NSDictionary, FigSDOFRenderingTuningParameters;

@interface BWStillImagePortraitMetadataNode : BWNode {

	NSDictionary* _sensorIDDictionary;
	NSDictionary* _cameraInfoByPortType;
	FigSDOFRenderingTuningParameters* _sdofTuningParams;

}
+(void)initialize;
-(void)dealloc;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(id)initWithSensorIDDictionary:(id)arg1 cameraInfoByPortType:(id)arg2 ;
-(int)_loadAndConfigureSDOFRenderering;
-(void)_attachPortraitLightingEffectMetadataToDepthMetadata:(id)arg1 ;
@end

