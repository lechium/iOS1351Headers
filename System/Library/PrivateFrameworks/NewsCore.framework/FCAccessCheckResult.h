/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:36 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FCAccessCheckResult : NSObject <NSCopying> {

	BOOL _canAccess;
	unsigned long long _blockedReason;

}

@property (nonatomic,readonly) BOOL canAccess;                                //@synthesize canAccess=_canAccess - In the implementation block
@property (nonatomic,readonly) unsigned long long blockedReason;              //@synthesize blockedReason=_blockedReason - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCanAccess:(BOOL)arg1 blockedReason:(unsigned long long)arg2 ;
-(BOOL)canAccess;
-(unsigned long long)blockedReason;
@end
