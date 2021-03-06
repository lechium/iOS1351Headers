/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <CameraEffectsKit/CFXEffectPickerView.h>
#import <libobjc.A.dylib/JTCollectionViewDelegate.h>

@class UIView, JTCollectionView, JTCollectionViewFlowLayout, NSString;

@interface CFXOverlayEffectPickerView : CFXEffectPickerView <JTCollectionViewDelegate> {

	UIView* _contentView;
	JTCollectionView* _collectionView;
	JTCollectionViewFlowLayout* _collectionViewLayout;

}

@property (assign,nonatomic,__weak) UIView * contentView;                                    //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic,__weak) JTCollectionView * collectionView;                       //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) JTCollectionViewFlowLayout * collectionViewLayout;              //@synthesize collectionViewLayout=_collectionViewLayout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(JTCollectionView *)collectionView;
-(void)setCollectionViewLayout:(JTCollectionViewFlowLayout *)arg1 ;
-(void)setCollectionView:(JTCollectionView *)arg1 ;
-(JTCollectionViewFlowLayout *)collectionViewLayout;
-(void)subviewsDidLoad;
-(id)effectPickerNibName;
-(id)effectPickerCellNibName;
-(id)effectPickerCellReuseIdentifier;
-(void)updateThumbnailColumnSizeForCollectionSize;
-(void)didResizeCollectionViewToSize:(CGSize)arg1 ;
@end

