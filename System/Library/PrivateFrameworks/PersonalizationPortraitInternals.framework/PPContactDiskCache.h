/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PPContactDiskCache : NSObject {

	long long _lastCreatedAt;

}
+(id)sharedInstance;
-(id)init;
-(id)loadNameRecordCache;
-(BOOL)writeNameRecordCache:(id)arg1 fullLoadFromSource:(BOOL)arg2 ;
-(BOOL)deleteNameRecordCache;
@end

