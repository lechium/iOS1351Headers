/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:56 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKit/EKObjectChange.h>
#import <libobjc.A.dylib/EKOwnerIDProviding.h>

@class EKObjectID;

@interface EKContactChange : EKObjectChange <EKOwnerIDProviding> {

	EKObjectID* _ownerID;

}

@property (nonatomic,readonly) EKObjectID * ownerID;              //@synthesize ownerID=_ownerID - In the implementation block
+(int)entityType;
+(void)fetchContactChangesInStore:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(void)fetchContactChangesInSource:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(void)fetchContactChangesInCalendar:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(EKObjectID *)ownerID;
-(id)initWithChangeProperties:(id)arg1 ;
@end
