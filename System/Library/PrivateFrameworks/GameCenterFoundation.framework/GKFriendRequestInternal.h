/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:20 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterFoundation/GKFamiliarPlayerInternal.h>

@class NSString, NSDate;

@interface GKFriendRequestInternal : GKFamiliarPlayerInternal {

	NSString* _message;
	NSDate* _date;

}

@property (nonatomic,retain) NSString * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSDate * date;                   //@synthesize date=_date - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)secureCodedPropertyKeys;
-(void)dealloc;
-(NSDate *)date;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(int)defaultFamiliarity;
@end

