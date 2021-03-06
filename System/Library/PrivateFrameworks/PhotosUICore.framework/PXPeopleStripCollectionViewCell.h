/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:16 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NSArray, PXRoundedCornerOverlayView;

@interface PXPeopleStripCollectionViewCell : UICollectionViewCell {

	NSArray* _people;
	NSArray* _groupAvatarViews;
	PXRoundedCornerOverlayView* _roundCornerOverlay;

}

@property (nonatomic,retain) NSArray * groupAvatarViews;                                   //@synthesize groupAvatarViews=_groupAvatarViews - In the implementation block
@property (nonatomic,retain) PXRoundedCornerOverlayView * roundCornerOverlay;              //@synthesize roundCornerOverlay=_roundCornerOverlay - In the implementation block
@property (nonatomic,retain) NSArray * people;                                             //@synthesize people=_people - In the implementation block
-(void)prepareForReuse;
-(NSArray *)people;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setPeople:(NSArray *)arg1 ;
-(PXRoundedCornerOverlayView *)roundCornerOverlay;
-(void)setRoundCornerOverlay:(PXRoundedCornerOverlayView *)arg1 ;
-(void)setGroupAvatarViews:(NSArray *)arg1 ;
-(void)_layoutAvatarViewsInFrame:(CGRect)arg1 ;
-(NSArray *)groupAvatarViews;
@end

