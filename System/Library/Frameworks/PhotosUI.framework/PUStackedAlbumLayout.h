/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:51 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@class NSMutableDictionary, UICollectionViewLayoutAttributes, NSArray, PUAlbumListTransitionContext;

@interface PUStackedAlbumLayout : UICollectionViewLayout {

	NSMutableDictionary* _visibleLayoutAttributesByIndexPath;
	NSMutableDictionary* _derivedLayoutAttributesByIndexPath;
	NSMutableDictionary* _zIndexByIndexPath;
	BOOL _isInteractive;
	UICollectionViewLayoutAttributes* _globalHeaderAttributes;
	NSArray* _visibleStackedItemLayoutAttributes;
	UICollectionViewLayoutAttributes* _referenceItemLayoutAttributes;
	double _yAdjust;
	PUAlbumListTransitionContext* _albumListTransitionContext;
	CGPoint _referenceCenter;
	CGSize _contentSizeAdjust;

}

@property (nonatomic,retain) UICollectionViewLayoutAttributes * globalHeaderAttributes;                   //@synthesize globalHeaderAttributes=_globalHeaderAttributes - In the implementation block
@property (nonatomic,copy) NSArray * visibleStackedItemLayoutAttributes;                                  //@synthesize visibleStackedItemLayoutAttributes=_visibleStackedItemLayoutAttributes - In the implementation block
@property (nonatomic,copy) UICollectionViewLayoutAttributes * referenceItemLayoutAttributes;              //@synthesize referenceItemLayoutAttributes=_referenceItemLayoutAttributes - In the implementation block
@property (assign,nonatomic) CGPoint referenceCenter;                                                     //@synthesize referenceCenter=_referenceCenter - In the implementation block
@property (assign,nonatomic) double yAdjust;                                                              //@synthesize yAdjust=_yAdjust - In the implementation block
@property (assign,nonatomic) CGSize contentSizeAdjust;                                                    //@synthesize contentSizeAdjust=_contentSizeAdjust - In the implementation block
@property (nonatomic,retain) PUAlbumListTransitionContext * albumListTransitionContext;                   //@synthesize albumListTransitionContext=_albumListTransitionContext - In the implementation block
@property (assign,setter=setInteractive:,nonatomic) BOOL isInteractive;                                   //@synthesize isInteractive=_isInteractive - In the implementation block
-(BOOL)isInteractive;
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(/*^block*/id)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3 ;
-(void)setInteractive:(BOOL)arg1 ;
-(void)setAlbumListTransitionContext:(PUAlbumListTransitionContext *)arg1 ;
-(PUAlbumListTransitionContext *)albumListTransitionContext;
-(void)setReferenceCenter:(CGPoint)arg1 ;
-(void)setVisibleStackedItemLayoutAttributes:(NSArray *)arg1 ;
-(void)setReferenceItemLayoutAttributes:(UICollectionViewLayoutAttributes *)arg1 ;
-(UICollectionViewLayoutAttributes *)globalHeaderAttributes;
-(long long)zIndexForItemAtIndexPath:(id)arg1 ;
-(id)_newAdjustedLayoutAttributes:(id)arg1 indexPath:(id)arg2 ;
-(void)setGlobalHeaderAttributes:(UICollectionViewLayoutAttributes *)arg1 ;
-(NSArray *)visibleStackedItemLayoutAttributes;
-(UICollectionViewLayoutAttributes *)referenceItemLayoutAttributes;
-(CGPoint)referenceCenter;
-(double)yAdjust;
-(void)setYAdjust:(double)arg1 ;
-(CGSize)contentSizeAdjust;
-(void)setContentSizeAdjust:(CGSize)arg1 ;
@end
