/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NTKPhoto, PHAsset;

@interface _NTKPickedPhoto : NSObject {

	NTKPhoto* _photo;
	PHAsset* _asset;
	unsigned long long _subsampleFactor;

}

@property (nonatomic,retain) NTKPhoto * photo;                                //@synthesize photo=_photo - In the implementation block
@property (nonatomic,retain) PHAsset * asset;                                 //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) unsigned long long subsampleFactor;              //@synthesize subsampleFactor=_subsampleFactor - In the implementation block
-(PHAsset *)asset;
-(void)setAsset:(PHAsset *)arg1 ;
-(NTKPhoto *)photo;
-(void)setPhoto:(NTKPhoto *)arg1 ;
-(unsigned long long)subsampleFactor;
-(void)setSubsampleFactor:(unsigned long long)arg1 ;
@end
