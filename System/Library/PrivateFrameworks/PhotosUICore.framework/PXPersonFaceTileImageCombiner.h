/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:11 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PXPersonFaceTileImageCombiner : NSObject {

	unsigned long long _currentGeneration;

}
+(void)initialize;
+(id)_generateCombinedImageFromImages:(id)arg1 context:(id)arg2 ;
+(id)placeholderImageForNumberOfFaces:(unsigned long long)arg1 context:(id)arg2 ;
-(void)requestImageForPersons:(id)arg1 context:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)_returnCombinedImage:(id)arg1 generation:(unsigned long long)arg2 resultHandler:(/*^block*/id)arg3 ;
@end

