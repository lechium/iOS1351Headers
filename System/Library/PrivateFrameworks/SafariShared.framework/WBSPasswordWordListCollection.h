/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:53 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface WBSPasswordWordListCollection : NSObject {

	NSMutableDictionary* _wordListsByIdentifiers;

}
+(id)commonPasswordWordListCollection;
+(id)commonPasscodeWordListCollection;
-(id)init;
-(void)enumerateEntriesForString:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)entriesForString:(id)arg1 ;
-(void)addWordList:(id)arg1 ;
@end

