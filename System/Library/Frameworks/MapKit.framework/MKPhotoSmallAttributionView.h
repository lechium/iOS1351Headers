/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@class _MKUILabel, UIView;

@interface MKPhotoSmallAttributionView : UIView {

	_MKUILabel* _label;
	UIView* _backgroundView;
	CGSize _labelSize;

}
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(id)initWithMapItem:(id)arg1 ;
-(id)attributionFont;
@end
