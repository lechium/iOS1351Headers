/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchUI/SearchUI-Structs.h>
#import <SearchFoundation/SFImage.h>

@class UIImage, SFImage;

@interface SearchUIImage : SFImage {

	BOOL _useFastPathShadow;
	BOOL _needsTinting;
	UIImage* _uiImage;
	SFImage* _sfImage;

}

@property (nonatomic,retain) SFImage * sfImage;                   //@synthesize sfImage=_sfImage - In the implementation block
@property (nonatomic,retain) UIImage * uiImage;                   //@synthesize uiImage=_uiImage - In the implementation block
@property (assign,nonatomic) BOOL useFastPathShadow;              //@synthesize useFastPathShadow=_useFastPathShadow - In the implementation block
@property (assign,nonatomic) BOOL needsTinting;                   //@synthesize needsTinting=_needsTinting - In the implementation block
+(id)imageWithSFImage:(id)arg1 ;
+(id)imageWithSFImage:(id)arg1 variantForAppIcon:(unsigned long long)arg2 ;
+(BOOL)isEqualHasSubclassOverrideForImage1:(id)arg1 image2:(id)arg2 ;
+(BOOL)isEqualHasSubclassOverrideForImage:(id)arg1 ;
+(BOOL)image:(id)arg1 isEqualToImage:(id)arg2 ;
+(id)imageForSuggestionCardSectionType:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(CGSize)size;
-(double)scale;
-(id)initWithImage:(id)arg1 ;
-(double)cornerRadius;
-(BOOL)isTemplate;
-(id)imageData;
-(BOOL)shouldCropToCircle;
-(id)loadImage;
-(BOOL)useFastPathShadow;
-(UIImage *)uiImage;
-(void)setUiImage:(UIImage *)arg1 ;
-(void)setUseFastPathShadow:(BOOL)arg1 ;
-(void)setSfImage:(SFImage *)arg1 ;
-(id)initWithSFImage:(id)arg1 ;
-(SFImage *)sfImage;
-(void)loadImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)needsTinting;
-(void)setNeedsTinting:(BOOL)arg1 ;
@end

