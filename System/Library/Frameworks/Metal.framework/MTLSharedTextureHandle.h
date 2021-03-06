/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:10 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MTLSharedTextureHandle : NSObject <NSSecureCoding> {

	MTLSharedTextureHandlePrivate* _priv;

}

@property (readonly) id<MTLDevice> device; 
@property (readonly) NSString * label; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithMachPort:(unsigned)arg1 ;
-(id<MTLDevice>)device;
-(NSString *)label;
-(IOSurfaceRef)ioSurface;
-(id)initWithIOSurface:(IOSurfaceRef)arg1 label:(id)arg2 ;
-(unsigned)createMachPort;
@end

