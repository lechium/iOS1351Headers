/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:24 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@class UIImageView, UIActivityIndicatorView, NSLayoutConstraint;

@interface HKDataMetadataWorkoutRouteCell : UITableViewCell {

	UIImageView* _routeImageView;
	UIActivityIndicatorView* _activityIndicator;
	NSLayoutConstraint* _heightConstraint;

}

@property (nonatomic,retain) UIImageView * routeImageView;                             //@synthesize routeImageView=_routeImageView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heightConstraint;                    //@synthesize heightConstraint=_heightConstraint - In the implementation block
-(id)init;
-(NSLayoutConstraint *)heightConstraint;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)setupConstraints;
-(UIImageView *)routeImageView;
-(void)setRouteImage:(id)arg1 ;
-(void)setRouteImageView:(UIImageView *)arg1 ;
@end
