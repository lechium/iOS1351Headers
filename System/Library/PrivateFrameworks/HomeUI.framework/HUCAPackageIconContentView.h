/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUIconContentView.h>
#import <libobjc.A.dylib/CAStateControllerDelegate.h>

@class CAStateController, CALayer, NSMutableArray, NSString;

@interface HUCAPackageIconContentView : HUIconContentView <CAStateControllerDelegate> {

	CAStateController* _stateController;
	CALayer* _rootLayer;
	NSMutableArray* _packageLayers;
	NSString* _stateName;
	CGSize _assetSize;

}

@property (nonatomic,retain) CAStateController * stateController;              //@synthesize stateController=_stateController - In the implementation block
@property (nonatomic,retain) CALayer * rootLayer;                              //@synthesize rootLayer=_rootLayer - In the implementation block
@property (nonatomic,retain) NSMutableArray * packageLayers;                   //@synthesize packageLayers=_packageLayers - In the implementation block
@property (assign,nonatomic) CGSize assetSize;                                 //@synthesize assetSize=_assetSize - In the implementation block
@property (nonatomic,retain) NSString * stateName;                             //@synthesize stateName=_stateName - In the implementation block
-(void)setState:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(CALayer *)rootLayer;
-(void)setRootLayer:(CALayer *)arg1 ;
-(void)stateController:(id)arg1 transitionDidStop:(id)arg2 completed:(BOOL)arg3 ;
-(void)stateController:(id)arg1 transitionDidStart:(id)arg2 speed:(float)arg3 ;
-(void)stateController:(id)arg1 didSetStateOfLayer:(id)arg2 ;
-(void)setState:(id)arg1 animated:(BOOL)arg2 ;
-(CAStateController *)stateController;
-(void)setStateController:(CAStateController *)arg1 ;
-(void)setStateName:(NSString *)arg1 ;
-(NSString *)stateName;
-(void)setAssetSize:(CGSize)arg1 ;
-(CGSize)assetSize;
-(void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)setPackageLayers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)packageLayers;
-(void)_updatePackage;
-(void)_updateStateAnimated:(BOOL)arg1 ;
-(void)_updateForRTL:(BOOL)arg1 ;
-(void)_applyModifiers;
@end

