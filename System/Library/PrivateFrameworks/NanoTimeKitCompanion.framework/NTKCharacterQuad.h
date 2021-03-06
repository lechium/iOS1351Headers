/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ClockKitUI/CLKUIQuad.h>

@class CLKDevice, NTKCharacterRenderer;

@interface NTKCharacterQuad : CLKUIQuad {

	CLKDevice* _clkDevice;
	NTKCharacterRenderer* _renderer;

}

@property (nonatomic,retain) NTKCharacterRenderer * renderer;              //@synthesize renderer=_renderer - In the implementation block
-(void)dealloc;
-(void)purge;
-(NTKCharacterRenderer *)renderer;
-(void)setRenderer:(NTKCharacterRenderer *)arg1 ;
-(void)setupForQuadView:(id)arg1 ;
-(BOOL)prepareForTime:(double)arg1 ;
-(void)renderForDisplayWithEncoder:(id)arg1 ;
-(id)clkDevice;
-(id)initWithCLKDevice:(id)arg1 ;
@end

