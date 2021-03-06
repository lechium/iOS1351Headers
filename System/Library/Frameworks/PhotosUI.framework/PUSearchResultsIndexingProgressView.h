/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:51 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIActivityIndicatorView;

@interface PUSearchResultsIndexingProgressView : UIView {

	UILabel* _indexingLabel;
	UIActivityIndicatorView* _activityIndicator;

}

@property (nonatomic,retain) UILabel * indexingLabel;                                  //@synthesize indexingLabel=_indexingLabel - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
-(id)init;
-(CGSize)intrinsicContentSize;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)contentSizeCategoryChanged;
-(UILabel *)indexingLabel;
-(void)setIndexingLabel:(UILabel *)arg1 ;
@end

