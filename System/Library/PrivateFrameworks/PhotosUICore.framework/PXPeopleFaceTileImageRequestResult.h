/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:24 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@class UIImage;

@interface PXPeopleFaceTileImageRequestResult : NSObject {

	BOOL _isDegraded;
	BOOL _isVeryLowQuality;
	UIImage* _image;
	id _originalObjectID;
	id _assetObjectID;
	CGSize _originalImageSize;
	CGRect _faceRect;
	PXFaceTileImageParams _params;

}

@property (nonatomic,readonly) UIImage * image;                         //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) CGRect faceRect;                         //@synthesize faceRect=_faceRect - In the implementation block
@property (nonatomic,readonly) BOOL isDegraded;                         //@synthesize isDegraded=_isDegraded - In the implementation block
@property (nonatomic,retain) id originalObjectID;                       //@synthesize originalObjectID=_originalObjectID - In the implementation block
@property (nonatomic,retain) id assetObjectID;                          //@synthesize assetObjectID=_assetObjectID - In the implementation block
@property (assign,nonatomic) PXFaceTileImageParams params;              //@synthesize params=_params - In the implementation block
@property (assign,nonatomic) BOOL isVeryLowQuality;                     //@synthesize isVeryLowQuality=_isVeryLowQuality - In the implementation block
@property (assign,nonatomic) CGSize originalImageSize;                  //@synthesize originalImageSize=_originalImageSize - In the implementation block
-(id)description;
-(CGSize)originalImageSize;
-(void)setOriginalImageSize:(CGSize)arg1 ;
-(CGRect)faceRect;
-(UIImage *)image;
-(PXFaceTileImageParams)params;
-(void)setParams:(PXFaceTileImageParams)arg1 ;
-(BOOL)isDegraded;
-(id)assetObjectID;
-(id)initWithImage:(id)arg1 faceRect:(CGRect)arg2 isDegraded:(BOOL)arg3 ;
-(id)originalObjectID;
-(void)setOriginalObjectID:(id)arg1 ;
-(void)setAssetObjectID:(id)arg1 ;
-(BOOL)isVeryLowQuality;
-(void)setIsVeryLowQuality:(BOOL)arg1 ;
@end
