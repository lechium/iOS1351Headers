/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:47 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SBWorkspaceEntity.h>

@interface SBPreviousWorkspaceEntity : SBWorkspaceEntity {

	long long _previousLayoutRole;

}

@property (nonatomic,readonly) long long previousLayoutRole;              //@synthesize previousLayoutRole=_previousLayoutRole - In the implementation block
+(id)entityWithPreviousLayoutRole:(long long)arg1 ;
-(BOOL)isPreviousWorkspaceEntity;
-(long long)previousLayoutRole;
-(id)initWithIdentifier:(id)arg1 displayChangeSettings:(id)arg2 ;
-(id)initWithPreviousLayoutRole:(long long)arg1 ;
@end
