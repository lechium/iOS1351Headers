/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/VNRequestRevisionProviding.h>

@interface VNFaceLandmarkRegion : NSObject <NSCopying, NSSecureCoding, VNRequestRevisionProviding> {

	CGRect _faceBoundingBox;
	unsigned long long _pointCount;
	unsigned long long _requestRevision;

}

@property (assign) CGRect faceBoundingBox;                                      //@synthesize faceBoundingBox=_faceBoundingBox - In the implementation block
@property (assign) unsigned long long pointCount;                               //@synthesize pointCount=_pointCount - In the implementation block
@property (nonatomic,readonly) unsigned long long requestRevision;              //@synthesize requestRevision=_requestRevision - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)requestRevision;
-(unsigned long long)pointCount;
-(id)initWithRequestRevision:(unsigned long long)arg1 faceBoundingBox:(CGRect)arg2 ;
-(CGRect)faceBoundingBox;
-(void)setFaceBoundingBox:(CGRect)arg1 ;
-(void)setPointCount:(unsigned long long)arg1 ;
@end

