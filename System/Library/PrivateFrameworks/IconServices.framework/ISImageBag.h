/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IconServices/IconServices-Structs.h>
#import <libobjc.A.dylib/ISScalableCompositorResource.h>

@class NSMutableDictionary, NSString, NSArray;

@interface ISImageBag : NSObject <ISScalableCompositorResource> {

	os_unfair_lock_s _lock;
	NSMutableDictionary* _imagesByScale;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSMutableDictionary * imagesByScale;              //@synthesize imagesByScale=_imagesByScale - In the implementation block
@property (assign) os_unfair_lock_s lock;                            //@synthesize lock=_lock - In the implementation block
@property (copy,readonly) NSArray * images; 
+(id)imageBagWithResourcesNamed:(id)arg1 fromBundle:(id)arg2 ;
+(id)imageBagWithResourcesNamed:(id)arg1 fromBundle:(id)arg2 subdirectory:(id)arg3 ;
+(id)imageBagWithResourcesNamed:(id)arg1 directory:(id)arg2 ;
-(id)init;
-(NSString *)debugDescription;
-(os_unfair_lock_s)lock;
-(NSArray *)images;
-(void)setLock:(os_unfair_lock_s)arg1 ;
-(id)imageForSize:(CGSize)arg1 scale:(double)arg2 ;
-(id)initWithImages:(id)arg1 ;
-(void)insertImage:(id)arg1 ;
-(id)imagesForScale:(double)arg1 ;
-(NSMutableDictionary *)imagesByScale;
-(void)setImagesByScale:(NSMutableDictionary *)arg1 ;
@end

