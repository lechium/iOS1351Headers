/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:05 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSDate;


@protocol IMChatTranscriptStatusItem <IMChatTranscriptItem>
@property (nonatomic,readonly) long long statusType; 
@property (nonatomic,readonly) long long expireStatusType; 
@property (nonatomic,readonly) NSDate * dateOfStatus; 
@required
-(long long)statusType;
-(long long)expireStatusType;
-(NSDate *)dateOfStatus;

@end

