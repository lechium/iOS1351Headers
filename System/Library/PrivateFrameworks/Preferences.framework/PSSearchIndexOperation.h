/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:57 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@protocol PSSearchIndexOperationDelegate;
@class PSSearchEntry;

@interface PSSearchIndexOperation : NSOperation {

	PSSearchEntry* _searchEntry;
	id<PSSearchIndexOperationDelegate> _delegate;

}

@property (nonatomic,readonly) PSSearchEntry * searchEntry;                  //@synthesize searchEntry=_searchEntry - In the implementation block
@property (__weak) id<PSSearchIndexOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_bundleForSearchEntry:(id)arg1 thirdPartyApp:(BOOL*)arg2 ;
+(id)_loadThirdPartySearchEntriesForEntry:(id)arg1 bundle:(id)arg2 ;
+(id)_loadSearchEntriesFromPlistForEntry:(id)arg1 bundle:(id)arg2 ;
+(id)topLevelManifestBundlePath;
+(id)possibleBundleRoots;
+(void)setPossibleBundleRoots:(id)arg1 ;
+(void)setTopLevelManifestBundlePath:(id)arg1 ;
-(void)dealloc;
-(id<PSSearchIndexOperationDelegate>)delegate;
-(void)setDelegate:(id<PSSearchIndexOperationDelegate>)arg1 ;
-(void)main;
-(void)_cancel;
-(id)initWithSearchEntry:(id)arg1 delegate:(id)arg2 ;
-(PSSearchEntry *)searchEntry;
-(void)_finishedIndexingWithEntries:(id)arg1 cancelled:(BOOL)arg2 ;
@end

