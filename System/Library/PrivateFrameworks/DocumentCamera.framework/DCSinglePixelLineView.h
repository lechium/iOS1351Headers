/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:14 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@interface DCSinglePixelLineView : UIView {

	BOOL _hasSetUpSizeConstraint;

}

@property (assign,nonatomic) BOOL hasSetUpSizeConstraint;              //@synthesize hasSetUpSizeConstraint=_hasSetUpSizeConstraint - In the implementation block
-(void)updateConstraints;
-(void)setUpHeightConstraintIfNecessary;
-(BOOL)hasSetUpSizeConstraint;
-(id)findSizeLayoutConstraintIfExists;
-(id)addSizeConstraint;
-(void)setHasSetUpSizeConstraint:(BOOL)arg1 ;
@end

