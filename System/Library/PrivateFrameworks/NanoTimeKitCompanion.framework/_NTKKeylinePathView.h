/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKColoringView.h>
#import <libobjc.A.dylib/NTKKeylineView.h>

@class NTKKeylineTouchable, UIBezierPath, NSString, UIColor;

@interface _NTKKeylinePathView : NTKColoringView <NTKKeylineView> {

	UIBezierPath* _path;
	UIBezierPath* _secondPath;
	NTKKeylineTouchable* touchable;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIColor * color; 
@property (assign,nonatomic) BOOL usesLegibility; 
@property (nonatomic,retain) UIColor * overrideColor; 
@property (nonatomic,readonly) UIColor * contentColor; 
@property (nonatomic,retain) NTKKeylineTouchable * touchable; 
-(id)initWithPath:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setTouchable:(NTKKeylineTouchable *)arg1 ;
-(id)initWithPath:(id)arg1 secondPath:(id)arg2 ;
-(NTKKeylineTouchable *)touchable;
@end

