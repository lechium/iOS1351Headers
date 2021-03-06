/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:57 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVCollectionView.h>

@class _TVCollectionViewFlowLayout;

@interface _TVGridView : _TVCollectionView {

	BOOL _delegateRespondsToIndexPathForPreferredFocusedView;
	_TVCollectionViewFlowLayout* _gridFlowLayout;

}

@property (nonatomic,retain) _TVCollectionViewFlowLayout * gridFlowLayout;              //@synthesize gridFlowLayout=_gridFlowLayout - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(CGSize)tv_sizeThatFits:(CGSize)arg1 withContentInset:(UIEdgeInsets)arg2 ;
-(_TVCollectionViewFlowLayout *)gridFlowLayout;
-(void)setGridFlowLayout:(_TVCollectionViewFlowLayout *)arg1 ;
@end

