/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:17 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, ASEventUID, NSDate;

@interface ASMeetingResponseItem : NSObject {

	BOOL _responseRequested;
	int _meetingResponse;
	NSString* _deliveryItemFolderId;
	NSString* _deliveryItemServerId;
	ASEventUID* _eventUID;
	NSDate* _instanceDate;
	NSString* _calEventServerId;
	long long _status;
	NSString* _comment;
	NSDate* _proposedStartTime;
	NSDate* _proposedEndTime;
	id _context;

}

@property (nonatomic,retain) NSString * deliveryItemFolderId;              //@synthesize deliveryItemFolderId=_deliveryItemFolderId - In the implementation block
@property (nonatomic,retain) NSString * deliveryItemServerId;              //@synthesize deliveryItemServerId=_deliveryItemServerId - In the implementation block
@property (assign,nonatomic) int meetingResponse;                          //@synthesize meetingResponse=_meetingResponse - In the implementation block
@property (nonatomic,retain) ASEventUID * eventUID;                        //@synthesize eventUID=_eventUID - In the implementation block
@property (nonatomic,retain) NSDate * instanceDate;                        //@synthesize instanceDate=_instanceDate - In the implementation block
@property (nonatomic,retain) NSString * calEventServerId;                  //@synthesize calEventServerId=_calEventServerId - In the implementation block
@property (assign,nonatomic) long long status;                             //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSString * comment;                           //@synthesize comment=_comment - In the implementation block
@property (nonatomic,retain) NSDate * proposedStartTime;                   //@synthesize proposedStartTime=_proposedStartTime - In the implementation block
@property (nonatomic,retain) NSDate * proposedEndTime;                     //@synthesize proposedEndTime=_proposedEndTime - In the implementation block
@property (assign,nonatomic) BOOL responseRequested;                       //@synthesize responseRequested=_responseRequested - In the implementation block
@property (nonatomic,retain) id context;                                   //@synthesize context=_context - In the implementation block
-(id)description;
-(long long)status;
-(id)context;
-(void)setContext:(id)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(NSString *)comment;
-(void)setComment:(NSString *)arg1 ;
-(ASEventUID *)eventUID;
-(id)initWithDeliveryItemFolderId:(id)arg1 deliveryItemServerId:(id)arg2 instanceDate:(id)arg3 meetingResponse:(int)arg4 eventUID:(id)arg5 responseComment:(id)arg6 responseRequested:(BOOL)arg7 proposedStartTime:(id)arg8 proposedEndTime:(id)arg9 ;
-(NSString *)deliveryItemFolderId;
-(void)setDeliveryItemFolderId:(NSString *)arg1 ;
-(NSString *)deliveryItemServerId;
-(void)setDeliveryItemServerId:(NSString *)arg1 ;
-(int)meetingResponse;
-(void)setMeetingResponse:(int)arg1 ;
-(void)setEventUID:(ASEventUID *)arg1 ;
-(NSDate *)instanceDate;
-(void)setInstanceDate:(NSDate *)arg1 ;
-(NSString *)calEventServerId;
-(void)setCalEventServerId:(NSString *)arg1 ;
-(NSDate *)proposedStartTime;
-(void)setProposedStartTime:(NSDate *)arg1 ;
-(NSDate *)proposedEndTime;
-(void)setProposedEndTime:(NSDate *)arg1 ;
-(BOOL)responseRequested;
-(void)setResponseRequested:(BOOL)arg1 ;
@end

