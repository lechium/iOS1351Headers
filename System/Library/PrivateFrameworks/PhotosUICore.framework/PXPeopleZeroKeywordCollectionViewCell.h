/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXSearchZeroKeywordCollectionViewCell.h>

@class UIView;

@interface PXPeopleZeroKeywordCollectionViewCell : PXSearchZeroKeywordCollectionViewCell {

	UIView* _peopleContentView;

}

@property (nonatomic,retain) UIView * peopleContentView;              //@synthesize peopleContentView=_peopleContentView - In the implementation block
+(id)reuseIdentifier;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(void)setPeople:(id)arg1 withThumbnailSize:(CGSize)arg2 ;
-(UIView *)peopleContentView;
-(void)setPeopleContentView:(UIView *)arg1 ;
@end
