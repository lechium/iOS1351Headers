/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:24 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGTextureAtlasManager.h>

@protocol MTLDevice, OS_dispatch_queue;
@class NSIndexSet, NSArray, NSObject, PXGColorProgram, NSString;

@interface PXGMetalTextureAtlasManager : NSObject <PXGTextureAtlasManager> {

	id<MTLDevice> _device;
	NSObject*<OS_dispatch_queue> _syncQueue;
	NSObject*<OS_dispatch_queue> _requestQueue;
	unsigned _capacityPerAtlas;
	unsigned long long _pixelFormat;
	NSIndexSet* _skipRenderSpriteIndexes;
	PXGColorProgram* _colorProgram;
	NSArray* _atlasTextures;
	CGSize _thumbnailSize;

}

@property (copy) NSArray * atlasTextures;                                       //@synthesize atlasTextures=_atlasTextures - In the implementation block
@property (nonatomic,readonly) PXGColorProgram * colorProgram;                  //@synthesize colorProgram=_colorProgram - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGSize thumbnailSize;                            //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
@property (nonatomic,readonly) unsigned long long pixelFormat;                  //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (nonatomic,retain) NSIndexSet * skipRenderSpriteIndexes;              //@synthesize skipRenderSpriteIndexes=_skipRenderSpriteIndexes - In the implementation block
@property (nonatomic,copy,readonly) NSArray * textures; 
-(id)init;
-(NSString *)description;
-(unsigned long long)pixelFormat;
-(NSArray *)textures;
-(CGSize)thumbnailSize;
-(void)applyChangeDetails:(id)arg1 ;
-(PXGColorProgram *)colorProgram;
-(unsigned)addSpriteWithTextureRequestID:(int)arg1 thumbnailData:(id)arg2 bytesPerRow:(unsigned long long)arg3 contentsRect:(CGRect)arg4 ;
-(void)processPendingThumbnailRequestIDsWithHandler:(/*^block*/id)arg1 ;
-(void)removeSpriteIndex:(unsigned)arg1 atThumbnailIndex:(unsigned)arg2 ;
-(void)pruneUnusedTextures;
-(NSIndexSet *)skipRenderSpriteIndexes;
-(void)setSkipRenderSpriteIndexes:(NSIndexSet *)arg1 ;
-(id)initWithThumbnailSize:(CGSize)arg1 pixelFormat:(unsigned long long)arg2 capacityPerAtlas:(unsigned)arg3 requestQueue:(id)arg4 colorProgram:(id)arg5 device:(id)arg6 ;
-(void)_updateAtlasSpriteIndexSkips;
-(void)_requestQueue_getNextAvailableAtlas:(id*)arg1 thumbnailOffset:(unsigned*)arg2 ;
-(void)_getAtlas:(id*)arg1 localThumbnailIndex:(unsigned*)arg2 forGlobalThumbnailIndex:(unsigned)arg3 ;
-(NSArray *)atlasTextures;
-(void)setAtlasTextures:(NSArray *)arg1 ;
@end
