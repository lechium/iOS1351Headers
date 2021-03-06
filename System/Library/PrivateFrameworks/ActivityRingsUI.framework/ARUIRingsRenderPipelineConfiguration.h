/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:34 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface ARUIRingsRenderPipelineConfiguration : NSObject {

	BOOL _hasVisibleRings;
	BOOL _ringsAreEmpty;
	BOOL _needsAlphaReductionPass;
	BOOL _hasOverlappingRing;

}

@property (assign,nonatomic) BOOL hasVisibleRings;                      //@synthesize hasVisibleRings=_hasVisibleRings - In the implementation block
@property (assign,nonatomic) BOOL ringsAreEmpty;                        //@synthesize ringsAreEmpty=_ringsAreEmpty - In the implementation block
@property (assign,nonatomic) BOOL needsAlphaReductionPass;              //@synthesize needsAlphaReductionPass=_needsAlphaReductionPass - In the implementation block
@property (assign,nonatomic) BOOL hasOverlappingRing;                   //@synthesize hasOverlappingRing=_hasOverlappingRing - In the implementation block
-(BOOL)hasVisibleRings;
-(BOOL)ringsAreEmpty;
-(BOOL)hasOverlappingRing;
-(BOOL)needsAlphaReductionPass;
-(void)setHasVisibleRings:(BOOL)arg1 ;
-(void)setRingsAreEmpty:(BOOL)arg1 ;
-(void)setNeedsAlphaReductionPass:(BOOL)arg1 ;
-(void)setHasOverlappingRing:(BOOL)arg1 ;
@end

