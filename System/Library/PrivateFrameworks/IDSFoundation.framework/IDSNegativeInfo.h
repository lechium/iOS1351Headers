/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:41 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface IDSNegativeInfo : NSObject <NSCopying> {

	double _time;
	long long _count;

}

@property (nonatomic,readonly) double time;                  //@synthesize time=_time - In the implementation block
@property (nonatomic,readonly) long long count;              //@synthesize count=_count - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)count;
-(double)time;
-(id)initWithTime:(double)arg1 count:(long long)arg2 ;
@end

