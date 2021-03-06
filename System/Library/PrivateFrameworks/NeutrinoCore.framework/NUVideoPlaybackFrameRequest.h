/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURenderRequest.h>

@class NUColorSpace, NSDictionary;

@interface NUVideoPlaybackFrameRequest : NURenderRequest {

	NUColorSpace* _colorSpace;
	CVBufferRef _destinationBuffer;
	NSDictionary* _videoFrames;
	SCD_Struct_NU7 _renderScale;
	SCD_Struct_NU6 _evaluationTime;

}

@property (nonatomic,retain) NUColorSpace * colorSpace;                  //@synthesize colorSpace=_colorSpace - In the implementation block
@property (nonatomic,retain) CVBufferRef destinationBuffer;              //@synthesize destinationBuffer=_destinationBuffer - In the implementation block
@property (assign,nonatomic) SCD_Struct_NU6 evaluationTime;              //@synthesize evaluationTime=_evaluationTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_NU7 renderScale;                 //@synthesize renderScale=_renderScale - In the implementation block
@property (nonatomic,copy) NSDictionary * videoFrames;                   //@synthesize videoFrames=_videoFrames - In the implementation block
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NUColorSpace *)colorSpace;
-(void)setColorSpace:(NUColorSpace *)arg1 ;
-(SCD_Struct_NU7)renderScale;
-(void)setRenderScale:(SCD_Struct_NU7)arg1 ;
-(id)initWithComposition:(id)arg1 ;
-(void)submit:(/*^block*/id)arg1 ;
-(CVBufferRef)destinationBuffer;
-(void)setDestinationBuffer:(CVBufferRef)arg1 ;
-(id)newRenderJob;
-(long long)mediaComponentType;
-(NSDictionary *)videoFrames;
-(void)setVideoFrames:(NSDictionary *)arg1 ;
-(SCD_Struct_NU6)evaluationTime;
-(void)setEvaluationTime:(SCD_Struct_NU6)arg1 ;
@end

