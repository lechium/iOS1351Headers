/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:41 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSMutableArray, NSMutableDictionary;

@interface OCXRelationships : NSObject {

	NSString* mPath;
	NSMutableArray* mRelationships;
	NSMutableDictionary* mRelationshipMap;
	unsigned long long mNextId;

}
-(BOOL)isEmpty;
-(id)path;
-(id)initWithPath:(id)arg1 ;
-(id)addRelationshipForKey:(id)arg1 type:(id)arg2 target:(id)arg3 external:(BOOL)arg4 ;
-(id)addRelationshipForKey:(id)arg1 type:(id)arg2 target:(id)arg3 ;
-(id)idForKey:(id)arg1 ;
-(id)targetForKey:(id)arg1 ;
-(void)writeRelationshipsToFilename:(id)arg1 stream:(id)arg2 ;
@end

