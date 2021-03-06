/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:41 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface IDSGroupSessionUnicastParameter : NSObject <NSSecureCoding> {

	NSString* _groupSessionID;
	unsigned long long _participantID;
	unsigned long long _connectionIndex;
	long long _dataMode;

}

@property (nonatomic,readonly) NSString * groupSessionID;                       //@synthesize groupSessionID=_groupSessionID - In the implementation block
@property (nonatomic,readonly) unsigned long long participantID;                //@synthesize participantID=_participantID - In the implementation block
@property (nonatomic,readonly) unsigned long long connectionIndex;              //@synthesize connectionIndex=_connectionIndex - In the implementation block
@property (nonatomic,readonly) long long dataMode;                              //@synthesize dataMode=_dataMode - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)participantID;
-(long long)dataMode;
-(id)initWithGroupSessionID:(id)arg1 participantID:(unsigned long long)arg2 dataMode:(long long)arg3 connectionIndex:(unsigned long long)arg4 ;
-(NSString *)groupSessionID;
-(unsigned long long)connectionIndex;
@end

