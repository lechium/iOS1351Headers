/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:18 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <GameCenterUI/GameCenterUI-Structs.h>
@interface GKBubbleShape : NSObject {

	GKVertexCurve* _vertexCurves;
	unsigned long long _vertexCount;
	double _vertexVariance;
	double _controlpointVariance;
	double _endpointVariance;

}

@property (assign,nonatomic) GKVertexCurve* vertexCurves;                 //@synthesize vertexCurves=_vertexCurves - In the implementation block
@property (assign,nonatomic) unsigned long long vertexCount;              //@synthesize vertexCount=_vertexCount - In the implementation block
@property (assign,nonatomic) double vertexVariance;                       //@synthesize vertexVariance=_vertexVariance - In the implementation block
@property (assign,nonatomic) double controlpointVariance;                 //@synthesize controlpointVariance=_controlpointVariance - In the implementation block
@property (assign,nonatomic) double endpointVariance;                     //@synthesize endpointVariance=_endpointVariance - In the implementation block
+(id)standardBubbleShape;
+(id)standardBezierPathForSize:(CGSize)arg1 ;
-(void)dealloc;
-(unsigned long long)vertexCount;
-(void)setVertexCount:(unsigned long long)arg1 ;
-(id)pathForSize:(CGSize)arg1 ;
-(id)initWithVertexCount:(unsigned long long)arg1 vertexVariance:(double)arg2 endpointVariance:(double)arg3 controlpointVariance:(double)arg4 ;
-(void)generateVertexCurves;
-(GKVertexCurve*)vertexCurves;
-(void)setVertexCurves:(GKVertexCurve*)arg1 ;
-(double)vertexVariance;
-(void)setVertexVariance:(double)arg1 ;
-(double)controlpointVariance;
-(void)setControlpointVariance:(double)arg1 ;
-(double)endpointVariance;
-(void)setEndpointVariance:(double)arg1 ;
@end

