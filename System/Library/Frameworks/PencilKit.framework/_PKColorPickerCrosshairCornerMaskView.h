/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:58 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@interface _PKColorPickerCrosshairCornerMaskView : UIView {

	BOOL _excludeCorner;
	unsigned long long _cornerPosition;

}

@property (assign,nonatomic) unsigned long long cornerPosition;              //@synthesize cornerPosition=_cornerPosition - In the implementation block
@property (assign,nonatomic) BOOL excludeCorner;                             //@synthesize excludeCorner=_excludeCorner - In the implementation block
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)_shapeLayer;
-(id)maskPath;
-(void)_setPath:(id)arg1 ;
-(void)_setFillColor:(id)arg1 ;
-(unsigned long long)cornerPosition;
-(BOOL)excludeCorner;
-(void)setCornerPosition:(unsigned long long)arg1 ;
-(void)setExcludeCorner:(BOOL)arg1 ;
@end

