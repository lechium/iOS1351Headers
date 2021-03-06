/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:56 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, EKEventStore;


@protocol EKJunkInvitationProtocol_Private <NSObject>
@property (nonatomic,readonly) NSString * sendersEmail; 
@property (nonatomic,readonly) NSString * sendersPhoneNumber; 
@property (nonatomic,readonly) BOOL supportsJunkReporting; 
@property (nonatomic,readonly) EKEventStore * eventStore; 
@required
-(EKEventStore *)eventStore;
-(BOOL)couldBeJunk;
-(BOOL)supportsJunkReporting;
-(NSString *)sendersEmail;
-(NSString *)sendersPhoneNumber;

@end

