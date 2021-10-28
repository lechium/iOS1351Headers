/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:52 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVVideoCompositionLayerInstruction.h>

@class AVMutableVideoCompositionLayerInstructionInternal;

@interface AVMutableVideoCompositionLayerInstruction : AVVideoCompositionLayerInstruction {

	AVMutableVideoCompositionLayerInstructionInternal* _mutableLayerInstruction;

}

@property (assign,nonatomic) int trackID; 
+(id)videoCompositionLayerInstructionWithAssetTrack:(id)arg1 ;
+(id)videoCompositionLayerInstruction;
-(int)trackID;
-(void)setTrackID:(int)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 atTime:(SCD_Struct_AV7)arg2 ;
-(void)setOpacity:(float)arg1 atTime:(SCD_Struct_AV7)arg2 ;
-(void)setCropRectangle:(CGRect)arg1 atTime:(SCD_Struct_AV7)arg2 ;
-(void)setTransformRampFromStartTransform:(CGAffineTransform)arg1 toEndTransform:(CGAffineTransform)arg2 timeRange:(SCD_Struct_AV8)arg3 ;
-(void)setOpacityRampFromStartOpacity:(float)arg1 toEndOpacity:(float)arg2 timeRange:(SCD_Struct_AV8)arg3 ;
-(void)setCropRectangleRampFromStartCropRectangle:(CGRect)arg1 toEndCropRectangle:(CGRect)arg2 timeRange:(SCD_Struct_AV8)arg3 ;
@end
