/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:12 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXSmartAlbumCondition.h>

@class NSArray, PXLabeledValue;

@interface PXSmartAlbumPhotoCondition : PXSmartAlbumCondition {

	NSArray* _photoTypeValues;

}

@property (nonatomic,readonly) NSArray * photoTypeValues; 
@property (nonatomic,retain) PXLabeledValue * photoTypeValue; 
+(id)defaultSingleQueryForEditingContext:(id)arg1 ;
-(NSArray *)photoTypeValues;
-(PXLabeledValue *)photoTypeValue;
-(void)setPhotoTypeValue:(PXLabeledValue *)arg1 ;
@end

