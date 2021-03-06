/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:51 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIImageView.h>

@class PHAssetCollection, CNMonogrammer, UIGraphicsImageRenderer, UIImage, CAShapeLayer;

@interface PUSharedAlbumAvatarView : UIImageView {

	BOOL _isRTL;
	BOOL _enabled;
	PHAssetCollection* _sharedAlbumCollection;
	CNMonogrammer* _monogrammer;
	UIGraphicsImageRenderer* _imageRenderer;
	UIImage* _firstAvatar;
	UIImage* _secondAvatar;
	UIImage* _thirdAvatar;
	CAShapeLayer* _overlayLayer;

}

@property (nonatomic,retain) CNMonogrammer * monogrammer;                            //@synthesize monogrammer=_monogrammer - In the implementation block
@property (nonatomic,retain) UIGraphicsImageRenderer * imageRenderer;                //@synthesize imageRenderer=_imageRenderer - In the implementation block
@property (nonatomic,retain) UIImage * firstAvatar;                                  //@synthesize firstAvatar=_firstAvatar - In the implementation block
@property (nonatomic,retain) UIImage * secondAvatar;                                 //@synthesize secondAvatar=_secondAvatar - In the implementation block
@property (nonatomic,retain) UIImage * thirdAvatar;                                  //@synthesize thirdAvatar=_thirdAvatar - In the implementation block
@property (nonatomic,retain) CAShapeLayer * overlayLayer;                            //@synthesize overlayLayer=_overlayLayer - In the implementation block
@property (readonly) NSObject*<OS_os_log> log; 
@property (nonatomic,retain) PHAssetCollection * sharedAlbumCollection;              //@synthesize sharedAlbumCollection=_sharedAlbumCollection - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                          //@synthesize enabled=_enabled - In the implementation block
+(id)sharedSerialQueue;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)prepareForReuse;
-(NSObject*<OS_os_log>)log;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIGraphicsImageRenderer *)imageRenderer;
-(void)setImageRenderer:(UIGraphicsImageRenderer *)arg1 ;
-(CNMonogrammer *)monogrammer;
-(void)setMonogrammer:(CNMonogrammer *)arg1 ;
-(void)_setImage:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(void)embedInView:(id)arg1 ;
-(void)setSharedAlbumCollection:(id)arg1 forceLayoutSubscriberAvatars:(BOOL)arg2 ;
-(void)setSharedAlbumCollection:(PHAssetCollection *)arg1 ;
-(CGSize)_sizeForNumberOfAvatars:(unsigned long long)arg1 ;
-(void)_updateSubscriberAvatars;
-(void)_updateSubscriberAvatarsWithAlbumCollection:(id)arg1 ;
-(void)_resetImages;
-(void)_resetViewContents;
-(void)_resetViewContentsIfNeededForAlbumCollection:(id)arg1 ;
-(void)_setContentsImage:(id)arg1 withShadowPath:(CGPathRef)arg2 forAlbumCollection:(id)arg3 ;
-(void)_requestPersonPhoto:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)setPersonPhoto:(id)arg1 atIndex:(long long)arg2 albumCollection:(id)arg3 ;
-(void)_renderAvatarsForAlbumCollection:(id)arg1 ;
-(void)accessibilityInvertColorsStatusDidChange:(id)arg1 ;
-(PHAssetCollection *)sharedAlbumCollection;
-(UIImage *)firstAvatar;
-(void)setFirstAvatar:(UIImage *)arg1 ;
-(UIImage *)secondAvatar;
-(void)setSecondAvatar:(UIImage *)arg1 ;
-(UIImage *)thirdAvatar;
-(void)setThirdAvatar:(UIImage *)arg1 ;
-(CAShapeLayer *)overlayLayer;
-(void)setOverlayLayer:(CAShapeLayer *)arg1 ;
@end

