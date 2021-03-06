/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:12 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIImageView.h>

@class UIColor;

@interface PXRoundedCornerOverlayView : UIImageView {

	BOOL _isPerformingChanges;
	BOOL _isPerformingUpdates;
	SCD_Struct_PX24 _needsUpdateFlags;
	BOOL _continuousCorners;
	double _cornerRadius;
	unsigned long long _cornersToRound;
	UIColor* _overlayColor;
	double _displayScale;

}

@property (nonatomic,readonly) double cornerRadius;                            //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,readonly) unsigned long long cornersToRound;              //@synthesize cornersToRound=_cornersToRound - In the implementation block
@property (nonatomic,readonly) BOOL continuousCorners;                         //@synthesize continuousCorners=_continuousCorners - In the implementation block
@property (nonatomic,readonly) UIColor * overlayColor;                         //@synthesize overlayColor=_overlayColor - In the implementation block
@property (nonatomic,readonly) double displayScale;                            //@synthesize displayScale=_displayScale - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(double)displayScale;
-(double)cornerRadius;
-(void)_dynamicUserInterfaceTraitDidChange;
-(BOOL)_needsUpdate;
-(void)setContinuousCorners:(BOOL)arg1 ;
-(BOOL)continuousCorners;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)_invalidateImage;
-(void)_setNeedsUpdate;
-(void)_updateImageIfNeeded;
-(UIColor *)overlayColor;
-(void)setDisplayScale:(double)arg1 ;
-(id)mutableChangeObject;
-(void)_updateIfNeeded;
-(void)setCornersToRound:(unsigned long long)arg1 ;
-(void)setOverlayColor:(UIColor *)arg1 ;
-(unsigned long long)cornersToRound;
@end

