/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray;

@interface SBGradientView : UIView {

	NSArray* _colors;

}

@property (nonatomic,copy) NSArray * colors;                 //@synthesize colors=_colors - In the implementation block
@property (nonatomic,copy) NSArray * locations; 
@property (assign) CGPoint startPoint; 
@property (assign) CGPoint endPoint; 
+(Class)layerClass;
-(id)color;
-(void)setColors:(NSArray *)arg1 ;
-(void)setStartPoint:(CGPoint)arg1 ;
-(void)setEndPoint:(CGPoint)arg1 ;
-(CGPoint)startPoint;
-(void)setLocations:(NSArray *)arg1 ;
-(NSArray *)colors;
-(NSArray *)locations;
-(CGPoint)endPoint;
@end

