/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CFXMediaItemAdjustmentsData : NSObject <NSSecureCoding> {

	long long _cameraMode;
	NSArray* _effectStack;

}

@property (nonatomic,readonly) long long cameraMode;               //@synthesize cameraMode=_cameraMode - In the implementation block
@property (nonatomic,readonly) NSArray * effectStack;              //@synthesize effectStack=_effectStack - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)secureCodingClassWhitelist;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)cameraMode;
-(NSArray *)effectStack;
-(id)initWithCameraMode:(long long)arg1 effectStack:(id)arg2 ;
@end

