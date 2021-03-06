/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:22 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MediaExperience.framework/MediaExperience
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MediaExperience/MediaExperience-Structs.h>
@class ARPPredictionContext;

@interface FigRoutingSessionUpdateState : NSObject {

	OpaqueFigRoutingSessionRef _newSession;
	ARPPredictionContext* _predictionContext;

}

@property (nonatomic,retain) OpaqueFigRoutingSessionRef newSession;                 //@synthesize newSession=_newSession - In the implementation block
@property (nonatomic,retain) ARPPredictionContext * predictionContext;              //@synthesize predictionContext=_predictionContext - In the implementation block
-(void)dealloc;
-(id)initWithNewSession:(OpaqueFigRoutingSessionRef)arg1 ;
-(OpaqueFigRoutingSessionRef)newSession;
-(void)setNewSession:(OpaqueFigRoutingSessionRef)arg1 ;
-(ARPPredictionContext *)predictionContext;
-(void)setPredictionContext:(ARPPredictionContext *)arg1 ;
@end

