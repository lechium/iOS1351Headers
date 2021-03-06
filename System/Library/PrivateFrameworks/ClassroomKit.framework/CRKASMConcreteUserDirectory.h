/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:03 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CRKASMUserDirectory.h>

@protocol CRKClassKitRosterRequirements;
@class NSString;

@interface CRKASMConcreteUserDirectory : NSObject <CRKASMUserDirectory> {

	id<CRKClassKitRosterRequirements> _requirements;

}

@property (nonatomic,readonly) id<CRKClassKitRosterRequirements> requirements;              //@synthesize requirements=_requirements - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithRequirements:(id)arg1 ;
-(id<CRKClassKitRosterRequirements>)requirements;
-(id)iteratorForSearchString:(id)arg1 sortingGivenNameFirst:(BOOL)arg2 pageSize:(long long)arg3 ;
@end

