/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:31 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UICollectionViewCell.h>

@class PKDiscoveryShelfView;

@interface PKDiscoveryArticleLayoutCell : UICollectionViewCell {

	PKDiscoveryShelfView* _shelfView;

}

@property (nonatomic,retain) PKDiscoveryShelfView * shelfView;              //@synthesize shelfView=_shelfView - In the implementation block
-(void)prepareForReuse;
-(void)layoutSubviews;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(void)setShelfView:(PKDiscoveryShelfView *)arg1 ;
-(PKDiscoveryShelfView *)shelfView;
@end
