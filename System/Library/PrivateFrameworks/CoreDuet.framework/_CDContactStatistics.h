/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:22 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface _CDContactStatistics : NSObject <NSSecureCoding> {

	unsigned long long _outgoingRecipientCount;
	unsigned long long _incomingSenderCount;
	unsigned long long _incomingRecipientCount;
	NSDate* _lastOutgoingRecipientDate;
	NSDate* _lastIncomingSenderDate;
	NSDate* _lastIncomingRecipientDate;
	NSDate* _firstOutgoingRecipientDate;
	NSDate* _firstIncomingSenderDate;
	NSDate* _firstIncomingRecipientDate;

}

@property (assign) unsigned long long outgoingRecipientCount;              //@synthesize outgoingRecipientCount=_outgoingRecipientCount - In the implementation block
@property (assign) unsigned long long incomingSenderCount;                 //@synthesize incomingSenderCount=_incomingSenderCount - In the implementation block
@property (assign) unsigned long long incomingRecipientCount;              //@synthesize incomingRecipientCount=_incomingRecipientCount - In the implementation block
@property (retain) NSDate * lastOutgoingRecipientDate;                     //@synthesize lastOutgoingRecipientDate=_lastOutgoingRecipientDate - In the implementation block
@property (retain) NSDate * lastIncomingSenderDate;                        //@synthesize lastIncomingSenderDate=_lastIncomingSenderDate - In the implementation block
@property (retain) NSDate * lastIncomingRecipientDate;                     //@synthesize lastIncomingRecipientDate=_lastIncomingRecipientDate - In the implementation block
@property (retain) NSDate * firstOutgoingRecipientDate;                    //@synthesize firstOutgoingRecipientDate=_firstOutgoingRecipientDate - In the implementation block
@property (retain) NSDate * firstIncomingSenderDate;                       //@synthesize firstIncomingSenderDate=_firstIncomingSenderDate - In the implementation block
@property (retain) NSDate * firstIncomingRecipientDate;                    //@synthesize firstIncomingRecipientDate=_firstIncomingRecipientDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)updateWithStatistics:(id)arg1 ;
-(unsigned long long)interactionCount;
-(double)interactionTimeInterval;
-(id)firstInteractionDate;
-(id)lastInteractionDate;
-(unsigned long long)outgoingRecipientCount;
-(double)outgoingRecipientTimeInterval;
-(NSDate *)firstOutgoingRecipientDate;
-(NSDate *)lastOutgoingRecipientDate;
-(unsigned long long)incomingSenderCount;
-(double)incomingSenderTimeInterval;
-(NSDate *)firstIncomingSenderDate;
-(NSDate *)lastIncomingSenderDate;
-(unsigned long long)incomingRecipientCount;
-(double)incomingRecipientTimeInterval;
-(NSDate *)firstIncomingRecipientDate;
-(NSDate *)lastIncomingRecipientDate;
-(void)setOutgoingRecipientCount:(unsigned long long)arg1 ;
-(void)setIncomingSenderCount:(unsigned long long)arg1 ;
-(void)setIncomingRecipientCount:(unsigned long long)arg1 ;
-(id)firstDate:(id)arg1 updatedWith:(id)arg2 ;
-(void)setFirstOutgoingRecipientDate:(NSDate *)arg1 ;
-(void)setFirstIncomingSenderDate:(NSDate *)arg1 ;
-(void)setFirstIncomingRecipientDate:(NSDate *)arg1 ;
-(id)lastDate:(id)arg1 updatedWith:(id)arg2 ;
-(void)setLastOutgoingRecipientDate:(NSDate *)arg1 ;
-(void)setLastIncomingSenderDate:(NSDate *)arg1 ;
-(void)setLastIncomingRecipientDate:(NSDate *)arg1 ;
@end
