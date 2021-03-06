/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:47 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/PUDisplayLocationProvider.h>

@protocol PUDisplayLocationProvider
@required
-(CGPoint*)locationInView:(id)arg1;

@end


@protocol UICoordinateSpace;
@interface PUDisplayLocationProvider : NSObject <PUDisplayLocationProvider> {

	id<UICoordinateSpace> __coordinateSpace;
	CGPoint __point;

}

@property (nonatomic,readonly) CGPoint _point;                                      //@synthesize _point=__point - In the implementation block
@property (nonatomic,readonly) id<UICoordinateSpace> _coordinateSpace;              //@synthesize _coordinateSpace=__coordinateSpace - In the implementation block
-(id)init;
-(CGPoint)locationInView:(id)arg1 ;
-(CGPoint)_point;
-(id<UICoordinateSpace>)_coordinateSpace;
-(id)initWithPoint:(CGPoint)arg1 inCoordinateSpace:(id)arg2 ;
@end

