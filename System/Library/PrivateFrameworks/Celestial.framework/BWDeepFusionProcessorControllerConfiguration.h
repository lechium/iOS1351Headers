/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:23 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Celestial/BWStillImageProcessorConfiguration.h>

@class BWVideoFormat;

@interface BWDeepFusionProcessorControllerConfiguration : BWStillImageProcessorConfiguration {

	BWVideoFormat* _outputFormat;
	BOOL _semanticRenderingEnabled;

}

@property (nonatomic,retain) BWVideoFormat * outputFormat;               //@synthesize outputFormat=_outputFormat - In the implementation block
@property (assign,nonatomic) BOOL semanticRenderingEnabled;              //@synthesize semanticRenderingEnabled=_semanticRenderingEnabled - In the implementation block
-(void)dealloc;
-(BWVideoFormat *)outputFormat;
-(void)setOutputFormat:(BWVideoFormat *)arg1 ;
-(BOOL)semanticRenderingEnabled;
-(void)setSemanticRenderingEnabled:(BOOL)arg1 ;
@end
