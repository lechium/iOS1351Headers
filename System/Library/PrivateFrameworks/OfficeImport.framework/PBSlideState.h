/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface PBSlideState : NSObject {

	NSMutableDictionary* mBuildOrderMap;
	unsigned mCurrentGroupId;

}
-(id)init;
-(void)reset;
-(id)buildOrderMap;
-(void)addBuild:(id)arg1 order:(unsigned)arg2 ;
-(unsigned)generateGroupId;
@end

