/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:56 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class EKEventStore;

@interface EKEventStoreWeakWrapper : NSObject {

	void* _unsafeRawPointer;
	EKEventStore* _weakEventStore;

}

@property (nonatomic,readonly) EKEventStore * weakEventStore; 
@property (nonatomic,readonly) void* unsafeRawPointer; 
-(id)initWithEventStore:(id)arg1 ;
-(EKEventStore *)weakEventStore;
-(void*)unsafeRawPointer;
@end

