/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:53 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AVVideoCompositionInstruction;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, AVVideoCompositionRenderContext, NSDictionary, NSArray;

@interface AVAsynchronousVideoCompositionRequestInternal : NSObject {

	AVWeakReference* _session;
	AVVideoCompositionRenderContext* _renderContext;
	OpaqueFigVideoCompositorFrameRef _compositionFrame;
	SCD_Struct_AV7 _compositionTime;
	NSDictionary* _sourcesByTrackID;
	NSArray* _sourceTrackIDsInClientOrder;
	id<AVVideoCompositionInstruction> _instruction;
	BOOL _isFinished;

}

@property (nonatomic,retain) AVWeakReference * session;                                      //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) AVVideoCompositionRenderContext * renderContext;                //@synthesize renderContext=_renderContext - In the implementation block
@property (assign,nonatomic) OpaqueFigVideoCompositorFrameRef compositionFrame;              //@synthesize compositionFrame=_compositionFrame - In the implementation block
@property (assign,nonatomic) SCD_Struct_AV7 compositionTime;                                 //@synthesize compositionTime=_compositionTime - In the implementation block
@property (nonatomic,retain) NSDictionary * sourcesByTrackID;                                //@synthesize sourcesByTrackID=_sourcesByTrackID - In the implementation block
@property (nonatomic,retain) NSArray * sourceTrackIDsInClientOrder;                          //@synthesize sourceTrackIDsInClientOrder=_sourceTrackIDsInClientOrder - In the implementation block
@property (nonatomic,retain) id<AVVideoCompositionInstruction> instruction;                  //@synthesize instruction=_instruction - In the implementation block
@property (assign,nonatomic) BOOL isFinished;                                                //@synthesize isFinished=_isFinished - In the implementation block
-(void)dealloc;
-(BOOL)isFinished;
-(AVWeakReference *)session;
-(void)setSession:(AVWeakReference *)arg1 ;
-(void)setIsFinished:(BOOL)arg1 ;
-(AVVideoCompositionRenderContext *)renderContext;
-(SCD_Struct_AV7)compositionTime;
-(void)setRenderContext:(AVVideoCompositionRenderContext *)arg1 ;
-(OpaqueFigVideoCompositorFrameRef)compositionFrame;
-(void)setCompositionFrame:(OpaqueFigVideoCompositorFrameRef)arg1 ;
-(void)setCompositionTime:(SCD_Struct_AV7)arg1 ;
-(NSDictionary *)sourcesByTrackID;
-(void)setSourcesByTrackID:(NSDictionary *)arg1 ;
-(NSArray *)sourceTrackIDsInClientOrder;
-(void)setSourceTrackIDsInClientOrder:(NSArray *)arg1 ;
-(id<AVVideoCompositionInstruction>)instruction;
-(void)setInstruction:(id<AVVideoCompositionInstruction>)arg1 ;
@end

