/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class BRMangledID;

@interface BRCSyncOperationThrottle : NSObject <NSSecureCoding> {

	BOOL _isSyncDown;
	int _lastErrorKind;
	double _delay;
	double _nextTry;
	BRMangledID* _mangledID;

}

@property (nonatomic,readonly) double delay;                       //@synthesize delay=_delay - In the implementation block
@property (nonatomic,readonly) double nextTry;                     //@synthesize nextTry=_nextTry - In the implementation block
@property (nonatomic,readonly) int lastErrorKind;                  //@synthesize lastErrorKind=_lastErrorKind - In the implementation block
@property (nonatomic,retain) BRMangledID * mangledID;              //@synthesize mangledID=_mangledID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)clear;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)delay;
-(BRMangledID *)mangledID;
-(id)initWithMangledID:(id)arg1 isSyncDown:(BOOL)arg2 ;
-(double)nextTry;
-(void)updateAfterSchedulingTask;
-(void)updateForError:(id)arg1 ;
-(void)updateAfterSchedulingTaskWithMinimumDelay:(double)arg1 ;
-(BOOL)updateForClearingOutOfQuota;
-(void)setMangledID:(BRMangledID *)arg1 ;
-(int)lastErrorKind;
@end

