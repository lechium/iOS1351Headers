/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <UIKit/UICoordinateSpace.h>

@protocol UICoordinateSpace;
@class NSString;

@interface SBSceneLayoutCoordinateSpace : NSObject <BSDescriptionProviding, UICoordinateSpace> {

	id<UICoordinateSpace> _parentCoordinateSpace;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGRect bounds; 
+(id)coordinateSpaceForInterfaceOrientation:(long long)arg1 withReferenceCoordinateSpace:(id)arg2 inOrientation:(long long)arg3 ;
+(id)coordinateSpaceForFrame:(CGRect)arg1 withinCoordinateSpace:(id)arg2 ;
-(NSString *)description;
-(CGRect)bounds;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(CGRect)convertRect:(CGRect)arg1 toCoordinateSpace:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toCoordinateSpace:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromCoordinateSpace:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 fromCoordinateSpace:(id)arg2 ;
-(id)initWithParentCoordinateSpace:(id)arg1 ;
@end
