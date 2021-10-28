/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:27 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class EKRequestAvailabilityOperation, NSArray;

@interface EKUIConferenceRoomInfo : NSObject {

	EKRequestAvailabilityOperation* _availabilityRequest;
	NSArray* _availabilitySpans;
	long long _availabilityType;

}

@property (retain) EKRequestAvailabilityOperation * availabilityRequest;              //@synthesize availabilityRequest=_availabilityRequest - In the implementation block
@property (retain) NSArray * availabilitySpans;                                       //@synthesize availabilitySpans=_availabilitySpans - In the implementation block
@property (assign) long long availabilityType;                                        //@synthesize availabilityType=_availabilityType - In the implementation block
-(id)init;
-(void)setAvailabilityType:(long long)arg1 ;
-(EKRequestAvailabilityOperation *)availabilityRequest;
-(void)setAvailabilityRequest:(EKRequestAvailabilityOperation *)arg1 ;
-(NSArray *)availabilitySpans;
-(void)setAvailabilitySpans:(NSArray *)arg1 ;
-(long long)availabilityType;
@end
