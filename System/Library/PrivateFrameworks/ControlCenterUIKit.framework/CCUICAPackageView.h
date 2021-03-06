/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:08 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ControlCenterUIKit/ControlCenterUIKit-Structs.h>
#import <UIKitCore/UIView.h>

@class CAStateController, UIView, CALayer, CAPackage, CCUICAPackageDescription;

@interface CCUICAPackageView : UIView {

	CAStateController* _stateController;
	UIView* _packageContentView;
	CALayer* _packageLayer;
	CAPackage* _package;
	CCUICAPackageDescription* _packageDescription;
	double _scale;

}

@property (nonatomic,retain) CAPackage * package;                                        //@synthesize package=_package - In the implementation block
@property (nonatomic,retain) CCUICAPackageDescription * packageDescription;              //@synthesize packageDescription=_packageDescription - In the implementation block
@property (assign,nonatomic) double scale;                                               //@synthesize scale=_scale - In the implementation block
-(double)scale;
-(void)setPackage:(CAPackage *)arg1 ;
-(void)setScale:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_setPackage:(id)arg1 ;
-(CAPackage *)package;
-(void)setStateName:(id)arg1 ;
-(void)setPackageDescription:(CCUICAPackageDescription *)arg1 ;
-(CCUICAPackageDescription *)packageDescription;
@end

