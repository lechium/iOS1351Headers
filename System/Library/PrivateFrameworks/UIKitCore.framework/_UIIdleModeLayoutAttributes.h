/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:05 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@interface _UIIdleModeLayoutAttributes : NSObject {

	BOOL _wantsDimmingOverlay;
	double _alphaOffset;
	CGPoint _centerOffset;
	CGAffineTransform _transform;

}

@property (assign,nonatomic) CGPoint centerOffset;                     //@synthesize centerOffset=_centerOffset - In the implementation block
@property (assign,nonatomic) CGAffineTransform transform;              //@synthesize transform=_transform - In the implementation block
@property (assign,nonatomic) double alphaOffset;                       //@synthesize alphaOffset=_alphaOffset - In the implementation block
@property (assign,nonatomic) BOOL wantsDimmingOverlay;                 //@synthesize wantsDimmingOverlay=_wantsDimmingOverlay - In the implementation block
-(id)init;
-(CGAffineTransform)transform;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(double)alphaOffset;
-(CGPoint)centerOffset;
-(void)setAlphaOffset:(double)arg1 ;
-(void)setCenterOffset:(CGPoint)arg1 ;
-(BOOL)wantsDimmingOverlay;
-(void)setWantsDimmingOverlay:(BOOL)arg1 ;
@end

