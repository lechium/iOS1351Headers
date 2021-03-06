/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:00 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class BiometricKitEnrollProgressCoordinates;

@interface BiometricKitEnrollProgressMergedComponent : NSObject {

	long long _componentID;
	BiometricKitEnrollProgressCoordinates* _transformationCoordinates;

}

@property (assign,nonatomic) long long componentID;                                                          //@synthesize componentID=_componentID - In the implementation block
@property (nonatomic,retain) BiometricKitEnrollProgressCoordinates * transformationCoordinates;              //@synthesize transformationCoordinates=_transformationCoordinates - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setTransformationCoordinates:(BiometricKitEnrollProgressCoordinates *)arg1 ;
-(long long)componentID;
-(void)setComponentID:(long long)arg1 ;
-(BiometricKitEnrollProgressCoordinates *)transformationCoordinates;
@end

