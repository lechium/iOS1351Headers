/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NSString, PUPhotoEditAdjustmentControl;

@interface PUPhotoEditBaseAdjustmentCell : UICollectionViewCell {

	NSString* _imageName;
	BOOL _enabled;
	BOOL _isUserModifying;
	PUPhotoEditAdjustmentControl* _containerButton;

}

@property (nonatomic,retain) PUPhotoEditAdjustmentControl * containerButton;              //@synthesize containerButton=_containerButton - In the implementation block
@property (assign,nonatomic) double value; 
@property (assign,nonatomic) double defaultValue; 
@property (assign,nonatomic) double identityValue; 
@property (assign,nonatomic) double minValue; 
@property (assign,nonatomic) double maxValue; 
@property (nonatomic,retain) NSString * imageName;                                        //@synthesize imageName=_imageName - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                               //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL isUserModifying;                                        //@synthesize isUserModifying=_isUserModifying - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)value;
-(void)setValue:(double)arg1 ;
-(BOOL)isEnabled;
-(void)prepareForReuse;
-(double)defaultValue;
-(void)setDefaultValue:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 ;
-(void)setImageName:(NSString *)arg1 ;
-(NSString *)imageName;
-(double)maxValue;
-(void)setMaxValue:(double)arg1 ;
-(double)identityValue;
-(double)minValue;
-(void)setMinValue:(double)arg1 ;
-(void)resetToDefault;
-(void)setIsUserModifying:(BOOL)arg1 ;
-(void)setIdentityValue:(double)arg1 ;
-(void)_setupContainerButton;
-(BOOL)isUserModifying;
-(PUPhotoEditAdjustmentControl *)containerButton;
-(void)setContainerButton:(PUPhotoEditAdjustmentControl *)arg1 ;
@end

