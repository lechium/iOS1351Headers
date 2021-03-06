/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:03 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CRKASMRoster;
@class NSArray;

@interface CRKASMWorldBuildResultObject : NSObject {

	id<CRKASMRoster> _roster;
	NSArray* _manageableLocations;

}

@property (nonatomic,readonly) id<CRKASMRoster> roster;                         //@synthesize roster=_roster - In the implementation block
@property (nonatomic,copy,readonly) NSArray * manageableLocations;              //@synthesize manageableLocations=_manageableLocations - In the implementation block
-(id)init;
-(id)initWithRoster:(id)arg1 manageableLocations:(id)arg2 ;
-(id<CRKASMRoster>)roster;
-(NSArray *)manageableLocations;
@end

