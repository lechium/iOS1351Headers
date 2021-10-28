/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXGMetalRenderTextureStore : NSObject {

	SCD_Struct_PX92* _textures;
	long long _count;
	long long _capacity;
	BOOL _sorted;

}
-(id)init;
-(void)dealloc;
-(void)addTexture:(SCD_Struct_PX92)arg1 ;
-(void)drawWithOrder:(unsigned long long)arg1 enumerationBlock:(/*^block*/id)arg2 ;
-(void)removeAllTextures;
-(void)_sortIfNeeded;
@end
