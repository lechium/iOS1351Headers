/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IconServices/IconServices-Structs.h>
#import <IconServices/ISIcon.h>

@class NSArray, LSResourceProxy;

@interface ISIconIOS : ISIcon {

	NSArray* _decorations;
	LSResourceProxy* _resourceProxy;

}

@property (retain) LSResourceProxy * resourceProxy;              //@synthesize resourceProxy=_resourceProxy - In the implementation block
@property (nonatomic,copy) NSArray * decorations;                //@synthesize decorations=_decorations - In the implementation block
+(id)backgroundQueue;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithURL:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)initWithType:(id)arg1 ;
-(NSArray *)decorations;
-(double)_aspectRatio;
-(id)imageForImageDescriptor:(id)arg1 ;
-(id)initWithResourceProxy:(id)arg1 ;
-(id)imageForDescriptor:(id)arg1 ;
-(void)prepareImagesForImageDescriptors:(id)arg1 ;
-(CGImageRef)CGImageForImageDescriptor:(id)arg1 ;
-(void)getImageForImageDescriptor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDecorations:(NSArray *)arg1 ;
-(id)_initTransparent;
-(void)getCGImageForImageDescriptor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)prepareImagesForDescriptors:(id)arg1 ;
-(id)initWithResourceProxy:(id)arg1 decorations:(id)arg2 ;
-(LSResourceProxy *)resourceProxy;
-(BOOL)isEqualToIcon:(id)arg1 ;
-(int)variantForSize:(CGSize)arg1 scale:(double)arg2 options:(unsigned long long)arg3 ;
-(id)_prepareImageForImageDescriptor:(id)arg1 ;
-(void)_prepareImageForSymbolImageDescriptor:(id)arg1 ;
-(id)_imageForSymbolImageDescriptor:(id)arg1 ;
-(void)setResourceProxy:(LSResourceProxy *)arg1 ;
@end

