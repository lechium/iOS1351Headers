/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:13 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class TDModelAsset, NSSet;

@interface TDModelRenditionSpec : TDRenditionSpec

@property (nonatomic,retain) TDModelAsset * asset; 
@property (nonatomic,retain) NSSet * childRenditions; 
@property (assign,nonatomic) int modelAssetIndex; 
+(id)fetchRequest;
-(id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3 ;
-(void)processModelObjectsInDocument:(id)arg1 ;
-(void)processMesh:(id)arg1 withAssetMeshIndex:(unsigned*)arg2 assetKeySpec:(id)arg3 inDocument:(id)arg4 ;
@end
