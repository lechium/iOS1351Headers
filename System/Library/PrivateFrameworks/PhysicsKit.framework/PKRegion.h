/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:06 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhysicsKit/PhysicsKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PKRegion : NSObject <NSCopying, NSSecureCoding> {

	int _shape;
	BOOL _isExclusive;
	vec4 _halfExtent;
	shared_ptr<PKCPathHolder>* _path;
	int _regionOp;
	int _shape2;
	vec4 _halfExtent2;
	shared_ptr<PKCPathHolder>* _path2;

}

@property (nonatomic,readonly) CGPathRef path; 
+(BOOL)supportsSecureCoding;
+(id)infiniteRegion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGPathRef)path;
-(id)initWithPath:(CGPathRef)arg1 ;
-(id)initWithSize:(CGSize)arg1 ;
-(BOOL)containsPoint:(CGPoint)arg1 ;
-(id)initWithRadius:(float)arg1 ;
-(id)inverseRegion;
-(id)regionByUnionWithRegion:(id)arg1 ;
-(id)regionByDifferenceFromRegion:(id)arg1 ;
-(id)regionByIntersectionWithRegion:(id)arg1 ;
-(void)containsPoints:(const float*)arg1 locationStride:(long long)arg2 results:(char*)arg3 resultsStride:(long long)arg4 count:(int)arg5 ;
-(BOOL)isEqualToRegion:(id)arg1 ;
-(BOOL)isInfinite;
@end

