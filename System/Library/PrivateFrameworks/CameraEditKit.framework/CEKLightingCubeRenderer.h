/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:45 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CameraEditKit/CameraEditKit-Structs.h>
@class CEKLightingCube, CEKLightingCubeAppearance;

@interface CEKLightingCubeRenderer : NSObject {

	CEKLightingCube* _cube;
	CEKLightingCubeAppearance* _appearance;
	long long _components;

}
-(id)initWithCube:(id)arg1 appearance:(id)arg2 components:(long long)arg3 ;
-(void)renderInContext:(CGContextRef)arg1 size:(CGSize)arg2 scale:(double)arg3 cornerRadius:(double)arg4 stroke:(double)arg5 ;
@end
