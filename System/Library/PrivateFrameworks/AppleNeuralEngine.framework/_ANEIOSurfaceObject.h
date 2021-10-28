/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppleNeuralEngine.framework/AppleNeuralEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AppleNeuralEngine/AppleNeuralEngine-Structs.h>
@interface _ANEIOSurfaceObject : NSObject {

	IOSurfaceRef _ioSurface;

}

@property (nonatomic,readonly) IOSurfaceRef ioSurface;              //@synthesize ioSurface=_ioSurface - In the implementation block
+(id)new;
+(id)objectWithIOSurface:(IOSurfaceRef)arg1 ;
+(IOSurfaceRef)createIOSurfaceWithWidth:(int)arg1 pixel_size:(int)arg2 height:(int)arg3 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)initWithIOSurface:(IOSurfaceRef)arg1 ;
-(IOSurfaceRef)ioSurface;
@end
