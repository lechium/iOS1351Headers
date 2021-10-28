/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:15 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@interface UIViewSpringAnimationDescription : NSObject {

	BOOL _usesDampingRatioAndResponse;
	double _tension;
	double _friction;
	SCD_Struct_UI134 _parameters;

}

@property (assign,nonatomic) BOOL usesDampingRatioAndResponse;              //@synthesize usesDampingRatioAndResponse=_usesDampingRatioAndResponse - In the implementation block
@property (assign,nonatomic) double tension;                                //@synthesize tension=_tension - In the implementation block
@property (assign,nonatomic) double friction;                               //@synthesize friction=_friction - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI134 parameters;                   //@synthesize parameters=_parameters - In the implementation block
+(id)descriptionWithTension:(double)arg1 friction:(double)arg2 ;
+(id)descriptionWithSpringAnimationParameters:(SCD_Struct_UI134)arg1 ;
-(SCD_Struct_UI134)parameters;
-(void)setParameters:(SCD_Struct_UI134)arg1 ;
-(double)friction;
-(void)setFriction:(double)arg1 ;
-(BOOL)usesDampingRatioAndResponse;
-(double)tension;
-(void)setUsesDampingRatioAndResponse:(BOOL)arg1 ;
-(void)setTension:(double)arg1 ;
@end
