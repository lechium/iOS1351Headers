/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:51 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UICollectionViewLayoutAttributes.h>

@interface PUSectionedGridLayoutAttributes : UICollectionViewLayoutAttributes {

	BOOL _floating;
	BOOL _extendsTopContent;
	BOOL _exists;
	double _interactiveTransitionProgress;

}

@property (assign,nonatomic) BOOL floating;                                     //@synthesize floating=_floating - In the implementation block
@property (assign,nonatomic) double interactiveTransitionProgress;              //@synthesize interactiveTransitionProgress=_interactiveTransitionProgress - In the implementation block
@property (assign,nonatomic) BOOL extendsTopContent;                            //@synthesize extendsTopContent=_extendsTopContent - In the implementation block
@property (assign,nonatomic) BOOL exists;                                       //@synthesize exists=_exists - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)floating;
-(void)setFloating:(BOOL)arg1 ;
-(BOOL)exists;
-(BOOL)extendsTopContent;
-(double)interactiveTransitionProgress;
-(void)setExtendsTopContent:(BOOL)arg1 ;
-(void)setExists:(BOOL)arg1 ;
-(void)setInteractiveTransitionProgress:(double)arg1 ;
@end
