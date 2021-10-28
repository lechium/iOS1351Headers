/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:47 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBGestureSwitcherModifierEvent.h>

@class NSString;

@interface SBDragAndDropGestureSwitcherModifierEvent : SBGestureSwitcherModifierEvent {

	long long _dropAction;
	NSString* _draggedSceneIdentifier;
	double _platterScale;
	CGRect _platterViewFrame;

}

@property (assign,nonatomic) long long dropAction;                           //@synthesize dropAction=_dropAction - In the implementation block
@property (nonatomic,retain) NSString * draggedSceneIdentifier;              //@synthesize draggedSceneIdentifier=_draggedSceneIdentifier - In the implementation block
@property (assign,nonatomic) CGRect platterViewFrame;                        //@synthesize platterViewFrame=_platterViewFrame - In the implementation block
@property (assign,nonatomic) double platterScale;                            //@synthesize platterScale=_platterScale - In the implementation block
-(long long)type;
-(CGRect)platterViewFrame;
-(void)setPlatterViewFrame:(CGRect)arg1 ;
-(long long)dropAction;
-(void)setDropAction:(long long)arg1 ;
-(NSString *)draggedSceneIdentifier;
-(void)setDraggedSceneIdentifier:(NSString *)arg1 ;
-(double)platterScale;
-(void)setPlatterScale:(double)arg1 ;
@end
