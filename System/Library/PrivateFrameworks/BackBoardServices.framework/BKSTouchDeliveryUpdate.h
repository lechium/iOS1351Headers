/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:43 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface BKSTouchDeliveryUpdate : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isDetached;
	unsigned _touchIdentifier;
	unsigned _contextID;
	int _pid;
	long long _type;

}

@property (assign,nonatomic) long long type;                        //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned touchIdentifier;              //@synthesize touchIdentifier=_touchIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isDetached;                       //@synthesize isDetached=_isDetached - In the implementation block
@property (assign,nonatomic) unsigned contextID;                    //@synthesize contextID=_contextID - In the implementation block
@property (assign,nonatomic) int pid;                               //@synthesize pid=_pid - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)contextID;
-(void)setContextID:(unsigned)arg1 ;
-(void)setPid:(int)arg1 ;
-(int)pid;
-(unsigned)touchIdentifier;
-(void)setTouchIdentifier:(unsigned)arg1 ;
-(BOOL)isDetached;
-(void)setIsDetached:(BOOL)arg1 ;
@end

