/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Memories/FlexCloudSongAsset.h>

@class NSString;

@interface FlexMobileAssetSongAsset : FlexCloudSongAsset {

	NSString* _mobileAssetTypeIdentifier;
	NSString* _mobileAssetPropertyType;

}

@property (readonly) NSString * mobileAssetTypeIdentifier;              //@synthesize mobileAssetTypeIdentifier=_mobileAssetTypeIdentifier - In the implementation block
@property (readonly) NSString * mobileAssetPropertyType;                //@synthesize mobileAssetPropertyType=_mobileAssetPropertyType - In the implementation block
-(long long)contentVersionForAssetLocation:(unsigned long long)arg1 ;
-(BOOL)contentUpdateAvaliable;
-(long long)compatibilityVersionForAssetLocation:(unsigned long long)arg1 ;
-(NSString *)mobileAssetPropertyType;
-(NSString *)mobileAssetTypeIdentifier;
-(id)_assetCachedMetadata;
-(id)initWithAssetID:(id)arg1 assetStatus:(unsigned long long)arg2 localURL:(id)arg3 cloudManager:(id)arg4 mobileAssetTypeIdentifier:(id)arg5 mobileAssetPropertyType:(id)arg6 contentVersion:(long long)arg7 compatibilityVersion:(long long)arg8 ;
@end
