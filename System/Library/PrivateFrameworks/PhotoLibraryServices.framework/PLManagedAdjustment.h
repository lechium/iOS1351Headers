/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:59 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/_PLManagedAdjustment.h>

@class NSString, NSDictionary, PLManagedAsset, NSNumber;

@interface PLManagedAdjustment : _PLManagedAdjustment

@property (assign,nonatomic) int adjustmentType; 
@property (nonatomic,copy) NSString * filterName; 
@property (nonatomic,copy) NSDictionary * filterSettings; 
@property (nonatomic,retain) PLManagedAsset * asset; 
@property (nonatomic,copy) NSNumber * identifier; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(id)entityName;
+(id)ciFiltersForAdjustmentsOnManagedAsset:(id)arg1 forDestinationImageSize:(CGSize)arg2 ;
+(void)fixupAssetSizeFromAdjustments:(id)arg1 ;
+(id)insertInPhotoLibrary:(id)arg1 ;
+(CGRect)convertCropRect:(CGRect)arg1 fromImageSize:(CGSize)arg2 toImageSize:(CGSize)arg3 ;
+(void)convertAffineTransform:(CGAffineTransform)arg1 andCropRect:(CGRect)arg2 toStraightenAngle:(double*)arg3 andCropRect:(CGRect*)arg4 ;
+(void)convertStraightenAngle:(double)arg1 andCropRect:(CGRect)arg2 toAffineTransform:(CGAffineTransform*)arg3 andCropRect:(CGRect*)arg4 ;
+(id)ciFiltersForAdjustmentsOnManagedAsset:(id)arg1 forDestinationImageSize:(CGSize)arg2 effectFilterCount:(unsigned long long*)arg3 ;
+(id)ciFiltersForAdjustmentsOnManagedAsset:(id)arg1 forDestinationImageSize:(CGSize)arg2 withOriginalImageSize:(CGSize)arg3 effectFilterCount:(unsigned long long*)arg4 ;
-(id)metadataProperties;
-(int)adjustmentType;
-(void)setAdjustmentType:(int)arg1 ;
@end
