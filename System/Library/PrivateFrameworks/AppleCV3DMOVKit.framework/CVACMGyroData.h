/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:34 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CVACLMotionTypeVector3;

@interface CVACMGyroData : NSObject <NSSecureCoding> {

	float _temperature;
	CVACLMotionTypeVector3* _rotationRate;
	double _timestamp;
	unsigned long long _syncTimestamp;

}

@property (nonatomic,retain) CVACLMotionTypeVector3 * rotationRate;              //@synthesize rotationRate=_rotationRate - In the implementation block
@property (assign) double timestamp;                                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign) float temperature;                                            //@synthesize temperature=_temperature - In the implementation block
@property (assign) unsigned long long syncTimestamp;                             //@synthesize syncTimestamp=_syncTimestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(float)temperature;
-(void)setTemperature:(float)arg1 ;
-(CVACLMotionTypeVector3 *)rotationRate;
-(void)setRotationRate:(CVACLMotionTypeVector3 *)arg1 ;
-(void)setSyncTimestamp:(unsigned long long)arg1 ;
-(unsigned long long)syncTimestamp;
@end
