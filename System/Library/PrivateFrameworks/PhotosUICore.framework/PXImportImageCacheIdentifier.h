/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface PXImportImageCacheIdentifier : NSObject {

	NSString* _assetUuid;
	unsigned long long _sizeType;
	long long _cacheIndex;

}

@property (nonatomic,copy) NSString * assetUuid;                       //@synthesize assetUuid=_assetUuid - In the implementation block
@property (assign,nonatomic) unsigned long long sizeType;              //@synthesize sizeType=_sizeType - In the implementation block
@property (assign,nonatomic) long long cacheIndex;                     //@synthesize cacheIndex=_cacheIndex - In the implementation block
-(NSString *)assetUuid;
-(void)setAssetUuid:(NSString *)arg1 ;
-(long long)cacheIndex;
-(unsigned long long)sizeType;
-(void)setSizeType:(unsigned long long)arg1 ;
-(void)setCacheIndex:(long long)arg1 ;
@end

