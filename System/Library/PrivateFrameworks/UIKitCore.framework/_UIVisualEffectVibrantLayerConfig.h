/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:57 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIVisualEffectLayerConfig.h>

@class UIColor, NSDictionary;

@interface _UIVisualEffectVibrantLayerConfig : _UIVisualEffectLayerConfig {

	UIColor* _vibrantColor;
	UIColor* _tintColor;
	NSDictionary* _filterAttributes;

}

@property (nonatomic,readonly) UIColor * vibrantColor;                            //@synthesize vibrantColor=_vibrantColor - In the implementation block
@property (nonatomic,readonly) UIColor * tintColor;                               //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * filterAttributes;              //@synthesize filterAttributes=_filterAttributes - In the implementation block
+(id)layerWithVibrantColor:(id)arg1 tintColor:(id)arg2 filterType:(id)arg3 filterAttributes:(id)arg4 ;
+(id)layerWithVibrantColor:(id)arg1 tintColor:(id)arg2 filterType:(id)arg3 ;
-(id)description;
-(UIColor *)tintColor;
-(void)configureLayerView:(id)arg1 ;
-(void)deconfigureLayerView:(id)arg1 ;
-(NSDictionary *)filterAttributes;
-(UIColor *)vibrantColor;
@end

