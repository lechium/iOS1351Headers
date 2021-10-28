/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@protocol PXDisplayCollection;
@class UIImage, UIButton;

@interface PUImportAddToAlbumsPickerCell : UITableViewCell {

	BOOL _isPerformingUpdate;
	BOOL _showingSelectionMark;
	unsigned long long _type;
	id<PXDisplayCollection> _collection;
	UIImage* _thumbail;
	UIButton* _checkMarkButton;

}

@property (assign,nonatomic,__weak) UIButton * checkMarkButton;                 //@synthesize checkMarkButton=_checkMarkButton - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) id<PXDisplayCollection> collection;              //@synthesize collection=_collection - In the implementation block
@property (nonatomic,readonly) UIImage * thumbail;                              //@synthesize thumbail=_thumbail - In the implementation block
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(id<PXDisplayCollection>)collection;
-(void)prepareForReuse;
-(BOOL)isSelectable;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 ;
-(void)didAddSubview:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setThumbnail:(id)arg1 ;
-(void)performChanges:(/*^block*/id)arg1 ;
-(id)mutableChangeObject;
-(void)setCollection:(id<PXDisplayCollection>)arg1 ;
-(void)_configureCell;
-(UIImage *)thumbail;
-(UIButton *)checkMarkButton;
-(void)setCheckMarkButton:(UIButton *)arg1 ;
@end
