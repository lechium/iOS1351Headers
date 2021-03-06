/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:24 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Celestial/BWInferenceConfiguration.h>

@interface BWMonocularDepthConfiguration : BWInferenceConfiguration {

	unsigned _monocularDepthType;
	long long _depthPrioritization;

}

@property (nonatomic,readonly) unsigned monocularDepthType;                //@synthesize monocularDepthType=_monocularDepthType - In the implementation block
@property (nonatomic,readonly) long long depthPrioritization;              //@synthesize depthPrioritization=_depthPrioritization - In the implementation block
-(id)initWithInferenceType:(int)arg1 monocularDepthType:(unsigned)arg2 ;
-(unsigned)monocularDepthType;
-(long long)depthPrioritization;
@end

