/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:20 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FMF/FMF-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class FMFHandle, NSSet, NSDate, NSString;

@interface FMFFriendshipRequest : NSObject <NSCopying, NSSecureCoding> {

	long long _requestType;
	FMFHandle* _fromHandle;
	NSSet* _toHandles;
	NSDate* _endDate;
	NSString* _groupId;
	NSString* _requestId;

}

@property (nonatomic,retain) NSString * requestId;                //@synthesize requestId=_requestId - In the implementation block
@property (assign,nonatomic) long long requestType;               //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,retain) FMFHandle * fromHandle;              //@synthesize fromHandle=_fromHandle - In the implementation block
@property (nonatomic,retain) NSSet * toHandles;                   //@synthesize toHandles=_toHandles - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                    //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSString * groupId;                  //@synthesize groupId=_groupId - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)friendshipRequestToHandles:(id)arg1 fromHandle:(id)arg2 withType:(long long)arg3 groupId:(id)arg4 withEndDate:(id)arg5 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)endDate;
-(void)setEndDate:(NSDate *)arg1 ;
-(long long)requestType;
-(NSString *)requestId;
-(NSString *)groupId;
-(void)setGroupId:(NSString *)arg1 ;
-(void)setRequestType:(long long)arg1 ;
-(void)setRequestId:(NSString *)arg1 ;
-(FMFHandle *)fromHandle;
-(void)setFromHandle:(FMFHandle *)arg1 ;
-(void)setToHandles:(NSSet *)arg1 ;
-(NSSet *)toHandles;
-(id)initWithFromHandle:(id)arg1 toHandle:(id)arg2 ofType:(long long)arg3 groupId:(id)arg4 endDate:(id)arg5 requestId:(id)arg6 ;
@end

