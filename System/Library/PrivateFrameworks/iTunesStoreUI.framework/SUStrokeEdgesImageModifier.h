/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:51 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUImageModifier.h>

@class UIColor;

@interface SUStrokeEdgesImageModifier : SUImageModifier {

	UIEdgeInsets _edgeInsets;
	BOOL _fitToImage;
	UIColor* _strokeColor;
	BOOL _strokeCurrentPath;

}

@property (assign,nonatomic) UIEdgeInsets edgeInsets;              //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (nonatomic,retain) UIColor * strokeColor;                //@synthesize strokeColor=_strokeColor - In the implementation block
@property (assign,nonatomic) BOOL fitToImage;                      //@synthesize fitToImage=_fitToImage - In the implementation block
@property (assign,nonatomic) BOOL strokeCurrentPath;               //@synthesize strokeCurrentPath=_strokeCurrentPath - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(UIColor *)strokeColor;
-(void)drawAfterImageForContext:(CGContextRef)arg1 imageFrame:(CGRect)arg2 finalSize:(CGSize)arg3 ;
-(BOOL)fitToImage;
-(BOOL)strokeCurrentPath;
-(void)setFitToImage:(BOOL)arg1 ;
-(void)setStrokeCurrentPath:(BOOL)arg1 ;
@end

