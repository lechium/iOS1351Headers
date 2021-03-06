/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLKDevice;

@interface NTKLayoutRule : NSObject <NSCopying> {

	BOOL _clipsToReferenceFrame;
	CLKDevice* _device;
	long long _horizontalLayout;
	long long _verticalLayout;
	CGRect _referenceFrame;
	CGAffineTransform _transform;

}

@property (nonatomic,readonly) CLKDevice * device;                     //@synthesize device=_device - In the implementation block
@property (assign,nonatomic) CGRect referenceFrame;                    //@synthesize referenceFrame=_referenceFrame - In the implementation block
@property (assign,nonatomic) long long horizontalLayout;               //@synthesize horizontalLayout=_horizontalLayout - In the implementation block
@property (assign,nonatomic) long long verticalLayout;                 //@synthesize verticalLayout=_verticalLayout - In the implementation block
@property (assign,nonatomic) BOOL clipsToReferenceFrame;               //@synthesize clipsToReferenceFrame=_clipsToReferenceFrame - In the implementation block
@property (assign,nonatomic) CGAffineTransform transform;              //@synthesize transform=_transform - In the implementation block
@property (nonatomic,readonly) CGSize maximumSize; 
+(id)layoutRuleForDevice:(id)arg1 withReferenceFrame:(CGRect)arg2 horizontalLayout:(long long)arg3 verticalLayout:(long long)arg4 ;
+(id)layoutRuleForDevice:(id)arg1 withReferenceFrame:(CGRect)arg2 horizontalLayout:(long long)arg3 verticalLayout:(long long)arg4 clip:(BOOL)arg5 transform:(CGAffineTransform)arg6 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGAffineTransform)transform;
-(CLKDevice *)device;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(CGSize)maximumSize;
-(CGRect)referenceFrame;
-(void)setReferenceFrame:(CGRect)arg1 ;
-(void)setVerticalLayout:(long long)arg1 ;
-(void)validate;
-(void)setHorizontalLayout:(long long)arg1 ;
-(long long)horizontalLayout;
-(long long)verticalLayout;
-(id)initForDevice:(id)arg1 ;
-(CGRect)calculateLayoutFrameForBoundsSize:(CGSize)arg1 ;
-(id)layoutRuleByConvertingToCoordinateSpaceWithFrame:(CGRect)arg1 ;
-(void)setClipsToReferenceFrame:(BOOL)arg1 ;
-(BOOL)clipsToReferenceFrame;
-(double)calculateLayoutFrameWidthForBoundsSize:(CGSize)arg1 ;
-(double)calculateLayoutFrameHeightForBoundsSize:(CGSize)arg1 ;
-(double)calculateLayoutFrameXOriginForBoundsSize:(CGSize)arg1 ;
-(double)calculateLayoutFrameYOriginForBoundsSize:(CGSize)arg1 ;
@end

