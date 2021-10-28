/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsSamplerState.h>

@class MTLSamplerDescriptor;

@interface MTLTelemetrySamplerState : MTLToolsSamplerState {

	BOOL isAniso;
	MTLSamplerDescriptor* _descriptor;

}

@property (nonatomic,copy,readonly) MTLSamplerDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
-(void)dealloc;
-(MTLSamplerDescriptor *)descriptor;
-(void)setSamplerStatsWithDescriptor:(id)arg1 telemetryStat:(MTLTelemetrySamplerStatRec*)arg2 ;
-(id)initWithBaseSamplerState:(id)arg1 device:(id)arg2 descriptor:(id)arg3 ;
@end
