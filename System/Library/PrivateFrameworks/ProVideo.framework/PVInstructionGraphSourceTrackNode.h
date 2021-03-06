/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PVInstructionGraphSourceNode.h>

@interface PVInstructionGraphSourceTrackNode : PVInstructionGraphSourceNode {

	int _trackID;
	int _fillMode;
	CGSize _clipNaturalSize;
	CGRect _cropRect;

}

@property (assign,nonatomic) int trackID;                         //@synthesize trackID=_trackID - In the implementation block
@property (assign,nonatomic) CGRect cropRect;                     //@synthesize cropRect=_cropRect - In the implementation block
@property (assign,nonatomic) int fillMode;                        //@synthesize fillMode=_fillMode - In the implementation block
@property (assign,nonatomic) CGSize clipNaturalSize;              //@synthesize clipNaturalSize=_clipNaturalSize - In the implementation block
+(id)newSourceTrackNode:(int)arg1 animation:(id)arg2 fillMode:(int)arg3 clipNaturalSize:(CGSize)arg4 ;
+(id)newSourceTrackNode:(int)arg1 transform:(CGAffineTransform)arg2 cropRect:(CGRect)arg3 clipNaturalSize:(CGSize)arg4 ;
-(BOOL)isPortrait;
-(int)trackID;
-(void)setFillMode:(int)arg1 ;
-(CGRect)cropRect;
-(int)fillMode;
-(void)setCropRect:(CGRect)arg1 ;
-(void)setTrackID:(int)arg1 ;
-(id)requiredSourceTrackIDs;
-(CGSize)clipNaturalSize;
-(void)setClipNaturalSize:(CGSize)arg1 ;
-(HGRef<HGNode>*)internalHGNodeForTime:(SCD_Struct_PV20)arg1 trackInputs:(const PVInputHGNodeMap<PVInstructionGraphSourceNode *>*)arg2 renderer:(const HGRef<HGRenderer>Ref)arg3 igContext:(HGRef<PVInstructionGraphContext>*)arg4 ;
-(id)dotTreeLabel:(HGRef<PVInstructionGraphContext>*)arg1 ;
-(id)instructionGraphNodeDescription;
-(BOOL)isPassthru;
-(PCRect<double>)inputSizeForPVEffect:(id)arg1 igContext:(HGRef<PVInstructionGraphContext>*)arg2 ;
-(PCMatrix44Tmpl<double>)pixelTransformForPVEffect:(id)arg1 igContext:(HGRef<PVInstructionGraphContext>*)arg2 ;
@end

