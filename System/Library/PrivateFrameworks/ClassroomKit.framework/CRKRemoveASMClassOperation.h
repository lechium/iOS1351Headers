/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:03 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Catalyst/CATOperation.h>

@protocol CRKClassKitRosterRequirements;
@class NSString;

@interface CRKRemoveASMClassOperation : CATOperation {

	NSString* _objectID;
	id<CRKClassKitRosterRequirements> _requirements;

}

@property (nonatomic,copy,readonly) NSString * objectID;                                    //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,readonly) id<CRKClassKitRosterRequirements> requirements;              //@synthesize requirements=_requirements - In the implementation block
-(void)main;
-(BOOL)isAsynchronous;
-(NSString *)objectID;
-(id<CRKClassKitRosterRequirements>)requirements;
-(void)removeClass:(id)arg1 ;
-(id)initWithObjectID:(id)arg1 requirements:(id)arg2 ;
-(void)fetchClasses;
-(void)didFetchClasses:(id)arg1 error:(id)arg2 ;
-(id)classWithObjectID:(id)arg1 inClasses:(id)arg2 ;
@end
