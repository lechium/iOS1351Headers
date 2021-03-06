/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NeutrinoCore/_NUImageRenderResult.h>
#import <libobjc.A.dylib/NUBufferRenderResult.h>

@protocol NUBufferImage;
@class NSString, NURegion, NUImageGeometry;

@interface _NUBufferRenderResult : _NUImageRenderResult <NUBufferRenderResult> {

	id<NUBufferImage> _image;

}

@property (retain) id<NUBufferImage> image;                          //@synthesize image=_image - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<NURenderStatistics> statistics; 
@property (readonly) NURegion * region; 
@property (readonly) NUImageGeometry * geometry; 
-(id<NUBufferImage>)image;
-(void)setImage:(id<NUBufferImage>)arg1 ;
@end

