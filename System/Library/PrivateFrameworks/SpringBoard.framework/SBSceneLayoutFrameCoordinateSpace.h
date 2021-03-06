/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSceneLayoutCoordinateSpace.h>

@class CALayer;

@interface SBSceneLayoutFrameCoordinateSpace : SBSceneLayoutCoordinateSpace {

	CALayer* _containerLayer;
	CALayer* _contentLayer;

}
-(CGRect)bounds;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(CGRect)convertRect:(CGRect)arg1 toCoordinateSpace:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 fromCoordinateSpace:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 withinCoordinateSpace:(id)arg2 ;
@end

