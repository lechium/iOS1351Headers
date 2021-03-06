/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:44 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBSceneLayoutReferenceOrientedView.h>

@class NSArray, NSString;

@interface SBSceneLayoutAnimationWrapperView : UIView <SBSceneLayoutReferenceOrientedView> {

	long long _layoutOrientation;
	long long _referenceOrientation;

}

@property (assign,nonatomic) long long referenceOrientation;               //@synthesize referenceOrientation=_referenceOrientation - In the implementation block
@property (assign,nonatomic) long long layoutOrientation;                  //@synthesize layoutOrientation=_layoutOrientation - In the implementation block
@property (nonatomic,readonly) NSArray * elementWrapperViews; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)invalidate;
-(long long)layoutOrientation;
-(void)setLayoutOrientation:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)crossfadeWithCompletion:(/*^block*/id)arg1 ;
-(void)setReferenceOrientation:(long long)arg1 ;
-(long long)referenceOrientation;
-(NSArray *)elementWrapperViews;
-(id)elementWrapperViewForLayoutRole:(long long)arg1 ;
@end

